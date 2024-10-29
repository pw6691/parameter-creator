/*********************************************************************
*                      
*  Filename:        attribute_access.c 
*
*  Copyright(c) Symbol Technologies Inc., 2005
*  
*  Description:     MSA attribute access functions file.
*
*  Author:          Nina Feinstein
*
*  Creation Date:   4/26/2005
*
*  Derived From:    New File
*
*  Edit History:
*   $Log:   U:/pl4500/archives/Prototypes/ProductCode/src/management/attribute_access.c-arc  $
//
//   Rev 1.0   Feb 06 2008 10:44:26   kasperek
//Initial revision.
//
//   Rev 1.0   Dec 13 2007 14:08:14   fjellstc
//Initial revision.
//
//   Rev 1.2   Aug 29 2006 14:40:04   sunn
//add function get_scankit_revision
//
//   Rev 1.1   Apr 08 2006 14:36:34   fjellstc
//Resolved porting errors (from H82215 to MXL)
//
//   Rev 1.0   Mar 23 2006 17:43:06   fjellstc
//Initial revision.
*
*   Rev 1.2   Jan 05 2006 17:00:26   fjellstc
*Padded the Device-Class string to 18 chars as per the RMD spec.
*
*   Rev 1.1   Jan 03 2006 17:02:46   fjellstc
*Changed 'device_class' attribute string from "Cordless 1D Laser"  to "1D Laser"
*
*   Rev 1.0   Oct 17 2005 16:57:50   fjellstc
*Initial revision.
*
*   Rev 1.2   Sep 08 2005 20:34:26   brukn
*Updated with required attributes from the RMD Data Dictionary.
*
*   Rev 1.1   May 31 2005 11:46:44   brukn
*Changed to tahoe_release_name.
*
*   Rev 1.0   May 31 2005 11:19:40   brukn
*Initial revision.
* 
**********************************************************************/

/*********************************************************************
* Include Files
**********************************************************************/
#include "management_api.h"
#include "attributes.h"
#include "attributes_client.h"
#include "sysconfig.h"
#include "attribute_access.h"
#include "debug.h"
#include "firmware_update_api.h"
#include "hostapi.h"

#if defined(INCLUDE_STATS)
#include "stats_api.h" 
#endif
#if defined(INCLUDE_SCALE)
#include "scale_api.h"
#endif

#ifdef INCLUDE_SSC_DRM
#include "drmproc.h"
#include "drm.h"
#endif
#if defined(INCLUDE_BLUETOOTH)
#include "bmt.h"
#include "bt_host_api.h"
#endif
#ifdef INCLUDE_RFID
#include "rfid_api.h"
#ifdef SUPERCAP
#include "battery_api.h"
#endif // end SUPERCAP
#endif // end RFID

#ifdef INCLUDE_CRYPTO
#include "crypto_lib.h"
#include "CryptoApi.h"
#endif

#ifndef NON_SCANNER
 #ifndef SCANNER_1D_SYSTEM
  #include "ICCCONFIG.H"
 #else
  #include "skitrev.i"
 #endif
#endif

#ifdef SE965
#include "zorro_api.h"
#include "adaptive_scan.h"
#include "stm32f10x_tim.h"
#include "laser.h"
#endif

#include "uif_api.h"
#include "sys_specific.h"

#ifdef INCLUDE_ICON_OBJDET
#include "icon_objdet.h"
#endif

#ifdef GIFTED_BATTERY
#include "battery_api.h"
#endif
#ifdef ADF2_SYNTAX
#include "sysdfs.h"
#include "PARSE.H"
#endif

#ifdef INCLUDE_WEIGHT_WARDEN
#include "WW_main.h"
#endif
/*********************************************************************
* Defines
**********************************************************************/
#undef DEBUG_ZONE
#define DEBUG_ZONE DEBUG_NOTICE

#define SUPERVISOR_MODE          1
#define HOST_CONFIG_ALLOWED      2
#define HOST_CONFIG_NOT_ALLOWED  3
#define STANDARD_ALLOWED         0

#ifndef IMGKIT_VERSION
#define IMGKIT_VERSION "none"
#endif

#ifndef IMGKIT_SCANKIT_VERSION
 #ifdef NON_SCANNER
  #define IMGKIT_SCANKIT_VERSION "none"
 #else
  #include "skitrev.i"
  #ifdef DECODER_REV
   #define IMGKIT_SCANKIT_VERSION DECODER_REV
  #else
   #define IMGKIT_SCANKIT_VERSION "none"
  #endif
 #endif
#endif


#ifndef PLATFORM_ID
#define PLATFORM_ID 1
#endif

//#define DEVICE_CATEGORY          HANDHELD_SCANNER

/*********************************************************************
* Public Variables
**********************************************************************/ 
extern volatile BOOLEAN intellistand;
#ifdef ADF2_MERGE
extern const INT16U adf_version_num;
#endif

/*********************************************************************
* Local Variables
**********************************************************************/ 
// �1D Laser�, �2D Laser�, �Imager�, �Cordless 1D Laser�, �Cordless 2D Laser�, �Cordless Imager�, �Cordless Base Station�
#ifdef NON_SCANNER
static const char device_class[] = "Cordless Base Station"; 
#elif defined(WIRELESS_DEVICE)
static const char device_class[] = "Bluetooth Imager   ";
#elif defined(INCLUDE_SE4500) || defined(INCLUDE_SE3300) || defined(INCLUDE_SE0001) || defined(VIRTUAL_ENGINE)
static const char device_class[] = "Imager            "; 
#elif defined(LINEAR_CCD)
static const char device_class[] = "1D Imager         "; 
#else
static const char device_class[] = "1D Laser          "; 
#endif

#ifdef NON_SCANNER
static const char physical_device_name[] = "Cordless Base       ";
#else
static const char physical_device_name[] = "Barcode Scanner     ";
#endif

static const char manufacturer_name[] = "Zebra Technologies  ";

static const char rsm_version[] = "2.0 ";
static const char release_name[]= PRODUCT_RELEASE_NAME;  // use a static rather than release.i which requires fat
#ifdef RELEASE_BUILD
static const char build_number[]= "RELEASE_BUILD";          // use a static rather than release.i which requires fat
#elif defined(BUILD_NUMBER)
static const char build_number[]= BUILD_NUMBER;          // use a static rather than release.i which requires fat
#else
static const char build_number[]= "ENGBUILD";            // use a static rather than release.i which requires fat
#endif
static char concat_fw_revision[CONCAT_RELEASE_NAME_LEN];

#if defined(INCLUDE_SSC_DRM)
INT16U drm_download_offset = 0;
INT16U drm_download_length = 0;
INT16U drm_download_totalLength = 0;
static INT8U drm_lk_index = 0; 
#endif

static BYTE top_level_name[MAX_MODEL_NAME];

/******************************************************************************
* Defines for uploading code from various software components 
******************************************************************************/
#ifdef MX101
static const INT8U sw_components[] = {BOOTLOADER, PRODUCTCODE, OBM, SC_FLASHDRIVER};  // remember to update SW_COMPONENTS_LEN
#else
static const INT8U sw_components[] = {BOOTLOADER, PRODUCTCODE};  // remember to update SW_COMPONENTS_LEN
#endif

static INT8U  sw_component = SC_NA;
static INT32U sc_offset    = 0;


#ifdef SE965
/* contains the zorro calibration structure as it is used    */
/* by attribute routines, zorro birth pars is the largest    */
/* struct, thats why its used here as the size of the array  */
static unsigned char att_cal_return_val[36];
#endif

static const INT16U supportedInterfaces[] = { // Make sure to update NUM_SUPPORTED_INTERFACES
#if defined(ODYSSEY)
   /* SSI Variants   */ INF_SSI, 
   /* USB variants   */ INF_USB_IBM_HAND,      INF_USB_IBM_TABLE,    INF_USB_OPOS_HAND,    INF_USB_SNAPI_IMG,      INF_USB_SNAPI,      INF_USB_HID_KBD,      INF_USB_CDC,
   /* RS485 variants */ INF_IBM_RS485_PORT5B,  INF_IBM_RS485_PORT9B, INF_IBM_RS485_PORT17,
   /* RSI variants   */ INF_RSI_STANDARD,      INF_RSI_ICL_HOST,     INF_RSI_FUJITSU_HOST, INF_RSI_NIXDORF_MODE_A, INF_RSI_NIXDORF_MODE_B, 
                        INF_RSI_OLIVETTI_HOST, INF_RSI_OMRON_HOST,   INF_RSI_CUTE_HOST,    INF_RSI_NCR,            INF_RSI_DATALOGIC, 
//#elif defined(xx)
#else
   INF_SSI, 
   // USB variants
   INF_USB_HID_KBD,
   INF_USB_IBM_HAND, INF_USB_IBM_TABLE, INF_USB_OPOS_HAND, INF_USB_SNAPI_IMG, INF_USB_SNAPI, INF_USB_CDC, INF_USB_TOSHIBATEC, INF_USB_CDC_SSI,
   // RS485 variants
   INF_IBM_RS485_PORT5B, INF_IBM_RS485_PORT9B, INF_IBM_RS485_PORT17,
   // Keyboard Wedge
   INF_PC_WEDGE_NONE, 
   // RSI variants
   INF_RSI_STANDARD, INF_RSI_ICL_HOST, INF_RSI_FUJITSU_HOST, INF_RSI_NIXDORF_MODE_A, INF_RSI_NIXDORF_MODE_B,
                     INF_RSI_OLIVETTI_HOST, INF_RSI_OMRON_HOST, INF_RSI_CUTE_HOST, 
#endif   
   INF_NONE   // Array terminator
};

#ifdef INCLUDE_CRYPTO
extern CRYPTO_API_JUMP_TABLE_T CRYPTO; // CRYPTO API for FIPS
#endif

/*********************************************************************
* Local Function Prototypes 
**********************************************************************/

/*********************************************************************                      
* Synopsis:         char *get_rsm_revision(void)
*
* Description:      Returns a pointer to the RSM version
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_rsm_revision(void)
{   
   return (char *)rsm_version;
}

/*********************************************************************                      
* Synopsis:         char *get_firmware_revision(void)
*
* Description:      Returns a pointer to the firmware version
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_firmware_revision(void)
{   
   return (char *)release_name;
}

/*********************************************************************                      
* Synopsis:         char *get_build_number(void)
*
* Description:      Returns a pointer to the firmware build number
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_build_number(void)
{   
   return (char *)build_number;
}

/*********************************************************************                      
* Synopsis:         char *get_get_concatenated_firmware_revision(void)
*
* Description:      Returns a pointer to the concatenated product &
*                   engines' firmware version
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            (1) Returns firmware versions in the following order:
*                         SE950_FW_VERSION SE4500_FW_VERSION PRODUCT_CODE_FW_VERSION
*                         MP6xxx/7xxxx: SE0001_FW_VERSION SCALE_FW_VERSION BOOTLOADER_FW_VERSION PRODUCT_CODE_FW_VERSION
*                   (2) Each f/w version is separated by a space ' '
*                   (3) If a particular component's f/w version is not available,
*                       it will be replaced by a single '?' character.
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_concatenated_firmware_revision(void)
{   
   BYTE len = 0;

   /* initialize concatenated f/w rev buffer */
   memset(concat_fw_revision, 0, CONCAT_RELEASE_NAME_LEN);

#ifdef INCLUDE_RFID
   if (application_type == SYSCONFIG_APPLICATION_RFID)
   {
      RFID_get_version(&((INT8U)concat_fw_revision[len]));
      len = strlen(concat_fw_revision);

      if (!len) 
      {      
          /* failed to get f/w version -- put in dummy version */
          concat_fw_revision[len++] = '?';
      }
      concat_fw_revision[len++] = ' ';
   }
#endif
   
#if defined(DS9808_BOARD)
   /* load SE950 f/w revision (if available) */
   if ( (scanhead_type == SYSCONFIG_SCANHEAD_SE4500_SE950_ENGINES) &&
        (laser_get_version(&(concat_fw_revision[len]), SE950_FIRMWARE_REV_BYTES) == TRUE) )
   {
      /* success */
      len += SE950_FIRMWARE_REV_BYTES;
   }
   else
   {
      /* failed to get f/w version -- put in dummy version */
      concat_fw_revision[len++] = '?';
   }
   concat_fw_revision[len++] = ' ';
#endif

#if defined(INCLUDE_SE4500) || defined(INCLUDE_SE3300) || defined(ODYSSEY) || defined(MP72xx)
   /* load Scan-Engine f/w revision */
   if (se4500_get_param(SE4500_SCANNER_PRODUCTCODE_FIRMWARE_VERSION, (INT8U*)&(concat_fw_revision[len]), SE4500_SCANNER_PRODUCTCODE_FIRMWARE_VERSION_LEN) == SE4500_FN_OK)
   {
      /* success */
      len += strlen(&concat_fw_revision[len]);
   }
   else
   {
      /* failed to get f/w version -- put in dummy version */
      concat_fw_revision[len++] = '?';
   }
   concat_fw_revision[len++] = ' ';

   /* load Scan-Engine bootloader f/w revision */
   if (se4500_get_param(SE4500_SCANNER_BOOTLOADER_FIRMWARE_VERSION, (INT8U*)&(concat_fw_revision[len]), SE4500_SCANNER_BOOTLOADER_FIRMWARE_VERSION_LEN) == SE4500_FN_OK)
   {
      /* success */
      len += strlen(&concat_fw_revision[len]);
   }
   else
   {
      /* failed to get f/w version -- put in dummy version */
      concat_fw_revision[len++] = '?';
   }
   concat_fw_revision[len++] = ' ';
#endif

#if defined(INCLUDE_SCALE)
   // Load Scale f/w version
   memcpy(&(concat_fw_revision[len]), &(PARAM_SCALE_SW_REVISION), strlen(release_name));
   len += strlen(release_name);
   concat_fw_revision[len++] = ' ';

#endif

