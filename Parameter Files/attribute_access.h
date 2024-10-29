/*********************************************************************
*                      
*  Filename:        attribute_access.h 
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
*   $Log:   U:/pl4500/archives/Prototypes/ProductCode/src/management/attribute_access.h-arc  $
//
//   Rev 1.0   Feb 06 2008 10:44:28   kasperek
//Initial revision.
//
//   Rev 1.0   Dec 13 2007 14:08:14   fjellstc
//Initial revision.
//
//   Rev 1.1   Aug 29 2006 14:39:24   sunn
//add define for SCANKIT_NAME_LEN
//and proto get_scankit_revision
//
//   Rev 1.0   Mar 23 2006 17:43:20   fjellstc
//Initial revision.
*
*   Rev 1.0   Oct 17 2005 16:57:52   fjellstc
*Initial revision.
*
*   Rev 1.1   Sep 08 2005 20:34:26   brukn
*Updated with required attributes from the RMD Data Dictionary.
*
*   Rev 1.0   May 31 2005 11:19:40   brukn
*Initial revision.
* 
**********************************************************************/
#ifndef __ATTRIBUTE_ACCESS_H__
#define __ATTRIBUTE_ACCESS_H__
/*********************************************************************
* Include Files
**********************************************************************/
#if defined(INCLUDE_SE4500) || defined(INCLUDE_SE3300)
#include "se4500_api.h"
#endif
#ifdef DS9808_BOARD
#include "laser_api.h"
#endif
#ifdef INCLUDE_RFID
#include "rfid_api.h"
#endif
#include "firmware_update_api.h"

#ifdef INCLUDE_FLEXI_SCRIPT
#include "FlexiScript.h"  // for Flexi_GetVersion()
#define FLEXI_VER_STRING_LEN 220 // needs to match OUTPUT_STRING_LEN from FlexiEnv.c 
#endif
#ifdef INCLUDE_SSC_DRM
#include "drmhook.h"
#endif
#ifdef INCLUDE_DLPARSE
#include "hooks.h"
#endif

/*********************************************************************
* Defines
**********************************************************************/
#ifndef RFID_VER_LEN
#define RFID_VER_LEN 0
#endif

#define RELEASE_NAME_LEN         18     /* release.i; 18 bytes of release name (new firmware naming convention) */

// Calc 'CONCATENATED string length using same 'conditional logic' as in 'attribute_access.c get_concatenated_firmware_revision()'
#ifdef INCLUDE_RFID
  #define RFID_LEN (RFID_VER_LEN+1)
#else
  #define RFID_LEN (0)
#endif
   
#if defined(DS9808_BOARD)
  #define DS9808_LEN (SE950_FIRMWARE_REV_BYTES+1)
#else
  #define DS9808_LEN (0)
#endif

#if defined(INCLUDE_SE4500) || defined(INCLUDE_SE3300) || defined(ODYSSEY)
  #define SCANENGINE_LEN ((SE4500_SCANNER_PRODUCTCODE_FIRMWARE_VERSION_LEN+1) + (SE4500_SCANNER_BOOTLOADER_FIRMWARE_VERSION_LEN+1)) // ProductCode + Bootloader
#else
  #define SCANENGINE_LEN (0)
#endif

#if defined(INCLUDE_SCALE)
  #define SCALE_LEN (RELEASE_NAME_LEN+1)
#else
  #define SCALE_LEN (0)
#endif

#if defined(INCLUDE_WEIGHT_WARDEN)
  #define WW_LEN (2*(RELEASE_NAME_LEN+1)) // for WWA and WWB
#else
  #define WW_LEN (0)
#endif

#define CONCAT_RELEASE_NAME_LEN  ((2*(RELEASE_NAME_LEN+1))/* ProductCode + Bootloader*/ + (RFID_LEN) + (DS9808_LEN) + (SCANENGINE_LEN) + (SCALE_LEN) + (WW_LEN))

#if (CONCAT_RELEASE_NAME_LEN > 255)
  ERR: CONCAT_RELEASE_NAME_LEN too long RSM attribute max length is 255
#endif

#define TOP_LEVEL_RELEASE_LEN    18     /* top level release name (combined image) */
#define SCANKIT_NAME_LEN         12     /* decode/skitrev.i; 11 bytes of scan kit name */
#define RSM_VERSION_LEN          4      /* attribute_access.c; 3 bytes of RSM version */
#define DATE_FIRST_PROG_LEN      10     /* date of first electronic programming */
#define DEFAULT_PRIVILEGES       0
#define IMAGEKIT_NAME_LEN        80     /* iccconfig.h variable name len so this is max */

