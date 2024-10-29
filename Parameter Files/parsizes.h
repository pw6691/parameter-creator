/*********************************************************************
*                      
*  Filename:        parsizes.h
*
*  Copyright(c) 2009 Motorola Inc.
*  Copyright(c) 2002 Symbol Technologies Inc.
*  
*  Description:     Product specific parameter buffer sizes for LS4008i 
*
*  Author:          Tony Russo
*
*  Creation Date:   05/30/02
*
*  Derived From:    parsizes.h, rev 1.0, LS-4008i Mia version
*
*  Edit History:
*   $Log:   U:/pl4500/archives/Prototypes/ProductCode/src/param/parsizes.h-arc  $
*       
**********************************************************************/
#ifndef _PARSIZES_H_
#define _PARSIZES_H_

#ifdef INCLUDE_BLUETOOTH
#include "bt_defs.h"
#endif

#define EEPROM_SIZE            512
#define SYNAPSE_SIZE            80     /* must be EVEN number */

#ifdef NO_ADF_SUPPORT
#define RULE_BUFF_SIZE          2     /* must be EVEN number. Also, don't forget to update in deftable.i] */
#define NUM_LOOKUPS             2
#else
#define RULE_BUFF_SIZE          2000     /* must be EVEN number. Also, don't forget to update in deftable.i] */
#define NUM_LOOKUPS             10
#endif

#ifdef INCLUDE_SYSTEM_OCR
#define OCR_SUBSET_LEN          64
#define OCR_TEMPLATE_LEN        150
#define OCR_CHK_DGT_MULTI_LEN   32
#endif

#ifdef ADF2_MERGE
#define ADF1_MAX_LEN_OR_POS     252
#ifndef ADF2

#define CRITERIA_SIZE           120
#define ACTION_SIZE             120
#define WORK_SIZE               (CRITERIA_SIZE + ACTION_SIZE)
#define ADF1_MAX_LEN_OR_POS     252
#define ADF2_MAX_LEN_OR_POS     0
#else
#define PREAMBLE_SIZE           40
#define SMALL_CRITERIA_SIZE     120
#define CRITERIA_SIZE           120
#define CRITERIA_SECTION_COUNT  4
#define SMALL_ACTION_SIZE       120
#define ACTION_SIZE             300
#define WORK_SIZE               ((CRITERIA_SIZE*CRITERIA_COUNT) + ACTION_SIZE)
#define ADF1_MAX_LEN_OR_POS     252
#define ADF2_MAX_LEN_OR_POS     4096
#endif
#else
#define CRITERIA_SIZE           120
#define ACTION_SIZE             120
#define WORK_SIZE               (CRITERIA_SIZE + ACTION_SIZE)
#define ADF1_MAX_LEN_OR_POS     252
#define ADF2_MAX_LEN_OR_POS     0
#endif


#ifdef INCLUDE_DLPARSE
#define DL_PARSE_BUFF_ENTRIES   50                         /* Number of entries allowed in parse buffer. */
#define DL_PARSE_BUFF_SIZE      (2*DL_PARSE_BUFF_ENTRIES)  /* Size of the Driver's License parsing buffer. 2 bytes per entry. */
#endif

#ifdef INCLUDE_FLEXI_SCRIPT
#define FLEXISCRIPT_LEN         8192                       /* must be EVEN number Also, don't forget to update in deftable.i DFF */
#endif

#define ADF_CRITERIA_ENTRY      1
#define ADF_ACTION_ENTRY        2

#ifdef ADF2_MERGE
#define ADF_PREAMBLE_ENTRY      3
#endif
#define USER_DATA_LEN           50


#define NUM_SECTIONS            10
#ifdef SE965
#define PAR_ZORRO_BIRTH_SIZE       /* 38 */    38
#define ATT_ZORRO_BIRTH_SIZE       /* 18 */    (PAR_ZORRO_BIRTH_SIZE - 20)
#define PAR_ZORRO_LASER_SIZE       /* 19 */    19
#define ATT_ZORRO_LASER_SIZE       /*  7 */    (PAR_ZORRO_LASER_SIZE - 12)
#define PAR_ZORRO_RECEIVER_SIZE    /* 19 */    19
#define ATT_ZORRO_RECEIVER_SIZE    /* 10 */    (PAR_ZORRO_RECEIVER_SIZE - 9)
#define PAR_ZORRO_MOTOR_SIZE       /* 15 */    15
#define ATT_ZORRO_MOTOR_SIZE       /*  5 */    (PAR_ZORRO_MOTOR_SIZE - 10)
#define PAR_ZORRO_DIGITIZER_SIZE   /* 12 */    12
#define ATT_ZORRO_DIGITIZER_SIZE   /*  8 */    (PAR_ZORRO_DIGITIZER_SIZE - 4)
#define PAR_HARD_ENGINE_SIZE       /*  9 */    9
#define ATT_HARD_ENGINE_SIZE       /*  9 */    PAR_HARD_ENGINE_SIZE
#endif

#ifdef INCLUDE_BLUETOOTH
#define BT_FRIENDLY_NAME_LEN    24
#define BT_PIN_CODE_LEN         16
#define BT_ADDRESS_LEN          6
#if (BT_MAX_DEVICES == 1)
#define BT_LINK_KEYS_SIZE       649
#else
#define BT_LINK_KEYS_SIZE       1297
#endif
#define BT_GATT_STORAGE_SIZE    600
#endif   //INCLUDE_BLUETOOTH

#ifdef INCLUDE_CRYPTO
#define CRYPTO_KEY_SIZE         32
#endif

#define SWID_SIZE 16
#define LIBVERS_SIZE 4

#ifdef INCLUDE_UIDPARSE
#define UID_TABLE_BYTES (10*1024)   /* Size of UID Validation Table.  1 byte per entry. */
#endif

#define ALLY_EEPROM_SHADOW_SIZE 80
#define HOST_CODE_ID_CONVERT_LEN   256

#endif   /* _PARSIZES_H_ */