#if defined(INCLUDE_WEIGHT_WARDEN)
   if(SYSTEM_is_WW_model() == TRUE)
   {
		   if (WW_API_Get_FW_Version(WW_BOARD_A, (INT8U*)&(concat_fw_revision[len]), RELEASE_NAME_LEN) == WW_OK) // for WWA
		   {
		      /* success */
		      len += strlen(&concat_fw_revision[len]);
		   }
		   else
		   {
		      /* failed to get f/w version -- put in dummy version */
		      concat_fw_revision[len++] = '?';
		   }
		   concat_fw_revision[len++] = ' ';

		   if (WW_API_Get_FW_Version(WW_BOARD_B, (INT8U*)&(concat_fw_revision[len]), RELEASE_NAME_LEN) == WW_OK) // for WWB
		   {
		      /* success */
		      len += strlen(&concat_fw_revision[len]);
		   }
		   else
		   {
		      /* failed to get f/w version -- put in dummy version */
		      concat_fw_revision[len++] = '?';
		   }
		   concat_fw_revision[len++] = ' ';
	 }
#endif
   /* load ProductCode f/w revision */
   memcpy(&(concat_fw_revision[len]), release_name, strlen(release_name)); // This will include Sting NULL terminator
   len += strlen(release_name);
   concat_fw_revision[len++] = ' ';

   // Load Bootloader f/w version
   memcpy(&(concat_fw_revision[len]), get_softwarecomponent_rev_ptr(BOOTLOADER), strlen(release_name));
   len += strlen(release_name);
   concat_fw_revision[len++] = ' ';

   // Runtime verify no array overrun
   ASSERT_MSG(len <= sizeof(concat_fw_revision), "RSM:Fatal:buffer overrun, %d > %d", len, sizeof(concat_fw_revision));

   return (char *)concat_fw_revision;
}

#ifdef INCLUDE_CRYPTO
/*********************************************************************                      
* Synopsis:         char *get_fips_revision(void)
*
* Description:      Returns a pointer to the FIPS firmware version
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_fips_revision(void)
{   
   return (char *) CRYPTO.GetVersion();
}
#endif

/*********************************************************************                      
* Synopsis:         char *get_top_level_revision(void)
*
* Description:      Returns a pointer to the top-level firmware version
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_top_level_revision(void)
{  
   return ((char*)(get_top_level_revision_ptr()));
}

/*********************************************************************                      
* Synopsis:         unsigned long get_system_uptime(void)
*
* Description:      Returns the system time
*
* Parameters:       None
*
* Return Value:     unsigned long
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
unsigned long get_system_uptime(void)
{
   return (unsigned long)SYS_get_time();
}

/*********************************************************************                      
* Synopsis:         char *get_device_class(void)
*
* Description:      Returns pointer to the device class string
*
* Parameters:       pointer to device class
*
* Return Value:     unsigned char*
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
char *get_device_class(void)
{
   return (char *)device_class;   
}

/*********************************************************************                      
* Synopsis:         unsigned char get_engine_id(void)
*
* Description:      Returns the engine id
*
* Parameters:       None
*
* Return Value:     engine_id
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
unsigned char get_engine_id(void)
{
   return (SYSTEM_get_engine_code());
}

/*********************************************************************                      
* Synopsis:         unsigned char get_hw_version(void)
*
* Description:      Returns the hardware revision
*
* Parameters:       None
*
* Return Value:     hw_version
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
unsigned char get_hw_version(void)
{
   return (unsigned char)get_hw_ver();
}

/*********************************************************************                      
* Synopsis:         unsigned char get_platform_id(void)
*
* Description:      Returns the hardware revision
*
* Parameters:       None
*
* Return Value:     platform_Id
*
**********************************************************************/
unsigned char get_platform_id(void)
{
   return (unsigned char)PLATFORM_ID;
}

/*********************************************************************                      
* Synopsis:         char *get_scankit_revision(void)
*
* Description:      Returns the scankit version
*
* Parameters:       None
*
* Return Value:     IMGKIT_SCANKIT_VERSION
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
char *get_scankit_revision(void)
{
#ifndef SCANNER_1D_SYSTEM
   return (char *) IMGKIT_SCANKIT_VERSION;
#else
   return (char *) DECODER_REV;
#endif
}
#ifndef SCANNER_1D_SYSTEM
/*********************************************************************                      
* Synopsis:         char *get_imagekit_revision(void)
*
* Description:      Returns the imagekit version which varies
*
* Parameters:       None
*
* Return Value:     Pointer to 100 bytes of imagekit revision string 
*                   padded with spaces, not null terminated.
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            4 Byte cushion was added - the table says the length is
*                   IMAGEKIT_NAME_LEN +1.  Length field is accesed by caller of this function.
*                   Yet this function is supposed to return a pointer to an array whose length 
*                   is supposed to be IMAGEKIT_NAME_LEN with rev name padded with spaces to that
*                   length. So lets be safe and add a cushion.
**********************************************************************/
char *get_imagekit_revision(void)
{
   static char temp_imagekit_version[IMAGEKIT_NAME_LEN + 4] = {' '}; /* add 4 byte cushion */
   int i;
   char *p = IMGKIT_VERSION;

   memset(temp_imagekit_version, 0, sizeof(temp_imagekit_version));
   for( i = 0; i < IMAGEKIT_NAME_LEN; i++)
   {
      if(*p != '\0')
         temp_imagekit_version[i] = *p++;
      else
         break;
   }
   return  (&temp_imagekit_version[0]);
}
#endif

/******************************************************************************
* Synopsis:       void *get_sw_components(void)
*
* Description:    Return supported SW components (ex. BOOTLADER ...)
*
* Parameters:     void
*
* Return Value:   Supported SW components
*
* Notes:          None
******************************************************************************/
void *get_sw_components(void)
{
   return (void *)&sw_components[0];   
}

/******************************************************************************
* Synopsis:       void set_sw_component(INT8U *sc_num)
*
* Description:    Set SW component for use with get meta data and get firmware 
*                 functions
*
* Parameters:     INT8U *sc_num - one of the supported SW components
*
* Return Value:   None
*
* Notes:          Each time a value is written the offset is reset to 0
******************************************************************************/
void set_sw_component(INT8U *sc_num)
{
   sc_offset    = 0;
   sw_component = *sc_num;
}

#if defined(INCLUDE_STATS)

/******************************************************************************
* Synopsis:       void* reset_statistic(INT16U *statisticNum)
*
* Description:    Resets the specified statistic to it's default value
*
* Parameters:     INT16 *statisticNum - which statistic to reset
*
* Return Value:   None
*
* Notes:          None
******************************************************************************/
void *reset_statistic(INT16U *statisticNum)
{
   STATS_reset(*statisticNum, OnCmd);
   return (void*)0; // Not used but something must be returned
}

/******************************************************************************
* Synopsis:       char *get_stored_decode_data(void)
*
* Description:    returns the value of last decode data
*                 almost a duplicate of ATT_get_last_decode_data, but that one
*                 is an API, this one is not...
*
* Parameters:     void
*
* Return Value:   char * pointing to the data
*
* Notes:          
******************************************************************************/
char *get_stored_decode_data(void)
{
   return (ATT_get_last_decode_data());
}
#endif

/******************************************************************************
* Synopsis:       void *get_meta_data(void)
*
* Description:    Get meta-data for a SW component
*
* Parameters:     None
*
* Return Value:   Pointer to META_DATA_T structure
*
* Notes:          sw_compoent must be set previously in set_sw_component
******************************************************************************/
void *get_meta_data(void)
{   
   static META_DATA_T meta_data;   
   
   memset(&meta_data, '\0', sizeof(META_DATA_T));      
   get_metadata(sw_component, &meta_data);
   return (void *)&meta_data;
}

/******************************************************************************
* Synopsis:       void *get_firmware(void)
*
* Description:    Get firmware for a SW component
*
* Parameters:     None
*
* Return Value:   Pointer to SW_SC_T structure
*
* Notes:          sw_compoent must be set previously in set_sw_component
******************************************************************************/
void *get_firmware(void)
{
   static SW_SC_T code;
   
   memset(&code, '\0', sizeof(code));
   code.continuation = 0;
   code.offset       = sc_offset;
   if(read_sc(sw_component, &sc_offset, code.data, sizeof(code.data)) == D_OK)
   {
      if(sc_offset != 0)
         code.continuation = 1;
   }
   return (void *)&code;
}

/*********************************************************************                      
* Synopsis:         void set_privilege_level(BYTE *level)
*
* Description:      This is an access function to set the attribute access
*                    permissions level.
*
* Parameters:       level - specifies a level of permissions.
*
* Return Value:     None
*
* External Calls:   ATT_use_config(), ATT_read_config()   
*
* Notes:            None
**********************************************************************/
void set_privilege_level(BYTE *level)
{
   NOTICE("attr:set_privilege_level=%d",*level);

   switch(*level)
   {
      case SUPERVISOR_MODE:
         ATT_use_config(ATT_read_config() | CONFIG_SUPERVISOR);
         break;

      case HOST_CONFIG_ALLOWED:
         ATT_use_config(ATT_read_config() | CONFIG_MASK_6);
         break;

      case HOST_CONFIG_NOT_ALLOWED:
         ATT_use_config(ATT_read_config() & (~CONFIG_MASK_6));
         break;

      case STANDARD_ALLOWED:
      default:
         if (interface_type == SYSCONFIG_INTERFACE_MIMIC) 
            ATT_use_config(CONFIG_MASK_2); 
         else 
            ATT_use_config(CONFIG_MASK_1); 
         break;
   }
}

/*********************************************************************                      
* Synopsis:         BOOLEAN host_config_allowed(void)
*
* Description:      This is an access function that specifies whether 
*                    host configuration is required in the current 
*                    permissions mode.
*
* Parameters:       None
*
* Return Value:     True - if host configuration is allowed,
*                   False - otherwise
*
* External Calls:   ATT_read_config()   
*
* Notes:            None
**********************************************************************/
BOOLEAN host_config_allowed(void)
{
   if (ATT_read_config() & CONFIG_MASK_6)
      return TRUE;
   else
      return FALSE;
}

#if defined(DIAGNOSTIC_REPORT)
/*********************************************************************
* Synopsis:         char *get_diagnostic_report(void)
*
* Description:      Returns a pointer to the engines diagnostic report
* Parameters:       None
* Return Value:     char pointer
* Inputs:           None
* Outputs:          pointer to an array of bytes.
* External Calls:   se4500_ping(), se4500_Extended_Status()
*
* Notes:            (1) Returns diagnostic info. in the following order:
*
* The operating states/bits are;
* SE4500_THERMAL_CRITICAL           = 0x0100; // engine operating temp reached critical level.
* SE4500_IR_LOW_CRITICAL            = 0x0200; // laser low current event.
* SE4500_IR_HIGH_CRITICAL           = 0x0400; // laser high current event.
* SE4500_MDIop_LOW_CRITICAL         = 0x2000; // ...
* SE4500_MDIop_HIGH_CRITICAL        = 0x4000; // ...
* SE4500_THERMAL_WARNING_NONLATCHED = 0x8000; //  engine operating temp reached warning level.
*
* these latched values are reset after they are read.
* SE4500_THERMAL_CRITICAL_LATCHED    = 0x0001;
* SE4500_IR_LOW_CRITICAL_LATCHED     = 0x0002;
* SE4500_IR_HIGH_CRITICAL_LATCHED    = 0x0004;
* SE4500_MDIop_LOW_CRITICAL_LATCHED  = 0x0020;
* SE4500_MDIop_HIGH_CRITICAL_LATCHED = 0x0040;
* SE4500_THERMAL_WARNING_LATCHED     = 0x0080;
*
* Third & Forth byte of Extended Status Response: currently unused
*
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_diagnostic_report(void)
{

BYTE Pass       = 0;
BYTE Fail       = 1;
BYTE Not_Tested = 2;
BYTE Na         = 3;
BYTE High       = 4;
BYTE Low        = 5;
BYTE Warning    = 6;
BYTE Critical   = 7;
BYTE Fatal      = 8;

BYTE DiagReport[14];

BYTE len = 0;
INT16U extended_status_buffer[2];


SE4500_FN_STATUS_E status;

   memcpy(DiagReport,0x00,sizeof(DiagReport));

   // Initialize the test numbers

   DiagReport[0] = 0x00; // test number '0'
   DiagReport[2] = 0x01; // test number '1'
   DiagReport[4] = 0x02; // test number '2'
   DiagReport[6] = 0x03; // test number '3'
   DiagReport[8] = 0x04; // test number '4'
   DiagReport[10] = 0x05; // test number '5'
   DiagReport[12] = 0x06; // test number '6'               
  
   // I2C test
   // returns: PASS / FAIL
   DiagReport[1] = se4500_ping();   //  SE4500_PING

   // Does the engine support Aim/temperature measurements?
   if(scanhead_type == SYSCONFIG_SCANHEAD_SE4500_ENGINE)
   {
      // Transmit commands and get responses
      // SE4500_GET_EXTENDED_STATUS
      status = se4500_Extended_Status(extended_status_buffer);
      if(status == SE4500_FN_OK)
      {
         // Laser Current immediate
         // returns: PASS / LOW / HIGH
         // SE4500_IR_LOW_CRITICAL
         // SE4500_IR_HIGH_CRITICAL
        
         if((extended_status_buffer[0]
            & SE4500_IR_LOW_CRITICAL) == SE4500_IR_LOW_CRITICAL) DiagReport[3] = Low;
         else if((extended_status_buffer[0]
            & SE4500_IR_HIGH_CRITICAL) == SE4500_IR_HIGH_CRITICAL) DiagReport[3] = High;
         else  DiagReport[3] = Pass;

         // Laser MDIop Current immediate
         // returns: PASS / LOW / HIGH

         if((extended_status_buffer[0]
            & SE4500_MDIop_LOW_CRITICAL) == SE4500_MDIop_LOW_CRITICAL) DiagReport[5] = Low;
         else if((extended_status_buffer[0]
            & SE4500_MDIop_HIGH_CRITICAL) == SE4500_MDIop_HIGH_CRITICAL) DiagReport[5] = High;
         else  DiagReport[5] = Pass;

         // Operating temperature
         // returns: PASS / WARNING / CRITICAL
         // SE4500_THERMAL_CRITICAL
         // THERMAL_WARNING_NONLATCHED

         // parse out the Operating temperature state...
         if ((extended_status_buffer[0]
             & SE4500_THERMAL_CRITICAL) == SE4500_THERMAL_CRITICAL)  DiagReport[7] = Critical;
         else if ((extended_status_buffer[0]
             & SE4500_THERMAL_WARNING_NONLATCHED) == SE4500_THERMAL_WARNING_NONLATCHED) DiagReport[7] = Warning;
         else  DiagReport[7] = Pass;


         // -------------------------------------------------------------------------------------
         // Laser Current - stored
         // returns: PASS / LOW

         if((extended_status_buffer[0]
             & SE4500_IR_LOW_CRITICAL_LATCHED) == SE4500_IR_LOW_CRITICAL_LATCHED) DiagReport[9] = Low;
         else if((extended_status_buffer[0]
             & SE4500_IR_HIGH_CRITICAL_LATCHED) == SE4500_IR_HIGH_CRITICAL_LATCHED) DiagReport[9] = High;
         else  DiagReport[9] = Pass;


         // Laser MDIop Current - stored
         // returns: PASS / LOW / HIGH

         if((extended_status_buffer[0]
             & SE4500_MDIop_LOW_CRITICAL_LATCHED) == SE4500_MDIop_LOW_CRITICAL_LATCHED) DiagReport[11] = Low;
         else if((extended_status_buffer[0]
             & SE4500_MDIop_HIGH_CRITICAL_LATCHED) == SE4500_MDIop_HIGH_CRITICAL_LATCHED) DiagReport[11] = High;
         else  DiagReport[11] = Pass;

         // Operating temperature - stored
         // returns: PASS / WARNING / CRITICAL

         if((extended_status_buffer[0]
             & SE4500_THERMAL_CRITICAL_LATCHED) == SE4500_THERMAL_CRITICAL_LATCHED) DiagReport[13] = Critical;
         else if((extended_status_buffer[0]
             & SE4500_THERMAL_WARNING_LATCHED) == SE4500_THERMAL_WARNING_LATCHED) DiagReport[13] = Warning;
         else  DiagReport[13] = Pass;
      }
      else // I2C error - Returns Fail
      {
         DiagReport[3] = DiagReport[5] = DiagReport[7] = DiagReport[9] = DiagReport[11] = DiagReport[13] = Fail;
      }
   }
   else  //Engine doesn't support DIOP Aim/ temperature measurements[e.g. SE3300] - Returns Na [Not applicable]
   {
      DiagReport[3] = DiagReport[5] = DiagReport[7] = DiagReport[9] = DiagReport[11] = DiagReport[13] = Na;
   }  
 return (char *)DiagReport;
}

#endif

/*********************************************************************                      
* Synopsis:        unsigned char get_scannerHealth(void);
*
* Description:      Returns heartbeat status
*
* Parameters:       None
*
* Return Value:     status byte
*                   bit0      - 0=ok, 1=paramBuffer CRC failure
*                   bits1-7   - reserved
*
* Notes:            None
**********************************************************************/
unsigned char get_scannerHealth(void)
{
   unsigned char ret=0;

   if (!PAR_checksums_are_ok()) ret |= 0x01;

   return ret;
}