#ifdef MX101
#define SW_COMPONENTS_LEN        4
#else
#define SW_COMPONENTS_LEN        2
#endif 

#if defined(DIAGNOSTIC_REPORT)
#define DIAGNOSTIC_REPORT_LEN    14
#endif

#define LEN_DECODE_DATA_STORED   25

typedef enum
{
   // MSB contain host #, LSB variant #
   INF_NONE             = 0x0000,
   INF_SYNAPSE          = 0x0100, 
   // USB host variants
   INF_USB_NONE         = 0x0200, INF_USB_IBM_HAND      = 0x0201, INF_USB_IBM_TABLE    = 0x0202, INF_USB_HID_KBD        = 0x0203, INF_USB_SUPA          = 0x0204, 
                                  INF_USB_COM_EMUL      = 0x0205, INF_USB_IBM_HAND2    = 0x0206, INF_USB_IBM_TABLE2     = 0x0207, INF_USB_OPOS_HAND     = 0x0208, 
                                  INF_USB_SNAPI_IMG     = 0x0209, INF_USB_SNAPI        = 0x020A, INF_USB_CDC            = 0x020B, INF_USB_TOSHIBATEC    = 0x020C,
                                  INF_USB_ACTIVESYNC    = 0x020D, INF_USB_CDC_SSI      = 0x020E, INF_USB_HID_POS        = 0x020F,
                                  /* Keep this as last USB entry. Always last+1 */ INF_USB_MAX, 
   // IBM RS485 variants
   INF_IBM_RS485_NONE   = 0x0300, INF_IBM_RS485_PORT5B  = 0x0301, INF_IBM_RS485_PORT9B = 0x0302, INF_IBM_RS485_PORT17   = 0x0303,
   INF_PC_WEDGE_NONE    = 0x0400,
   // RSI variants
   INF_RSI_STANDARD     = 0x0500, INF_RSI_ICL_HOST      = 0x0501, INF_RSI_FUJITSU_HOST = 0x0502, INF_RSI_NIXDORF_MODE_A = 0x0503, INF_RSI_NIXDORF_MODE_B = 0x0504,
                                  INF_RSI_OLIVETTI_HOST = 0x0505, INF_RSI_OMRON_HOST   = 0x0506, INF_RSI_CUTE_HOST      = 0x0507, INF_RSI_OPOS_PLUS      = 0x0508,
                                  INF_RSI_NCR           = 0x0509, INF_RSI_DATALOGIC    = 0x050A, 
   INF_SPCI_NONE        = 0x0600,
   INF_WAND_EMUL_NONE   = 0x0700,
   INF_SSI              = 0x0900,
   INF_FAT              = 0x0A00,
   INF_SCAN_EMUL        = 0x0B00,
   INF_BT_SCAN_CLIENT   = 0x0C00,
   INF_BT_SCAN_SERVER   = 0x0D00,
   INF_BT_SPP_CLIENT    = 0x0E00,
   INF_BT_SPP_SERVER    = 0x0F00,
   INF_BT_HID_CLIENT    = 0x1000,
   INF_BT_HID_SERVER    = 0x1100,
   INF_SSI_LITE         = 0x1200,
   INF_BT_LE_HID_SERVER = 0x1400,
   INF_INVALID          = 0xffff
}INF_TYPES;

#define INF_LARGEST_VARIANT_NUM 0x0f

#define NUM_SUPPORTED_INTERFACES    22

// TGSC Spec defines that we support
#define FLATBED_SCANNER          0
#define FLATBED_WITH_SCALE       1
#define HANDHELD_SCANNER         6

typedef enum {
   BUS_USB = 0,
   BUS_RS232 = 2
} BUS_TYPE;

#define MAX_MODEL_NAME          12   // Leave room as some models have more chars after '-'
#define MODEL_CHARS_TO_DISPLAY   9

#if defined(AUDIO_DOWNLOAD)
#define DOWNLOADABLE_DECODE_TONE_STORAGE_SIZE      0x10000 // 64 K (i.e. 65536 bytes)
#define DOWNLOADABLE_DECODE_TONE_FILENAME_SIZE     32
#define DOWNLOADABLE_DECODE_TONE_ATTRIBUTE_SIZE    DOWNLOADABLE_DECODE_TONE_STORAGE_SIZE - DOWNLOADABLE_DECODE_TONE_FILENAME_SIZE
#define DOWNLOADABLE_DECODE_TONE_MAX_AUDIO_SIZE    DOWNLOADABLE_DECODE_TONE_STORAGE_SIZE - DOWNLOADABLE_DECODE_TONE_FILENAME_SIZE - 2
#endif

/*********************************************************************
* Public Variables
**********************************************************************/ 