/******************************************************************************
* Synopsis:       INT16U get_current_interface(void)
*
* Description:    Get host and variant currently used on device
*
* Parameters:     None
*
* Return Value:   INT16U interface
*
* Notes:          MSB contains the host and LSB has the variant
******************************************************************************/
INT16U get_current_interface(void)
{
   INT16U     interface = 0;
   ENUM_HOSTS host      = host_get_current_host();
   INT8U      variant   = host_get_current_variant();

   interface  = host <<  8;
   // if there is no variant, don't mask in 0xff, it makes an invalid INF_ number that ADF2 can't 
   // work with
   if (variant <= INF_LARGEST_VARIANT_NUM) {
       interface |= variant;
   }

   return interface;
}

/******************************************************************************
* Synopsis:       void *get_supported_interfaces(void)
*
* Description:    Get all interfaces supported by this device
*
* Parameters:     None
*
* Return Value:   Pointer to buffer containing all interfaces
*
* Notes:          None
******************************************************************************/
void *get_supported_interfaces(void)
{      
   static INT8U buffer[(NUM_SUPPORTED_INTERFACES * 2)];
   INT8U i, j = 0;

   memset(buffer, '\0', sizeof(buffer));
   for(i = 0; i < sizeof(supportedInterfaces)/2; i++)
   {
      buffer[j++] = supportedInterfaces[i] >> 8;
      buffer[j++] = supportedInterfaces[i];       
   }
   return &buffer;
}

#ifdef INCLUDE_RFID
/****************************************************************************
* Synopsis:        char *get_rfid_last_tag_id(void)
*
* Description:     RSM read access for RFID_LAST_TAG_ID attribute which provides
*                  the EPC of the Last reported Tag.
*
* Call Parameters: none
*
* Values Returned: byte array EPC of the Last reported tag
*
* Notes:           None
****************************************************************************/
char *get_rfid_last_tag_id(void)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   return (char*)state->last_tag_id;
}

/****************************************************************************
* Synopsis:        char *get_rfid_last_tag_id(void)
*
* Description:     RSM read access for RFID_DATA attribute which provides
*                  the result of a Read Command
*
* Call Parameters: none
*
* Values Returned: hex-string EPC of the Last reported tag
*
* Notes:           None
****************************************************************************/
char *get_rfid_data(void)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   return (char*)state->data;
}

/****************************************************************************
* Synopsis:        INT32U get_rfid_cmd_status(void)
*
* Description:     RSM read access for RFID_CMD_STATUS attribute which provides
*                  the result statuc of any Command.
*
* Call Parameters: none
*
* Values Returned: status
*
* Notes:           None
****************************************************************************/
INT32U get_rfid_cmd_status(void)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   return state->cmd_status;
}

/****************************************************************************
* Synopsis:        void set_rfid_tag_id(INT8U *val)
*
* Description:     RSM set access for RFID_TAG_ID attribute which identifies
*                  the target Tag for a given command
*
* Call Parameters: val - byte array of the  EPC of the desired tag
*
* Values Returned: none
*
* Notes:           None
****************************************************************************/
void set_rfid_tag_id(INT8U *val)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   memcpy(state->tag_id,val,sizeof(state->tag_id));
}

/****************************************************************************
* Synopsis:        void set_rfid_bank(INT8U *val)
*
* Description:     RSM set access for RFID_BANK attribute which identifies
*                  the target Bank for a read or write command command
*
* Call Parameters: val - desired bank id
*
* Values Returned: none
*
* Notes:           None
****************************************************************************/
void set_rfid_bank(INT8U *val)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   state->bank = (RFID_BANK)*val;
}

/****************************************************************************
* Synopsis:        void set_rfid_data(INT8U *val)
*
* Description:     RSM set access for RFID_DATA attribute which provides
*                  the buff for the 
*                  Write command, and the Lock command
*
* Call Parameters: buffer for RFID_DATA
*
* Values Returned: none
*
* Notes:           None
****************************************************************************/
void set_rfid_data(INT8U *val)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   memcpy(state->data,val,sizeof(state->data));
}

/****************************************************************************
* Synopsis:        void set_rfid_offset(INT8U *val)
*
* Description:     RSM set access for RFID_OFFSET attribute which sets the word 
*                  offset into the target Bank for a read or write command
*
* Call Parameters: val - word offset
*
* Values Returned: none
*
* Notes:           None
****************************************************************************/
void set_rfid_offset(INT16U *val)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   state->offset = *val;
}

/****************************************************************************
* Synopsis:        void set_rfid_length(INT8U *val)
*
* Description:     RSM set access for RFID_LENGTH attribute which sets the word 
*                  length desired for a read command
*
* Call Parameters: val - word length
*
* Values Returned: none
*
* Notes:           None
****************************************************************************/
void set_rfid_length(INT16U *val)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   state->length = *val;
}

/****************************************************************************
* Synopsis:        void set_rfid_password(INT8U *val)
*
* Description:     RSM set access for RFID_PASSWORD attribute which sets the 
*                  Access password or  Kill password for a command 
*
* Call Parameters: val - byte array password
*
* Values Returned: none
*
* Notes:           None
****************************************************************************/
void set_rfid_password(INT8U *val)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   state->password =  ((INT32U)*val      ) << 24; 
   state->password += ((INT32U)*(val + 1)) << 16; 
   state->password += ((INT32U)*(val + 2)) <<  8; 
   state->password += ((INT32U)*(val + 3)); 
}

/****************************************************************************
* Synopsis:        void set_rfid_command(INT8U *val)
*
* Description:     RSM set access for RFID_COMMAND attribute which actually 
*                  executes a command.
*
* Call Parameters: val - byte command
*
* Values Returned: none
*
* Notes:           None
****************************************************************************/
void set_rfid_command(INT8U *val)
{  
   RFID_API_STATE *state = get_rfid_api_state();
   
   RFID_api_exec_command( (RFID_CMD)*val );
}

/****************************************************************************
* Synopsis:        INT16U get_rfid_tag_cache(void)
*
* Description:     RSM read access for the RFID tag cache size
*
* Call Parameters: none
*
* Values Returned: size of the current tag cache
*
* Notes:           None
****************************************************************************/
INT16U get_rfid_tag_cache(void)
{  
   return RFID_tagCache_size(FALSE);
}

/****************************************************************************
* Synopsis:        void set_rfid_tag_cache(INT16U *val)
*
* Description:     RSM write access for the RFID tag cache size. 
*                  writing a zero clears the cache,
*
* Call Parameters: none
*
* Values Returned: size of the current tag cache
*
* Notes:           None
****************************************************************************/
void set_rfid_tag_cache(INT16U *val)
{  
   RFID_tagCache_size(TRUE);
}

#ifdef SUPERCAP
/****************************************************************************
* Synopsis:        INT16U get_cap_voltage(void)
*
* Description:     RSM read attribute that returns the measured voltage of the Super 
*                  Capicitor as a 16 bit integer in mV (e.g. 3.4 V is 3400 mV)
*
* Call Parameters: none
*
* Values Returned: 16 bit signed integer as mV
*
* Notes:           Range of Voltage : 0 to 5000 mV
****************************************************************************/
INT16U get_cap_voltage(void)
{  
   return BOARD_measure_cap_voltage();
}

/****************************************************************************
* Synopsis:        INT16U get_cap_status(void)
*
* Description:     RSM read attribute that returns the status of the super cap 
*                  status as a 16 bit unsigned Bit-field. 
*
* Call Parameters: none
*
* Values Returned: 16 bit unsigned Bit-field
*
* Notes:           
****************************************************************************/
INT16U get_cap_status(void)
{
   return CapMgr_getStatus();	
}
/****************************************************************************
* Synopsis:        INT16S get_cap_impedance_voltage_drop(void)
*
* Description:     RSM read attribute that returns the super cap impedance 
*                  delta voltage drop used to measure the Super Caps health. 
*
* Call Parameters: none
*
* Values Returned: 16 bit signed integer in mV (e.g. 241 is 241 mV 
*
* Notes:           
****************************************************************************/
INT16S get_cap_impedance_voltage_drop(void)
{
   return CapMgr_getImpedanceVoltageDrop();
}
/****************************************************************************
* Synopsis:        INT16S get_cap_state_of_charge(void)
*
* Description:     RSM read attribute that returns the super cap state of charge
*                  as a percentage. 
*
* Call Parameters: none
*
* Values Returned: 16 bit signed integer as a percentage from 0 to 100% 
*
* Notes:           
****************************************************************************/
INT16S get_cap_state_of_charge(void)
{
   return CapMgr_getCapSOC(); 
}
/****************************************************************************
* Synopsis:        INT16S get_cap_state_of_health(void)
*
* Description:     RSM read attribute that returns the super cap state of
*                  as a percentage of life left before the cap requires replacement. 
*
* Call Parameters: none
*
* Values Returned: 16 bit signed integer as a percentage from 0 to 100% 
*
* Notes:           
****************************************************************************/
INT16S get_cap_state_of_health(void)
{
   return CapMgr_getCapStateOfHealth(); 
}
/****************************************************************************
* Synopsis:        void cap_state_of_health_req(INT8U *val)
*
* Description:     RSM attribute write function that requests the super cap state of
*                  health calculation. 
*
* Call Parameters: val - 
*
* Values Returned: none 
*
* Notes:           
****************************************************************************/
void cap_state_of_health_req(INT16U *val)
{
   if (*val)
   {
      RFID_requestHealthCheck();
   }
}
#endif // end SUPERCAP
#endif //INCLUDE_RFID

#ifdef WIRELESS_DEVICE
/*********************************************************************                      
* Synopsis:         unsigned char in_cradle_detect(void)
*
* Description:      Returns whether or not the scanner is in the cradle
*
* Parameters:       None
*
* Return Value:     1 - if in cradle
*                   0 - otherwise
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
unsigned char in_cradle_detect(void)
{
   return  SYSTEM_is_in_cradle();
}

/*********************************************************************                      
* Synopsis:         unsigned char is_hands_free(void)
*
* Description:      Returns whether or not the scanner is hands free
*
* Parameters:       None
*
* Return Value:     1 - hands free
*                   0 - hand held
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
unsigned char is_hands_free(void)
{  /* refer to this function void ADU_set_hands_free_mode(BOOLEAN value) */
   /* for the variable to use state hands free mode. */
   return 0;
}

/*********************************************************************                      
* Synopsis:         unsigned char is_charging(void)
*
* Description:      Returns whether or not the scanner is charging
*
* Parameters:       None
*
* Return Value:     1 - charging active
*                   0 - otherwise
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   Charging()  
*
* Notes:            None
**********************************************************************/
unsigned char is_charging(void)
{
   return Charging();
}

/*********************************************************************                      
* Synopsis:         unsigned char get_battery_tech(void)
*
* Description:      Returns battery technology
*
* Parameters:       None
*
* Return Value:     00- NiCad
*                   01- NiMh
*                   02- LiOn
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
unsigned char get_battery_tech(void)
{
   return 1;  /* NiMh */
}