/*********************************************************************
* Local Variables
**********************************************************************/ 

/*********************************************************************
* External Function Prototypes 
**********************************************************************/
extern char *get_rsm_revision(void);
extern char *get_firmware_revision(void);
extern char *get_build_number(void);
extern char *get_concatenated_firmware_revision(void);
extern char *get_top_level_revision(void);
extern char *get_fips_revision(void);
extern char *get_device_class(void);
extern unsigned long get_system_uptime(void);
extern unsigned char get_engine_id(void);
extern unsigned char get_hw_version(void);
extern unsigned char get_platform_id(void);
extern unsigned char get_scannerHealth(void);
extern char *get_scankit_revision(void);
extern char *get_imagekit_revision(void);
extern void *get_sw_components(void);
extern void *get_meta_data(void);
extern void *get_firmware(void);
extern INT16U get_current_interface(void);
extern void *get_supported_interfaces(void);
extern void set_sw_component(INT8U *sc_num);
extern void set_privilege_level(BYTE *level);
#ifdef INCLUDE_CRYPTO
extern void set_aes_key(BYTE *key);
extern void set_shared_key(BYTE *key);
#endif
#ifdef INCLUDE_STATS_DECTIME_HG_BINS_and_DECODE_DATA
extern void set_store_bc_list(BYTE *stats_id_list);
extern void set_store_bc_threshold(BYTE *threshold); 
#endif
extern BOOLEAN host_config_allowed(void);
extern char *get_stored_decode_data(void);
#if defined(DIAGNOSTIC_REPORT)
extern char *get_diagnostic_report(void);
#endif
#if defined(INCLUDE_STATS)
extern void* reset_statistic(INT16U* statisticNum);
#endif

#if defined(ODYSSEY) 
void select_sensor(BYTE *sensor);
#endif
#if defined(ODYSSEY) || defined(MP72xx)
void set_num_images_averaged(BYTE *value);
BYTE get_selected_sensor(void);
BYTE get_num_images_averaged(void);
#endif

#ifdef SWITCH_NIGHTMODE_SUPPORT
extern void night_mode_toggle(BYTE *state);
extern BOOLEAN get_night_mode(void);
#endif
extern BOOLEAN get_pager_motor_avail(void);
#if defined(BT_ERROR_LOGGING)
extern INT8U  get_tx_issue_count(void);
#endif

#ifdef BATTERY_POWERED
extern unsigned char in_cradle_detect(void);
extern unsigned char is_hands_free(void);
extern unsigned char is_charging(void);
extern unsigned char get_battery_tech(void);
extern unsigned char get_battery_status(void);
extern unsigned char get_battery_maint(void);
extern unsigned short get_num_insertions(void);
extern unsigned short get_num_charge_attempts(void);
extern unsigned short get_num_full_charges(void);
extern void reset_charge_stats(unsigned char reset);
#endif

#ifdef GIFTED_BATTERY
extern INT16U get_gifted_batt_charging_Y_N(void);
extern INT16U get_gifted_batt_status(void);
extern INT16U get_gifted_batt_charge_status(void);
extern INT16U get_gifted_batt_voltage(void);
extern INT16U get_gifted_batt_current(void);
extern INT16U get_gifted_batt_percentage(void);
extern INT16U get_gifted_batt_StateofHealth(void);
extern INT16U get_gifted_batt_StateofHealth_GG(void);
extern INT16U get_gifted_batt_desired_voltage(void);
extern INT16U get_gifted_batt_desired_current(void);
extern INT16S get_gifted_batt_temperature(void);
extern char *get_gifted_batt_model_number(void);
extern char *get_gifted_batt_manu_date(void);
extern char *get_gifted_batt_firmware_version(void);
extern INT16U get_gifted_batt_full_charge_capacity(void);
extern INT16U get_gifted_batt_cycle_count(void);
extern INT16U get_gifted_batt_serial_number(void);
extern INT16U get_gifted_batt_time_to_full_charge(void);
extern INT16S get_gifted_batt_highest_temp(void);
extern INT16S get_gifted_batt_lowest_temp(void);
extern INT16U get_gifted_batt_remaining_capacity(void);
extern INT16U get_gifted_batt_design_capacity(void);
extern char *get_gifted_batt_ID(void);
extern INT16U get_gifted_batt_stats_state(void);
#endif 

#ifdef INCLUDE_RFID
extern char *get_rfid_last_tag_id(void);
extern char *get_rfid_data(void);
extern INT32U get_rfid_cmd_status(void);
extern INT16U get_rfid_tag_cache(void);