/*********************************************************************                      
* Synopsis:         unsigned char get_battery_status(void)
*
* Description:      Returns battery status
*
* Parameters:       None
*
* Return Value:     0-  unknown
*                   1-  Full
*                   2-  Medium
*                   3-  Empty
*                   4-  Charging - full rate
*                   5-  Charging - half rate
*                   6-  Charging - Trickle
*                   7-  Discharging - Battery Cycle in progress
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
unsigned char get_battery_status(void)
{
   return 0;  
}

/*********************************************************************                      
* Synopsis:         unsigned char get_battery_maint(void)
*
* Description:      Returns battery maintenance information
*
* Parameters:       None
*
* Return Value:     00 - unknown
*                   01 - Not active
*                   02 - Battery Cycle - Discharging
*                   03 - Battery Cycle - Charging
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
unsigned char get_battery_maint(void)
{
   return 0; 
}

/*********************************************************************                      
* Synopsis:         unsigned short get_num_insertions(void)
*
* Description:      Returns the number of insertions
*
* Parameters:       None
*
* Return Value:     number of insertions
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            Will be reset by either a removal of the battery, 
*                    a firmware update, or the Reset Charge Counters.
**********************************************************************/
unsigned short get_num_insertions(void)
{
   /* Plug in a real function call here */
   return(get_scan_num_insertions());
}

/*********************************************************************                      
* Synopsis:         unsigned short get_num_charge_attempts(void)
*
* Description:      Returns the number of charge attempts
*
* Parameters:       None
*
* Return Value:     number of charge attempts
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            Will be reset by either a removal of the battery, 
*                    a firmware update, or the Reset Charge Counters.
**********************************************************************/
unsigned short get_num_charge_attempts(void)
{
   /* Plug in a real function call here */
   return(get_scan_num_charge_attemps());
}
/*********************************************************************                      
* Synopsis:         unsigned short get_num_full_charges(void)
*
* Description:      Returns the number of full charges
*
* Parameters:       None
*
* Return Value:     number of full charges
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            Will be reset by either a removal of the battery, 
*                    a firmware update, or the Reset Charge Counters.
**********************************************************************/
unsigned short get_num_full_charges(void)
{
   /* Plug in a real function call here */
   return (get_scan_num_full_charge());
   
}

/*********************************************************************                      
* Synopsis:         void reset_charge_stats(unsigned char reset)
*
* Description:      Resets number of insertions, attempted charges 
*                    and full charges to zero
*
* Parameters:       None
*
* Return Value:     None
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None 
**********************************************************************/
void reset_charge_stats(unsigned char reset)
{
   /* reset number of insertions, attempted charges and full charges
      to zero */
   clr_scanner_stat(reset);
      
}
#endif // INCLUDE_DS6878
#ifdef SWITCH_NIGHTMODE_SUPPORT
void night_mode_toggle(BYTE *state)
{
   if(UIF_isNightModeActive() != *state)
   {
      UIF_nightModeSwitchToggle(TRUE);
   }
}

BOOLEAN get_night_mode(void)
{
   return (UIF_isNightModeActive());
}
#endif 

BOOLEAN get_pager_motor_avail(void)
{
   return (UIF_pager_available());
}

#if defined(BT_ERROR_LOGGING)
INT8U get_tx_issue_count(void)
{
   return BT_get_tx_issue_count();
}
#endif

#ifdef GIFTED_BATTERY

#include "batterymonitor.h"

extern BATTERY_DATA Battery_Data[];

/*********************************************************************                      
* Synopsis:         INT16U get_gifted_charging_Y_N(void)
*
* Description:      Returns battery status
*
* Parameters:       None
*
* Return Value:     returns 1 if battery is charging 0 if not.
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_charging_Y_N(void)
{
   return ((Battery_Data[0].Battery_Status & 0x0040)?0:1);  
}

/*********************************************************************                      
* Synopsis:         INT16U get_gifted_batt_stats_state(void)
*
* Description:      Returns battery status
*
* Parameters:       None
*
* Return Value:     returns 1 if battery statistics are enabled.
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_stats_state(void)
{
   return ((INT16U)get_battery_stats_enable());  
}

/*********************************************************************                      
* Synopsis:         INT16U get_gifted_batt_status(void)
*
* Description:      Returns battery status
*
* Parameters:       None
*
* Return Value:     16-bit value defined as follows:
*                   Bit 3:0: EC3,EC2,EC1,EC0 Error Code
*                       0x0 = OK
*                       0x1 = Busy
*                       0x2 = Reserved Command
*                       0x3 = Unsupported Command
*                       0x4 = AccessDenied
*                       0x5 = Overflow/Underflow
*                       0x6 = BadSize
*                       0x7 = UnknownError
*                   Bit 4: FD-Fully Discharged
*                       0 = Battery ok
*                       1 = Battery fully depleted
*                   Bit 5: FC-Fully Charged
*                       0 = Battery not fully charged
*                       1 = Battery fully charged
*                   Bit 6: DSG-Discharging
*                       0 = Battery is charging.
*                       1 = Battery is discharging.
*                   Bit 7: INIT-Initialization
*                       0 = Inactive
*                       1 = Active
*                   Bit 8: RTA-Remaining Time Alarm
*                       0 = Inactive
*                       1 = Active
*                   Bit 9: RCA-Remaining Capacity Alarm
*                       0 = Inactive
*                       1 = Active
*                   Bit 10: Reserved Undefined
*                   Bit 11: TDA-Terminate Discharge Alarm
*                       0 = Inactive
*                       1 = Active
*                   Bit 12: OTA-Overtemperature Alarm
*                       0 = Inactive
*                       1 = Active
*                   Bit 13: ReservedUndefined
*                   Bit 14: TCA-Terminate Charge Alarm
*                       0 = Inactive
*                       1 = Active
*                   Bit 15: OCA-Overcharged Alarm
*                       0 = Inactive
*                       1 = Active
*
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_status(void)
{
   return Battery_Data[0].Battery_Status;  
}

/*********************************************************************                      
* Synopsis:         INT16U get_gifted_batt_charge_status(void)
*
* Description:      Returns battery status
*
* Parameters:       None
*
* Return Value:     16-bit value defined as follows:
*                     VCT (Bit 7): Charge Termination
*                     1 = Active
*                     0 = Inactive
*                     MCHG (Bit 6): Maintenance Charge
*                     1 = Active
*                     0 = Inactive
*                     SU (Bit 5): Charge Suspend
*                     1 = Active
*                     0 = Inactive
*                     IN (Bit 4): Charge Inhibit
*                     1 = Active
*                     0 = Inactive
*                     HV (Bit 3): High Voltage Region
*                     1 = Active
*                     0 = Inactive
*                     MV (Bit 2): Mid Voltage Region
*                     1 = Active
*                     0 = Inactive
*                     LV (Bit 1): Low Voltage Region
*                     1 = Active
*                     0 = Inactive
*                     PV (Bit 0): Precharge Voltage Region
*                     1 = Active
*                     0 = Inactive
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_charge_status(void)
{
   return (INT16U)Battery_Data[0].Battery_Charge_Status;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_voltage(void)
*
* Description:      Returns battery voltage
*
* Parameters:       None
*
* Return Value:     16-bit value representing volts as mV
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_voltage(void)
{
   return Battery_Data[0].Battery_V;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_current(void)
*
* Description:      Returns battery current
*
* Parameters:       None
*
* Return Value:     16-bit value representing current as mA
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_current(void)
{
   if (get_battery_type() == BATTERY_TYPE_LION_PACK)
   {
      // Battery pack
      return Battery_Data[0].Battery_I;
   }
   else
   {
      // Super Cap pack - reverse sign to report same as battery pack
      return -Battery_Data[0].Battery_I;
   }
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_percentage(void)
*
* Description:      Returns battery percent full
*
* Parameters:       None
*
* Return Value:     Percent full
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_percentage(void)
{
   return Battery_Data[0].Battery_Percent;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_StateofHealth(void)
*
* Description:      Returns battery State of health as determined by the
*                   current charge cycle count. This is the officially
*                   reported SOH.
*
* Parameters:       None
*
* Return Value:     State of Health is reported as a percentage
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_StateofHealth(void)
{
   return Battery_Data[0].Battery_SOH;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_StateofHealth_GG(void)
*
* Description:      Returns battery State of health reported by the
*                   battery(gas guage)
*
* Parameters:       None
*
* Return Value:     State of Health is reported as a percentage
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_StateofHealth_GG(void)
{
   return Battery_Data[0].Battery_SOH_GG;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_desired_voltage(void)
*
* Description:      Returns battery desired charging voltage
*
* Parameters:       None
*
* Return Value:     16-bit value representing voltage as mV
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_desired_voltage(void)
{
   return Battery_Data[0].Battery_Desired_V;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_desired_current(void)
*
* Description:      Returns battery desired charging current
*
* Parameters:       None
*
* Return Value:     16-bit value representing current as mA
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_desired_current(void)
{
   return Battery_Data[0].Battery_Desired_I;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_tempature(void)
*
* Description:      Returns Converted battery temperature
*
* Parameters:       None
*
* Return Value:     16-bit value representing the battery pack temperature in
*                   C because that is What Marketing Wants (WMW)
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16S get_gifted_batt_temperature(void)
{
   return (Battery_Data[0].Battery_Therm);  
}

/*********************************************************************                      
* Synopsis:         char *get_gifted_batt_model_number(void)
*
* Description:      Returns a pointer to the battery's Model Number string
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_gifted_batt_model_number(void)
{   
   return (char *)Battery_Data[0].Battery_Model_Number;
}

/*********************************************************************                      
* Synopsis:         char *get_gifted_batt_manu_date(void)
*
* Description:      Returns a pointer to the battery's manufature date string
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_gifted_batt_manu_date(void)
{   
   return (char *)Battery_Data[0].Battery_Manu_Date;
}

/*********************************************************************                      
* Synopsis:         char *get_gifted_batt_firmware_version(void)
*
* Description:      Returns a pointer to the battery's firmware version string
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_gifted_batt_firmware_version(void)
{   
   return (char *)Battery_Data[0].Battery_Firmware_Version;
}

/*********************************************************************                      
* Synopsis:         char *get_gifted_batt_ID(void)
*
* Description:      Returns a pointer to the battery's ID string
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_gifted_batt_ID(void)
{   
   return (char *)Battery_Data[0].Battery_ID;
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_full_charge_capacity(void)
*
* Description:      Returns battery full charge capc in mAh as reported by the gas gauge
*
* Parameters:       None
*
* Return Value:     16-bit value representing the battery pack cycle count
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_full_charge_capacity(void)
{
   return Battery_Data[0].Battery_Full_Charge_Capacity;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_design_capacity(void)
*
* Description:      Returns battery designed capc in mAh as reported by the gas gauge
*
* Parameters:       None
*
* Return Value:     16-bit value representing the battery design capc
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_design_capacity(void)
{
   return Battery_Data[0].Battery_Charge_Capacity;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_remaining_capacity(void)
*
* Description:      Returns battery remaining capc in mAh as reported by the gas gauge
*
* Parameters:       None
*
* Return Value:     16-bit value representing the battery pack cycle count
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_remaining_capacity(void)
{
   return Battery_Data[0].Battery_Remaining_Capacity;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_cycle_count(void)
*
* Description:      Returns battery cycle count as reported by the gas gauge
*
* Parameters:       None
*
* Return Value:     16-bit value representing the battery pack cycle count
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_cycle_count(void)
{
   return Battery_Data[0].Battery_Cycle_Count;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_serial_number(void)
*
* Description:      Returns battery serial number as reported by the gas gauge
*
* Parameters:       None
*
* Return Value:     16-bit value representing the battery pack cycle count
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_serial_number(void)
{
   return Battery_Data[0].Battery_Serial_Number;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_time_to_full_charge(void)
*
* Description:      Returns battery time to full charge as reported by the gas gauge
*
* Parameters:       None
*
* Return Value:     16-bit value representing the battery pack cycle count
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16U get_gifted_batt_time_to_full_charge(void)
{
   return Battery_Data[0].Battery_Time_To_Full;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_highest_temp(void)
*
* Description:      Returns battery highest temp as reported by the gas gauge
*
* Parameters:       None
*
* Return Value:     16-bit value representing the battery pack cycle count
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16S get_gifted_batt_highest_temp(void)
{
   return Battery_Data[0].Battery_High_Temp;  
}

/*********************************************************************                      
* Synopsis:         INT16 get_gifted_batt_lowest_temp(void)
*
* Description:      Returns battery low tempt as reported by the gas gauge
*
* Parameters:       None
*
* Return Value:     16-bit value representing the battery pack cycle count
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None 
*
* Notes:            None
**********************************************************************/
INT16S get_gifted_batt_lowest_temp(void)
{
   return Battery_Data[0].Battery_Low_Temp;  
}

#endif  // GIFTED_BATTERY

#ifdef INCLUDE_CRYPTO
/******************************************************************************
* Synopsis:       void set_aes_key(BYTE *key)
*
* Description:    Set AES key
*
* Parameters:     BYTE *key     - new AES key
*
* Return Value:   None
*
* Notes:          None
******************************************************************************/
void set_aes_key(BYTE *key)
{
   PAR_CHANGE_INFO change_info;  // used when writing

   // parameter exists, setup to change it
   change_info.param_num    = ATT_AES_KEY;
   change_info.value        = key;
   change_info.length       = CRYPTO_KEY_SIZE; 
   change_info.offset       = 0;
   change_info.change_type  = PERMANENT;
   change_info.param_action = NO_ACTION;
   change_info.source       = SETTINGS_SOURCE_API;

   if(ATT_get_attribute_mode() == ATT_MODE_SYSTEM)
   {
      //just write the value in FAT mode
      PAR_change_params(&change_info,1);      
   }
   else 
   {
      //crypto will check and store the value
      INT8U newKey[CRYPTO_KEY_SIZE + 1];
      INT8S ret;

      if((ret = CRYPTO.SetKey(TRUE, SET_AES_KEY, key, CRYPTO_KEY_SIZE + CRYPTO_KW_ADD_SIZE, newKey, CRYPTO_KEY_SIZE)) == E_CRYPTO_OK)
      {
         newKey[CRYPTO_KEY_SIZE] = '\0';
         change_info.value = newKey;
         if((ret = PAR_change_params(&change_info, 1)) != PAR_PARAMSUCCESS)
         {
            ERROR("Error: unable to set AES key in PAR_change_params %d\r\n", ret);
         }
      }
      else
         ERROR("Error: unable to set AES key %d\r\n", ret);
   }
}

/******************************************************************************
* Synopsis:       void set_shared_key(BYTE *key)
*
* Description:    Set shared key
*
* Parameters:     BYTE *key     - new shared key
*
* Return Value:   None
*
* Notes:          None
******************************************************************************/
void set_shared_key(BYTE *key)
{
   PAR_CHANGE_INFO change_info;  // used when writing

   // parameter exists, setup to change it
   change_info.param_num    = ATT_SHARED_KEY;
   change_info.value        = key;
   change_info.length       = CRYPTO_KEY_SIZE; 
   change_info.offset       = 0; 
   change_info.change_type  = PERMANENT;
   change_info.param_action = NO_ACTION;
   change_info.source       = SETTINGS_SOURCE_API;

   if(ATT_get_attribute_mode() == ATT_MODE_SYSTEM)
   {
      //just write the value in FAT mode
      PAR_change_params(&change_info,1);      
   }
   else 
   {
      //crypto will check and store the value
      INT8U newKey[CRYPTO_KEY_SIZE + 1];      
      INT8S ret;

      if((ret = CRYPTO.SetKey(TRUE, SET_SHARED_KEY, key, CRYPTO_KEY_SIZE + CRYPTO_KW_ADD_SIZE, newKey, CRYPTO_KEY_SIZE)) == E_CRYPTO_OK)
      {
         newKey[CRYPTO_KEY_SIZE] = '\0';
         change_info.value = newKey;
         if((ret = PAR_change_params(&change_info, 1)) != PAR_PARAMSUCCESS)
         {
            ERROR("Error: unable to set shared key in PAR_change_params %d\r\n", ret);
         }

      }
      else
      {
         ERROR("Error: unable to set shared key %d\r\n", ret);
      }
   }
}
#endif

#ifdef INCLUDE_STATS_DECTIME_HG_BINS_and_DECODE_DATA
/******************************************************************************
* Synopsis:       void set_store_bc_list(BYTE *stats_id_list)
*
* Description:    Set AES key
*
* Parameters:     BYTE *key     - new AES key
*
* Return Value:   None
*
* Notes:          None
******************************************************************************/
void set_store_bc_list(BYTE *stats_id_list)
{
   PAR_CHANGE_INFO change_info;  
   INT16U *newVal; 
   INT8U  newind, oldInd; 
   INT8U  equal, found; 
   
   newVal = (INT16U *) stats_id_list;   
   
   /* Compare bc type list,  which is discrete in the ARRAY list */
   equal = TRUE; 
   for(newind = 0; newind < STATS_IMG_SAV_SYMBOL_NUM; newind ++)
   { 
       /* reset found */
       found = FALSE;
       for (oldInd = 0; oldInd < STATS_IMG_SAV_SYMBOL_NUM; oldInd ++) { 
          /* found same type? */
          if(newVal[newind] == PARAM_STATS_BC_IMG_SAV_BTYPE_LIST[oldInd]) {
             found = TRUE; 
             break; 
          } 
       }               
       if(!found) { 
          /* not found, list change */
          equal = FALSE; 
          break; 
      }
   }    
   
   /* if list change, update param */
   if(!equal)
   {
       // parameter exists, setup to change it
       change_info.param_num    = NUM_STATS_BC_IMG_SAV_BTYPE_LIST;
       change_info.value        = stats_id_list;
       change_info.length       = STATS_IMG_SAV_SYMBOL_NUM * sizeof(INT16U); 
       change_info.offset       = 0;
       change_info.change_type  = PERMANENT;
       change_info.param_action = NO_ACTION;
       change_info.source       = SETTINGS_SOURCE_API;
       
       /* update param */
       par_change_param((PAR_CHANGE_INFO*)&change_info); 
       /* reset bc image storage */
       STATS_store_Image_init();
   }     
   else
      NOTICE("NOTICE: no udpate to \"saving bc save list params\"\r\n");
      
}
 
/*****************************************************************************
* Synopsis:       void set_store_bc_threshold(BYTE *threshold)
*
* Description:    Set AES key
*
* Parameters:     BYTE *key     - new AES key
*
* Return Value:   None
*
* Notes:          None
******************************************************************************/
void set_store_bc_threshold(BYTE *threshold)
{
	 PAR_CHANGE_INFO change_info;  // used when writing
   
   // parameter exists, setup to change it
   change_info.param_num    = NUM_STATS_BC_IMG_SAV_HG_BIN_TH;
   change_info.value        = threshold;
   change_info.length       = sizeof(INT16U); 
   change_info.offset       = 0;
   change_info.change_type  = PERMANENT;
   change_info.param_action = NO_ACTION;
   change_info.source       = SETTINGS_SOURCE_API;

   /* wrtie save barcode list */ 
   if( PARAM_STATS_BC_IMG_SAV_HG_BIN_TH != *(INT16U*)threshold) {
   	  /* update param */
      par_change_param((PAR_CHANGE_INFO*)&change_info); 
      /* reset bc image storage */
      STATS_store_Image_init(); 
   }
   else
      NOTICE("NOTICE: no udpate to \"img save threshold\"\r\n");
}
#endif

#ifdef SE965
/*********************************************************************                      
* Synopsis:         unsigned char *get_att_zorro_birth_data_params(void)
*
* Description:      returns the formated value of the calibration
*                   zorro parameters from the param_buf
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*
* Notes:            None 
**********************************************************************/
unsigned char *get_att_zorro_birth_data_params(void)
{
   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   ZORRO_BIRTH_DATA_PARAMS par_ptr;

   /* initializes the values that are passed in by value         */
   att_zorro_init(&alignment, &par_ptr, ZORRO_BIRTH_func);

   /* birth params are special in that they have WORDS and BYTES */
   /* in the same structure, but we output just BYTES, so thats  */
   /* why shifting is done on some of the values                 */
   att_cal_return_val[1]  = (INT8U)(par_ptr.birth_Laser_i[alignment] >> 8);
   att_cal_return_val[2]  = (INT8U)(par_ptr.birth_Laser_i[alignment]);
   att_cal_return_val[3]  = par_ptr.birth_Zorro_1P4_ref;
   att_cal_return_val[4]  = par_ptr.birth_SOS_freq;
   att_cal_return_val[5]  = (INT8U)(par_ptr.birth_diop >> 8);
   att_cal_return_val[6]  = (INT8U)(par_ptr.birth_diop);     
   att_cal_return_val[7]  = (INT8U)(par_ptr.birth_diop_ael >> 8);
   att_cal_return_val[8]  = (INT8U)(par_ptr.birth_diop_ael);     
   att_cal_return_val[11] = (INT8U)(par_ptr.birth_ldrive[alignment] >> 8);
   att_cal_return_val[12] = (INT8U)(par_ptr.birth_ldrive[alignment]);     
   att_cal_return_val[13] = (INT8U)(par_ptr.birth_vref >> 8);
   att_cal_return_val[14] = (INT8U)(par_ptr.birth_vref);     
   att_cal_return_val[15] = (INT8U)(par_ptr.birth_pd_leak >> 8);
   att_cal_return_val[16] = (INT8U)(par_ptr.birth_pd_leak);     
   att_cal_return_val[17] = par_ptr.birth_Temp;

   /* our index value is used as two different indices, one has  */
   /* four values the other one has three, thats why the check   */
   /* is needed here                                             */
   /* if the index value is greater than what these variables    */
   /* can do, then we return zeros for those fields.             */
   if(alignment < SCANANGLE_NUMANGLES)
   {
      att_cal_return_val[0]  = par_ptr.birth_range_sense[alignment];
      att_cal_return_val[9]  = (INT8U)(par_ptr.birth_pk0_pk180[alignment] >> 8);
      att_cal_return_val[10] = (INT8U)(par_ptr.birth_pk0_pk180[alignment]);     
   }
   else
   {
      att_cal_return_val[0]  = 0;
      att_cal_return_val[9]  = 0;
      att_cal_return_val[10] = 0;
   }
   
   /* return YAY                                                 */
   return att_cal_return_val;

}

/*********************************************************************                      
* Synopsis:         unsigned char *get_att_zorro_laser_params(void)
*
* Description:      returns the formated value of the calibration
*                   zorro parameters from the param_buf
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*
* Notes:            None 
**********************************************************************/
unsigned char *get_att_zorro_laser_params(void)
{

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   ZORRO_LASER_PARAMS par_ptr;

   /* initializes the values that are passed in by value         */
   att_zorro_init(&alignment, &par_ptr, ZORRO_LASER_func);

   att_cal_return_val[0] = par_ptr.bandgap_trim;
   att_cal_return_val[1] = par_ptr.bandgap_trim_N;
   att_cal_return_val[2] = par_ptr.laser_pwr[alignment];
   att_cal_return_val[3] = par_ptr.laser_pwr_N[alignment];
   att_cal_return_val[4] = par_ptr.r_sense_range[alignment];
   att_cal_return_val[5] = par_ptr.r_sense_range_N[alignment];
   att_cal_return_val[6] = par_ptr.big_q_en_chop;

   return att_cal_return_val;

}

/*********************************************************************                      
* Synopsis:         unsigned char *get_att_zorro_receiver_params(void)
*
* Description:      returns the formated value of the calibration
*                   zorro parameters from the param_buf
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*
* Notes:            None 
**********************************************************************/
unsigned char *get_att_zorro_receiver_params(void)
{

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   ZORRO_RECEIVER_PARAMS par_ptr;

   att_zorro_init(&alignment, &par_ptr, ZORRO_RECEIVER_func);

   att_cal_return_val[0] = par_ptr.Cap_Cal_En;
   att_cal_return_val[1] = par_ptr.GMC_Type_Course_Trim;
   att_cal_return_val[2] = par_ptr.GMC_Fine_Trim[(par_ptr.GMC_Type_Course_Trim) & 0x07];
   att_cal_return_val[3] = par_ptr.rcv_gain_1;
   att_cal_return_val[4] = par_ptr.rcv_gain_2;
   att_cal_return_val[5] = par_ptr.rcv_gain_3;
   att_cal_return_val[6] = par_ptr.rcv_gain_4;
   att_cal_return_val[8] = par_ptr.agc_output;
   /* GMC Filter Frequency is calculated internally and not a part of parameter buffer */
   att_cal_return_val[9] = g_gmc_filter_freq;

   /* our index value is used as two different indices, one has  */
   /* four values the other one has three, thats why the check   */
   /* is needed here                                             */
   /* if the index value is greater than what these variables    */
   /* can do, then we return zeros for those fields.             */
   if(alignment < SCANANGLE_NUMANGLES)
   {
      att_cal_return_val[7] = par_ptr.agc_leak_control[alignment];
   }
   else
   {
      att_cal_return_val[7] = 0;
   }

   return att_cal_return_val;

}

/*********************************************************************                      
* Synopsis:         unsigned char *get_att_zorro_motor_params(void)
*
* Description:      returns the formated value of the calibration
*                   zorro parameters from the param_buf
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*
* Notes:            None 
**********************************************************************/
unsigned char *get_att_zorro_motor_params(void)
{

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   ZORRO_MOTOR_PARAMS par_ptr;

   /* contains the zorro calibration structure as it is used    */
   /* by attribute routines                                      */
   att_zorro_init(&alignment, &par_ptr, ZORRO_MOTOR_func);

   /* our index value is used as two different indices, one has  */
   /* four values the other one has three, thats why the check   */
   /* is needed here                                             */
   /* if the index value is greater than what these variables    */
   /* can do, then we return zeros for those fields.             */
   if(alignment < SCANANGLE_NUMANGLES)
   {
      att_cal_return_val[0] = par_ptr.diff_gain[alignment];
      att_cal_return_val[1] = par_ptr.motor_fail_thr[alignment];
      att_cal_return_val[2] = par_ptr.scan_ang[alignment];
      att_cal_return_val[3] = par_ptr.motor_offset[alignment];
      att_cal_return_val[4] = par_ptr.motor_err_gain[alignment];
   }
   else
   {
      att_cal_return_val[0] = 0;
      att_cal_return_val[1] = 0;
      att_cal_return_val[2] = 0;
      att_cal_return_val[3] = 0;
      att_cal_return_val[4] = 0;
   }

   return att_cal_return_val;

}

/*********************************************************************                      
* Synopsis:         unsigned char *get_att_zorro_digitizer_params(void)
*
* Description:      returns the formated value of the calibration
*                   zorro parameters from the param_buf
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*
* Notes:            None 
**********************************************************************/
unsigned char *get_att_zorro_digitizer_params(void)
{

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   ZORRO_DIGITIZER_PARAMS par_ptr;

   /* contains the zorro calibration structure as it is used    */
   /* by attribute routines                                      */
   att_zorro_init(&alignment, &par_ptr, ZORRO_DIGITIZER_func);

   att_cal_return_val[1]  = par_ptr.dig_VF_diode;
   att_cal_return_val[3]  = par_ptr.dig_hyst;
   att_cal_return_val[4]  = par_ptr.win_dc_thr;
   att_cal_return_val[5]  = par_ptr.SPI_12H;
   att_cal_return_val[6]  = par_ptr.SPI_16H;
   att_cal_return_val[7]  = par_ptr.SPI_18H;

   /* our index value is used as two different indices, one has  */
   /* four values the other one has three, thats why the check   */
   /* is needed here                                             */
   /* if the index value is greater than what these variables    */
   /* can do, then we return zeros for those fields.             */
   if(alignment < SCANANGLE_NUMANGLES)
   {
      att_cal_return_val[0] = par_ptr.dig_leak_control[alignment];
      att_cal_return_val[2] = par_ptr.margin_thr[alignment];
   }
   else
   {
      att_cal_return_val[0] = 0;
      att_cal_return_val[2] = 0;
   }

   return att_cal_return_val;

}

/*********************************************************************                      
* Synopsis:         unsigned char *get_att_hard_engine_params(void)
*
* Description:      returns the formated value of the calibration
*                   zorro parameters from the param_buf
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*
* Notes:            None 
**********************************************************************/
unsigned char *get_att_hard_engine_params(void)
{

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   HARD_ENGINE_PARAMS par_ptr;

   /* contains the zorro calibration structure as it is used    */
   /* by attribute routines                                      */
   att_zorro_init(&alignment, &par_ptr, HARD_ENGINE_func);

   att_cal_return_val[0] = par_ptr.agc_hold_time_fraction;
   att_cal_return_val[1] = par_ptr.motor_fail_min;
   att_cal_return_val[2] = par_ptr.motor_fail_max;
   att_cal_return_val[3] = par_ptr.motor_kick_pulse_width;
   att_cal_return_val[4] = par_ptr.engine_ID;
   att_cal_return_val[5] = par_ptr.hardware_version;
   att_cal_return_val[6] = par_ptr.beam_clip_sos_mechanical_offset;
   att_cal_return_val[7] = par_ptr.dmux_flt_sos;
   att_cal_return_val[8] = par_ptr.test_bandit_ctrl;

   return att_cal_return_val;

}