void set_rfid_tag_id(INT8U *val);
void set_rfid_bank(INT8U *val);
void set_rfid_data(INT8U *val);
void set_rfid_offset(INT16U *val);
void set_rfid_length(INT16U *val);
void set_rfid_password(INT8U *val);
void set_rfid_command(INT8U *val);
void set_rfid_tag_cache(INT16U *val);

#ifdef SUPERCAP
INT16U get_cap_voltage(void);
INT16U get_cap_status(void);
INT16S get_cap_impedance_voltage_drop(void);
INT16S get_cap_state_of_charge(void);
INT16S get_cap_state_of_health(void);
void cap_state_of_health_req(INT16U *val); 
#endif // end SUPERCAP
#endif // end RFID

#if defined(INCLUDE_IBM) && !defined(EXCLUDE_USB_IBM)
extern void ibm_hh_set_config_dirs_status(BYTE *ignore);
extern BYTE ibm_hh_get_config_dirs_status(void);
#endif

#if defined(INCLUDE_SCALE)
extern unsigned long get_scale_weight_min(void);
extern unsigned long get_scale_weight_max(void);
#endif

INT8U* get_SupportedInterfaceBitmap(INT8U* pLen);

#if defined(INCLUDE_DLLWRAP) || defined(INCLUDE_SSC_DRM)
extern unsigned char  get_dllwrap_supported(void);
extern          char *get_dllwrap_dlp_loaded(void);
extern          char *get_dllwrap_dlp_version(void);
extern unsigned char  get_dllwrap_dlp_activated(void);
#endif
#if defined(INCLUDE_SSC_DRM)
extern         INT8U  get_drm_license_activated(void); 
extern         INT8U *get_drm_feature_list(void); 
extern         INT8U *get_drm_license_supported(void); 
extern         INT8U *get_drm_license_key(void); 
extern         void   set_drm_lk_index(INT8U *value); 
extern         INT8U  get_drm_lk_index(void); 
#endif

#ifdef ADF2
extern void set_adf2_rule_set_state (INT16U *value);
extern INT16U get_adf2_rule_set_state(void);
#endif

#ifdef ADF2_MERGE
extern INT16U get_adf_version(void);
#endif

#if (defined(AUDIO_DOWNLOAD) && (SPEAKER_CONFIG == 2))
extern void           set_downloadable_decode_tone(unsigned char *value);
extern unsigned char *get_downloadable_decode_tone(void);
extern void           set_downloadable_decode_tone_erase(unsigned char *value);
extern unsigned char  get_downloadable_decode_tone_status(void);
extern unsigned char *get_downloadable_decode_tone_filename(void);
extern void           set_downloadable_decode_tone_filename(INT8U *value);
#endif // custom decode audio download functions
INT8U  get_downloadble_cfg_support(void);

#ifdef INCLUDE_ALLY
// Support functions for IconD and Ally Tab in Snapi GUI
DWORD debug_read_ally_addr(void);
BYTE debug_read_ally_byte(void);
void debug_write_ally_addr(DWORD *val);
void debug_write_ally_byte(BYTE *val);
extern INT8U* get_ally_eeprom_read(void);
#endif

#if defined(INCLUDE_ICON_DEBUG_RW)
DWORD debug_read_icon_addr(void);
BYTE debug_read_icon_byte(void);
WORD debug_read_icon_word(void);
DWORD debug_read_icon_dword(void);
void debug_write_icon_addr(DWORD *val);
void debug_write_icon_byte(BYTE *val);
void debug_write_icon_word(WORD *val);
void debug_write_icon_dword(DWORD *val);

#endif
#ifdef RESET_CAUSE_DETECTION
extern char *get_last_reset_info(void);
#endif

#ifdef ADF2_SYNTAX
extern INT8U get_adf2_syntax_error_count(void);
#endif

void default_status_block(INT8U *value);
#ifdef INCLUDE_ICON_OBJDET
extern char *get_objdet_thresholds(void);
#endif
extern char *get_physical_device_name(void);
extern char *get_model_name(void);
extern INT8U get_bus_type(void);
extern INT8U get_device_category(void);
extern char *get_device_id(void);
extern char *get_manufacturer_name(void);
extern DWORD get_powered_on_time_hours(void);

#ifdef INCLUDE_DEC_PERF
INT32U decperf_trig_to_cam_time(void);
INT32U decperf_cam_to_1stframe_time(void);
INT32U decperf_cam_to_decstart_time(void);
INT32U decperf_dec_proc_time(void);
INT32U decperf_dec_to_beep_time(void);
INT32U decperf_proc_num_frames(void);
INT32U decperf_recv_num_frames(void);
void  *decperf_frame_proc_times(void);
#endif

#endif //__ATTRIBUTE_ACCESS_H__


// END_ATTRIBUTE_ACCESS.H