/*********************************************************************                      
* Synopsis:         unsigned char get_att_engine_temp(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned char get_att_engine_temp(void)
{
   get_gs_adc_stm32_temp((unsigned char *)att_cal_return_val);
   return *(unsigned char *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_fault_status(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short get_att_fault_status(void)
{
#ifdef SE965
    ZORRO_ERRSTATUSREG sta;
    sta.all = 0; // no errors
    
    if (g_laserSafety->IsInFault(LSS_FaultAny))
    {
        sta.HEALTH_BITS.Las_Safety_PD_Leak          = g_laserSafety->IsInFault(LSS_PDLeak);
        sta.HEALTH_BITS.Motor_PK_OUT                = g_laserSafety->IsInFault(LSS_PK0_PK180);
        sta.HEALTH_BITS.Las_Safety_DIop             = g_laserSafety->IsInFault(LSS_DIOP);
        sta.HEALTH_BITS.Las_Safety_Beam_Clipping    = g_laserSafety->IsInFault(LSS_LaserOffChk);
        sta.HEALTH_BITS.Las_Safety_Power_ovrshoot   = g_laserSafety->IsInFault(LSS_LaserPower);
        sta.HEALTH_BITS.Las_Safety_Zorro_REF        = g_laserSafety->IsInFault(LSS_VRefRatio);
        sta.HEALTH_BITS.Las_Safety_Power_saturation = g_laserSafety->IsInFault(LSS_LaserDriveServoSat);
        sta.HEALTH_BITS.Motor_Fail                  = g_laserSafety->IsInFault(LSS_SOSMotorFail);
        sta.HEALTH_BITS.Zorro_Motor_FAIL_NOT        = g_laserSafety->IsInFault(LSS_ZorroMotorFail);
        sta.HEALTH_BITS.PDOpened                    = g_laserSafety->IsInFault(LSS_PDOpen);
        sta.HEALTH_BITS.LDDShorted                  = g_laserSafety->IsInFault(LSS_LDDShort);        
    }
    
    return sta.all;
#else
    return 0xFFFF;
#endif
}

/*********************************************************************
* Synopsis:         unsigned char *get_att_engine_registers_state(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned char   *get_att_engine_registers_state(void)
{
   ZORRO_SPI_Dump(att_cal_return_val);
   return att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_engine_first_strike(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            MSB MUST be zero 
**********************************************************************/
unsigned short get_att_engine_first_strike(void)
{
#ifdef SE965
    ZORRO_ERRSTATUSREG sta;

    sta.all = 0; // no errors
    
    if (g_laserSafety->HasFirstStrike(LSS_FaultAny))
    {
        sta.HEALTH_BITS.Las_Safety_PD_Leak          = g_laserSafety->HasFirstStrike(LSS_PDLeak);
        sta.HEALTH_BITS.Motor_PK_OUT                = g_laserSafety->HasFirstStrike(LSS_PK0_PK180);
        sta.HEALTH_BITS.Las_Safety_DIop             = g_laserSafety->HasFirstStrike(LSS_DIOP);
        sta.HEALTH_BITS.Las_Safety_Beam_Clipping    = g_laserSafety->HasFirstStrike(LSS_LaserOffChk);
        sta.HEALTH_BITS.Las_Safety_Power_ovrshoot   = g_laserSafety->HasFirstStrike(LSS_LaserPower);
        sta.HEALTH_BITS.Las_Safety_Zorro_REF        = g_laserSafety->HasFirstStrike(LSS_VRefRatio);
        sta.HEALTH_BITS.Las_Safety_Power_saturation = g_laserSafety->HasFirstStrike(LSS_LaserDriveServoSat);
        sta.HEALTH_BITS.Motor_Fail                  = g_laserSafety->HasFirstStrike(LSS_SOSMotorFail);
        sta.HEALTH_BITS.Zorro_Motor_FAIL_NOT        = g_laserSafety->HasFirstStrike(LSS_ZorroMotorFail);
        sta.HEALTH_BITS.PDOpened                    = g_laserSafety->HasFirstStrike(LSS_PDOpen);
        sta.HEALTH_BITS.LDDShorted                  = g_laserSafety->HasFirstStrike(LSS_LDDShort);
   }
    
    return sta.all;
#else
    return 0xFFFF;
#endif
}

/*********************************************************************
* Synopsis:         unsigned char get_att_scan_angle_currently_used(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned char   get_att_scan_angle_currently_used(void)
{
   return FAT_get_alignment_mode();
}

/*********************************************************************
* Synopsis:         unsigned char get_att_se_sos_freq(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned char   get_att_se_sos_freq(void)
{
   return get_SOS_freq();
}

/*********************************************************************
* Synopsis:         unsigned char get_att_se_sos_duty_cycle(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned char   get_att_se_sos_duty_cycle(void)
{
   return get_SOS_Duty_Cycle();
}

/*********************************************************************
* Synopsis:         unsigned char get_att_se_range_finder_voltage(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned char   get_att_se_range_finder_voltage(void)
{
   get_gs_adc_range_finder((unsigned char *)att_cal_return_val);
   return *(unsigned char *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned char get_att_se_pk_mtr_fail_voltage(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned char   get_att_se_pk_mtr_fail_voltage(void)
{
   get_gs_adc_pk_mtr_fail((unsigned char *)att_cal_return_val);
   return *(unsigned char *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_se_laser_current(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_se_laser_current(void)
{
   get_gs_adc_Laser_i((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short  get_att_se_laser_power(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_se_laser_power(void)
{
   get_gs_adc_ldrive((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_se_diop_value(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_se_diop_value(void)
{
   get_gs_adc_diop_val((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_se_diop_ael_value(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_se_diop_ael_value(void)
{
   get_gs_adc_diop_ael((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_zorro_one_four_v(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_zorro_one_four_v(void)
{
   get_gs_adc_V1p4((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short  get_att_zorro_cortex_ratio(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_zorro_cortex_ratio(void)
{
   get_gs_adc_vref((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_pd_leak(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_pd_leak(void)
{
   get_gs_adc_pd_leak((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_cortex_1p2v(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_cortex_1p2v(void)
{
   get_gs_adc_cortex_1p2v((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_se_pk_out_180_value(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_se_pk_out_180_value(void)
{
   get_gs_adc_pk0_pk180((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_cortex_factory_value(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_cortex_factory_value(void)
{
   get_gs_adc_cortex_1p2v_factory((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned short get_att_range_finder_voltage(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned short
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned short  get_att_range_finder_voltage(void)
{
   get_gs_adc_range((unsigned short *)att_cal_return_val);
   return *(unsigned short *) att_cal_return_val;
}

/*********************************************************************
* Synopsis:         unsigned char *get_att_special_section(void)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
unsigned char  *get_att_special_section(void)
{
   return (unsigned char *) PAR_special_section(NULL, FALSE);
}

/*********************************************************************
* Synopsis:         void set_att_scan_angle_currently_used(unsigned char val)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     None
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
void set_att_scan_angle_currently_used(unsigned char val)
{
   FAT_set_alignment_mode(val);
}

/*********************************************************************                      
* Synopsis:         void set_att_zorro_birth_data_params(unsigned char *att_value)
*
* Description:      takes the data from an attribute formated calibration
*                   parameter and stores it into the param_buf in
*                   parameter format.
*
* Parameters:       att_value .... a pointer to an attribute structure
*                                  containing the data that will end
*                                  up in the param_buf
* 
* Return Value:     None
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*                   ATT_get_attribute_mode ... checks if we are in FAT
*                   PAR_change_params ........ changes a parameter
*
* Notes:            None 
**********************************************************************/
void set_att_zorro_birth_data_params(unsigned char *att_value)
{
   PAR_CHANGE_INFO change_info;

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   ZORRO_BIRTH_DATA_PARAMS par_ptr;

   att_zorro_init(&alignment, &par_ptr, ZORRO_BIRTH_func);

   par_ptr.birth_Laser_i[alignment] = ((INT16U)(att_value[1]  << 8)|(INT16U)att_value[2]);
   par_ptr.birth_Zorro_1P4_ref      = att_value[3];
   par_ptr.birth_SOS_freq           = att_value[4];
   par_ptr.birth_diop               = ((INT16U)(att_value[5]  << 8)|(INT16U)att_value[6]);
   par_ptr.birth_diop_ael           = ((INT16U)(att_value[7]  << 8)|(INT16U)att_value[8]);
   par_ptr.birth_ldrive[alignment]  = ((INT16U)(att_value[11] << 8)|(INT16U)att_value[12]);
   par_ptr.birth_vref               = ((INT16U)(att_value[13] << 8)|(INT16U)att_value[14]);
   par_ptr.birth_pd_leak            = ((INT16U)(att_value[15] << 8)|(INT16U)att_value[16]);
   par_ptr.birth_Temp               = att_value[17];

   /* our index value is used as two different indices, one has  */
   /* four values the other one has three, thats why the check   */
   /* is needed here                                             */
   /* if the index value is greater than what these variables    */
   /* can do, then we leave the variable as is                   */
   if(alignment < SCANANGLE_NUMANGLES)
   {
      par_ptr.birth_range_sense[alignment] = att_value[0];
      par_ptr.birth_pk0_pk180[alignment]   = ((INT16U)(att_value[9] << 8)|(INT16U)att_value[10]);
   }

   /* populate the change_info variable for PAR_change params    */
   change_info.param_num    = NUM_ZORRO_BIRTH_DATA_PARAMS;
   change_info.value        = &par_ptr;
   change_info.length       = PAR_ZORRO_BIRTH_SIZE;
   change_info.offset       = 0;
   change_info.change_type  = TEMPORARY;
   change_info.param_action = NO_ACTION;
   change_info.source       = SETTINGS_SOURCE_API;

   if(ATT_get_attribute_mode() == ATT_MODE_SYSTEM)
   {
      /* just write the value in FAT mode */
      PAR_change_params(&change_info,1);      
   }

   /* there is no need for writing to any zorro registers here,  */
   /* because zorro birth parameters are just meant to be stored  */
   /* in memory and zorro will check the memory when it needs    */
   /* these values                                               */

}

/*********************************************************************                      
* Synopsis:         void set_att_zorro_laser_params(unsigned char *att_value)
*
* Description:      takes the data from an attribute formated calibration
*                   parameter and stores it into the param_buf in
*                   parameter format.
*
* Parameters:       att_value .... a pointer to an attribute structure
*                                  containing the data that will end
*                                  up in the param_buf
* 
* Return Value:     None
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*                   ATT_get_attribute_mode ... checks if we are in FAT
*                   PAR_change_params ........ changes a parameter
*
* Notes:            None 
**********************************************************************/
void set_att_zorro_laser_params(unsigned char *att_value)
{

   PAR_CHANGE_INFO change_info;

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   ZORRO_LASER_PARAMS par_ptr;

   att_zorro_init(&alignment, &par_ptr, ZORRO_LASER_func);

   par_ptr.bandgap_trim                  = att_value[0];
   par_ptr.bandgap_trim_N                = att_value[1];
   par_ptr.laser_pwr[alignment]          = att_value[2];
   par_ptr.laser_pwr_N[alignment]        = att_value[3];
   par_ptr.r_sense_range[alignment]      = att_value[4];
   par_ptr.r_sense_range_N[alignment]    = att_value[5];
   par_ptr.big_q_en_chop                 = att_value[6];

   /* populate the change_info variable for PAR_change params    */
   change_info.param_num    = NUM_ZORRO_LASER_PARAMS;
   change_info.value        = &par_ptr;
   change_info.length       = PAR_ZORRO_LASER_SIZE;
   change_info.offset       = 0;
   change_info.change_type  = TEMPORARY;
   change_info.param_action = NO_ACTION;
   change_info.source       = SETTINGS_SOURCE_API;

   if(ATT_get_attribute_mode() == ATT_MODE_SYSTEM)
   {
      /* just write the value in FAT mode */
      PAR_change_params(&change_info,1);      
   }

   /* updating the zorro registers based on the values given */

   /* update ZORRO Bandgap, Sec Obs & laser trim Registers */
   ZORRO_write(reg_BIGQ_CHOP, PARAM_BIG_Q_EN_CHOP);

  /* update ZORRO Laser Power, and                               */
  /* Check for integrity of Laser POT and BANDGAP settings       */
  /* checking that complement data matches ~data                 */

  ZORRO_set_laser_power(alignment);
}

/*********************************************************************                      
* Synopsis:         void set_att_zorro_receiver_params(unsigned char *att_value)
*
* Description:      takes the data from an attribute formated calibration
*                   parameter and stores it into the param_buf in
*                   parameter format.
*
* Parameters:       att_value .... a pointer to an attribute structure
*                                  containing the data that will end
*                                  up in the param_buf
* 
* Return Value:     None
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*                   ATT_get_attribute_mode ... checks if we are in FAT
*                   PAR_change_params ........ changes a parameter
*
* Notes:            None 
**********************************************************************/
void set_att_zorro_receiver_params(unsigned char *att_value)
{

   PAR_CHANGE_INFO change_info;

   /* needed for zorro register routines */
   INT8U data;
   INT8U filter_idx = att_value[1];

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   ZORRO_RECEIVER_PARAMS par_ptr;

   att_zorro_init(&alignment, &par_ptr, ZORRO_RECEIVER_func);

      /* routine for setting the zorro digtial mux based on the     */
   /* par_ptr.Cap_Cal_En                                         */

   if( TESTBIT(att_value[0], CAL_ENBL) ) 
   {
      if(!get_g_fat_gmc_mode()) 
      {
         /* setup Zorro Digital MUX for correct channel */
         ZORRO_set_digital_mux(DMUX_FRQNCY_OUT); 
         /* flag used in Timer ISR */
         set_g_fat_gmc_mode(TRUE);
         /* init. GMC filter Timer only once */
         Timer_3_Init(GMC_FILTER_MODE);
      }
   }
   else 
   {
      DMA_Cmd(DMA_Channel2, DISABLE);
      TIM_Cmd(TIM3, DISABLE);
      set_g_fat_gmc_mode(FALSE);
   }

   par_ptr.Cap_Cal_En                       = att_value[0];
   par_ptr.GMC_Type_Course_Trim             = att_value[1];
   par_ptr.GMC_Fine_Trim[filter_idx & 0x07] = att_value[2];
   par_ptr.rcv_gain_1                       = att_value[3];
   par_ptr.rcv_gain_2                       = att_value[4];
   par_ptr.rcv_gain_3                       = att_value[5];
   par_ptr.rcv_gain_4                       = att_value[6];
   par_ptr.agc_output                       = att_value[8];

   /* We don't write to gmc_filter_freq it is calculated         */

   /* our index value is used as two different indices, one has  */
   /* four values the other one has three, thats why the check   */
   /* is needed here                                             */
   /* if the index value is greater than what these variables    */
   /* can do, then we leave the variable as is                   */

   if(alignment < SCANANGLE_NUMANGLES)
   {
      par_ptr.agc_leak_control[alignment] = att_value[7];
   }

   /* populate the change_info variable for PAR_change params    */
   change_info.param_num    = NUM_ZORRO_RECEIVER_PARAMS;
   change_info.value        = &par_ptr;
   change_info.length       = PAR_ZORRO_RECEIVER_SIZE;
   change_info.offset       = 0;
   change_info.change_type  = TEMPORARY;
   change_info.param_action = NO_ACTION;
   change_info.source       = SETTINGS_SOURCE_API;

   if(ATT_get_attribute_mode() == ATT_MODE_SYSTEM)
   {
      //just write the value in FAT mode
      PAR_change_params(&change_info,1);      
   }

   /* updating the zorro registers based on the values given */
   ZORRO_set_receiver_settings(alignment);

}

/*********************************************************************                      
* Synopsis:         void set_att_zorro_motor_params(unsigned char *att_value)
*                                          
* Description:      takes the data from an attribute formated calibration
*                   parameter and stores it into the param_buf in
*                   parameter format.
*
* Parameters:       att_value .... a pointer to an attribute structure
*                                  containing the data that will end
*                                  up in the param_buf
* 
* Return Value:     None
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*                   ATT_get_attribute_mode ... checks if we are in FAT
*                   PAR_change_params ........ changes a parameter
*
* Notes:            None 
**********************************************************************/
void set_att_zorro_motor_params(unsigned char *att_value)
{
   PAR_CHANGE_INFO change_info;

   /* needed for zorro register routines */
   INT8U temp;

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                     */
   ZORRO_MOTOR_PARAMS par_ptr;

   g_UpdateMotorParams = TRUE;

   att_zorro_init(&alignment, &par_ptr, ZORRO_MOTOR_func);

   /* our index value is used as two different indices, one has  */
   /* four values the other one has three, thats why the check   */
   /* is needed here                                             */
   /* if the index value is greater than what these variables    */
   /* can do, then we leave the variable as is                   */
   if(alignment < SCANANGLE_NUMANGLES)
   {
      par_ptr.diff_gain[alignment]        = att_value[0];
      par_ptr.motor_fail_thr[alignment]   = att_value[1];
      par_ptr.scan_ang[alignment]         = att_value[2];
      par_ptr.motor_offset[alignment]     = att_value[3];
      par_ptr.motor_err_gain[alignment]   = att_value[4];
   }

   /* populate the change_info variable for PAR_change params    */
   change_info.param_num    = NUM_ZORRO_MOTOR_PARAMS;
   change_info.value        = &par_ptr;
   change_info.length       = PAR_ZORRO_MOTOR_SIZE;
   change_info.offset       = 0;
   change_info.change_type  = TEMPORARY;
   change_info.param_action = NO_ACTION;
   change_info.source       = SETTINGS_SOURCE_API;

   if(ATT_get_attribute_mode() == ATT_MODE_SYSTEM)
   {
      /* just write the value in FAT mode */
      PAR_change_params(&change_info,1);      
   }
}

/*********************************************************************                      
* Synopsis:         void set_att_zorro_digitizer_params(unsigned char *att_value)
*
* Description:      takes the data from an attribute formated calibration
*                   parameter and stores it into the param_buf in
*                   parameter format.
*
* Parameters:       att_value .... a pointer to an attribute structure
*                                  containing the data that will end
*                                  up in the param_buf
* 
* Return Value:     None
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*                   ATT_get_attribute_mode ... checks if we are in FAT
*                   PAR_change_params ........ changes a parameter
*
* Notes:            None 
**********************************************************************/
void set_att_zorro_digitizer_params(unsigned char *att_value)
{

   PAR_CHANGE_INFO change_info;

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* needed for zorro register routines */
   INT8U data;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   ZORRO_DIGITIZER_PARAMS par_ptr;

   att_zorro_init(&alignment, &par_ptr, ZORRO_DIGITIZER_func);

   par_ptr.dig_VF_diode   = att_value[1];
   par_ptr.dig_hyst       = att_value[3];
   par_ptr.win_dc_thr     = att_value[4];
   par_ptr.SPI_12H        = att_value[5];
   par_ptr.SPI_16H        = att_value[6];
   par_ptr.SPI_18H        = att_value[7];

   /* our index value is used as two different indices, one has  */
   /* four values the other one has three, thats why the check   */
   /* is needed here                                             */
   /* if the index value is greater than what these variables    */
   /* can do, then we leave the variable as is                   */
   if(alignment < SCANANGLE_NUMANGLES)
   {
      par_ptr.dig_leak_control[alignment] = att_value[0];
      par_ptr.margin_thr[alignment]       = att_value[2];
   }

   /* populate the change_info variable for PAR_change params    */
   change_info.param_num    = NUM_ZORRO_DIGITIZER_PARAMS;
   change_info.value        = &par_ptr;
   change_info.length       = PAR_ZORRO_DIGITIZER_SIZE;
   change_info.offset       = 0;
   change_info.change_type  = TEMPORARY;
   change_info.param_action = NO_ACTION;
   change_info.source       = SETTINGS_SOURCE_API;

   if(ATT_get_attribute_mode() == ATT_MODE_SYSTEM)
   {
      /* just write the value in FAT mode */
      PAR_change_params(&change_info,1);      
   }
   /* updating the zorro registers based on the values given */
   ZORRO_set_digitizer_settings(alignment);
}

/*********************************************************************                      
* Synopsis:         void set_att_hard_engine_params(unsigned char *att_value)
*
* Description:      takes the data from an attribute formated calibration
*                   parameter and stores it into the param_buf in
*                   parameter format.
*
* Parameters:       att_value .... a pointer to an attribute structure
*                                  containing the data that will end
*                                  up in the param_buf
* 
* Return Value:     None
*
* External Calls:   att_zorro_init ... gets values from FAT and param_buf
*                                      for the alignment and par_ptr vars
*                   ATT_get_attribute_mode ... checks if we are in FAT
*                   PAR_change_params ........ changes a parameter
*
* Notes:            None 
**********************************************************************/
void set_att_hard_engine_params(unsigned char *att_value)
{

   PAR_CHANGE_INFO change_info;

   /* alignment is the index value for some of the fields        */
   INT8U alignment;

   /* contains the zorro calibration structure as it is used    */
   /* by parameter routines                                      */
   HARD_ENGINE_PARAMS par_ptr;

   att_zorro_init(&alignment, &par_ptr, HARD_ENGINE_func);

   par_ptr.agc_hold_time_fraction           = att_value[0];
   par_ptr.motor_fail_min                   = att_value[1];
   par_ptr.motor_fail_max                   = att_value[2];
   par_ptr.motor_kick_pulse_width           = att_value[3];
   par_ptr.engine_ID                        = att_value[4];
   par_ptr.hardware_version                 = att_value[5];
   par_ptr.beam_clip_sos_mechanical_offset  = att_value[6];
   par_ptr.dmux_flt_sos                     = att_value[7];
   par_ptr.test_bandit_ctrl                 = att_value[8];

   /* populate the change_info variable for PAR_change params    */
   change_info.param_num    = NUM_HARD_ENGINE_PARAMS;
   change_info.value        = &par_ptr;
   change_info.length       = PAR_HARD_ENGINE_SIZE;
   change_info.offset       = 0;
   change_info.change_type  = TEMPORARY;
   change_info.param_action = NO_ACTION;
   change_info.source       = SETTINGS_SOURCE_API;

   if(ATT_get_attribute_mode() == ATT_MODE_SYSTEM)
   {
      /* just write the value in FAT mode */
      PAR_change_params(&change_info,1);      
   }

   /* updating the registers based on the values given */
   ZORRO_write(reg_DMUX_FLT_SOS, att_value[7]);
   ZORRO_write(reg_TEST_AND_BANDIT_CTRL, att_value[8]);

}

/*********************************************************************
* Synopsis:         set_att_special_section(unsigned char* att_val)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
void set_att_special_section(unsigned char* att_val)
{
   PAR_special_section((SPECIAL_PARAMS *)att_val, TRUE);
}

/*********************************************************************
* Synopsis:         set_att_enter_calibration(unsigned char *att_value)
*
* Description:      None
*
* Parameters:       None
* 
* Return Value:     unsigned char*
*
* External Calls:   None
*
* Notes:            None 
**********************************************************************/
void set_att_enter_calibration(unsigned char *att_value)
{
   set_g_fat_calibration(*att_value);
   
   if(*att_value == 1)
   {
      g_laserControl->CalStart();
   }
   else
   {
      g_laserControl->CalStop();
   }
}
#endif // #ifdef SE965

#if defined(ODYSSEY)
/****************************************************************************
* Synopsis:        void select_sensor(BYTE *sensor)
*
* Description:     RSM set access for selecting a sensor for image/video capture 
*                  in case of multi sensor systems
*
* Call Parameters: val - byte command
*
* Values Returned: none
*
* Notes:           None
****************************************************************************/
void select_sensor(BYTE *sensor)
{
   ACQ_sensor_select((SENSOR_SELECT_E)(*sensor));
}

/****************************************************************************
* Synopsis:        void set_num_images_averaged(BYTE *value)
*
* Description:     RSM set access for specifying the number of images to be 
*                  averaged before image/video transfer
*
* Call Parameters: val - byte command
*
* Values Returned: none
*
* Notes:           None
****************************************************************************/
void set_num_images_averaged(BYTE *value)
{
   image_set_num_images_averaged(*value);
}

/****************************************************************************
* Synopsis:       BYTE get_selected_sensor(void) 
*
* Description:     RSM get access to get the information on selected sensor 
*                  for Image Transfer
*
* Call Parameters: None
*
* Values Returned: BYTE
*
* Notes:           None
****************************************************************************/
BYTE get_selected_sensor(void) 
{
   return (BYTE)ACQ_get_selected_sensor();
}

/****************************************************************************
* Synopsis:        BYTE get_num_images_averaged(void)
*
* Description:     RSM get access for number of images averaged during  
*                  image transfer
*
* Call Parameters: None
*
* Values Returned: BYTE
*
* Notes:           None
****************************************************************************/
BYTE get_num_images_averaged(void)
{
   return image_get_num_images_averaged();
}
#endif

#if defined(INCLUDE_SCALE)
/****************************************************************************
* Synopsis:        unsigned long get_scale_weight_min(void)
*
* Description:     RSM get access for minimum scale weight
* 
****************************************************************************/
unsigned long get_scale_weight_min(void)
{
   return SCALE_getWeightMin();
}

/****************************************************************************
* Synopsis:        unsigned long get_scale_weight_max(void)
*
* Description:     RSM get access for maximum scale weight
* 
****************************************************************************/
unsigned long get_scale_weight_max(void)
{
   return SCALE_getWeightMax();
}
#endif

/****************************************************************************
* Synopsis:        BOOL isInfSupported(INT16U interface)
*
* Description:     Determine if the input interface is supported
* 
****************************************************************************/
static BOOL isInfSupported(INT16U interface)
{
    char i;
    for (i = 0; i < NUMELS(supportedInterfaces); i++) {
        if (interface == supportedInterfaces[i]) {
            return TRUE;
        }
    }
    return FALSE;
}

/****************************************************************************
* Synopsis:        INT8U* get_SupportedInterfaceBitmap(INT8U* pLen)
*
* Description:     Creates a bitmap of supported interfaces. This bitmap is
*                  populated into a USB string descriptor for Corescanner purposes.
*
* The bitmap format is; X0 X1 X2 X3 � X10"
*  Where Xn will always be a displayable character '0-7' (uses 3 lsbits)
*      X0: Binary value ' 0b00110xyz, where 'x'=USBHID,        'y'=USB-IBM-HH,    'z'=USB-IBM-TT
*      X1: Binary value ' 0b00110xyz, where 'x'=USB-SNAPI-IMG, 'y'=USB-SNAPI,     'z'=USB-OPOS_HH
*      X2: Binary value ' 0b00110xyz, where 'x'=USB-CDC,       'y'=USB-CDC_SSI,   'z'=USB-TOSHIBATEC*
*      X3: Binary value ' 0b00110xyz, where 'x'=USB-SUPA,      'y'=USB-ACTIVESYNC,'z'=USB-COM_EMUL*
*
* Notes: 
*  1) This bitmap definition cannot change and must be consistant across all products. It 
*     can be extended.
*
****************************************************************************/
INT8U* get_SupportedInterfaceBitmap(INT8U* pLen)
{
   static INT8U supportedInterfaceBitmap[4]; // Can be increased as new interfaces are added

   /* This fn must be sync'd with and include all USB interfaces listed in 'INF_TYPES'. This next line is a runtime check at USB enum to verify. 
      If this test fails then add the new 'INF_USB_xxx' interface & change the #define INF_USB_LAST 'INF_USB_xxxxx' on the next line */
   #define INF_USB_LAST INF_USB_HID_POS // Change when an interface is added  
   ASSERT_MSG(INF_USB_LAST == (INF_USB_MAX-1), "RSM:Err:need to add a new 'INF_USB_xxx' to this fn"); // Runtime check, may fail/hang on USB enumeration

   supportedInterfaceBitmap[0] = 0x30 + ((isInfSupported(INF_USB_HID_KBD))   << 2) + ((isInfSupported(INF_USB_IBM_HAND))   << 1) + ((isInfSupported(INF_USB_IBM_TABLE))  << 0);
   supportedInterfaceBitmap[1] = 0x30 + ((isInfSupported(INF_USB_SNAPI_IMG)) << 2) + ((isInfSupported(INF_USB_SNAPI))      << 1) + ((isInfSupported(INF_USB_OPOS_HAND))  << 0);
   supportedInterfaceBitmap[2] = 0x30 + ((isInfSupported(INF_USB_CDC))       << 2) + ((isInfSupported(INF_USB_CDC_SSI))    << 1) + ((isInfSupported(INF_USB_TOSHIBATEC)) << 0);
   supportedInterfaceBitmap[3] = 0x30 + ((isInfSupported(INF_USB_SUPA))      << 2) + ((isInfSupported(INF_USB_ACTIVESYNC)) << 1) + ((isInfSupported(INF_USB_COM_EMUL))   << 0);
 //supportedInterfaceBitmap[4] = 0x30 + ((isInfSupported(INF_USB_xxxx))      << 2) + ((0)                                  << 1) + ((0)                                  << 0);
   // more interfaces can be added here
   *pLen = sizeof(supportedInterfaceBitmap); // return len of this array
   return supportedInterfaceBitmap;
}




/****************************************************************************
* Synopsis:        unsigned char  get_dllwrap_supported(void)
*
* Description:     
* 
****************************************************************************/
unsigned char  get_dllwrap_supported(void)
{
#if defined(INCLUDE_DLLWRAP) || defined(INCLUDE_SSC_DRM)
   return TRUE;
#else
   return NULL;
#endif
}


/****************************************************************************
* Synopsis:        char *get_dllwrap_dlp_loaded(void)
*
* Description:     
* 
****************************************************************************/
char *get_dllwrap_dlp_loaded(void)
{
#if defined(INCLUDE_DLLWRAP) || defined(INCLUDE_SSC_DRM)
   return (char *)DL_dllwrap_dlp_loaded();
#else
   return NULL;
#endif
}

/****************************************************************************
* Synopsis:        char *get_dllwrap_dlp_version(void)
*
* Description:     
* 
****************************************************************************/
char *get_dllwrap_dlp_version(void)
{
#if defined(INCLUDE_DLLWRAP) || defined(INCLUDE_SSC_DRM)
   return (char *)DL_dllwrap_dlp_version();
#else
   return NULL;
#endif
}

/****************************************************************************
* Synopsis:        unsigned char  get_dllwrap_dlp_activated(void)
*
* Description:     
* 
****************************************************************************/
unsigned char  get_dllwrap_dlp_activated(void)
{
#ifdef INCLUDE_SSC_DRM
   return (DRM_Feature_isLicensed(DRM_DL_PARSE) == TRUE? 1:0); 
#elif defined(INCLUDE_DLLWRAP)
   return DL_dllwrap_dlp_activated();
#else
   return NULL;
#endif
}
#if defined(INCLUDE_SSC_DRM)
/****************************************************************************
* Synopsis:        unsigned char  get_drm_license_activated(void)
*
* Description:     
* 
****************************************************************************/
INT8U get_drm_license_activated(void)
{   
   return DRM_License_Last_Load_Is_Valid();
}

/****************************************************************************
* Synopsis:        unsigned char  get_drm_feature_list(void)
*
* Description:     return full software feature list
* 
****************************************************************************/
INT8U* get_drm_feature_list(void)
{
   return DRM_Feature_List();
}

/****************************************************************************
* Synopsis:        unsigned char  get_drm_license_supported(void)
*
* Description:     return activated license list
* 
****************************************************************************/
INT8U* get_drm_license_supported(void)
{ 
	 return DRM_License_List(); 
} 

/****************************************************************************
* Synopsis:        INT8U *get_drm_license_key(void)
*
* Description:     
* 
****************************************************************************/
INT8U *get_drm_license_key(void)
{   
   return DRM_License_Get_Key(drm_lk_index);
}

/****************************************************************************
* Synopsis:        void set_drm_lk_index(INT8U *value)
*
* Description:     
* 
****************************************************************************/
void set_drm_lk_index(INT8U *value)
{   
	 if(*value < LICENSE_KEY_COUNT)
       drm_lk_index = *value;
}

/****************************************************************************
* Synopsis:        void get_drm_lk_index(void)
*
* Description:     
* 
****************************************************************************/
INT8U get_drm_lk_index(void)
{   
   return drm_lk_index;
}
#endif

#if defined(AUDIO_DOWNLOAD)
/****************************************************************************
* Synopsis:        void  downloadable_decode_tone_write(void)
*
* Description:     Commits decode tone audio file to flash memory
* 
****************************************************************************/
void set_downloadable_decode_tone(unsigned char *value)
{
// vg...   UIF_writeUserAudioFile(value, ATT_get_audio_download_offset(), ATT_get_audio_download_length(), ATT_get_audio_download_totalLength());
   UIF_writeDecodeAudioFile(value, ATT_get_audio_download_offset(), ATT_get_audio_download_length(), ATT_get_audio_download_totalLength());

}

/****************************************************************************
* Synopsis:        void  downloadable_decode_tone_read(void)
*
* Description:     Gets decode tone audio file from flash memory
* 
****************************************************************************/
INT8U* get_downloadable_decode_tone(void)
{
// vg...   return UIF_soundsUserAudioRead();
   return UIF_soundsDecodeAudioRead();

}


/****************************************************************************
* Synopsis:        void  downloadable_decode_tone_status_read(void)
*
* Description:     Gets decode tone audio file status
* 
****************************************************************************/
unsigned char get_downloadable_decode_tone_status(void)
{
// vg...   return UIF_soundsGetUserAudioStatus();
   return UIF_soundsGetUserAudioStatus(DECODE_AUDIO);

}


/****************************************************************************
* Synopsis:        void  set_downloadable_decode_tone_erase(INT8U *value)
*
* Description:     Erases decode tone audio file in flash & updates status
* 
****************************************************************************/
void set_downloadable_decode_tone_erase(INT8U *value)
{
// vg...   UIF_soundsUserAudioErase();
   UIF_soundsUserAudioErase(DECODE_AUDIO);

}

/****************************************************************************
* Synopsis:        void  set_downloadable_decode_tone_filename(INT8U *value)
*
* Description:     
* 
****************************************************************************/
void set_downloadable_decode_tone_filename(INT8U *value)
{
// vg...   UIF_soundsUserAudioFileNameWrite(value);
   UIF_soundsDecodeAudioFileNameWrite(value);

}


/****************************************************************************
* Synopsis:        INT8U* get_downloadable_decode_tone_filename(void)
*
* Description:     
* 
****************************************************************************/
INT8U* get_downloadable_decode_tone_filename(void)
{
// vg...   return UIF_soundsUserAudioFileNameRead();
   return UIF_soundsDecodeAudioFileNameRead();

} 
#endif // end of all custom decode audio download functions

/******************************************************************************
* Synopsis:       INT8U get_downloadble_cfg_support(void)
*
* Description:    Support params download from a 'Param Config' DAT file
*
* Parameters:     void
*
* Return Value:   0=Not Supported, >0:Supported and Revision
*
* Notes:          If attribute does not exist the feature is not supported. 
                  Exception is MP7000 Rev-A, where attribute does not exist 
                  but feature is supported.
******************************************************************************/
INT8U get_downloadble_cfg_support(void)
{
#if defined(INCLUDE_XMLCFG)
   return 1;
#else
   return 0;
#endif
}

#if defined(INCLUDE_ALLY)
/******************************************************************************
* Synopsis:       INT8U get_ally_eeprom_read(void)
*
* Description:    Gets 128 bytes of Ally eeprom memory
*
* Parameters:     void
*
* Return Value:   128 byte array
*
* Notes:          
                  
                  
******************************************************************************/
INT8U* get_ally_eeprom_read(void)
{
   return ALLY_extendedEepromDump();
}
#endif
/******************************************************************************
* Synopsis:       void default_status_block(INT8U *value) 
*
* Description:    Invalidates the status block on a TAA model config
*
* Parameters:     non-zero value
*
* Return Value:   none
*
* Notes:     DS9908-HD4000WZTWW, DS9908-HD5000WZTUS                    
*                           ^                   ^
******************************************************************************/
void default_status_block(INT8U *value)
{
   if ((*value) && (PARAM_MODEL_NUMBER[15] == 'T'))
   {
      //This is a TAA model, so ok to invalidate the status block
      force_default_SB();
   }
}

#ifdef RESET_CAUSE_DETECTION
char *get_last_reset_info(void)
{
   extern char   assert_file[];
   extern INT32U assert_line;
   if (assert_line > 0 && assert_line < 100000) // sorta validate
   {
      static char reset_info[30];
      sprintf(reset_info,"%s %d", &assert_file, assert_line);
      return reset_info;
   }
   else
      return "";
}
#endif

// ******************************************************************************/
#ifdef INCLUDE_ICON_OBJDET
char *get_objdet_thresholds(void)
{  
   static char odThresholds[32];

//PE   (void)ObjDet_getTileThresholds((INT8U *)odThresholds);

   return odThresholds;
}
#endif

#ifdef ADF2
/****************************************************************************
* Synopsis:        set_adf2_rule_set_state (INT8U *value)
*
* Description:     This function sets the current state of the ADF rule sets
*                  based on a bit mask
* 
****************************************************************************/
void set_adf2_rule_set_state (INT16U *value)
{   
   INT8U i;
#if !defined(CRADLE_PROD)
   for (i=0; i< NUM_DATF_FLAG; i++) {
      if (*value & 1<<i) {
         datf_flag[i] = TRUE;  
      }
      else{
         datf_flag[i] = FALSE;  
      }
   }
#endif
}

/****************************************************************************
* Synopsis:        INT8U get_adf2_rule_set_state(void)
*
* Description:     This function builds a bit mask of the current state of
*                  the ADF rule sets
* 
****************************************************************************/
INT16U get_adf2_rule_set_state(void)
{  
   INT8U i;
   INT16U mask = 0;
#if !defined(CRADLE_PROD)
   for (i=0; i< NUM_DATF_FLAG; i++) {
      if (datf_flag[i]) {
         mask |= 1<<i;  
      }
   }
#endif 
   return mask;
} 
#endif



#ifdef ADF2_SYNTAX
/******************************************************************************
* Synopsis:       INT8U get_adf_syntax_error_count(void)
*
* Description:    Provide feedback on the contents of the ADF2 param buffer contents
*
* Parameters:     void
*
* Return Value:   0=No syntax errors in ADF rules, >0:Errors found
*
******************************************************************************/
INT8U get_adf2_syntax_error_count(void)
{
#ifdef ADF2_MERGE    
   return (adf2_error_count());
#else
   return (0);
#endif   
}

#endif

/*********************************************************************                      
* Synopsis:         char *get_physical_device_name(void)
*
* Description:      Returns a pointer to the device name
*
* Return Value:     char pointer
*
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_physical_device_name(void)
{   
   return (char *)physical_device_name;
}

/*********************************************************************                      
* Synopsis:         char *get_model_name(void)
*
* Description:      Returns a pointer to top level model name  (ex DS8178-SR)
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       Display family name and type.  Ex : DS8178-HC, DS8108-DL
*
**********************************************************************/
char *get_model_name(void)
{  
   memset(top_level_name, 0, MAX_MODEL_NAME);
   memcpy(top_level_name, ADDR_PARAM_MODEL_NUMBER, MODEL_CHARS_TO_DISPLAY);

   return (char *)top_level_name;
}

/*********************************************************************                      
* Synopsis:         INT8U get_bus_type(void)
*
* Description:      Returns a pointer to the RSM version bus type
*
* Return Value:     char pointer
*
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
INT8U get_bus_type(void)
{   
   BYTE host;
   INT8U retval;

   host = host_get_current_host();

   switch (host)
   {
      case HOST_USB:
      case HOST_SSI_LITE:
         retval = BUS_USB;
         break;

      case HOST_RS232:
         retval = BUS_RS232;
         break;

      default:
         retval = 0xFF;
         break;
   }

   return(retval);
}


/*********************************************************************                      
* Synopsis:         char *device_id(void)
*
* Description:      Returns a pointer to the RSM version
*
* Return Value:     char pointer
*
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
INT8U get_device_category(void)
{   
   char *top_level_name;
   
   top_level_name = get_model_name();
   
   if (top_level_name[5] >= '1')
   {
      return FLATBED_WITH_SCALE;   
   }
   else
   {
      return FLATBED_SCANNER;
   }
}

/*********************************************************************                      
* Synopsis:         char *device_id(void)
*
* Description:      Returns a pointer to the RSM version
*
* Return Value:     char pointer
*
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_device_id(void)
{   
   // same as physical device name
   return (char *)physical_device_name;
}

/*********************************************************************                      
* Synopsis:         char *get_manufacturer_name(void)
*
* Description:      Returns a pointer to the manufacturer name
*
* Parameters:       None
*
* Return Value:     char pointer
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
char *get_manufacturer_name(void)
{   
   return (char *)manufacturer_name;
}


/*********************************************************************                      
* Synopsis:         DWORD get_powered_on_time_hours(void)
*
* Description:      Using statistic PARAM_STATS_TOTAL_TIME_POWERED_ON_CNT (15013),
*                   which is seconds, return this time in (approximate) hours
*
* Parameters:       None
*
* Return Value:     DWORD
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
DWORD get_powered_on_time_hours(void)
{
   return (DWORD)(PARAM_STATS_TOTAL_TIME_POWERED_ON_CNT / 3600);
}

#ifdef ADF2_MERGE
/*********************************************************************                      
* Synopsis:         WORD get_adf_version(void)
*
* Description:      This function returns the version of ADF. A four decimal
*                   number where the first 2 digits is the Major revision and
*                   the last 2 digits is the Minor revision. For example 0201 is
*                   version 2.1
*
* Parameters:       None
*
* Return Value:     DWORD
*
* Inputs:           None
*
* Outputs:          None
*
* External Calls:   None   
*
* Notes:            None
**********************************************************************/
/*********************************************************************
* Pseudocode:       None
*
**********************************************************************/
INT16U get_adf_version(void)
{
#ifdef ADF2_MERGE
   return (adf_version_num);
#else
   return (NULL);
#endif
}

#endif


// END ATTRIBUTE ACCESS
