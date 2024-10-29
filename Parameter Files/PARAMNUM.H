/*********************************************************************
*
*  Filename:        paramnum.h
*
*  Copyright(c) Symbol Technologies Inc., 1996, 1997, 2000, 2004
*
*  Description:     Common parameter numbers
*
*  Author:          Ellen Oppenheim
*
*  Creation Date:   08/06/96
*
*  Derived From:    New File
*
*
**********************************************************************/

/* used by old_type in parinfo. */
#define CHANGE_BIT_0    0
#define CHANGE_BIT_1    1
#define CHANGE_BIT_2    2
#define CHANGE_BIT_3    3
#define CHANGE_BIT_4    4
#define CHANGE_BIT_5    5
#define CHANGE_BIT_6    6
#define CHANGE_BIT_7    7
#define CHANGE_BYTE     8
#define CHANGE_STRING   9
#define CHANGE_WORD     10

/*********************************************************************
*  Parameter numbers must always be added to the end of this list and
*  MUST be unique!!!!  NUMBERS THAT ALREADY EXIST CANNOT BE CHANGED!!!
**********************************************************************/
// ATAG SYSTEM_PARAMETER START  
#define NUM_CODE39                                          0    /*    00 */
#define NUM_UPCA                                            1    /*    01 */
#define NUM_UPCE                                            2    /*    02 */
#define NUM_EAN13                                           3    /*    03 */
#define NUM_EAN8                                            4    /*    04 */
#define NUM_D25                                             5    /*    05 */
#define NUM_I25                                             6    /*    06 */
#define NUM_CODABAR                                         7    /*    07 */
#define NUM_CODE128                                         8    /*    08 */
#define NUM_CODE93                                          9    /*    09 */
#define NUM_CODE11                                         10    /*    0a */
#define NUM_MSI                                            11    /*    0b */
#define NUM_UPCE1                                          12    /*    0c */
#define NUM_TRIOPTIC                                       13    /*    0d */
#define NUM_EAN128                                         14    /*    0e */
#define NUM_PDF                                            15    /*    0f */
#define NUM_SUPPS                                          16    /*    10 */
#define NUM_C39_FULL_ASCII                                 17    /*    11 */
#define NUM_C39_LEN1                                       18    /*    12 */
#define NUM_C39_LEN2                                       19    /*    13 */
#define NUM_D25_LEN1                                       20    /*    14 */
#define NUM_D25_LEN2                                       21    /*    15 */
#define NUM_I25_LEN1                                       22    /*    16 */
#define NUM_I25_LEN2                                       23    /*    17 */
#define NUM_CBR_LEN1                                       24    /*    18 */
#define NUM_CBR_LEN2                                       25    /*    19 */
#define NUM_C93_LEN1                                       26    /*    1a */
#define NUM_C93_LEN2                                       27    /*    1b */
#define NUM_C11_LEN1                                       28    /*    1c */
#define NUM_C11_LEN2                                       29    /*    1d */
#define NUM_MSI_LEN1                                       30    /*    1e */
#define NUM_MSI_LEN2                                       31    /*    1f */
#define NUM_TRI_LEN1                                       32    /*    20 */
#define NUM_TRI_LEN2                                       33    /*    21 */
#define NUM_UPCA_PREAM                                     34    /*    22 */
#define NUM_UPCE_PREAM                                     35    /*    23 */
#define NUM_UPCE1_PREAM                                    36    /*    24 */
#define NUM_UPCE_TO_A                                      37    /*    25 */
#define NUM_UPCE1_TO_A                                     38    /*    26 */
#define NUM_EAN8_TO_13                                     39    /*    27 */
#define NUM_UPCA_CHK                                       40    /*    28 */
#define NUM_UPCE_CHK                                       41    /*    29 */
#define NUM_UPCE1_CHK                                      42    /*    2a */
#define NUM_XMIT_C39_CHK                                   43    /*    2b */
#define NUM_XMIT_I25_CHK                                   44    /*    2c */
#define NUM_XMIT_CODE_ID                                   45    /*    2d */  /* $$0=No xmit 1=aim_id 2=symbol_id */
#define NUM_XMIT_MSI_CHK                                   46    /*    2e */
#define NUM_XMIT_C11_CHK                                   47    /*    2f */
#define NUM_C39_CHK_EN                                     48    /*    30 */
#define NUM_I25_CHK_TYPE                                   49    /*    31 */
#define NUM_MSI_CHK_1_2                                    50    /*    32 */
#define NUM_MSI_CHK_0_1_2                                  NUM_MSI_CHK_1_2    /* This is now a BYTE in newer imagekits */
#define NUM_MSI_CHK_SCHEME                                 51    /*    33 */
#define NUM_C11_CHK_TYPE                                   52    /*    34 */
#define NUM_UPCA_RAN_WGHT                                  53    /*    35 */  /* could be moved 0-disabled 1-four digit 2-five digit UPCA/EAN13 */
#define NUM_CLSI                                           54    /*    36 */
#define NUM_NOTIS                                          55    /*    37 */
#define NUM_DEC_BEEP                                       56    /*    38 */
#define NUM_APT_OLD_BLK                                    57    /*    39 */
#define NUM_C11_REDUN                                      58    /*    3a */
#define NUM_C39_REDUN                                      59    /*    3b */
#define NUM_C128_REDUN                                     60    /*    3c */
#define NUM_MSI_REDUN                                      61    /*    3d */
#define NUM_CBR_REDUN                                      62    /*    3e */
#define NUM_I25_REDUN                                      63    /*    3f */
#define NUM_D25_REDUN                                      64    /*    40 */
#define NUM_C93_REDUN                                      65    /*    41 */
#define NUM_TRI_REDUN                                      66    /*    42 */
#define NUM_BIDIR_REDUN                                    67    /*    43 */
#define NUM_LINEAR_UPC                                     68    /*    44 */
#define NUM_LINEAR_SUPPS                                   69    /*    45 */
#define NUM_C39_STITCH                                     70    /*    46 */
#define NUM_C39_STITCH_LEV                                 71    /*    47 */
#define NUM_C128_STITCH                                    72    /*    48 */
#define NUM_C128_STCH_LEV                                  73    /*    49 */
#define NUM_HALFBLK_STITCH                                 74    /*    4a */
#define NUM_HB_STITCH_LEV                                  75    /*    4b */
#define NUM_BLOCK_OVERLAP                                  76    /*    4c */
#define NUM_UPC_SEC_LEV                                    77    /*    4d */
#define NUM_LIN_SEC_LEV                                    78    /*    4e */
#define NUM_HOLD_OFF                                       79    /*    4f */
#define NUM_SUPP_REDUN                                     80    /*    50 */
#define NUM_PDF_TRIG_MODE                                  81    /*    51 */
#define NUM_I25_TO_EAN13                                   82    /*    52 */
#define NUM_BOOKLAND                                       83    /*    53 */
#define NUM_ISBT_128                                       84    /*    54 */
#define NUM_COUPON                                         85    /*    55 */
#define NUM_CODE32                                         86    /*    56 */
#define NUM_NW7                                            87    /*    57 */
#define NUM_C49                                            88    /*    58 */
#define NUM_POST_US1                                       89    /*    59 */
#define NUM_POST_US2                                       90    /*    5a */
#define NUM_POST_UK                                        91    /*    5b */
#define NUM_POST_CAN                                       92    /*    5c */
#define NUM_SIGNATURE                                      93    /*    5d */
#define NUM_XMIT_NO_READ                                   94    /*    5e */
#define NUM_POST_US_PARITY                                 95    /*    5f */
#define NUM_POST_UK_PARITY                                 96    /*    60 */
#define NUM_POST_CAN_ALT                                   97    /*    61 */
#define NUM_KEYCAT_1                                       98    /*    62 */
#define NUM_KEYCAT_2                                       99    /*    63 */
#define NUM_KEYCAT_3                                      100    /*    64 */
#define NUM_KEYCAT_4                                      101    /*    65 */
#define NUM_KEYCAT_5                                      102    /*    66 */
#define NUM_KEYCAT_6                                      103    /*    67 */
#define NUM_KEYVAL_1                                      104    /*    68 */
#define NUM_KEYVAL_2                                      105    /*    69 */
#define NUM_KEYVAL_3                                      106    /*    6a */
#define NUM_KEYVAL_4                                      107    /*    6b */
#define NUM_KEYVAL_5                                      108    /*    6c */
#define NUM_KEYVAL_6                                      109    /*    6d */
#define NUM_KEY_DELAY                                     110    /*    6e */
#define NUM_PAUSE_DUR                                     111    /*    6f */
#define NUM_CONV_ERRS_OK                                  112    /*    70 */
#define NUM_BUFFER_C39                                    113    /*    71 */
#define NUM_MATCH_SELECT                                  114    /*    72 */
#define NUM_APPS_FAT_MODE                                 115    /*    73 */
#define NUM_APPS_2                                        116    /*    74 */
#define NUM_APPS_3                                        117    /*    75 */
#define NUM_APPS_4                                        118    /*    76 */
#define NUM_APPS_5                                        119    /*    77 */
#define NUM_APPS_6                                        120    /*    78 */
#define NUM_APPS_7                                        121    /*    79 */
#define NUM_APPS_8                                        122    /*    7a */
#define NUM_EMUL_EAN128                                   123    /*    7b */  /* (emulate 128 - updf) */
#define NUM_LINKED_2D_AUTOD                               124    /*    7c */
#define NUM_FILTER_FACTOR                                 125    /*    7d */
#define NUM_XMIT_LRC_CHK                                  126    /*    7e */
#define NUM_ALWAYS_RASTER                                 127    /*    7f */
#define NUM_OPERATING_MODE                                128    /*    80 */
#define NUM_INTERNAL_BEEP                                 129    /*    81 */
#define NUM_HHLS_DEC_BEEP                                 130    /*    82 */
#define NUM_EXT_AUX_BEEP                                  131    /*    83 */
#define NUM_ENABLE_EAS                                    132    /*    84 */
#define NUM_BLKTMR_CHK                                    133    /*    85 */  /* for slot scanners */
#define NUM_XMIT_AIM_ID                                   134    /*    86 */
#define NUM_SYNAPSE                                       135    /*    87 */
#define NUM_LASER_ON_PRIM                                 136    /*    88 */
#define NUM_LASER_OFF_PRIM                                137    /*    89 */
#define NUM_PRIM_TRIG_MODE                                138    /*    8a */
#define NUM_PRIM_TRIG_MOD                                 139    /*    8b */
#define NUM_BEEPER_VOLUME                                 140    /*    8c */
#define NUM_SCAN_PATTERN                                  141    /*    8d */
#define NUM_HIF_HOST_CODE                                 142    /*    8e */
#define NUM_XMIT_FAIL_TIME                                143    /*    8f */
#define NUM_HOST_LASER_OFF                                144    /*    90 */  /* use similar to laser for timeout for same symbol in continuous on */
#define NUM_BEEPER_FREQ                                   145    /*    91 */
#define NUM_LASER_SLEEP_DUR                               146    /*    92 */
#define NUM_MULTI_DEC_LEV                                 147    /*    93 */
#define NUM_PAR_PROCESS_MODE                              148    /*    94 */
#define NUM_DEC_BEEP_TYPE                                 149    /*    95 */
#define NUM_BEEP_ON_BELL                                  150    /*    96 */
#define NUM_CHECK_PARITY                                  151    /*    97 */
#define NUM_CHECK_AUX_PARITY                              152    /*    98 */
#define NUM_AUX_RTS_STATE                                 153    /*    99 */
#define NUM_HOST_RTS_STATE                                154    /*    9a */
#define NUM_RESP_TIMEOUT                                  155    /*    9b */
#define NUM_BAUD                                          156    /*    9c */
#define NUM_STOP_BITS                                     157    /*    9d */
#define NUM_PARITY                                        158    /*    9e */
#define NUM_SW_HNDSHK                                     159    /*    9f */  /* Serial Byte */
#define NUM_HW_HNDSHK                                     160    /*    a0 */  /* Serial Byte */
#define NUM_SERIAL_DIR                                    161    /*    a1 */
#define NUM_DATA_BITS                                     162    /*    a2 */
#define NUM_RS232_HOST                                    163    /*    a3 */
#define NUM_AUX_RESP_TMOUT                                164    /*    a4 */
#define NUM_AUX_BAUD                                      165    /*    a5 */
#define NUM_AUX_STOP_BITS                                 166    /*    a6 */
#define NUM_AUX_PARITY                                    167    /*    a7 */
#define NUM_AUX_SW_HNDSHK                                 168    /*    a8 */
#define NUM_AUX_HW_HNDSHK                                 169    /*    a9 */
#define NUM_AUX_SERIAL_DIR                                170    /*    aa */
#define NUM_AUX_DATA_BITS                                 171    /*    ab */
#define NUM_XMIT_RETRY                                    172    /*    ac */
#define NUM_RETRY_TYPE                                    173    /*    ad */
#define NUM_RETRY_VALUE                                   174    /*    ae */
#define NUM_XMIT_AS_CODEWORDS                             175    /*    af */  /* pdf/updf */
#define NUM_XMIT_FILE_NAME                                176    /*    b0 */  /* macro pdf */
#define NUM_XMIT_BLK_CNT                                  177    /*    b1 */  /* macro pdf */
#define NUM_XMIT_TIMESTAMP                                178    /*    b2 */  /* macro pdf */
#define NUM_XMIT_SENDER                                   179    /*    b3 */  /* macro pdf */
#define NUM_XMIT_ADDRESSEE                                180    /*    b4 */  /* macro pdf */
#define NUM_XMIT_FILE_SIZE                                181    /*    b5 */  /* macro pdf */
#define NUM_XMIT_CHKSUM                                   182    /*    b6 */  /* macro pdf */
#define NUM_XMIT_FILE_ID                                  183    /*    b7 */  /* macro pdf */
#define NUM_XMIT_BLK_INDEX                                184    /*    b8 */  /* macro pdf */
#define NUM_XMIT_ENDOFSET                                 185    /*    b9 */  /* macro pdf */
#define NUM_XMIT_UNKNOWN_CW                               186    /*    ba */  /* pdf/updf */
#define NUM_USES_ESCAPES                                  187    /*    bb */
#define NUM_XMIT_MODE                                     188    /*    bc */  /* for macro pdf - buffer all symbols etc. */
#define NUM_ESCAPE_CHAR                                   189    /*    bd */
#define NUM_POLLING                                       190    /*    be */
#define NUM_SCAN_ANGLE                                    191    /*    bf */
#define NUM_CUSTOM_BIT0                                   192    /*    c0 */
#define NUM_EAS_WAS_THERE				  NUM_CUSTOM_BIT0

#define NUM_CUSTOM_BIT1                                   193    /*    c1 */
#define NUM_POLE_WAS_THERE				  NUM_CUSTOM_BIT1

#define NUM_CUSTOM_BIT2                                   194    /*    c2 */
#define NUM_CUSTOM_BIT3                                   195    /*    c3 */
#define NUM_CUSTOM_BIT4                                   196    /*    c4 */
#define NUM_CUSTOM_BIT5                                   197    /*    c5 */
#define NUM_CUSTOM_BIT6                                   198    /*    c6 */
#define NUM_CUSTOM_BIT7                                   199    /*    c7 */
#define NUM_CUSTOM_BIT8                                   200    /*    c8 */
#define NUM_CUSTOM_BYTE_1                                 201    /*    c9 */
#define NUM_CUSTOM_BYTE_2                                 202    /*    ca */
#define NUM_HH_DEC_RANGE                                  203    /*    cb */
#define NUM_HF_DEC_RANGE                                  204    /*    cc */
#define NUM_PRE_SUFF_DELAY                                205    /*    cd */
#define NUM_SLEEP_DUTY_CYCLE                              206    /*    ce */
#define NUM_SUPP2                                         207    /*    cf */
#define NUM_SUPP5                                         208    /*    d0 */
#define NUM_C128_LEN1                                     209    /*    d1 */
#define NUM_C128_LEN2                                     210    /*    d2 */
#define NUM_C49_LEN1                                      211    /*    d3 */
#define NUM_C49_LEN2                                      212    /*    d4 */
#define NUM_XMT_CODE_ID_CHAR                              213    /*    d5 */
#define NUM_FAST_XMIT                                     214    /*    d6 */
#define NUM_E4683_MSR_EN                                  215    /*    d7 */
#define NUM_OCIA_CLK_POL                                  216    /*    d8 */
#define NUM_LASER_ON_AUX                                  217    /*    d9 */
#define NUM_LASER_OFF_AUX                                 218    /*    da */
#define NUM_AUX_TRIG_MODE                                 219    /*    db */
#define NUM_AUX_TRIG_MOD                                  220    /*    dc */
#define NUM_ITEM                                          221    /*    dd */
#define NUM_GEN_XOPEN_CAL                                 222    /*    de */
#define NUM_ISBT_MAX_TRY                                  223    /*    df */
#define NUM_CONV_EAN8TO13_TYPE                            224    /*    e0 */
#define NUM_FILLER_FREQ                                   225    /*    e1 */
#define NUM_EXT_USER_INTF                                 226    /*    e2 */
#define NUM_UPDF                                          227    /*    e3 */
#define NUM_RASTER_SIZE                                   228    /*    e4 */
#define NUM_RASTER_RATE                                   229    /*    e5 */
#define NUM_STRIP_CHAR_SET_ECI                            230    /*    e6 */
#define NUM_C32_PREFIX                                    231    /*    e7 */
#define NUM_DECODE_ECI                                    232    /*    e8 */
#define NUM_XMIT_PROTOCOL                                 233    /*    e9 */  /* a.s. added - gli, eci, none */
#define NUM_ASCII_OUT                                     234    /*    ea */
#define NUM_DATA_FORMAT                                   235    /*    eb */  /* ADF buffer */
#define NUM_PARAMETERS_ALLOWED                            236    /*    ec */
#define NUM_AIM_DURATION                                  237    /*    ed */
#define NUM_SEND_PACKETS                                  238    /*    ee */
#define NUM_HOST_CHAR_TIMEOUT                             239    /*    ef */  /* Serial Byte */

/*********************************************************
  DO NOT USE VALUES 240 THROUGH 255...
*********************************************************/

#define NUM_DECODE_EVENT                                  256    /*    00 */
#define NUM_SYSTEM_EVENT                                  257    /*    01 */
#define NUM_BOOTUP_EVENT                                  258    /*    02 */
#define NUM_PARAM_EVENT                                   259    /*    03 */
#define NUM_SYSTEM_ERROR                                  260    /*    04 */
#define NUM_SCANNING_ERROR                                261    /*    05 */
#define NUM_MISC1_EVENT                                   262    /*    06 */
#define NUM_MISC2_EVENT                                   263    /*    07 */
#define NUM_AUTOD_RESPONSE_TIME                           264    /*    08 */
#define NUM_FEEDBACK_ENABLED                              265    /*    09 */

#define NUM_KEY_CLICK                                     266    /*    0a */  /* MCL parameter */
#define NUM_ADDRESS                                       267    /*    0b */  /* MCL parameter */
#define NUM_SLEEP_TIME                                    268    /*    0c */  /* MCL parameter */
#define NUM_CODE_PAGE                                     269    /*    0d */  /* MCL parameter */
#define NUM_DATE_SEPARATOR                                270    /*    0e */  /* MCL parameter */
#define NUM_HOUR_TYPE                                     271    /*    0f */  /* MCL parameter */
#define NUM_DECIMAL_SEPARATOR                             272    /*    10 */  /* MCL parameter */
#define NUM_FILE_SEP                                      273    /*    11 */  /* MCL parameter */
#define NUM_MCL_HEX                                       274    /*    12 */  /* MCL parameter */
#define NUM_DATE_FORMAT                                   275    /*    13 */  /* MCL parameter */

#define NUM_HIF_XERR_EVENT                                276    /*    14 */  /* extra events for the Intermec custom */
#define NUM_LASER_TEMP_EVENT                              277    /*    15 */  /* extra events for the Intermec custom */
#define NUM_PARITY_EVENT                                  278    /*    16 */  /* extra events for the Intermec custom */
#define NUM_NODEC_MSG_EVENT                               279    /*    17 */  /* extra events for the Intermec custom */

#define NUM_CONTRAST                                      280    /*    18 */

#define NUM_BEEP_LED_OPTION                               281    /*    19 */  /* Nixdorf Mode A and B parameters */
#define NUM_NIXDORF_BUFFERING                             282    /*    1A */  /* Nixdorf Mode A and B parameters */

#define NUM_MCL_BAUD_RATE                                 283    /*    1B */
#define NUM_MCL_RETRIES                                   284    /*    1C */
#define NUM_MCL_FRAME_TIME                                285    /*    1D */
#define NUM_MCL_POS_HOST                                  286    /*    1E */
#define NUM_MCL_BATCH_HOST                                287    /*    1F */

#define NUM_POWER_BEEP                                    288    /*    20 */  /* Power detection beep */
#define NUM_HOST_OVERRIDE                                 289    /*    21 */  /* Power detection beep */

#define NUM_POSTAL_JAP                                    290    /* F0 22 */
#define NUM_POSTAL_AUS                                    291    /* F0 23 */
#define NUM_DATAMATRIX                                    292    /* F0 24 */
#define NUM_QRCODE                                        293    /* F0 25 */
#define NUM_MAXICODE                                      294    /* F0 26 */
#define NUM_COMPOSITE                                     295    /* F0 27 */
#define NUM_POST_SEND_BAR_REP                             296    /* F0 28 */
#define NUM_IMG_USE_AE                                    297    /* F0 29 */  /* (auto-exposure control) */
#define NUM_IMG_ILLUM                                     298    /* F0 2A */  /* (illumination always/never) */
#define NUM_IMG_USE_JPEG_QUAL                             299    /* F0 2B */  /* (jpeg quality/size selector) */
#define NUM_IMG_AIM_SNAPSHOT                              300    /* F0 2C */
#define NUM_IMG_CROP                                      301    /* F0 2D */
#define NUM_IMG_SUBSAMPLE                                 302    /* F0 2E */  /* (sample every n+1 pixels) [0-3]*/
#define NUM_IMG_BPP                                       303    /* F0 2F */  /* (1, 4, or 8 bpp) [0-2] */
#define NUM_IMG_FILE_FORMAT                               304    /* F0 30 */  /* [1==jpeg, 3==bmp 4==tiff] */
#define NUM_IMG_JPEG_QUAL                                 305    /* F0 31 */  /* [1 - 100] */
#define NUM_IMG_AIM_MODE                                  306    /* F0 32 */
#define NUM_IMG_JPEG_FILESIZE                             307    /* F0 33 */
#define NUM_IMG_JPEG_OPTIONS                              308    /* F0 34 */ /* Not reported */
#define NUM_IMG_LIGHT_ENV                                 309    /* F0 35 */
#define NUM_IMG_GAIN_OFFSET                               310    /* F0 36 */
#define NUM_IMG_FIXED_GAIN                                311    /* F0 37 */
#define NUM_IMG_FIXED_VDO                                 312    /* F0 38 */
#define NUM_IMG_SIG_FMT                                   313    /* F0 39 */
#define NUM_IMG_SIG_BPP                                   314    /* F0 3A */  /* 1, 4, or 8 bpp [0-2] */
#define NUM_IMG_CROP_TOP                                  315    /* F0 3B */
#define NUM_IMG_CROP_LEFT                                 316    /* F0 3C */
#define NUM_IMG_CROP_BOT                                  317    /* F0 3D */
#define NUM_IMG_CROP_RIGHT                                318    /* F0 3E */
#define NUM_IMG_UNUSED                                    319    /* F0 3F */
#define NUM_IMG_MAXFETIME                                 320    /* F0 40 */
#define NUM_DEBUG_EVENT                                   321    /* F0 41 */
#define NUM_IMG_MAXAETIME                                 322    /* F0 42 */  /* Not reported */
#define NUM_IMG_SNAPTIMEOUT                               323    /* F0 43 */
#define NUM_IMG_VIDEOVF                                   324    /* F0 44 */  /* video viewfinder */
#define NUM_POSTAL_KOREA                                  325    /* F0 45 */
#define NUM_POSTAL_DUTCH                                  326    /* F0 46 */
#define NUM_IMG_SMALLDMATRIX                              327    /* F0 47 */
#define NUM_IMG_VIDEO_FRAME                               328    /* F0 48 */
#define NUM_IMG_VF_FRAME                                  329    /* F0 49 */
#define NUM_IMG_POWERMODE                                 330    /* F0 4A */
#define NUM_IMG_PORTRAIT                                  331    /* F0 4B */
#define NUM_IMG_SESSIONTIME                               332    /* F0 4C */
#define NUM_IMG_REPORTTIME                                333    /* F0 4D */

#define NUM_SER_MULTIPACKET                               334    /* f0 4E */  /* Options for non-mimic ssi - values 1,2,3 - mimic is always 1 */
#define NUM_SER_INTERPACKET                               335    /* f0 4F */  /* timeout for non mimic ssi - needed by multipacket option 2 */

#define NUM_DUMMY_RF_CHAN                                 336    /* f0 50 */  /* PCP Dummy channel number for channel change operation */

#define NUM_LED_MODE                                      337    /* f0 51 */  /* SE2223: 0: operates as decode led; 1: operates as laser led */

#define NUM_RSS_14                                        338    /* f0 52 */
#define NUM_RSS_LIM                                       339    /* f0 53 */
#define NUM_RSS_EXP                                       340    /* f0 54 */
#define NUM_CCC_ENABLE                                    341    /* f0 55 */
#define NUM_CCAB_ENABLE                                   342    /* f0 56 */
#define NUM_L1D_SEND                                      343    /* f0 57 */  /* composites */
#define NUM_UPC_COMPOSITE                                 344    /* f0 58 */

#define NUM_HOST_RESP_TIMEOUT                             345    /* f0 59 */  /* PCP parameter */
#define NUM_RF_CHANNEL                                    346    /* f0 5A */  /* PCP parameter */
#define NUM_RF_RETRIES                                    347    /* f0 5B */  /* PCP parameter */
#define NUM_CHANNEL_LOCK                                  348    /* f0 5C */  /* PCP parameter */

#define NUM_CUSTOM_BYTE_3                                 349    /* f0 5D */  /* custom for "things that exist in the parameter structure, but have no numbers yet" */
#define NUM_CUSTOM_BYTE_4                                 350    /* f0 5E */  /* custom for "things that exist in the parameter structure, but have no numbers yet" */
#define NUM_CUSTOM_BYTE_5                                 351    /* f0 5F */  /* custom for "things that exist in the parameter structure, but have no numbers yet" */
#define NUM_CUSTOM_BYTE_6                                 352    /* f0 60 */  /* custom for "things that exist in the parameter structure, but have no numbers yet" */
#define NUM_CUSTOM_BYTE_7                                 353    /* f0 61 */  /* custom for "things that exist in the parameter structure, but have no numbers yet" */
#define NUM_CUSTOM_BYTE_8                                 354    /* f0 62 */  /* custom for "things that exist in the parameter structure, but have no numbers yet" */
#define NUM_CUSTOM_BYTE_9                                 355    /* f0 63 */  /* custom for "things that exist in the parameter structure, but have no numbers yet" */
#define NUM_CUSTOM_BYTE_10                                356    /* f0 64 */  /* custom for "things that exist in the parameter structure, but have no numbers yet" */

#define NUM_UPDF_MARGIN                                   357    /* f0 65 */  /* UPDF performance factor - used for margin check enable/disable */

#define NUM_COUPON_REDUN                                  358    /* f0 66 */  /* Param like supps_redun except for co upons */

#define NUM_IMG_REVERSE_VIDEO                             359    /* f0 67 */
#define NUM_IMG_IMAGE_USE_AE                              360    /* f0 68 */
#define NUM_IMG_IMAGE_ILLUM                               361    /* f0 69 */
#define NUM_IMG_NOISY_1D                                  362    /* f0 6A */
#define NUM_IMG_MULTI_RETURN                              363    /* f0 6B */ /* used to return more than one barcode in the FOV */
#define NUM_MODE_SWITCH                                   364    /* f0 6C */
#define NUM_SS_SCAN_PATTERN                               365    /* f0 6D */

#define NUM_SIGCAP_WIDTH                                  366    /* f0 6e */
#define NUM_SIGCAP_HEIGHT                                 367    /* f0 6f */
#define NUM_SIGCAP_EVENT                                  368    /* f0 70 */

#define NUM_CAL_BEFORE_SCAN                               369    /* f0 71 */
#define NUM_CAL_AT_POWERUP                                370    /* f0 72 */

#define NUM_TCIF                                          371    /* f0 73 */  /* C39 composite for tcif */
#define NUM_IGNORE_SEPARATOR                              372    /* f0 74 */
#define NUM_FLATTEN_DECODE                                373    /* F0 75 */
#define NUM_WEBCODE                                       374    /* f0 76 */  /* enable scanlets */
#define NUM_CODEZ_EN                               NUM_WEBCODE    /* Renamed in imagekit */
#define NUM_WEBCODE_LEN1                                  375    /* f0 77 */
#define NUM_WEBCODE_LEN2                                  376    /* f0 78 */
#define NUM_GT_WEBCODE                                    377    /* f0 79 */  /* enable gt scanlets */
#define NUM_CUECODE                                       378    /* f0 7A */
#define NUM_CUECODE_LEN1                                  379    /* f0 7B */
#define NUM_CUECODE_LEN2                                  380    /* f0 7C */
#define NUM_MARGIN_RATIO                                  381    /* f0 7D */
#define NUM_AIMING_MODE                                   382    /* f0 7E */

#define NUM_MIA_HOSTNUM                                   383    /* f0 7F */

#define NUM_ILLUMINATION_EN                               384    /* f0 80 */  /* special test parameter for Positron */
#define NUM_REV3_SENSOR                                   385    /* f0 81 */  /* special test parameter for Positron */
#define NUM_FLATLINE_DETECT                               386    /* f0 82 */  /* special test parameter for Positron */
#define NUM_REV3_NUM_GAINS                                387    /* f0 83 */  /* special test parameter for Positron */
#define NUM_NOMINAL_OFFSET_GAIN                           388    /* f0 84 */  /* special test parameter for Positron */
#define NUM_MAX_INTEGRATION                               389    /* f0 85 */  /* special test parameter for Positron */
#define NUM_TARGET_WHITE                                  390    /* f0 86 */  /* special test parameter for Positron */
#define NUM_SATURATED                                     391    /* f0 87 */  /* special test parameter for Positron */

#define NUM_ADF_RULES                                     392    /* f0 88 */

#define NUM_USER_ENCRYPT_MODE                             393    /* f0 89 */  /* encryption parameter for Positron */
#define NUM_USER_ENCRYPT_ID                               394    /* F0 8A */  /* encryption parameter for Positron */
#define NUM_USER_ENCRYPT_EN                               395    /* F0 8B */  /* encryption parameter for Positron */
#define NUM_ASCII_MODE                                    396    /* F0 8C */  /* encryption parameter for Positron */

#define NUM_DEMOTE_RSS                                    397    /* F0 8D */
#define NUM_COMPOSITE_BEEP                                398    /* F0 8E */
#define NUM_MENU_MODE                                     399    /* F0 8F */
#define NUM_SCAN_ST_SESS_TO                               400    /* F0 90 */
#define NUM_BEEPER_FREQ_ADJ                               401    /* F0 91 */  /* offset from 2.5 kHz, in 10 Hz increments */
#define NUM_SCANLINE_WIDTH                                402    /* F0 92 */
#define NUM_PICKLIST_MODE                  NUM_SCANLINE_WIDTH
#define NUM_VOLUME_TRIGGER                                403    /* F0 93 */
#define NUM_C25_REDUN                                     404    /* F0 94 */
#define NUM_MOTOR_DUTY                                    405    /* F0 95 */
#define NUM_C25_LEN1                                      406    /* F0 96 */
#define NUM_C25_LEN2                                      407    /* F0 97 */
#define NUM_C25                                           408    /* F0 98 */

#define NUM_HOST_BEEP_CONTROL                             409    /* F0 99 */  /* Host driver beep controller */

#define NUM_WEDGE_HOST                                    410    /* F0 9A */  /* wedge */
#define NUM_WEDGE_COUNTRY_CODE                            411    /* F0 9B */  /* wedge */
#define NUM_INTERSCANCODE_DELAY                           412    /* F0 9C */  /* wedge */
#define NUM_CONVERT_CTRL_CHARS                            413    /* F0 9D */  /* wedge */
#define NUM_SEND_MAKE_BREAK                               414    /* F0 9E */  /* wedge */
#define NUM_EMULATE_KEYPAD                                415    /* F0 9F */  /* wedge */

#define NUM_WAND_HOST                                     416    /* F0 A0 */  /* wand */
#define NUM_WAND_BAR_OUTPUT                               417    /* F0 A1 */  /* wand */
#define NUM_LEADING_MARGIN                                418    /* F0 A2 */  /* wand */
#define NUM_CONV_ALL_TO_C39                               419    /* F0 A3 */  /* wand */

#define NUM_DEC_LED                                       420    /* F0 A4 */  /* Decode LED parameter for Stop & Shop scanner */

#define NUM_IMAGE_SIG_JPEG_QUALITY                        421    /* F0 A5 */  /* [1 - 100] */ /*a.s. added, using pad for word alignment */
#define NUM_PICO_FOCUS_MODE                               422    /* F0 A6 */

#define NUM_IMAGE_VARIABLE_GAIN                           423    /* F0 A7 */

#define NUM_ALS_CONSTANT                                  424    /* F0 A8 */  /* imager ambient light sensor and power */
#define NUM_ALS_SAMPLE_PERIOD                             425    /* F0 A9 */  /* imager ambient light sensor and power */

#define NUM_IMAGER_POWER_MODE                             426    /* F0 AA */
#define NUM_EMUL_UCCEAN128                                427    /* F0 AB */
#define SYNAPSE_CABLE_AUTOD                               428    /* F0 AC */
#define NUM_IMAGER_EXT_ILLUM_MODE                         429    /* F0 AD */
#define NUM_PICK_LIST_ENABLED                             430    /* F0 AE */

#define NUM_LASER_ON_FOREVER                              431    /* F0 AF */

#define NUM_PLURAL_ROW1_FORMAT                            432    /* F0 B0 */  /* Plural Stage: 1st row data xmission format option*/
#define NUM_PLURAL_ROW2_FORMAT                            433    /* F0 B1 */  /* Plural Stage: 2nd row data xmission format option*/
#define NUM_PLURAL_ROW3_FORMAT                            434    /* F0 B2 */  /* Plural Stage: 3rd row data xmission format option*/
#define NUM_PLURAL_ROW4_FORMAT                            435    /* F0 B3 */  /* Plural Stage: 4th row data xmission format option*/
#define NUM_PLURAL_ROW5_FORMAT                            436    /* F0 B4 */  /* Plural Stage: 5th row data xmission format option*/

#define NUM_PLURAL_ROW1_PREFIX                            437    /* F0 B5 */
#define NUM_PLURAL_ROW1_SUFFIX                            438    /* F0 B6 */
#define NUM_PLURAL_ROW2_PREFIX                            439    /* F0 B7 */
#define NUM_PLURAL_ROW2_SUFFIX                            440    /* F0 B8 */
#define NUM_PLURAL_ROW3_PREFIX                            441    /* F0 B9 */
#define NUM_PLURAL_ROW3_SUFFIX                            442    /* F0 BA */
#define NUM_PLURAL_ROW4_PREFIX                            443    /* F0 BB */
#define NUM_PLURAL_ROW4_SUFFIX                            444    /* F0 BC */
#define NUM_PLURAL_ROW5_PREFIX                            445    /* F0 BD */
#define NUM_PLURAL_ROW5_SUFFIX                            446    /* F0 BE */

#define NUM_PLURAL_MODE_SELECT                            447    /* F0 BF */  /* Plural Stage: Plural stage recognition mode option */
#define NUM_PLURAL_DECODE_TRANSMIT                        448    /* F0 C0 */  /* Plural Stage: Number of stages to decode in non recognition code mode */
#define NUM_PLURAL_INHIBIT_TIMEOUT                        449    /* F0 C1 */  /* Plural Stage: used to inject a delay time between nrc mode plural stage decodes*/

#define NUM_DOUBLE_STAGE_ID                               450    /* F0 C2 ImageKit needs this to make Library Builds */
#define PLURAL_2STG_ROW1_CODE1_CHAR                       450    /* F0 C2 */
#define PLURAL_2STG_ROW1_CODE1_POSVAL                     451    /* F0 C3 */
#define PLURAL_2STG_ROW1_CODE2_CHAR                       452    /* F0 C4 */
#define PLURAL_2STG_ROW1_CODE2_POSVAL                     453    /* F0 C5 */
#define PLURAL_2STG_ROW2_CODE1_CHAR                       454    /* F0 C6 */
#define PLURAL_2STG_ROW2_CODE1_POSVAL                     455    /* F0 C7 */

#define PLURAL_STG_4TH_DIGIT_SRC                          456    /* F0 C8 */  /* Plural Stage: Enable SRC 4th Digit check */
#define NUM_HHLS_PAR_PROCESS_MODE                         457    /* F0 C9 */  /* Hand-Held Laser Scanner(HHLS) Options */
#define NUM_PARAM_TYPE99                                  458    /* F0 CA */  /* SSI Parameter Processing for ssi type 99 decode data */

#define PLURAL_2STG_ROW2_CODE2_CHAR                       459    /* F0 CB */
#define PLURAL_2STG_ROW2_CODE2_POSVAL                     460    /* F0 CC */

#define NUM_TRIPLE_STAGE_ID                               461    /* F0 CD ImageKit needs this to make Library Builds */
#define PLURAL_3STG_ROW1_CODE1_CHAR                       461    /* F0 CD */
#define PLURAL_3STG_ROW1_CODE1_POSVAL                     462    /* F0 CE */
#define PLURAL_3STG_ROW1_CODE2_CHAR                       463    /* F0 CF */
#define PLURAL_3STG_ROW1_CODE2_POSVAL                     464    /* F0 D0 */
#define PLURAL_3STG_ROW2_CODE1_CHAR                       465    /* F0 D1 */
#define PLURAL_3STG_ROW2_CODE1_POSVAL                     466    /* F0 D2 */
#define PLURAL_3STG_ROW2_CODE2_CHAR                       467    /* F0 D3 */
#define PLURAL_3STG_ROW2_CODE2_POSVAL                     468    /* F0 D4 */
#define PLURAL_3STG_ROW3_CODE1_CHAR                       469    /* F0 D5 */
#define PLURAL_3STG_ROW3_CODE1_POSVAL                     470    /* F0 D6 */
#define PLURAL_3STG_ROW3_CODE2_CHAR                       471    /* F0 D7 */
#define PLURAL_3STG_ROW3_CODE2_POSVAL                     472    /* F0 D8 */
#define NUM_QUAD_STAGE_ID                                 473    /* F0 D9 ImageKit needs this to make Library Builds */
#define PLURAL_4STG_ROW1_CODE1_CHAR                       473    /* F0 D9 */
#define PLURAL_4STG_ROW1_CODE1_POSVAL                     474    /* F0 DA */
#define PLURAL_4STG_ROW1_CODE2_CHAR                       475    /* F0 DB */
#define PLURAL_4STG_ROW1_CODE2_POSVAL                     476    /* F0 DC */
#define PLURAL_4STG_ROW2_CODE1_CHAR                       477    /* F0 DD */
#define PLURAL_4STG_ROW2_CODE1_POSVAL                     478    /* F0 DE */
#define PLURAL_4STG_ROW2_CODE2_CHAR                       479    /* F0 DF */
#define PLURAL_4STG_ROW2_CODE2_POSVAL                     480    /* F0 E0 */
#define PLURAL_4STG_ROW3_CODE1_CHAR                       481    /* F0 E1 */
#define PLURAL_4STG_ROW3_CODE1_POSVAL                     482    /* F0 E2 */
#define PLURAL_4STG_ROW3_CODE2_CHAR                       483    /* F0 E3 */
#define PLURAL_4STG_ROW3_CODE2_POSVAL                     484    /* F0 E4 */
#define PLURAL_4STG_ROW4_CODE1_CHAR                       485    /* F0 E5 */
#define PLURAL_4STG_ROW4_CODE1_POSVAL                     486    /* F0 E6 */
#define PLURAL_4STG_ROW4_CODE2_CHAR                       487    /* F0 E7 */
#define PLURAL_4STG_ROW4_CODE2_POSVAL                     488    /* F0 E8 */

#define PSTAGE_INTERDECODE_TIMEOUT                        489    /* F0 E9 */  /* Plural Stage:  plural inter decode wait timeout */
#define PSTAGE_SAMESYMBOL_TIMEOUT                         490    /* F0 EA */  /* Plural Stage:  plural same symbol timeout */
#define PLURAL_2STG_ENABLE_RC_MODE                        491    /* F0 EB */  /* Plural Stage: double stage enable/disable */
#define PLURAL_3STG_ENABLE_RC_MODE                        492    /* F0 EC */  /* Plural Stage: triple stage enable/disable */
#define PLURAL_4STG_ENABLE_RC_MODE                        493    /* F0 ED */  /* Plural Stage: quad stage enable/disable */
#define PLURAL_XMIT_RC_MODE                               494    /* F0 EE */  /* Plural Stage: xmit pstage recognition codes */
#define PLURAL_SUPPLEMENTAL_RC                            495    /* F0 EF */  /* Plural Stage: DC... Supplemental Recognition Characters */

/********************************************************
  DO NOT USE VALUES 495 THROUGH 511...
********************************************************/

#define PLURAL_STG_UNUSED3BITS                            512    /* F1 00 */
#define PLURAL_STG_SRC_CHARACTERS                         513    /* F1 01 */
#define NUM_IMAGE_FUZZY_1D                                514    /* F1 02 */
#define NUM_ALPINE_RASTER_TOP                             515    /* F1 03 */
#define NUM_ALPINE_RASTER_NEUTRAL                         516    /* F1 04 */
#define NUM_ALPINE_RASTER_BOT                             517    /* F1 05 */
#define NUM_RASTER_MODE                                   518    /* F1 06 */
#define NUM_USE_DIST_39                                   519    /* F1 07 */
#define NUM_USE_DIST_128                                  520    /* F1 08 */
#define NUM_DPM_EN                                        521    /* F1 09 */
#define NUM_AIM_NEAR_X1                                   522    /* F1 0A */
#define NUM_AIM_NEAR_Y1                                   523    /* F1 0B */
#define NUM_AIM_NEAR_X2                                   524    /* F1 0C */
#define NUM_AIM_NEAR_Y2                                   525    /* F1 0D */
#define NUM_AIM_FAR_X1                                    526    /* F1 0E */
#define NUM_AIM_FAR_Y1                                    527    /* F1 0F */
#define NUM_AIM_FAR_X2                                    528    /* F1 10 */
#define NUM_AIM_FAR_Y2                                    529    /* F1 11 */
#define NUM_BO_LASER_TEMP                                 530    /* F1 12 */
#define NUM_BO_LASER_CURRENT                              531    /* F1 13 */
#define NUM_BO_X_MOTOR_FREQ                               532    /* F1 14 */
#define NUM_MODEL_NUMBER                                  533    /* F1 15 */
#define NUM_SERIAL_NUMBER                                 534    /* F1 16 */
#define NUM_DATE_OF_MANUFACTURE                           535    /* F1 17 */
#define NUM_DATE_OF_SERVICE                               536    /* F1 18 */
#define NUM_MIRROR_IMAGE                                  537    /* F1 19 */
#define NUM_BT_MULTIPOINT                                 538    /* F1 1A */
#define NUM_NO_MARG_SUPP_EN                               539    /* F1 1B */
#define NUM_FREQ_OF_TUNING_BT                             540    /* F1 1C */
#define NUM_BT_ADDR                                       541    /* F1 1D */
#define NUM_PAIR_LOCK_MODE                                542    /* F1 1E */
#define NUM_BATT_RECONDITION                              543    /* F1 1F */
#define NUM_BATCH_MODE                                    544    /* F1 20 */
#define NUM_PAIR_ON_CONTACT                               545    /* F1 21 */
#define NUM_OCR_EN                                        546    /* F1 22 */
#define NUM_OCR_TEMPLATE1                                 547    /* F1 23 */
#define NUM_OCR_FONT1                                     548    /* F1 24 */
#define NUM_BT_AUTHENTICATION                             549    /* F1 25 */
#define NUM_BT_ENCRYPTION                                 550    /* F1 26 */
#define NUM_SYNAPSE_ALWAYS                                551    /* F1 27 */
#define NUM_BT_PINCODE                                    552    /* F1 28 */
#define NUM_OCRB_CHECK_DIGIT                              553    /* F1 29 */
#define NUM_OCR_SECURITY_LEVEL                            554    /* F1 2A */
#define NUM_HOST_SEND_DLY                                 555    /* F1 2B */
#define NUM_MGMT_BOOT_EVENT                               556    /* F1 2C */
#define NUM_MGMT_TOPOLOGY_EVENT                           557    /* F1 2D */
#define NUM_RECONNECT_ATTEMPTS                            558    /* F1 2E */
#define NUM_BEEP_ON_RECON_ATTEMPT                         559    /* F1 2F */
#define NUM_INTELLISTAND_TIMEOUT                          560    /* F1 30 */
#define NUM_IMG_JPEG_FILESIZEW                            561    /* F1 31 */
#define NUM_IMG_GAIN_EXP_PRIORITY                         562    /* F1 32 */
#define NUM_FRENCH_LOTTERY                                563    /* F1 33 */
#define NUM_IMG_ENHANCEMENT                               564    /* F1 34 */
#define NUM_HANDSFREE_SUBSAMPLE_FACTOR                    565    /* F1 35 */
#define NUM_DEC_TARGET_WHITE                              566    /* F1 36 */
#define NUM_FIXED_EXPOSURE                                567    /* F1 37 */  /* in terms of 100 microseconds */
#define NUM_FIXED_GAIN                                    568    /* F1 38 */
#define NUM_DEC_MAX_SLIT_FRAMES                           569    /* F1 39 */
#define NUM_AE_METERING                                   570    /* F1 3A */
#define NUM_ILLUM_BANK_CTRL                               571    /* F1 3B */
#define NUM_MSI_STITCH_ENABLED                            572    /* F1 3C */
#define NUM_UQR_EN                                        573    /* F1 3D */
#define NUM_AZTEC                                         574    /* F1 3E */
#define NUM_SIGCAP2PASS                                   575    /* F1 3F */  /* re-capture signature using imagecap */
#define NUM_BOOKLAND_FORMAT                               576    /* F1 40 */
#define NUM_ISBT_CONCAT_AUTOD                             577    /* F1 41 */
#define NUM_CHECK_ISBT_TABLE                              578    /* F1 42 */  /* check ISBT table for allowable combinations */
#define NUM_SUPP_USER_1                                   579    /* F1 43 */
#define NUM_SUPP_USER_2                                   580    /* F1 44 */
#define NUM_K35                                           581    /* F1 45 */
#define NUM_K35_REDUN                                     582    /* F1 46 */
#define NUM_K35_L1                                        583    /* F1 47 */
#define NUM_K35_L2                                        584    /* F1 48 */
#define NUM_XMIT_IMAGE                                    585    /* F1 49 */  /* gates the transmission of an image to the host (GTECH) */
#define NUM_1D_INVERSE                                    586    /* F1 4A */
#define NUM_QR_INVERSE                                    587    /* F1 4B */
#define NUM_DATAMATRIX_INVERSE                            588    /* F1 4C */
#define NUM_AZTEC_INVERSE                                 589    /* F1 4D */
#define NUM_AIMMODEHANDSFREE                              590    /* F1 4E */
#define NUM_FRENCH_LOTTERY_CRC_CHK                        591    /* F1 4F */
#define NUM_POST_US3                                      592    /* F1 50 */
#define NUM_OCR_BG_NOISE                                  593    /* F1 51 */
#define NUM_DOCCAP_MODE                                   594    /* F1 52 */
#define NUM_DOCCAP_ENABLE                                 594    /* F1 52 */
#define NUM_DOCCAP_ASPECT                                 595    /* F1 53 */
#define NUM_DOCCAP_X                                      596    /* F1 54 */
#define NUM_DOCCAP_Y                                      597    /* F1 55 */
#define NUM_DOCCAP_WIDTH                                  598    /* F1 56 */
#define NUM_DOCCAP_HEIGHT                                 599    /* F1 57 */
#define NUM_PDF_SECURITY_LEVEL                            600    /* F1 58 */
#define NUM_DOCCAP_FMT                                    601    /* F1 59 */
#define NUM_DOCCAP_BPP                                    602    /* F1 5A */
#define NUM_DOCCAP_JPEG_QUALITY                           603    /* F1 5B */
#define NUM_BT_AUTO_RECON                                 604    /* F1 5C */
#define NUM_ALPINE_PDF_RASTER_TOP                         605    /* F1 5D */
#define NUM_ALPINE_PDF_RASTER_BOT                         606    /* F1 5E */
#define NUM_BT_FRIENDLY_NAME                              607    /* F1 5F */
#define NUM_PIN_CODE_TYPE                                 608    /* F1 60 */
#define NUM_PRESENTATION_ZONE                             609    /* F1 61 */
#define NUM_BT_INQUIRY_MODE                               610    /* F1 62 */
#define NUM_POST_US4                                      611    /* F1 63 */  /* USPS FICS - UPU S18D */
#define NUM_LOLITE_ENHANCE                                612    /* F1 64 */  /* low light assistance enable */
#define NUM_PAGER_MOTOR_ENABLE                            613    /* F1 65 */
#define NUM_DATE_FIRST_PROGRAM                            614    /* F1 66 */
#define NUM_PARAMETER_LOCK                                615    /* F1 67 */
#define NUM_CONFIG_FILE                                   616    /* F1 68 */
#define NUM_ISSN_EAN_EN                                   617    /* F1 69 */
#define NUM_MATRIX_25_EN                                  618    /* F1 6A */
#define NUM_MATRIX_25_LEN1                                619    /* F1 6B */
#define NUM_MATRIX_25_LEN2                                620    /* F1 6C */
#define NUM_MATRIX_25_REDUN                               621    /* F1 6D */
#define NUM_MATRIX_25_CHK_EN                              622    /* F1 6E */
#define NUM_MATRIX_25_XMIT_CHK                            623    /* F1 6F */
#define NUM_MIRROR_SENSOR_IMAGE                           624    /* F1 70 */
#define NUM_USER_PARAM_PASSTHROUGH                        625    /* F1 71 */
#define NUM_PAGER_MOTOR_DURATION                          626    /* F1 72 */
#define NUM_RSM_DEVICE_LEVEL                              627    /* F1 73 */
#define NUM_BEEPER_DURATION                               628    /* F1 74 */
#define NUM_RANGE_RESTRICT                                629    /* F1 75 */
#define NUM_HANDSFREE_MODE                                630    /* F1 76 */
#define NUM_TRIG_A_ENGINE                                 631    /* F1 77 */
#define NUM_TRIG_B_ENGINE                                 632    /* F1 78 */
#define NUM_TRIG_AB_ENGINE                                633    /* F1 79 */
#define NUM_TRIG_AB_DBNC_TO                               634    /* F1 7A */
#define NUM_TRIG_AB_DBNC_WAIT                             635    /* F1 7B */
#define NUM_TRIG_HOST_ENGINE                              636    /* F1 7C */
#define NUM_PREF_LASER_TO                                 637    /* F1 7D */
#define NUM_IMG_SNAP_DUPLEX                               638    /* F1 7E */
#define NUM_RFID_BEEPER_FREQ                              639    /* F1 7F */
#define NUM_RFID_SAME_TAG_TO                              640    /* F1 80 */
#define NUM_RFID_HANDSFREE_MODE                           641    /* F1 81 */
#define NUM_RFID_TRIG_MODE                                642    /* F1 82 */
#define NUM_RFID_XMIT_FORMAT                              643    /* F1 83 */
#define NUM_RFID_AUTOKILL                                 644    /* F1 84 */
#define NUM_DL_PARSE_MODE                                 645    /* F1 85 */
#define NUM_DL_PARSE_BUFF                                 646    /* F1 86 */
#define NUM_BLINK_SNAP_BY_MOTION                          647    /* F1 87 */  /* blinking snapshot mode by motion/no motion detection */
#define NUM_CONTINUE_SNAPSHOT                             648    /* F1 88 */  /* whether snapshot mode is temp mode - only apply to blink mode */
#define NUM_CONTINUE_BC_READ                              649    /* F1 89 */  /* continuous barcode read - multiple barcode method #1 */
#define NUM_PERFORMANCE_MODE                              650    /* F1 8A */
#define NUM_SIG_MINPERCENT                                651    /* F1 8B */
#define NUM_SIG_MAXROT                                    652    /* F1 8C */
#define NUM_SIG_DESKEW                                    653    /* F1 8D */
#define NUM_SIG_BRIGHTEN                                  654    /* F1 8E */  /* request brighter signature */
#define NUM_SIG_SYMBOLOGY                                 655    /* F1 8F */
#define NUM_SIG_MINTEXT                                   656    /* F1 90 */
#define NUM_SIG_MAXTEXT                                   657    /* F1 91 */
#define NUM_SIG_SHARPEN                                   658    /* F1 92 */  /* request sharper signature */
#define NUM_SIG_HIBLUR                                    659    /* F1 93 */
/*efine NUM_MULTICODE_MODE                                660       F1 94      Was never used. Can never be used */
#define NUM_MULTICODE_EXPRESSION                          661    /* F1 95 */
#define NUM_PRESENTATION_SLEEP_TO                         662    /* F1 96 */

#define NUM_PRESENTATION_IDLE_TO                          663    /* F1 97 */
#define NUM_IMG_EDGE_SHARPEN                              664    /* F1 98 */
#define NUM_IMG_ROTATION                                  665    /* F1 99 */
#define NUM_IMG_CONTRAST_ENHANCEMENT                      666    /* F1 9A */
#define NUM_VIDEO_SUBSAMPLE                               667    /* F1 9B */
#define NUM_AIM_BRIGHTNESS                                668    /* F1 9C */
#define NUM_ILLUMINATION_BRIGHTNESS                       669    /* F1 9D */
#define NUM_STATIC_CDC                                    670    /* F1 9E */
#define NUM_RS232_RX_IN_LOW_POWER                         671    /* F1 9F */
#define NUM_AIMID_SUPP_FORMAT                             672    /* F1 A0 */
#define NUM_EXCLUSIVE_CODE128_EN                          673    /* F1 A1 */
#define NUM_FRAME_RATE                                    674    /* F1 A2 */
#define NUM_WIRELESS_HOST_NUM                             675    /* F1 A3 */  /* Shadow copy of BT HOST Numbers for NG Phaser*/
#define NUM_HOST_MODE                                     676    /* F1 A4 */  /* Cable Only, Wireless Only, Cable Priority* */
#define NUM_MULTICODE_MODE                                677    /* F1 A5 */  /* Replaced 660 */
#define NUM_SWIPE_PRESENTATION_MODE                       678    /* F1 A6 */
#define NUM_MOTION_DETECT_THRESHOLD                       679    /* F1 A7 */
#define NUM_OCRA_EN                                       680    /* F1 A8 */
#define NUM_OCRB_EN                                       681    /* F1 A9 */
#define NUM_MICR_E13B_EN                                  682    /* F1 AA */
#define NUM_USCURRENCY_EN                                 683    /* F1 AB */
#define NUM_OCRA_VARIANT                                  684    /* F1 AC */
#define NUM_OCRB_VARIANT                                  685    /* F1 AD */
#define NUM_OCR_SUBSET                                    686    /* F1 AE */
#define NUM_OCR_ORIENTATION                               687    /* F1 AF */
#define NUM_OCR_CHK_DGT_MOD                               688    /* F1 B0 */
#define NUM_OCR_MIN_CHAR                                  689    /* F1 B1 */
#define NUM_OCR_MAX_CHAR                                  690    /* F1 B2 */
#define NUM_OCR_LINES                                     691    /* F1 B3 */
#define NUM_VAL_CONCAT_PARAM_BARCODE                      692    /* F1 B4 */
#define NUM_IMAGE_FILE_METADATA                           693    /* F1 B5 */
#define NUM_OCR_CHK_DGT_VALID                             694    /* F1 B6 */
#define NUM_OCR_QUIET_ZONE                                695    /* F1 B7 */
#define NUM_OCR_BW_LEVEL                                  696    /* F1 B8 */
#define NUM_OCR_DESPECKLE                                 697    /* F1 B9 */
#define NUM_OCR_THICKEN                                   698    /* F1 BA */
#define NUM_OCR_LOW_PASS_FILTER                           699    /* F1 BB */
#define NUM_OCR_CHK_DGT_MULTI                             700    /* F1 BC */
#define NUM_OCR_BRIGHT_ILLUM                              701    /* F1 BD */
#define NUM_OCR_FINDER_EN                                 702    /* F1 BE */
#define NUM_CHECK_CBAR_CHKDGT                             703    /* F1 BF */
#define NUM_XMIT_CBAR_CHKDGT                              704    /* F1 C0 */
#define NUM_2D_PARAM_PROG                                 705    /* F1 C1 */
#define NUM_FEATURE_SET                                   706    /* F1 C2 */
#define NUM_OCR_FINDER_EXTERNAL                           707    /* F1 C3 */
#define NUM_RFID_RPT_BUFF_FULL                            708    /* F1 C4 */
#define NUM_RFID_XMIT_UNKN_TAG                            709    /* F1 C5 */
#define NUM_RFID_ANTENNA_SELECT                           710    /* F1 C6 */
#define NUM_RFID_ANTENNA_PWR_HH                           711    /* F1 C7 */
#define NUM_RFID_ANTENNA_PWR_HF                           712    /* F1 C8 */
#define NUM_RFID_HF_IDLE_TO                               713    /* F1 C9 */
#define NUM_RFID_XMIT_RAW_W_PC                            714    /* F1 CA */
#define NUM_RFID_XMIT_APPEND_RSSI                         715    /* F1 CB */
#define NUM_CELL_EN                                       716    /* F1 CC */
#define NUM_MULTICODE_CONCAT                              717    /* F1 CD */  /* multiple code mode concatenation enable/disable */
#define NUM_POST_AUS_FMT                                  718    /* F1 CE */
#define NUM_DMV_PROCESSING                                719    /* F1 CF */
#define NUM_DMV_TIMEOUT                                   720    /* F1 D0 */
#define NUM_SUPPRESS_PWRUP_BEEPS                          721    /* F1 D1 */
#define NUM_MULTICODE_CONCAT_CODE_TYPE                    722    /* F1 D2 */  /* cont. bc read uniqueness enable/disable */
#define NUM_UNIQUEESS_EN                                  723    /* F1 D3 */
#define NUM_TRIG_TIMEOUT_SAME_SYMBOL                      724    /* F1 D4 */  /* enable triggered same symbol timeout */
#define NUM_CELL_NOLITE                                   725    /* F1 D5 */
#define NUM_CELL_FREQ                                     726    /* F1 D6 */
#define NUM_SIG_FINDBOX                                   727    /* F1 D7 */
#define NUM_DATABAR_LIM_SEC_LEV                           728    /* F1 D8 */
#define NUM_DATABAR_LIM_MARGIN_CHK    NUM_DATABAR_LIM_SEC_LEV    /* F1 D8 - redefine for newer imagekits */
#define NUM_AUTOAIM_AIM_OFF_TO_IDLE_TIME                  729    /* F1 D9 */
#define NUM_COUPON_REPORT                                 730    /* F1 DA */
#define NUM_ACQ_MODE                                      731    /* F1 DE */
#define NUM_MAXI_FIRST_PROCESSING                         732    /* F1 DC */
#define NUM_MAXI_FIRST_TIMEOUT                            733    /* F1 DD */
#define NUM_SMOOTHING_EN                                  734    /* F1 DE */
#define NUM_SMOOTHING_BORDER                              735    /* F1 DF */
#define NUM_FIPS_MODE                                     736    /* F1 E0 */
#define NUM_AES_KEY                                       737    /* F1 E1 */
#define NUM_SHARED_KEY                                    738    /* F1 E2 */
#define NUM_MOA_SUBTYPE                                   739    /* F1 E3 */
#define NUM_UID_PARSE_MODE                                740    /* F1 E4 */
#define NUM_UID_TABLE                                     741    /* F1 E5 */
#define NUM_UID_ERROR_MODE                                742    /* F1 E6 */
#define NUM_SCAN_SINGLE                                   743    /* F1 E7 */
#define NUM_DECODE_LED                                    744    /* F1 E8 */
#define NUM_SIMULATED_SCANSTAND_DELAY                     745    /* F1 E9 */
#define NUM_PAGER_BUTTON_EN                               746    /* F1 EA */
#define NUM_TORCH_MODE                                    747    /* F1 EB */
#define NUM_SMART_LED                                     748    /* F1 EC */
#define NUM_FORCE_RESET_IN_USB                            749    /* F1 ED */
#define NUM_C39_SECURITY_LEVEL                            750    /* F1 EE */
#define NUM_C128_SECURITY_LEVEL                           751    /* F1 EF */

/********************************************************
  DO NOT USE VALUES 752 THROUGH 767
*********************************************************/

#define NUM_MEMS_ENABLE                                   768    /* F2 00 */  /* RS507 */
#define NUM_PROXIMITY_ENABLE                              769    /* F2 01 */  /* RS507 */
#define NUM_PROXIMITY_DISTANCE                            770    /* F2 02 */  /* RS507 */
#define NUM_PROXIMITY_THRESHOLD                           771    /* F2 03 */  /* RS507 */
#define NUM_PROXIMITY_TIMEOUT                             772    /* F2 04 */  /* RS507 */
#define NUM_PROXIMITY_RETRY                               773    /* F2 05 */  /* RS507 */
#define NUM_LOGGING_ENABLE                                774    /* F2 06 */  /* RS507 */
#define NUM_LOGGING_LEVEL                                 775    /* F2 07 */  /* RS507 */
#define NUM_LOG_TO_DEBUG_EN                               776    /* F2 08 */  /* RS507 */
#define NUM_PAGING_ENABLE                                 777    /* F2 09 */  /* RS507 */
#define NUM_PAGING_BEEP_SEQ                               778    /* F2 0A */  /* RS507 */
#define NUM_LOW_BATTERY_IND_EN                            779    /* F2 0B */  /* RS507 */
#define NUM_SCAN_TRIG_WAKEUP_EN                           780    /* F2 0C */  /* RS507 */
#define NUM_DATE_TIME                                     781    /* F2 0D */  /* RS507 */
#define NUM_BLUETOOTH_ENABLE                              782    /* F2 0E */  /* RS507 */
#define NUM_BLUETOOTH_INTERFACE                           783    /* F2 0F */  /* RS507 */
#define NUM_BLUETOOTH_AUTO_RECON                          784    /* F2 10 */  /* RS507 */
#define NUM_ILLUMINATION_MODE                             785    /* F2 11 */  /* RS507 */
#define NUM_BOOT_ON_EXCEPTION_EN                          786    /* F2 12 */  /* RS507 */
#define NUM_LOW_BATTERY_IND_CYCLE                         787    /* F2 13 */  /* RS507 */
#define NUM_BATTERY_MONITOR_CYCLE                         788    /* F2 14 */  /* RS507 */
#define NUM_PREFERRED_WIRELESS_HOST                       789    /* F2 15 */  /* RS507 */
#define NUM_TRIGGER_EVENT                                 790    /* F2 16 */  /* RS507 */
#define NUM_PROXIMITY_PATTERN_LSB                         791    /* F2 17 */  /* RS507 */
#define NUM_PROXIMITY_PATTERN_MSB                         792    /* F2 18 */  /* RS507 */
#define NUM_PROXIMITY_CONTINUOUS_EN                       793    /* F2 19 */  /* RS507 */
#define NUM_GOOD_SCANS_DELAY                              794    /* F2 1A */  /* RS507 */
#define NUM_FORCE_PAIRING_SAVE                            795    /* F2 1B */  /* RS507 */
#define NUM_MEMS_MOVEMENT_THRESHOLD_1                     796    /* F2 1C */  /* RS507 */
#define NUM_MEMS_MOVEMENT_TIMEOUT_1                       797    /* F2 1D */  /* RS507 */
#define NUM_MEMS_MOVEMENT_THRESHOLD_2                     798    /* F2 1E */  /* RS507 */
#define NUM_MEMS_MOVEMENT_TIMEOUT_2                       799    /* F2 1F */  /* RS507 */
#define NUM_MEMS_SENSITIVITY                              800    /* F2 20 */  /* RS507 */
#define NUM_BT_AZTEC_PAIRING_EN                           801    /* F2 21 */  /* RS507 */

#define NUM_PARAM_LOCK                                    802    /* F2 22 */
#define NUM_PARAM_UNLOCK                                  803    /* F2 23 */
#define NUM_IR_SENSOR_CALIBRATE_VAL                       804    /* F2 24 */
#define NUM_MULTIPOINT_PORTS                              805    /* F2 25 */
#define NUM_CLEAR_MEMORY                                  806    /* F2 26 */
#define NUM_EMBEDDED_SCAN_ENGINE                          807    /* F2 27 */
#define NUM_AIM_WHILE_TRIGGER_RELEASED                    808    /* F2 28 */
#define NUM_PRESO_POST_DECODE_ILLUM_OFF                   809    /* F2 29 */
#define NUM_OBJECT_DETECT_SENSITIVITY                     810    /* F2 2A */
#define NUM_PARAMETER_SYNC                                811    /* F2 2B */
#define NUM_PLURAL_ROW1_PREFIX_CAT                        812    /* F2 2C */
#define NUM_PLURAL_ROW1_SUFFIX_CAT                        813    /* F2 2D */
#define NUM_PLURAL_ROW2_PREFIX_CAT                        814    /* F2 2E */
#define NUM_PLURAL_ROW2_SUFFIX_CAT                        815    /* F2 2F */
#define NUM_PLURAL_ROW3_PREFIX_CAT                        816    /* F2 30 */
#define NUM_PLURAL_ROW3_SUFFIX_CAT                        817    /* F2 31 */
#define NUM_PLURAL_ROW4_PREFIX_CAT                        818    /* F2 32 */
#define NUM_PLURAL_ROW4_SUFFIX_CAT                        819    /* F2 33 */
#define NUM_PLURAL_ROW5_PREFIX_CAT                        820    /* F2 34 */
#define NUM_PLURAL_ROW5_SUFFIX_CAT                        821    /* F2 35 */

#define NUM_BT_DISC_IND_EN                                822    /* F2 36 */  /* RS507 */
#define NUM_BT_DISC_BEEPDELAY_ON_BATTINS                  823    /* F2 37 */  /* RS507 */
#define NUM_BT_DISC_BEEPDELAY_ON_DISC                     824    /* F2 38 */  /* RS507 */
#define NUM_BT_DISC_BEEPTYPE_IND                          825    /* F2 39 */  /* RS507 */
#define NUM_BT_DICS_LEDTYPE_IND                           826    /* F2 3A */  /* RS507 */

#define NUM_OBJECT_DETECT_RANGE                           827    /* F2 3B */

#define NUM_BT_DISC_BEEP_LED_CYCLETIME                    828    /* F2 3C */

#define NUM_DOCCAP_BORDER                                 829    /* F2 3D */  /* 'free-form' based DocCap ImageKit feature */
#define NUM_DOCCAP_DELAY                                  830    /* F2 3E */  /* 'free-form' based DocCap ImageKit feature */

#define NUM_SER_EOT_DELAY                                 831    /* F2 3F */  /* SSI Lite host parameter */

#define NUM_PRODUCT_ID                                    832    /* F2 40 */

#define NUM_BT_LINK_KEYS                                  833    /* F2 41 */
#define NUM_FLEXI_SCRIPT                                  834    /* F2 42 */
#define NUM_BT_SILENT_PAIR                                835    /* F2 43 */
#define NUM_BECOME_BT_MASTER                              836    /* F2 44 */

#define NUM_BELL_INDICATION_EN                            837    /* F2 45 */  /* RS507 */
#define NUM_BELL_INDICATION                               838    /* F2 46 */  /* RS507 */
#define NUM_COMPRESS_LOGFILE_EN                           839    /* F2 47 */  /* RS507 */

#define NUM_PRIORITIZATION_ENABLE                         840    /* F2 48 */
#define NUM_PRIORITIZATION_TIMEOUT                        841    /* F2 49 */

#define NUM_ZORRO_BIRTH_DATA_PARAMS                       842    /* F2 4A */  /* SE965 calibration */
#define NUM_ZORRO_LASER_PARAMS                            843    /* F2 4B */  /* SE965 calibration */
#define NUM_ZORRO_RECEIVER_PARAMS                         844    /* F2 4C*/   /* SE965 calibration */
#define NUM_ZORRO_MOTOR_PARAMS                            845    /* F2 4D */  /* SE965 calibration */
#define NUM_ZORRO_DIGITIZER_PARAMS                        846    /* F2 4E */  /* SE965 calibration */
#define NUM_HARD_ENGINE_PARAMS                            847    /* F2 4F */  /* SE965 calibration */
#define NUM_SECOND_SERIAL_NUMBER                          848    /* F2 50 */  /* SE965 calibration */
#define NUM_ADAPTIVE_SCANNING_MODE                        849    /* F2 51 */  /* SE965 calibration */
#define NUM_ENGINE_TYPE                                   850    /* F2 52 */  /* SE965 calibration */

#define NUM_USPOSTNET_CHKDGT                              851    /* F2 53 */
#define NUM_USPLANET_CHKDGT                               852    /* F2 54 */
#define NUM_ENHANCEDAIM_AIM_TO                            853    /* F2 55 */
#define NUM_ENHANCEDAIM_SCAN_TO                           854    /* F2 56 */
#define NUM_CODABAR_CASE                                  855    /* F2 57 */
#define NUM_OCR_INVERSE                                   856    /* F2 58 */
#define NUM_ILLUM_ON_ALWAYS                               857    /* F2 59 */
#define NUM_MOTION_TOLERANCE                              858    /* F2 5A */
#define NUM_DECODE_BLINKS                                 859    /* F2 5B */
#define NUM_DECODE_BLINK_DUR                              860    /* F2 5C */

#define NUM_ILLUM_HORIZ_LEFT_PHASE_SHIFT1                 861    /* F2 5D */  /* Odyssey illumination calibration */
#define NUM_ILLUM_HORIZ_LEFT_PHASE_SHIFT2                 862    /* F2 5E */  /* Odyssey illumination calibration */
#define NUM_ILLUM_HORIZ_CENTER_PHASE_SHIFT1               863    /* F2 5F */  /* Odyssey illumination calibration */
#define NUM_ILLUM_HORIZ_CENTER_PHASE_SHIFT2               864    /* F2 60 */  /* Odyssey illumination calibration */
#define NUM_ILLUM_HORIZ_RIGHT_PHASE_SHIFT1                865    /* F2 61 */  /* Odyssey illumination calibration */
#define NUM_ILLUM_HORIZ_RIGHT_PHASE_SHIFT2                866    /* F2 62 */  /* Odyssey illumination calibration */
#define NUM_ILLUM_HORIZ_DURATION                          867    /* F2 63 */  /* Odyssey illumination calibration */

#define NUM_ILLUM_VERT_LEFT_PHASE_SHIFT1                  868    /* F2 64 */  /* Odyssey illumination calibration */
#define NUM_ILLUM_VERT_LEFT_PHASE_SHIFT2                  869    /* F2 65 */  /* Odyssey illumination calibration */
#define NUM_ILLUM_VERT_CENTER_PHASE_SHIFT1                870    /* F2 66 */  /* Odyssey illumination calibration */
#define NUM_ILLUM_VERT_CENTER_PHASE_SHIFT2                871    /* F2 67 */  /* Odyssey illumination calibration */
#define NUM_ILLUM_VERT_RIGHT_PHASE_SHIFT1                 872    /* F2 68 */  /* Odyssey illumination calibration */
#define NUM_ILLUM_VERT_RIGHT_PHASE_SHIFT2                 873    /* F2 69 */  /* Odyssey illumination calibration */
#define NUM_ILLUM_VERT_DURATION                           874    /* F2 6A */  /* Odyssey illumination calibration */

#define NUM_LASER_FAULT                                   875    /* F2 6B */  /* Odyssey illumination calibration */

#define NUM_EXPOSURE_HORIZ_DURATION1                      876    /* F2 6C */  /* Odyssey illumination calibration */
#define NUM_EXPOSURE_HORIZ_DURATION2                      877    /* F2 6D */  /* Odyssey illumination calibration */
#define NUM_EXPOSURE_VERT_DURATION1                       878    /* F2 6E */  /* Odyssey illumination calibration */
#define NUM_EXPOSURE_VERT_DURATION2                       879    /* F2 6F */  /* Odyssey illumination calibration */

#define NUM_FLEXI_ENABLE                                  880    /* F2 70 */
#define NUM_FLEXI_WORD_0                                  881    /* F2 71 */
#define NUM_FLEXI_WORD_1                                  882    /* F2 72 */
#define NUM_FLEXI_WORD_2                                  883    /* F2 73 */
#define NUM_FLEXI_WORD_3                                  884    /* F2 74 */
#define NUM_FLEXI_WORD_4                                  885    /* F2 75 */
#define NUM_FLEXI_WORD_5                                  886    /* F2 76 */
#define NUM_FLEXI_WORD_6                                  887    /* F2 77 */
#define NUM_FLEXI_WORD_7                                  888    /* F2 78 */
#define NUM_FLEXI_WORD_8                                  889    /* F2 79 */
#define NUM_FLEXI_WORD_9                                  890    /* F2 7A */

#define NUM_GAIN_HORIZ_1                                  891    /* F2 7B */
#define NUM_GAIN_HORIZ_2                                  892    /* F2 7C */
#define NUM_GAIN_VERT_1                                   893    /* F2 7D */
#define NUM_GAIN_VERT_2                                   894    /* F2 7E */
#define NUM_ANALOG_GAIN_HORIZ_1                           895    /* F2 7F */
#define NUM_ANALOG_GAIN_HORIZ_2                           896    /* F2 80 */
#define NUM_ANALOG_GAIN_VERT_1                            897    /* F2 81 */
#define NUM_ANALOG_GAIN_VERT_2                            898    /* F2 82 */
#define NUM_GUARANTEED_SWIPE_FRAMES                       899    /* F2 83 */
#define NUM_MOTION_PROXIMITY_THRESHOLD                    900    /* F2 84 */
#define NUM_TIME_TO_DECODE_MODE                           901    /* F2 85 */
#define NUM_ODYSSEY_RESERVED_12                           902    /* F2 86 */
#define NUM_ODYSSEY_RESERVED_13                           903    /* F2 87 */
#define NUM_ODYSSEY_RESERVED_14                           904    /* F2 88 */
#define NUM_ODYSSEY_RESERVED_15                           905    /* F2 89 */
#define NUM_ODYSSEY_RESERVED_16                           906    /* F2 8A */
#define NUM_ODYSSEY_RESERVED_17                           907    /* F2 8B */
#define NUM_ODYSSEY_RESERVED_18                           908    /* F2 8C */
#define NUM_ODYSSEY_RESERVED_19                           909    /* F2 8D */
#define NUM_ODYSSEY_TEST                                  910    /* F2 8E */

#define NUM_SSP_IO_CAPABILITY                             911    /* F2 8F */
#define NUM_AE_MAX_EXPOSURE                               912    /* F2 90 */
#define NUM_AE_HF_MAX_EXPOSURE                            913    /* F2 91 */
#define NUM_HF_DEC_TARGET_WHITE                           914    /* F2 92 */

#define NUM_COERCE_UPC_EAN                                915    /* F2 93 */
#define NUM_VIDEO_FORMAT                                  916    /* F2 94 */

#define NUM_DEBUG_DIAGNOSTIC_START                        917    /* F2 95 */

/**************************************************************************/
/* DIAGNOSTICS PARAMS, part of platform, do not use                       */
/**************************************************************************/

#define NUM_DEBUG_DIAGNOSTIC_END                          956    /* F2 BC */

#define NUM_DIAG_SUFFIX                                   957    /* F2 BD */

#define NUM_DOCCAP_BRIGHTEN                               958    /* F2 BE */
#define NUM_DOCCAP_SHARPEN                                959    /* F2 BF */

#define NUM_COUNTRY_KBD_TYPE                              960    /* F2 C0 */  /* country keyboard type */
#define NUM_CHARACTER_ENCODING                            961    /* F2 C1 */
#define NUM_COUNTRY_KBD_DOWNLOAD                          962    /* F2 C2 */  /* country keyboard type */
#define NUM_CP_DOWNLOAD                                   963    /* F2 C3 */

#define NUM_TOPOLOGY_EVENT                                964    /* F2 C4 */
#define NUM_SCALE_PRESENT                                 965    /* F2 C5 */
#define NUM_EAS_PRESENT                                   966    /* F2 C6 */
#define NUM_IMG_HW_ASSIST                                 967    /* F2 C7 */
#define NUM_HORIZ_IMG_SPLIT1                              968    /* F2 C8 */
#define NUM_HORIZ_IMG_SPLIT2                              969    /* F2 C9 */
#define NUM_VERT_IMG_SPLIT1                               970    /* F2 CA */
#define NUM_VERT_IMG_SPLIT2                               971    /* F2 CB */
#define NUM_CHINESE_NEIMA_INPUT                           972    /* F2 CC */  /* Chinese Simplified NeiMa input (GBK/Unicode/QuWei) */
#define NUM_CONTROL_EMULATE_INPUT                         973    /* F2 CD */  /* Control character emulate input enable/disable */
#define NUM_DIGIT_KEYPAD_INPUT                            974    /* F2 CE */  /* Digital character direct input from keypad */
#define NUM_KEEP_HW_ASSIST_DATA                           975    /* F2 CF */  /* For controlling Image-Formatting with Rank-Filter FPGA */
#define NUM_COUNTRY_KBD_DOWNLOAD_SEPARATE                 976    /* F2 D0 */

#define NUM_EAS_OPERATING_MODE                            977    /* F2 D1 */
#define NUM_EAS_REQ_COMM_MESS                             978    /* F2 D2 */
#define NUM_EAS_DEACT                                     979    /* F2 D3 */
#define NUM_EAS_DETECT_GEIGER_COUNTER                     980    /* F2 D4 */
#define NUM_EAS_DEACT_OVERRIDE_BUTTON                     981    /* F2 D5 */
#define NUM_EAS_DEACT_TIMEOUT                             982    /* F2 D6 */
#define NUM_EAS_CHCKPT_INTERLOCK_POL                      983    /* F2 D7 */
#define NUM_EAS_STAG_BEEP                                 984    /* F2 D8 */
#define NUM_EAS_HTAG_BEEP                                 985    /* F2 D9 */

#define NUM_SCALE_POLE_DISPLAY_CONFIG                     986    /* F2 DA */
#define NUM_SCALE_AUTO_ZERO_RETURN                        987    /* F2 DB */
#define NUM_SCALE_BEEP_AFTER_WEIGHT                       988    /* F2 DC */
#define NUM_SCALE_ENABLE_ZERO_BUTTON                      989    /* F2 DD */
#define NUM_SCALE_WARMUP_TIME                             990    /* F2 DE */
#define NUM_SCALE_SERIAL_NUMBER                           991    /* F2 DF */
#define NUM_SCALE_DATE_OF_MANUFACTURER                    992    /* F2 E0 */
#define NUM_SCALE_SW_REVISION                             993    /* F2 E1 */
#define NUM_SCALE_MODEL_NUMBER                            994    /* F2 E2 */
#define NUM_LEGAL_SCALE_UNITS                             995    /* F2 E3 */
#define NUM_LEGAL_SCALE_DAMP_FLTR_SETTING                 996    /* F2 E4 */
#define NUM_SCALE_RS_GC_PROGRAMMED                        997    /* F2 E5 */
#define NUM_GC_CAL_LOC_SCALE_LATITUDE                     998    /* F2 E6 */
#define NUM_GC_CAL_LOC_SCALE_HEIGHT_ASL                   999    /* F2 E7 */
#define NUM_SCALE_ZERO_TRACKING                          1000    /* F2 E8 */
#define NUM_GC_LOC_OF_USE_SCALE_LATITUDE                 1001    /* F2 E9 */
#define NUM_GC_LOC_OF_USE_SCALE_HEIGHT_ASL               1002    /* F2 EA */

#define NUM_CAPTOUCH_SENS                                1003    /* F2 EB */
#define NUM_DOCCAP_USEHID                                1004    /* F2 EC */
#define NUM_COUNTRY_KBD_DOWNLOAD_TYPE                    1005    /* F2 ED */

#define NUM_IMG_SPLIT_DECODE                             1006    /* F2 EE */
#define NUM_ENABLE_CMDLINE                               1007    /* F2 EF */

/********************************************************
  DO NOT USE VALUES 1008 THROUGH 1023
*********************************************************/

// jpe: when we finish the page (1024) we switch to 16bit format
//#define NUM_LAST_F2                         1007 /* F2 EF */
//#define NUM_TEST0                           1024 /* F8 04 00 */
//#define NUM_TEST1                           1025 /* F8 04 01 */

/*********************************************************************
*  These are parameters > 1024.  These are no longer offsets, they are
   just values.  They MUST start at 1024 because the first 1024 values
   have already been taken above.  Also, and here is the cool thing,
   we no longer have to add them to the top table because they are
   the SAME values!  (Besides that, 'no one' uses the top table
   anymore, and so we can stop maintaining it.  At some point, it some
   distant future, we can deprecate it. ALSO, since they all will
   start with F8 anyway, we can omit that part of the column!
   But, again, that day is not today...
   Update 1: That day is Today!
**********************************************************************/

/*****************************************************************************************/
/*****************************************************************************************/
/* Added a whole slew or parameters for SATO CPR 6951 */
/*****************************************************************************************/
/*****************************************************************************************/

#define NUM_DEL_DAYS                                     1024    /* F8 04 00 */
#define NUM_ADD_PAREN                                    1025    /* F8 04 01 */
#define NUM_DEL_AI                                       1026    /* F8 04 02 */
#define NUM_ADD_PREFIX                                   1027    /* F8 04 03 */
#define NUM_ADD_SUFFIX                                   1028    /* F8 04 04 */
#define NUM_ADD_DECIMAL                                  1029    /* F8 04 05 */
#define NUM_ADD_SEPARATOR                                1030    /* F8 04 06 */
#define NUM_ORDER_AI                                     1031    /* F8 04 07 */
#define NUM_FN1_REPL                                     1032    /* F8 04 08 */

#define NUM_ORDER_1                                      1033    /* F8 04 09 */
#define NUM_ORDER_2                                      1034    /* F8 04 0A */
#define NUM_ORDER_3                                      1035    /* F8 04 0B */
#define NUM_ORDER_4                                      1036    /* F8 04 0C */
#define NUM_ORDER_5                                      1037    /* F8 04 0D */
#define NUM_ORDER_6                                      1038    /* F8 04 0E */
#define NUM_ORDER_7                                      1039    /* F8 04 0F */
#define NUM_ORDER_8                                      1040    /* F8 04 10 */
#define NUM_ORDER_9                                      1041    /* F8 04 11 */
#define NUM_ORDER_10                                     1042    /* F8 04 12 */

#define NUM_PRESUFAI_1                                   1043    /* F8 04 13 */
#define NUM_PRESUFAI_2                                   1044    /* F8 04 14 */
#define NUM_PRESUFAI_3                                   1045    /* F8 04 15 */
#define NUM_PRESUFAI_4                                   1046    /* F8 04 16 */
#define NUM_PRESUFAI_5                                   1047    /* F8 04 17 */
#define NUM_PRESUFAI_6                                   1048    /* F8 04 18 */
#define NUM_PRESUFAI_7                                   1049    /* F8 04 19 */
#define NUM_PRESUFAI_8                                   1050    /* F8 04 1A */
#define NUM_PRESUFAI_9                                   1051    /* F8 04 1B */
#define NUM_PRESUFAI_10                                  1052    /* F8 04 1C */

#define NUM_PRE_CAT_1                                    1053    /* F8 04 1D */
#define NUM_PRE_CAT_2                                    1054    /* F8 04 1E */
#define NUM_PRE_CAT_3                                    1055    /* F8 04 1F */
#define NUM_PRE_CAT_4                                    1056    /* F8 04 20 */
#define NUM_PRE_CAT_5                                    1057    /* F8 04 21 */
#define NUM_PRE_CAT_6                                    1058    /* F8 04 22 */
#define NUM_PRE_CAT_7                                    1059    /* F8 04 23 */
#define NUM_PRE_CAT_8                                    1060    /* F8 04 24 */
#define NUM_PRE_CAT_9                                    1061    /* F8 04 25 */
#define NUM_PRE_CAT_10                                   1062    /* F8 04 26 */

#define NUM_PRE_VAL_1                                    1063    /* F8 04 27 */
#define NUM_PRE_VAL_2                                    1064    /* F8 04 28 */
#define NUM_PRE_VAL_3                                    1065    /* F8 04 29 */
#define NUM_PRE_VAL_4                                    1066    /* F8 04 2A */
#define NUM_PRE_VAL_5                                    1067    /* F8 04 2B */
#define NUM_PRE_VAL_6                                    1068    /* F8 04 2C */
#define NUM_PRE_VAL_7                                    1069    /* F8 04 2D */
#define NUM_PRE_VAL_8                                    1070    /* F8 04 2E */
#define NUM_PRE_VAL_9                                    1071    /* F8 04 2F */
#define NUM_PRE_VAL_10                                   1072    /* F8 04 30 */

#define NUM_SUF_CAT1_1                                   1073    /* F8 04 31 */
#define NUM_SUF_CAT1_2                                   1074    /* F8 04 32 */
#define NUM_SUF_CAT1_3                                   1075    /* F8 04 33 */
#define NUM_SUF_CAT1_4                                   1076    /* F8 04 34 */
#define NUM_SUF_CAT1_5                                   1077    /* F8 04 35 */
#define NUM_SUF_CAT1_6                                   1078    /* F8 04 36 */
#define NUM_SUF_CAT1_7                                   1079    /* F8 04 37 */
#define NUM_SUF_CAT1_8                                   1080    /* F8 04 38 */
#define NUM_SUF_CAT1_9                                   1081    /* F8 04 39 */
#define NUM_SUF_CAT1_10                                  1082    /* F8 04 3A */

#define NUM_SUF_VAL1_1                                   1083    /* F8 04 3B */
#define NUM_SUF_VAL1_2                                   1084    /* F8 04 3C */
#define NUM_SUF_VAL1_3                                   1085    /* F8 04 3D */
#define NUM_SUF_VAL1_4                                   1086    /* F8 04 3E */
#define NUM_SUF_VAL1_5                                   1087    /* F8 04 3F */
#define NUM_SUF_VAL1_6                                   1088    /* F8 04 40 */
#define NUM_SUF_VAL1_7                                   1089    /* F8 04 41 */
#define NUM_SUF_VAL1_8                                   1090    /* F8 04 42 */
#define NUM_SUF_VAL1_9                                   1091    /* F8 04 43 */
#define NUM_SUF_VAL1_10                                  1092    /* F8 04 44 */

#define NUM_SUF_CAT2_1                                   1093    /* F8 04 45 */
#define NUM_SUF_CAT2_2                                   1094    /* F8 04 46 */
#define NUM_SUF_CAT2_3                                   1095    /* F8 04 47 */
#define NUM_SUF_CAT2_4                                   1096    /* F8 04 48 */
#define NUM_SUF_CAT2_5                                   1097    /* F8 04 49 */
#define NUM_SUF_CAT2_6                                   1098    /* F8 04 4A */
#define NUM_SUF_CAT2_7                                   1099    /* F8 04 4B */
#define NUM_SUF_CAT2_8                                   1100    /* F8 04 4C */
#define NUM_SUF_CAT2_9                                   1101    /* F8 04 4D */
#define NUM_SUF_CAT2_10                                  1102    /* F8 04 4E */

#define NUM_SUF_VAL2_1                                   1103    /* F8 04 4F */
#define NUM_SUF_VAL2_2                                   1104    /* F8 04 50 */
#define NUM_SUF_VAL2_3                                   1105    /* F8 04 51 */
#define NUM_SUF_VAL2_4                                   1106    /* F8 04 52 */
#define NUM_SUF_VAL2_5                                   1107    /* F8 04 53 */
#define NUM_SUF_VAL2_6                                   1108    /* F8 04 54 */
#define NUM_SUF_VAL2_7                                   1109    /* F8 04 55 */
#define NUM_SUF_VAL2_8                                   1110    /* F8 04 56 */
#define NUM_SUF_VAL2_9                                   1111    /* F8 04 57 */
#define NUM_SUF_VAL2_10                                  1112    /* F8 04 58 */

#define NUM_INV_COMPOSITE                                1113    /* F8 04 59 */
#define NUM_BT_APPLE_HID_FEATURES                        1114    /* F8 04 5A */
#define NUM_BT_CLASS_OF_DEVICE_ZERO                      1115    /* F8 04 5B */
#define NUM_DOUBLE_TRIGGER_TO                            1116    /* F8 04 5C */
#define NUM_DOUBLE_TRIGGER_HOLDOFF_TO                    1117    /* F8 04 5D */
#define NUM_UNSOL_HEARTBEAT_INTV                         1118    /* F8 04 5E */
#define NUM_JAP_UTF_SHIFT_JIS                            1119    /* F8 04 5F */  /* Japanese UTF-8/16 encoded barcode contains SHIFT-JIS data */
#define NUM_SCALE_ISCALIBRATED                           1120    /* F8 04 60 */
#define NUM_I25_SECURITY_LEVEL                           1121    /* F8 04 61 */
#define NUM_SOF_WATCH_TIME                               1122    /* F8 04 62 */
#define NUM_DELAYED_SUSPEND                              1123    /* F8 04 63 */
#define NUM_AUX_SEND_TYPE_AS                             1124    /* F8 04 64 */
#define NUM_MOTION_PROXIMITY_THRESHOLD_LEFTCENTER        1125    /* F8 04 65 */
#define NUM_MOTION_PROXIMITY_THRESHOLD_LEFT              1126    /* F8 04 66 */
#define NUM_MOTION_PROXIMITY_CENTER                      1127    /* F8 04 67 */
#define NUM_CENTER_OBJECT_DETECT                         1128    /* F8 04 68 */

#define NUM_SCALE_INTERVAL_RANGE                         1129    /* F8 04 69 */
#define NUM_EAS_REQ_VOLT_MESS                            1130    /* F8 04 6A */
#define NUM_MAP_VERT_RC                                  1131    /* F8 04 6B */
#define NUM_MAP_VERT_LC                                  1132    /* F8 04 6C */
#define NUM_MAP_HORIZ_RC                                 1133    /* F8 04 6D */
#define NUM_MAP_HORIZ_LC                                 1134    /* F8 04 6E */
#define NUM_SCALE_HRES_MODE                              1135    /* F8 04 6F */
#define NUM_EAS_REQ_SCN_TIME                             1136    /* F8 04 70 */
#define NUM_SAV_STAT_STG                                 1137    /* F8 04 71 */
#define NUM_KEY                                          1138    /* F8 04 72 */
#define NUM_STRING_TEST_0                                1139    /* F8 04 73 */
#define NUM_STRING_TEST_1                                1140    /* F8 04 74 */
#define NUM_ARRAY_TEST_0                                 1141    /* F8 04 75 */
#define NUM_ARRAY_TEST_1                                 1142    /* F8 04 76 */
#define NUM_DWORD_TEST                                   1143    /* F8 04 77 */
#define NUM_WORD_TEST                                    1144    /* F8 04 78 */
#define NUM_MGMT_HOST                                    1145    /* F8 04 79 */
#define NUM_MGMTHOST                            NUM_MGMT_HOST    /* Same as  */
#define NUM_MGMT_SILENT_BOOT                             1146    /* F8 04 7A */
#define NUM_USB_IBM_LDIO_ENABLE                          1147    /* F8 04 7B */
#define NUM_RANKING_FILTER_THRESHOLD                     1148    /* F8 04 7C */
#define NUM_CENTROID_VERT_LEFT_X                         1149    /* F8 04 7D */
#define NUM_CENTROID_VERT_LEFT_Y                         1150    /* F8 04 7E */
#define NUM_CENTROID_VERT_CENTER_X                       1151    /* F8 04 7F */
#define NUM_CENTROID_VERT_CENTER_Y                       1152    /* F8 04 80 */
#define NUM_CENTROID_VERT_RIGHT_X                        1153    /* F8 04 81 */
#define NUM_CENTROID_VERT_RIGHT_Y                        1154    /* F8 04 82 */
#define NUM_CENTROID_HORIZ_LEFT_X                        1155    /* F8 04 83 */
#define NUM_CENTROID_HORIZ_LEFT_Y                        1156    /* F8 04 84 */
#define NUM_CENTROID_HORIZ_CENTER_X                      1157    /* F8 04 85 */
#define NUM_CENTROID_HORIZ_CENTER_Y                      1158    /* F8 04 86 */
#define NUM_CENTROID_HORIZ_RIGHT_X                       1159    /* F8 04 87 */
#define NUM_CENTROID_HORIZ_RIGHT_Y                       1160    /* F8 04 88 */
#define NUM_USB_HID_VIA_CRADLE                           1161    /* F8 04 89 */
#define NUM_TOSHIBA_TEC_HEADER_CHAR                      1162    /* F8 04 8A */
#define NUM_TOSHIBA_TEC_TERMINATOR_CHAR1                 1163    /* F8 04 8B */
#define NUM_LED_ON_GOOD_DECODE                           1164    /* F8 04 8C */
#define NUM_DECODE_BEEP_TIMING                           1165    /* F8 04 8D */
#define NUM_UNIQUE_ID                                    1166    /* F8 04 8E */  /* RS507 */
#define NUM_HANXIN_EN                                    1167    /* F8 04 8F */
#define NUM_HANXIN_INVERSE                               1168    /* F8 04 90 */

#define NUM_HL_ILLUM_CURRENT_OFF_MAX                     1169    /* F8 04 91 */
#define NUM_HL_ILLUM_CURRENT_ON_MIN                      1170    /* F8 04 92 */
#define NUM_HL_ILLUM_CURRENT_ON_MAX                      1171    /* F8 04 93 */
#define NUM_HC_ILLUM_CURRENT_OFF_MAX                     1172    /* F8 04 94 */
#define NUM_HC_ILLUM_CURRENT_ON_MIN                      1173    /* F8 04 95 */
#define NUM_HC_ILLUM_CURRENT_ON_MAX                      1174    /* F8 04 96 */
#define NUM_HR_ILLUM_CURRENT_OFF_MAX                     1175    /* F8 04 97 */
#define NUM_HR_ILLUM_CURRENT_ON_MIN                      1176    /* F8 04 98 */
#define NUM_HR_ILLUM_CURRENT_ON_MAX                      1177    /* F8 04 99 */
#define NUM_VL_ILLUM_CURRENT_OFF_MAX                     1178    /* F8 04 9A */
#define NUM_VL_ILLUM_CURRENT_ON_MIN                      1179    /* F8 04 9B */
#define NUM_VL_ILLUM_CURRENT_ON_MAX                      1180    /* F8 04 9C */
#define NUM_VC_ILLUM_CURRENT_OFF_MAX                     1181    /* F8 04 9D */
#define NUM_VC_ILLUM_CURRENT_ON_MIN                      1182    /* F8 04 9E */
#define NUM_VC_ILLUM_CURRENT_ON_MAX                      1183    /* F8 04 9F */
#define NUM_VR_ILLUM_CURRENT_OFF_MAX                     1184    /* F8 04 A0 */
#define NUM_VR_ILLUM_CURRENT_ON_MIN                      1185    /* F8 04 A1 */
#define NUM_VR_ILLUM_CURRENT_ON_MAX                      1186    /* F8 04 A2 */

#define NUM_AIMING_PATTERN                               1187    /* F8 04 A3 */
#define NUM_THIRD_PARTY_STORAGE                          1188    /* F8 04 A4 */
#define NUM_MARGINLESS_1D                                1189    /* F8 04 A5 */
#define NUM_TOSHIBA_TEC_TERMINATOR_CHAR2                 1190    /* F8 04 A6 */
#define NUM_LASER_OUTPUT_POWER                           1191    /* F8 04 A7 */
#define NUM_DL_PARSE_ERROR                               1192    /* F8 04 A8 */
#define NUM_MOTION_PROXIMITY_BASELINE_LEFT               1193    /* F8 04 A9 */
#define NUM_MOTION_PROXIMITY_BASELINE_CENTER             1194    /* F8 04 AA */
#define NUM_MOTION_PROXIMITY_BASELINE_RIGHT              1195    /* F8 04 AB */
#define NUM_ALLOW_WRITING_MFG_PARAMS                     1196    /* F8 04 AC */
#define NUM_SCALE_ENABLE                                 1197    /* F8 04 AD */
#define NUM_POWER_UP_LIGHT_IN_PRESENTATION               1198    /* F8 04 AE */
#define NUM_ZORRO2_PARAMS                                1199    /* F8 04 AF */
#define NUM_SCALE_GRAVITY_PLACE_OF_USE                   1200    /* F8 04 B0 */
#define NUM_SCALE_GRAVITY_CAL_LOC                        1201    /* F8 04 B1 */
#define NUM_PHANTOM_SCAN                                 1202    /* F8 04 B2 */
#define NUM_LASER_MODULATION_MODE                        1203    /* F8 04 B3 */
#define NUM_STITCH_ITF                                   1204    /* F8 04 B4 */
#define NUM_STITCH_C128_SECURITY                         1205    /* F8 04 B5 */
#define NUM_STITCH_C39_SECURITY                          1206    /* F8 04 B6 */
#define NUM_STITCH_ITF_SECURITY                          1207    /* F8 04 B7 */
#define NUM_MARGINLESS_C128_ENABLE                       1208    /* F8 04 B8 */
#define NUM_MARGINLESS_C39_ENABLE                        1209    /* F8 04 B9 */
#define NUM_MARGINLESS_ITF_ENABLE                        1210    /* F8 04 BA */
#define NUM_LINEAR_IMG_PICKLIST_EN                       1211    /* F8 04 BB */
#define NUM_LINEAR_IMG_AIMING_LOCATION                   1212    /* F8 04 BC */
#define NUM_EAS_DEACT_FAIL_BEEP                          1213    /* F8 04 BD */
#define NUM_SCAN_DISABLE_MODE                            1214    /* F8 04 BE */
#define NUM_NIGHT_MODE_TRIG_EN                           1215    /* F8 04 BF */
#define NUM_STITCH_C93_SECURITY                          1216    /* F8 04 C0 */
#define NUM_DL_PARSING_FEATURE_EN                        1217    /* F8 04 C1 */
#define NUM_LEFT_IR_SENSITIVITY                          1218    /* F8 04 C2 */
#define NUM_CENTER_IR_SENSITIVITY                        1219    /* F8 04 C3 */
#define NUM_RIGHT_IR_SENSITIVITY                         1220    /* F8 04 C4 */
#define NUM_BT_ANDROID_HID_FEATURES                      1221    /* F8 04 C5 */
#define NUM_NONCJK_UNICODE_EMU_ENABLE                    1222    /* F8 04 C6 */
#define NUM_MARGINLESS_C93_ENABLE                        1223    /* F8 04 C7 */
#define NUM_STITCH_C93_ENABLE                            1224    /* F8 04 C8 */

#define NUM_UPCEAN_REDUNDANCY                            1225    /* F8 04 C9 */
#define NUM_TIMEOUT_SWIPE                                1226    /* F8 04 CA */
#define NUM_TIMEOUT_DEFAULT                              1227    /* F8 04 CB */
#define NUM_TIMEOUT_CELL                                 1228    /* F8 04 CC */
#define NUM_STITCHING_TYPE                               1229    /* F8 04 CD */
#define NUM_SCANNING_USAGE_MODE                          1230    /* F8 04 CE */
#define NUM_SCALE_DEBUG                                  1231    /* F8 04 CF */
#define NUM_ANALOG_GAIN                                  1232    /* F8 04 D0 */
#define NUM_DIGITAL_GAIN                                 1233    /* F8 04 D1 */
#define NUM_BTN_DEBOUNCE_TIMEOUT                         1234    /* F8 04 D2 */
#define NUM_LASER_MOD_ON_TH                              1235    /* F8 04 D3 */
#define NUM_LASER_MOD_OFF_TH                             1236    /* F8 04 D4 */
#define NUM_SCN_ENG_SESSION_TBL_DATA                     1237    /* F8 04 D5 */
#define NUM_NCR_USE_PREFIX                               1238    /* F8 04 D6 */
#define NUM_NCR_USE_BCC                                  1239    /* F8 04 D7 */
#define NUM_NCR_INTERFACE                                1240    /* F8 04 D8 */
#define NUM_NCR_WEIGH_POLL                               1241    /* F8 04 D9 */
#define NUM_IGNORE_SCALE_DIRECTIVES                      1242    /* F8 04 DA */
#define NUM_MODULATION_SCAN_ANGLE                        1243    /* F8 04 DB */
#define NUM_MODULATION_LASER_PARAMS                      1244    /* F8 04 DC */
#define NUM_AMUX_DIG_SCAN_ANGLE                          1245    /* F8 04 DD */
#define NUM_DEVICE_PORT_CONFIG                           1246    /* F8 04 DE */  /* Allows user to assign devices to RS232 ports */
#define NUM_SCALEHOST_INTERFACE                          1247    /* F8 04 DF */  /* Which protocol will run on the Dual-Cable-Scale */
#define NUM_SCALEHOST_BAUDRATE                           1248    /* F8 04 E0 */
#define NUM_DECODE_FOV                                   1249    /* F8 04 E1 */
#define NUM_ILLUMINATION_CONFIGS                         1250    /* F8 04 E2 */
#define NUM_TRIG_VIBE_FB                                 1251    /* F8 04 E3 */
#define NUM_TRIG_SOUND_FB                                1252    /* F8 04 E4 */
#define NUM_QUIET_MODE                                   1253    /* F8 04 E5 */
#define NUM_C128_FNC4_IGNORE                             1254    /* F8 04 E6 */
#define NUM_AUTOTRIG_PERIOD                              1255    /* F8 04 E7 */
#define NUM_AUTOTRIG_ONTIME                              1256    /* F8 04 E8 */
#define NUM_DEBUG_00                                     1257    /* F8 04 E9 */
#define NUM_DEBUG_01                                     1258    /* F8 04 EA */
#define NUM_DEBUG_02                                     1259    /* F8 04 EB */
#define NUM_DEBUG_03                                     1260    /* F8 04 EC */
#define NUM_DEBUG_04                                     1261    /* F8 04 ED */
#define NUM_DEBUG_05                                     1262    /* F8 04 EE */
#define NUM_DEBUG_06                                     1263    /* F8 04 EF */

/********************************************************
  DO NOT USE VALUES 1264 THROUGH 1279
*********************************************************/

#define NUM_DEBUG_07                                     1280    /* F8 05 00 */
#define NUM_PID_TYPE                                     1281    /* F8 05 01 */
#define NUM_NCR_PREFIX                                   1282    /* F8 05 02 */
#define NUM_NCR_SUFFIX                                   1283    /* F8 05 03 */
#define NUM_SAME_SYMBOL_REPORT_TIMEOUT                   1284    /* F8 05 04 */
#define NUM_SCALE_MAX_INITIAL_ZERO_SETTING_RANGE         1285    /* F8 05 05 */
#define NUM_IBM_SCALE_DEFAULT_RESPONSE_MODE              1286    /* F8 05 06 */
#define NUM_VOLUME_BUTTON                                1287    /* F8 05 07 */
#define NUM_1D_MARGINLESS_LEVEL                          1288    /* F8 05 08 */
#define NUM_MARGINLESS_UPC_ENABLE                        1289    /* F8 05 09 */
#define NUM_XMIT_C39_START_STOP                          1290    /* F8 05 0A */
#define NUM_BLOCK_LIFE_SPAN                              1291    /* F8 05 0B */
#define NUM_MICRON_RETAIL                                1292    /* F8 05 0C */
#define NUM_SILENCE_MODE_CHANGE                          1293    /* F8 05 0D */
#define NUM_THIRD_PARTY_SCALE                            1294    /* F8 05 0E */
#define NUM_THIRD_PARTY_SCALE_LED_PIN                    1295    /* F8 05 0F */
#define NUM_THIRD_PARTY_SCALE_ZERO_PIN                   1296    /* F8 05 10 */
#define NUM_BT_EXCLUDE_WIFI_CHN                          1297    /* F8 05 11 */
#define NUM_BT_DO_AFH                                    1298    /* F8 05 12 */
#define NUM_BT_WIFI_FRIENDLY_MODE                        1299    /* F8 05 13 */
#define NUM_MOVEMENT_SENSITIVITY                         1300    /* F8 05 14 */
#define NUM_BATCH_DATA_BARCODE_FILE_NAME                 1301    /* F8 05 15 */
#define NUM_BATCH_DATA_BARCODE_DB_NAME                   1302    /* F8 05 16 */
#define NUM_BT_PROFILE                                   1303    /* F8 05 17 */
#define NUM_MUTE                                         1304    /* F8 05 18 */
#define NUM_PREFIX                                       1305    /* F8 05 19 */
#define NUM_SUFFIX                                       1306    /* F8 05 1A */
#define NUM_SEPARATOR                                    1307    /* F8 05 1B */
#define NUM_TIME_FORMAT                                  1308    /* F8 05 1C */
#define NUM_TIMEOUT_TO_DEVICE_SLEEP                      1309    /* F8 05 1D */
#define NUM_TIMEOUT_TO_BT_SLEEP                          1310    /* F8 05 1E */
#define NUM_CONTROL_BUTTON_PLUS                          1311    /* F8 05 1F */
#define NUM_CONTROL_BUTTON_MINUS                         1312    /* F8 05 20 */
#define NUM_CONTROL_BUTTON_BT                            1313    /* F8 05 21 */
#define NUM_CONTROL_WAKEUP_BEEP                          1314    /* F8 05 22 */
#define NUM_CONTROL_WAKEUP_LED                           1315    /* F8 05 23 */
#define NUM_CONTROL_BLUE_LED                             1316    /* F8 05 24 */
#define NUM_CONTROL_GREEN_LED                            1317    /* F8 05 25 */
#define NUM_CONTROL_RED_LED                              1318    /* F8 05 26 */
#define NUM_CONTROL_AMBER_LED                            1319    /* F8 05 27 */
#define NUM_STORE_CODE_ID                                1320    /* F8 05 28 */
#define NUM_CONTROL_SCAN_LED                             1321    /* F8 05 29 */
#define NUM_TOGGLE_PAIRING                               1322    /* F8 05 2A */
#define NUM_SET_DATE                                     1323    /* F8 05 2B */
#define NUM_BT_RADIO_POWER_CLASS                         1324    /* F8 05 2C */
#define NUM_IR_DETECT_TIMEOUT                            1325    /* F8 05 2D */
#define NUM_SCALE_BEHIND_ZERO_MODE                       1326    /* F8 05 2E */
#define NUM_DECODE_POOR_QUALITY                          1327    /* F8 05 2F */
#define NUM_AUX1_BAUD                                    1328    /* F8 05 30 */
#define NUM_AUX1_STOP_BITS                               1329    /* F8 05 31 */
#define NUM_AUX1_PARITY                                  1330    /* F8 05 32 */
#define NUM_AUX1_DATA_BITS                               1331    /* F8 05 33 */
#define NUM_AUX2_BAUD                                    1332    /* F8 05 34 */
#define NUM_AUX2_STOP_BITS                               1333    /* F8 05 35 */
#define NUM_AUX2_PARITY                                  1334    /* F8 05 36 */
#define NUM_AUX2_DATA_BITS                               1335    /* F8 05 37 */
#define NUM_GS1_DATAMATRIX_EN                            1336    /* F8 05 38 */
#define NUM_MAILMARK                                     1337    /* F8 05 39 */
#define NUM_LASER_MODULATION_FREQ                        1338    /* F8 05 3A */
#define NUM_BT_CONNECTION_INTERVAL                       1339    /* F8 05 3B */
#define NUM_SCALE_SW_REV_IN_AUDIT_TRAIL                  1340    /* F8 05 3C */
#define NUM_UNLINK_STRUCTURED_APPEND_QR                  1341    /* F8 05 3D */
#define NUM_USE_STANDARD_PIDS                            1342    /* F8 05 3E */ /*(for STB4278/CR0078-S) */
#define NUM_GS1_QR_EN                                    1343    /* F8 05 3F */
#define NUM_HOST_DATA                                    1344    /* F8 05 40 */
#define NUM_IGNORE_IBM_CMD                               1345    /* F8 05 41 */
#define NUM_WATCHDOGKICK_AT_IDLE                         1346    /* F8 05 42 */
#define NUM_RANDOM_WEIGHT_LINEAR_DECODING                1347    /* F8 05 43 */
#define NUM_NO_DECODE_FRAMES_NUM                         1348    /* F8 05 44 */
#define NUM_ITELLI_SAME_SYMBOL_TIMEOUT                   1349    /* F8 05 45 */
#define NUM_SUPPS_HOLD_OFF                               1350    /* F8 05 46 */
#define NUM_CRADLE_SUSPEND_SCANNER                       1351    /* F8 05 47 */
#define NUM_CURVED_DOC_CAP_EN                            1352    /* F8 05 48 */
#define NUM_NCR_SCALE_BEEP_AFTER_WEIGHT                  1353    /* F8 05 49 */
#define NUM_BT_RADIO_STATE                               1354    /* F8 05 4A */
#define NUM_BT_CONNECTION_MODE                           1355    /* F8 05 4B */
#define NUM_DECTIME_HISTOGRAM_BIN_THRESHOLD              1356    /* F8 05 4C */
#define NUM_OHIO_PDF_DR                                  1357    /* F8 05 4D */
#define NUM_AUX_RSM_COMM                                 1358    /* F8 05 4E */
#define NUM_DECODE_DATA_EVENTS                           1359    /* F8 05 4F */
#define NUM_HONOR_DIRECT_IO_BEEPS                        1360    /* F8 05 50 */
#define NUM_FAST_HID                                     1361    /* F8 05 51 */
#define NUM_QUICK_KEYPAD_EMULATION                       1362    /* F8 05 52 */
#define NUM_PICKLIST_EXPAND_VAL                          1363    /* F8 05 53 */
#define NUM_BT_CRADLE_PAGE_MODE                          1364    /* F8 05 54 */
#define NUM_BT_CRADLE_PAGE_TIMEOUT                       1365    /* F8 05 55 */
#define NUM_MAX_SCALE_ZEROING_WEIGHT_LIMIT               1366    /* F8 05 56 */
#define NUM_BATT_HI_THRESH                               1367    /* F8 05 57 */
#define NUM_BATT_MD_THRESH                               1368    /* F8 05 58 */
#define NUM_BATT_LO_THRESH                               1369    /* F8 05 59 */
#define NUM_BATT_HEALTH_THRESH                           1370    /* F8 05 5A */
#define NUM_BT_KEYSTROKE_DELAY                           1371    /* F8 05 5B */
#define NUM_BT_CAPS_LOCK_OVR                             1372    /* F8 05 5C */
#define NUM_BT_IGNORE_UNKOWN_CHARS                       1373    /* F8 05 5D */
#define NUM_BT_EMULATE_KEYPAD                            1374    /* F8 05 5E */
#define NUM_BT_FN1_SUBS                                  1375    /* F8 05 5F */
#define NUM_BT_FN1_VALUE                                 1376    /* F8 05 60 */
#define NUM_BT_FN_KEY_MAPPING                            1377    /* F8 05 61 */
#define NUM_BT_SIMULATED_CAPS_LOCK                       1378    /* F8 05 62 */
#define NUM_BT_CONVERT_CASE                              1379    /* F8 05 63 */
#define NUM_BT_DONGLE_KEYSTROKE_DELAY                    1380    /* F8 05 64 */
#define NUM_BT_DONGLE_CAPS_LOCK_OVR                      1381    /* F8 05 65 */
#define NUM_BT_DONGLE_IGNORE_UNKOWN_CHARS                1382    /* F8 05 66 */
#define NUM_BT_DONGLE_EMULATE_KEYPAD                     1383    /* F8 05 67 */
#define NUM_BT_DONGLE_EMULATE_KEYPAD_LEADING_ZR          1384    /* F8 05 68 */
#define NUM_BT_DONGLE_QUICK_KEYPAD_EMULATION             1385    /* F8 05 69 */
#define NUM_BT_DONGLE_FN1_SUBS                           1386    /* F8 05 6A */
#define NUM_BT_DONGLE_FN1_VALUE                          1387    /* F8 05 6B */
#define NUM_BT_DONGLE_FN_KEY_MAPPING                     1388    /* F8 05 6C */
#define NUM_BT_DONGLE_SIMULATED_CAPS_LOCK                1389    /* F8 05 6D */
#define NUM_BT_DONGLE_CONVERT_CASE                       1390    /* F8 05 6E */
#define NUM_BT_DONGLE_USB_POLLING_INTERVAL               1391    /* F8 05 6F */
#define NUM_MARGINLESS_MSI_ENABLE                        1392    /* F8 05 70 */
#define NUM_BT_SECURITY                                  1393    /* F8 05 71 */
#define NUM_UK_PLESSEY_EN                                1394    /* F8 05 72 */
#define NUM_XMIT_UK_PLESSEY_CHKDGT                       1395    /* F8 05 73 */
#define NUM_UK_PLESSEY_L1                                1396    /* F8 05 74 */
#define NUM_UK_PLESSEY_L2                                1397    /* F8 05 75 */
#define NUM_TOSHIBA_TEC_HOST_SEND_DLY                    1398    /* F8 05 76 */
#define NUM_PERSISTENT_BATCH                             1399    /* F8 05 77 */
#define NUM_DEBUG_SC_ACQ                                 1400    /* F8 05 78 */
#define NUM_DEBUG_SC_CAMERA                              1401    /* F8 05 79 */
#define NUM_DEBUG_SC_DECODE                              1402    /* F8 05 7A */
#define NUM_DEBUG_SC_EAS                                 1403    /* F8 05 7B */
#define NUM_DEBUG_SC_FIRMWARE_UPDATE                     1404    /* F8 05 7C */
#define NUM_DEBUG_SC_FLASH_ACCESS                        1405    /* F8 05 7D */
#define NUM_DEBUG_SC_IBM_RS485                           1406    /* F8 05 7E */
#define NUM_DEBUG_SC_MOTIONDETECT                        1407    /* F8 05 7F */
#define NUM_DEBUG_SC_NVP                                 1408    /* F8 05 80 */
#define NUM_DEBUG_SC_OS                                  1409    /* F8 05 81 */
#define NUM_DEBUG_SC_PARAM                               1410    /* F8 05 82 */
#define NUM_DEBUG_SC_Platform                            1411    /* F8 05 83 */
#define NUM_DEBUG_SC_IBM_USB                             1412    /* F8 05 84 */
#define NUM_DEBUG_SC_RSI                                 1413    /* F8 05 85 */
#define NUM_DEBUG_SC_RSM                                 1414    /* F8 05 86 */
#define NUM_DEBUG_SC_SASI                                1415    /* F8 05 87 */
#define NUM_DEBUG_SC_SNAPI                               1416    /* F8 05 88 */
#define NUM_DEBUG_SC_SSI                                 1417    /* F8 05 89 */
#define NUM_DEBUG_SC_SCALE                               1418    /* F8 05 8A */
#define NUM_DEBUG_SC_SCALEHOST                           1419    /* F8 05 8B */
#define NUM_DEBUG_SC_STATS                               1420    /* F8 05 8C */
#define NUM_DEBUG_SC_STG                                 1421    /* F8 05 8D */
#define NUM_DEBUG_SC_SYSTEM                              1422    /* F8 05 8E */
#define NUM_DEBUG_SC_TRIGGERMGMT                         1423    /* F8 05 8F */
#define NUM_DEBUG_SC_UIF                                 1424    /* F8 05 90 */
#define NUM_DEBUG_SC_UTILS                               1425    /* F8 05 91 */
#define NUM_AE_REGION_ILLUM_PWR                          1426    /* F8 05 92 */
#define NUM_AE_REGION_MODE                               1427    /* F8 05 93 */
#define NUM_AE_REGION_XOFF                               1428    /* F8 05 94 */
#define NUM_AE_REGION_YOFF                               1429    /* F8 05 95 */
#define NUM_AE_NEAR_COEFF                                NUM_AE_REGION_XOFF
#define NUM_AE_FAR_COEFF                                 NUM_AE_REGION_YOFF
#define NUM_AE_REGION_WIDTH                              1430    /* F8 05 96 */
#define NUM_AE_REGION_HEIGHT                             1432    /* F8 05 98 */
#define NUM_AE_REGION_EXPADJ1                            1433    /* F8 05 99 */
#define NUM_AE_REGION_EXPADJ2                            1434    /* F8 05 9A */
#define NUM_AE_REGION_GAINADJ1                           1435    /* F8 05 9B */
#define NUM_AE_REGION_GAINADJ2                           1436    /* F8 05 9C */
#define NUM_AE_REGION_FRAME_SEQ                          1437    /* F8 05 9D */
#define NUM_ICC_CENTRAL_PROC_ONLY                        1438    /* F8 05 9E */
#define NUM_DPM_MODE                                     NUM_ICC_CENTRAL_PROC_ONLY /* Silly name */
#define NUM_SNAPSHOT_IMG_CAP_TO                          1439    /* F8 05 9F */
#define NUM_XML_STRUCT_ENABLE                            1440    /* F8 05 A0 */
#define NUM_PHARMA_ENABLE                                1441    /* F8 05 A1 */
#define NUM_CYCLE1_ILLUM                                 1442    /* F8 05 A2 */
#define NUM_CYCLE2_ILLUM                                 1443    /* F8 05 A3 */
#define NUM_MAX_PROCESSING_TIME_PER_FRAME                1444    /* F8 05 A4 */
#define NUM_BIN_VALUE_THRESHOLD                          1445    /* F8 05 A5 */
#define NUM_DEBUG_SC_BATTMGR                             1446    /* F8 05 A6 */
#define NUM_DEBUG_SC_BT                                  1447    /* F8 05 A7 */
#define NUM_DEBUG_SC_NFC                                 1448    /* F8 05 A8 */
#define NUM_DEBUG_SC_USB                                 1449    /* F8 05 A9 */
#define NUM_DEBUG_SC_BT_KEYS                             1450    /* F8 05 AA*/
// Useable gap: add 'DEBUG_SC_xxx' above                 // 1451-1498
#define NUM_DEBUG_EXTRA_LOGS                             1498    /* F8 05 DA */
#define NUM_DEBUG_LOGGING_TYPE                           1499    /* F8 05 DB */

#define NUM_FIRST_RFID_PARAM                             1500
#define NUM_RFID_TAG_REPORT_BATCH_MODE                   1500    /* F8 05 DC */
#define NUM_RFID_TAG_REPORT_FIRST_SEEN_TIME              1501    /* F8 05 DD */
#define NUM_RFID_TAG_REPORT_LAST_SEEN_TIME               1502    /* F8 05 DE */
#define NUM_RFID_TAG_REPORT_CPC                          1503    /* F8 05 DF */
#define NUM_RFID_TAG_REPORT_RSSI                         1504    /* F8 05 E0 */
#define NUM_RFID_TAG_REPORT_PHASE                        1505    /* F8 05 E1 */
#define NUM_RFID_TAG_REPORT_CHANNEL_INDEX                1506    /* F8 05 E2 */
#define NUM_RFID_TAG_REPORT_TAG_SEEN_COUNT               1507    /* F8 05 E3 */
#define NUM_RFID_ENABLE_BT_PAIR_USER_ACK                 1508    /* F8 05 E4 */
#define NUM_RFID_ANT_IP_INDEX                            1509    /* F8 05 E5 */
#define NUM_RFID_ANT_SELECT                              1510    /* F8 05 E6 */
#define NUM_RFID_TAG_SELECT_1_ENABLE                     1511    /* F8 05 E7 */
#define NUM_RFID_TAG_SELECT_1_TARGET                     1512    /* F8 05 E8 */
#define NUM_RFID_TAG_SELECT_1_ACTION                     1513    /* F8 05 E9 */
#define NUM_RFID_TAG_SELECT_1_MEMBANK                    1514    /* F8 05 EA */
#define NUM_RFID_TAG_SELECT_1_TRUNCATE                   1515    /* F8 05 EB */
#define NUM_RFID_TAG_SELECT_1_LENGTH                     1516    /* F8 05 EC */
#define NUM_RFID_TAG_SELECT_2_ENABLE                     1517    /* F8 05 ED */
#define NUM_RFID_TAG_SELECT_2_TARGET                     1518    /* F8 05 EE */
#define NUM_RFID_TAG_SELECT_2_ACTION                     1519    /* F8 05 EF */

/********************************************************
  DO NOT USE VALUES 1520 THROUGH 1535
*********************************************************/

#define NUM_RFID_TAG_SELECT_2_MEMBANK                    1536    /* F8 06 00 */
#define NUM_RFID_TAG_SELECT_2_TRUNCATE                   1537    /* F8 06 01 */
#define NUM_RFID_TAG_SELECT_2_LENGTH                     1538    /* F8 06 02 */
#define NUM_RFID_TAG_SELECT_3_ENABLE                     1539    /* F8 06 03 */
#define NUM_RFID_TAG_SELECT_3_TARGET                     1540    /* F8 06 04 */
#define NUM_RFID_TAG_SELECT_3_ACTION                     1541    /* F8 06 05 */
#define NUM_RFID_TAG_SELECT_3_MEMBANK                    1542    /* F8 06 06 */
#define NUM_RFID_TAG_SELECT_3_TRUNCATE                   1543    /* F8 06 07 */
#define NUM_RFID_TAG_SELECT_3_LENGTH                     1544    /* F8 06 08 */
#define NUM_RFID_TAG_SELECT_4_ENABLE                     1545    /* F8 06 09 */
#define NUM_RFID_TAG_SELECT_4_TARGET                     1546    /* F8 06 0A */
#define NUM_RFID_TAG_SELECT_4_ACTION                     1547    /* F8 06 0B */
#define NUM_RFID_TAG_SELECT_4_MEMBANK                    1548    /* F8 06 0C */
#define NUM_RFID_TAG_SELECT_4_TRUNCATE                   1549    /* F8 06 0D */
#define NUM_RFID_TAG_SELECT_4_LENGTH                     1550    /* F8 06 0E */
#define NUM_RFID_TAG_QUERY_SELECT                        1551    /* F8 06 0F */
#define NUM_RFID_TAG_QUERY_SESSION                       1552    /* F8 06 10 */
#define NUM_RFID_TAG_QUERY_TARGET                        1553    /* F8 06 11 */
#define NUM_RFID_TAG_ACCESS_CRITERIA_IDX                 1554    /* F8 06 12 */
#define NUM_RFID_TAG_ACCESS_CMD                          1555    /* F8 06 13 */
#define NUM_RFID_TAG_READ_MEMBANK                        1556    /* F8 06 14 */
#define NUM_RFID_TAG_READ_LENGTH                         1557    /* F8 06 15 */
#define NUM_RFID_TAG_WRITE_MEMBANK                       1558    /* F8 06 16 */
#define NUM_RFID_TAG_WRITE_DOBLOCK_WRITE                 1559    /* F8 06 17 */
#define NUM_RFID_TAG_BLOCK_ERASE_MEMBANK                 1560    /* F8 06 18 */
#define NUM_RFID_TAG_BLOCK_ERASE_LENGTH                  1561    /* F8 06 19 */
#define NUM_RFID_TAG_BLOCK_PERMA_DOLOCK                  1562    /* F8 06 1A */
#define NUM_RFID_TAG_BLOCK_PERMA_MEMBANK                 1563    /* F8 06 1B */
#define NUM_RFID_TAG_BLOCK_PERMA_LOCK_BLKPTR             1564    /* F8 06 1C */
#define NUM_RFID_TAG_BLOCK_PERMA_LOCK_BLKRANGE           1565    /* F8 06 1D */
#define NUM_RFID_TAG_ACCESS_SEQ_MODE                     1566    /* F8 06 1E */
#define NUM_RFID_TAG_EPC_LENGTH                          NUM_RFID_TAG_ACCESS_SEQ_MODE
#define NUM_RFID_TAG_CUR_SEQ_IDX                         1567    /* F8 06 1F */
#define NUM_RFID_TAG_CUR_CMD_IDX                         1568    /* F8 06 20 */
#define NUM_RFID_TAG_ACCESS_SEQ_CRITERIA_IDX             1569    /* F8 06 21 */
#define NUM_RFID_TAG_ACCESS_SEQ_CMD                      1570    /* F8 06 22 */
#define NUM_RFID_TAG_SEQ_READ_MEMBANK                    1571    /* F8 06 23 */
#define NUM_RFID_TAG_SEQ_READ_LENGTH                     1572    /* F8 06 24 */
#define NUM_RFID_TAG_SEQ_WRITE_MEMBANK                   1573    /* F8 06 25 */
#define NUM_RFID_TAG_SEQ_WRITE_DOBLOCKWRITE              1574    /* F8 06 26 */
#define NUM_RFID_TAG_SEQ_BLOCK_ERASE_MEMBANK             1575    /* F8 06 27 */
#define NUM_RFID_TAG_SEQ_BLOCK_ERASE_LENGTH              1576    /* F8 06 28 */
#define NUM_RFID_TAG_SEQ_BLOCK_PERMA_DOLOCK              1577    /* F8 06 29 */
#define NUM_RFID_TAG_SEQ_BLOCK_PERMA_MEMBANK             1578    /* F8 06 2A */
#define NUM_RFID_TAG_SEQ_BLOCK_PERMA_LOCK_BLKPTR         1579    /* F8 06 2B */
#define NUM_RFID_TAG_BRANDID                             NUM_RFID_TAG_SEQ_BLOCK_PERMA_LOCK_BLKPTR
#define NUM_RFID_UNIQUE_TAG_REPORT                       1580    /* F8 06 2C */
#define NUM_RFID_REGION_SKU                              1581    /* F8 06 2D */
#define NUM_RFID_REGION_DEV_NAME                         1582    /* F8 06 2E */
#define NUM_RFID_REGION_CODE                             1583    /* F8 06 2F */
#define NUM_RFID_HOPPING_ENABLED                         1584    /* F8 06 30 */
#define NUM_RFID_BT_DISCOVERABLE                         1585    /* F8 06 31 */
#define NUM_RFID_BT_PAIRABLE                             1586    /* F8 06 32 */
#define NUM_RFID_BT_MODE                                 1587    /* F8 06 33 */
#define NUM_RFID_ACTIVE_BEEPER                           1588    /* F8 06 34 */
#define NUM_RFID_BEEPER_DURATION                         1589    /* F8 06 35 */
#define NUM_RFID_BT_LED_STATE                            1590    /* F8 06 36 */
#define NUM_RFID_SCAN_LED_STATE                          1591    /* F8 06 37 */
#define NUM_RFID_STATUS_LED_STATE                        1592    /* F8 06 38 */
#define NUM_RFID_START_ON_TRIGGER                        1593    /* F8 06 39 */
#define NUM_RFID_START_TRIGGER_TYPE                      1594    /* F8 06 3A */
#define NUM_RFID_REPEAT_START                            1595    /* F8 06 3B */
#define NUM_RFID_STOP_ON_TRIGGER                         1596    /* F8 06 3C */
#define NUM_RFID_STOP_TRIGGER_TYPE                       1597    /* F8 06 3D */
#define NUM_RFID_STOP_ON_TAG_COUNT                       1598    /* F8 06 3E */
#define NUM_RFID_STOP_ON_TIMEOUT                         1599    /* F8 06 3F */
#define NUM_RFID_STOP_ON_INV_COUNT                       1600    /* F8 06 40 */
#define NUM_RFID_ASCII_ECO_OFF_ON                        1601    /* F8 06 41 */
#define NUM_RFID_ASCII_CRC_ON_OFF                        1602    /* F8 06 42 */
#define NUM_RFID_ASCII_DEBUG_INTERFACE                   1603    /* F8 06 43 */
#define NUM_RFID_ASCII_DEBUG_ON_OFF                      1604    /* F8 06 44 */
#define NUM_RFID_ASCII_DEBUG_LEVEL                       1605    /* F8 06 45 */
#define NUM_RFID_ASCII_OPERAND_NOTIFY_ON_OFF             1606    /* F8 06 46 */
#define NUM_RFID_UUID_CONFIG_ORDER                       1607    /* F8 06 47 */
#define NUM_RFID_ASCII_START_OPR_NOTIFY_ON_OFF           1608    /* F8 06 48 */
#define NUM_RFID_ASCII_STOP_OPR_NOTIFY_ON_OFF            1609    /* F8 06 49 */
#define NUM_RFID_ACCESS1_ENABLE                          1610    /* F8 06 4A */
#define NUM_RFID_ACCESS1_FILTER1_MEMBANK                 1611    /* F8 06 4B */
#define NUM_RFID_ACCESS1_FILTER1_DOMATCH                 1612    /* F8 06 4C */
#define NUM_RFID_ACCESS1_FILTER2_MEMBANK                 1613    /* F8 06 4D */
#define NUM_RFID_ACCESS1_FILTER2_DOMATCH                 1614    /* F8 06 4E */
#define NUM_RFID_BUFFER_SIZE                             1615    /* F8 06 4F */
#define NUM_RFID_INV_CYCLES                              1616    /* F8 06 50 */
#define NUM_RFID_KTX                                     1617    /* F8 06 51 */
#define NUM_RFID_KS                                      1618    /* F8 06 52 */
#define NUM_RFID_TEST_MODE                               1619    /* F8 06 53 */
#define NUM_RFID_BOARD_TYPE                              1620    /* F8 06 54 */
#define NUM_RFID_PASSTHRU_TYPE                           1621    /* F8 06 55 */
#define NUM_RFID_TEST_SIMULATORY_INV_MODE                1622    /* F8 06 56 */
#define NUM_RFID_ANTENNA_POWER                           1623    /* F8 06 57 */
#define NUM_RFID_TAG_SELECT_1_POINTER                    1624    /* F8 06 58 */
#define NUM_RFID_TAG_SELECT_2_POINTER                    1625    /* F8 06 59 */
#define NUM_RFID_TAG_SELECT_3_POINTER                    1626    /* F8 06 5A */
#define NUM_RFID_TAG_SELECT_4_POINTER                    1627    /* F8 06 5B */
#define NUM_RFID_TAG_READ_OFFSET                         1628    /* F8 06 5C */
#define NUM_RFID_TAG_WRITE_OFFSET                        1629    /* F8 06 5D */
#define NUM_RFID_TAG_BLOCK_ERASE_OFFSET                  1630    /* F8 06 5E */
#define NUM_RFID_BT_DISCOVERABLE_TIMEOUT                 1631    /* F8 06 5F */
#define NUM_RFID_LOW_POWER_MODE_TIMEOUT                  1632    /* F8 06 60 */
#define NUM_RFID_OFF_MODE_TIMEOUT                        1633    /* F8 06 61 */
#define NUM_RFID_BT_PASS_KEY                             1634    /* F8 06 62 */
#define NUM_RFID_TRIGGER_START_DELAY                     1635    /* F8 06 63 */
#define NUM_RFID_STOP_TAG_COUNT                          1636    /* F8 06 64 */
#define NUM_RFID_STOP_INV_COUNT                          1637    /* F8 06 65 */
#define NUM_RFID_ACCESS1_FILTER1_START_POS               1638    /* F8 06 66 */
#define NUM_RFID_ACCESS1_FILTER1_MATCH_LENGTH            1639    /* F8 06 67 */
#define NUM_RFID_ACCESS1_FILTER2_START_POS               1640    /* F8 06 68 */
#define NUM_RFID_ACCESS1_FILTER2_MATCH_LENGTH            1641    /* F8 06 69 */
#define NUM_RFID_TEST_SIMULATORY_READ_RATE               1642    /* F8 06 6A */
#define NUM_RFID_ANTENNA_TARI                            1643    /* F8 06 6B */
#define NUM_RFID_TAG_POPULATION                          1644    /* F8 06 6C */
#define NUM_RFID_TAG_ACCESS_PWD                          1645    /* F8 06 6D */
#define NUM_RFID_TAG_ACCESS_SEQ_PWD                      1646    /* F8 06 6E */
#define NUM_RFID_REG_CHNL_LOWER_MASK                     1647    /* F8 06 6F */
#define NUM_RFID_REG_CHNL_UPPER_MASK                     1648    /* F8 06 70 */
#define NUM_RFID_TRIGGER_STOP_TIMEOUT                    1649    /* F8 06 71 */
#define NUM_RFID_TAG_SEL_1_MASK                          1650    /* F8 06 72 */
#define NUM_RFID_TAG_SEL_2_MASK                          1651    /* F8 06 73 */
#define NUM_RFID_TAG_SEL_3_MASK                          1652    /* F8 06 74 */
#define NUM_RFID_TAG_SEL_4_MASK                          1653    /* F8 06 75 */
#define NUM_RFID_TAG_WRITE_DATA_BUF                      1654    /* F8 06 76 */
#define NUM_RFID_TAG_LOCK_MASK                           1655    /* F8 06 77 */
#define NUM_RFID_BT_ADMIN_CONNECT_PASSWORD               1656    /* F8 06 78 */
#define NUM_RFID_TAG_SEQ_LOCK_MASK                       1657    /* F8 06 79 */
#define NUM_RFID_BT_HOST_NAME                            1658    /* F8 06 7A */
#define NUM_RFID_ACCESS1_FILTER1_DATA                    1659    /* F8 06 7B */
#define NUM_RFID_ACCESS1_FILTER1_MASK                    1660    /* F8 06 7C */
#define NUM_RFID_ACCESS1_FILTER2_DATA                    1661    /* F8 06 7D */
#define NUM_RFID_ACCESS1_FILTER2_MASK                    1662    /* F8 06 7E */
#define NUM_RFID_LOCATE_EPCID                            1663    /* F8 06 7F */
#define NUM_GENX_MODE_SELECT                             1664    /* F8 06 80 */
#define NUM_BT_LEHID_GATT_CACHE                          1665    /* F8 06 81 */
#define NUM_BT_CONNECT_PASSWORD                          1666    /* F8 06 82 */
#define NUM_SSI_IS_PRIMARY_SPP                           1667    /* F8 06 83 */
#define NUM_RFID_ASCII_TRIGGER_NOTIFY_ON_OFF             1668    /* F8 06 84 */
#define NUM_RFID_ASCII_BATTERY_NOTIFY_ON_OFF             1669    /* F8 06 85 */
#define NUM_RFID_ASCII_TEMPERATURE_NOTIFY_ON_OFF         1670    /* F8 06 86 */
#define NUM_RFID_ASCII_POWER_NOTIFY_ON_OFF               1671    /* F8 06 87 */
#define NUM_MFI_SSI_PRIMARY                              1672    /* F8 06 88 */
#define NUM_DISABLE_BLUETOOTH                            1673    /* F8 06 89 */
#define NUM_TRIGGER_USB_DETECTION                        1674    /* F8 06 8A */
#define NUM_TRIGGER_FEATURE_RESERVED                     1675    /* F8 06 8B */
#define NUM_GENX_DYN_PWR_OPTIMIZATION                    1676    /* F8 06 8C */
#define NUM_GENX_DUTY_CYCLE_PERCENT                      1677    /* F8 06 8D */
#define NUM_RFID_ENABLE_BT_BUTTON                        1678    /* F8 06 8E */
#define NUM_RFID_ENABLE_MODE_BUTTON                      1679    /* F8 06 8F */
#define NUM_RFID_ASCII_DATABASE_NOTIFY_ON_OFF            1680    /* F8 06 90 */
#define NUM_RFID_ASCII_RADIO_ERR_NOTIFY_ON_OFF           1681    /* F8 06 91 */
#define NUM_RFID_STOP_ON_ACCESS_COUNT                    1682    /* F8 06 92 */
#define NUM_RFID_STOP_ACCESS_COUNT                       1683    /* F8 06 91 */
#define NUM_RFID_TAG_BLOCK_PERMA_LOCK_BLKMASK            1684    /* F8 06 94 */
#define NUM_RFID_ASCII_BATCH_MODE_NOTIFY_ON_OFF          1685    /* F8 06 95 */
#define NUM_LAST_RFID_PARAM                              NUM_RFID_ASCII_BATCH_MODE_NOTIFY_ON_OFF

#define NUM_USB_SUSP_DETACH_DELAY                        NUM_SOF_WATCH_TIME
#define NUM_USB_SUSP_DETACH_MODE                         NUM_DELAYED_SUSPEND

#define NUM_BT_CRADLE_FAT_CHGR_ONLY_EN                   1686    /* F8 06 96 */

#define NUM_DIGIMARC_EN                                  1687    /* F8 06 97 */   // Enable Digimarc decoding
#define NUM_DIGIMARC_IMG1_FREQ                           1688    /* F8 06 98 */   // Limits the # of frames processed by Digimarc on images from Sensor1 (1=Every frame, 2=Every 2nd frame ...)
#define NUM_DIGIMARC_IMG1_STRATEGY                       1689    /* F8 06 99 */   // Select the Digimarc decode strategies on images from Sensor1
// The next 2 are same as above except they apply to a 2nd sensor (if exists). On MP6000 'IMG1=Tower', 'IMG2=Platter)
#define NUM_DIGIMARC_IMG2_FREQ                           1690    /* F8 06 9A */   // Limits the # of frames processed by Digimarc on images from Sensor2 (1=Every frame, 2=Every 2nd frame ...)
#define NUM_DIGIMARC_IMG2_STRATEGY                       1691    /* F8 06 9B */   // Select the Digimarc decode strategies on images from Sensor2
#define NUM_COLES_POLE_DISPLAY                           1692    /* F8 06 9C */   // Unique Scale Pole Display for Coles-Australia
#define NUM_CONFIG_CHECKSUM                              1693    /* F8 06 9D */
#define NUM_TOSHIBA_TEC_SCAN_ENA_TO_DECODE_DLY           1694    /* F8 06 9E */
#define NUM_BEEP_ON_AUX_DECODE                           1695    /* F8 06 9F */   // Beep when decode data is rx'd from an Aux scanner
#define NUM_TOSTEC_ONE_DECODE_PER_SCAN_ENABLE            1696    /* F8 06 A0 */   // Only one decode transmission to be allowed per scan enable for toshiba tec
#define NUM_PROXIMITY_CALIBRATION                        1697    /* F8 06 A1 */
#define NUM_BT_LINK_SUPERVISION_TIMEOUT                  1698    /* F8 06 A2 */
#define NUM_FRAME_BRIGHTNESS_MODE                        1699    /* F8 06 A3 */   // 0/Default=Dark&Bright 1=Dark only
#define NUM_PROCESSOR_OVERCLOCK                          1700    /* F8 06 A4 */   // 0/Default=Normal 1=Overclock
#define NUM_BT_NAME_RS507_COMPATIBLE                     1701    /* F8 06 A5 */   // Append "(RS507 compatible)" to BT friendly name
#define NUM_BT_STC_PARAMETERS                            1702    /* F8 06 A6 */   // Host and address info to ScanToConnect

#define NUM_INV_DATABAR_LTD                              1703    /* F8 06 A7 */
#define NUM_INV_DATABAR_14                               1704    /* F8 06 A8 */
#define NUM_INV_DATABAR_EXP                              1705    /* F8 06 A9 */
#define NUM_DATABAR_14_SEC_LVL                           1706    /* F8 06 AA */
#define NUM_DATABAR_SEC_LVL            NUM_DATABAR_14_SEC_LVL    /* F8 06 AA - Redefine for newer imagekit */
#define NUM_DATABAR_EXP_SEC_LVL                          1707    /* F8 06 AB */

#define NUM_BT_AUTO_UNPAIR                               1708    /* F8 06 AC */
#define NUM_REFLECTIVE_PREF                              1709    /* F8 06 AD */
#define NUM_ECLEVEL                                      1710    /* F8 06 AE */
#define NUM_LAMP_MODE                                    1711    /* F8 06 AF */
#define NUM_LAMP_OFF_TIMEOUT                             1712    /* F8 06 B0 */

#define NUM_CDC_HOST_TYPE                                1713    /* F8 06 B1 */   // CDC host type
#define NUM_BT_HID_WAIT_FOR_CONNECTION                   1714    /* F8 06 B2 */   // Signal BT HID host to wait or issue connection
#define NUM_CAMERA_SELECT                                1715    /* F8 06 B3 */
#define NUM_CAMERA_BUTTON_ENABLE                         1716    /* F8 06 B4 */
#define NUM_CAMERA_BUTTON_DELAY                          1717    /* F8 06 B5 */

#define NUM_GRIDMATRIX_EN                                1718    /* F8 06 B6 */
#define NUM_GRIDMATRIX_INVERSE                           1719    /* F8 06 B7 */

#define NUM_DECODE_LED_DURATION                          1720    /* F8 06 B8 */
#define NUM_ALLOW_PARTIAL_FW_UPDATE                      1721    /* F8 06 B9 */
#define NUM_LIGHT_IMMUNITY                               1722    /* F8 06 BA */

#define NUM_OUT_RANGE_FLASH_ILLUMINATOR                  1723    /* F8 06 BB */
#define NUM_RETRY_RECONNECT_ATTEMPTS                     1724    /* F8 06 BC */
#define NUM_PID_VAL                                      1725    /* F8 06 BD */
#define NUM_AUX_SAME_SYMBOL_FEATURE                      1726    /* F8 06 BE */

#define NUM_IBM_FLASHUPDATE_ENABLE                       1727    /* F8 06 BF */
#define NUM_DEFAULT_SPECIAL_PARAMS                       1728    /* F8 06 C0 */
#define NUM_IBM_SPEC_LVL                                 1729    /* F8 06 C1 */

#define NUM_STATIC_IP_ENABLE                             1730    /* F8 06 C2 */
#define NUM_STATIC_IP_ADDRESS                            1731    /* F8 06 C3 */
#define NUM_STATIC_IP_NETMASK                            1732    /* F8 06 C4 */
#define NUM_STATIC_IP_GATEWAY                            1733    /* F8 06 C5 */
#define NUM_ZMCSERVER_IP_ADDR                            1734    /* F8 06 C6 */

#define NUM_UPCE_SUPP                                    1735    /* F8 06 C7 */
#define NUM_UPCEP2_AUTOD                        NUM_UPCE_SUPP    /* Renamed in imagekit */

#define NUM_GRIDMATRIX_MIRROR                            1736    /* F8 06 C8 */

#define NUM_USB_COMPLIANCE_MODE                          1737    /* F8 06 C9 */
#define NUM_USB_COMPLIANCE_INOC_PKT                      1738    /* F8 06 CA */

#define NUM_BT_OVER_USB_PREFERRED                        1739    /* F8 06 CB */
#define NUM_PRESO_FREQ_IMG1                              1740    /* F8 06 CC */   // Limits the # of frames processed for Preso/2D Barcodes, on images from the Platter Sensor. (1=Every platter frame, 2=Every 2nd platter frame ...)
#define NUM_PRESO_FREQ_IMG2                              1741    /* F8 06 CD */   // Limits the # of frames processed for Preso/2D Barcodes, on images from the Tower Sensor.   (1=Every tower frame,   2=Every 2nd tower frame ...)
#define NUM_BT_LINK_SUPERVISION_TIMEOUT_CR               1742    /* F8 06 CE */
#define NUM_BT_SAVE_CONNECTION_INFO_TO_FLASH             1743    /* F8 06 CF */

#define NUM_OUTPUT_TEST_DATA                             1744    /* F8 06 D0 */

#define NUM_REPLACE_FNC                                  1745    /* F8 06 D1 */
#define NUM_FNC_REPLACEMENT_CHAR                         1746    /* F8 06 D2 */
#define NUM_POSTAL_DUTCH_3S                              1747    /* F8 06 D3 */
#define NUM_DECODE_RANGE_IMG1                            1748    /* F8 06 D4 */   // MP6/7:Img1=Vertical/Tower
#define NUM_DECODE_RANGE_IMG2                            1749    /* F8 06 D5 */   // MP6/7:Img2=Horizontal/Platter

#define NUM_FEBRABAN_ENABLE                              1750    /* F8 06 D6 */
#define NUM_TETHERED_SCAN_EN                             1751    /* F8 06 D7 */
#define NUM_SECUR_PHARM_EN                               1752    /* F8 06 D8 */
#define NUM_SECUR_PHARM_FORMAT                           1753    /* F8 06 D9 */
#define NUM_VGAP_SSTO                                    1754    /* F8 06 DA */   // MP7 only: apply this 'same symbol timeout' to decodes through 'platter V-Gap'

#define NUM_STATS_BC_IMG_SAV_BTYPE_LIST                  1755    /* F8 06 DB */   // Symbology id list to save barcode image
#define NUM_STATS_BC_IMG_SAV_HG_BIN_TH                   1756    /* F8 06 DC */   // Threshold of Max decode time to save barcode image
#define NUM_STATS_BC_IMG_GET_STATS_ID                    1757    /* F8 06 DD */   // Symbology id to get barcode image
#define NUM_DOUBLEDECODE_WHITELEVEL_THRESHOLD            1758    /* F8 06 DE */

#define NUM_DPM_PRESO_ILLUM_PWR                          1759    /* F8 06 DF */
#define NUM_DPM_FILTER_ALL_FRAMES                        1760    /* F8 06 E0 */
#define NUM_DPM_AIM_DUTY_ON                              1761    /* F8 06 E1 */
#define NUM_DPM_AIM_DUTY_OFF                             1762    /* F8 06 E2 */

#define NUM_HP_LINK_MODE                                 1763    /* F8 06 E3 */
#define NUM_UPC_BLK_REDUN                                1764    /* F8 06 E4 */
#define NUM_BATT_DISCONNECT_EN                           1765    /* F8 06 E5 */
#define NUM_OCR_COMMON_FONTS_EN                          1766    /* F8 06 E6 */
#define NUM_C39_BIG_GAP_EN                               1767    /* F8 06 E7 */
#define NUM_QUEUE_BUSTING_EN                             1768    /* F8 06 E8 */
#define NUM_QBUSTING_XMIT_CODE_TYPE_EN                   1769    /* F8 06 E9 */
#define NUM_OCR_REDUNDANCY                               1770    /* F8 06 EA */
#define NUM_MULTI_DECODE_PROTECTION                      1771    /* F8 06 EB */
#define NUM_MULTI_DECODE_PREVENTION                      NUM_MULTI_DECODE_PROTECTION
#define NUM_ACQ_BUFFERING                                1772    /* F8 06 EC */
#define NUM_SCANNER_CONTACTS_HOST_TYPE                   1773    /* F8 06 ED */
#define NUM_ENHANCED_DEMOTE_RSS                          1774    /* F8 06 EE */
#define NUM_BT_SPP_PURGE_NON_ASCII                       1775    /* F8 06 EF */
#define NUM_CBAR_SECURITY_LVL                            1776    /* F8 06 F0 */
#define NUM_USB_BUS_POWER_CURRENT_LIMIT                  1777    /* F8 06 F1 */ //0 -No current limit, 1 - limit to 500mA, 2 -255 for future use
#define NUM_BT_AUTO_RECONN_SLEEP                         1778    /* F8 06 F2 */
#define NUM_BT_AUTO_RECONN_SEQ_CNT                       1779    /* F8 06 F3 */
#define NUM_BT_LAST_KNOWN_ADDR                           1780    /* F8 06 F4 */
#define NUM_DIAG_CLICK                                   1781    /* F8 06 F5 */
#define NUM_LARGE_BARCODE_SSTO                           1782    /* F8 06 F6 */
#define NUM_THIRD_PARTY_SCALE_MFG_PIN                    1783    /* F8 06 F7 */ // Select Bizera Scale 'Mfg/2nd button'
#define NUM_MOD16_CBAR_CHKDGT                            1784    /* F8 06 F8 */
#define NUM_RFID_LED_MODE                                1785    /* F8 06 F9 */ 
#define NUM_BATTERY_STATUS_LED_DURATION                  1786    /* F8 06 FA */
#define NUM_LENGTH_OF_LARGE_BARCODE_SSTO                 1787    /* F8 06 FB */
#define NUM_BATTERY_CRADLE_OUT_LED_DURATION              1788    /* F8 06 FC */

#define NUM_IMG_MAX_WIDTH_SENSOR                         1789    /* F8 06 FD */		// Width of image in pixels
#define NUM_IMG_MAX_HEIGHT_SENSOR                        1790    /* F8 06 FE */     // Height of image in pixels
#define NUM_IMG_MAX_H_FOV_SENSOR                         1791    /* F8 06 FF */     // Horizontal Field of view in radians
#define NUM_IMG_MAX_V_FOV_SENSOR                         1792    /* F8 07 00 */     // Vertical Field of view in radians
#define NUM_TMU2_MAX_DEPTH_HEX                           1793    /* F8 07 01 */
#define NUM_TMU2_MAX_DEPTH_CM                            1794    /* F8 07 02 */
#define NUM_TMU2_IMG_OUTPUT_TYPE                         1795    /* F8 07 03 */
#define NUM_TMU2_EXPOSURE_TIME                           1796    /* F8 07 04 */
#define NUM_TMU2_IMG_SPARE1                              1797    /* F8 07 05 */
#define NUM_TMU2_NUM_FRAMES_ACCEPTABLE_BRIGHTNESS        1798    /* F8 07 06 */
#define NUM_TMU2_MIN_ACCEPTABLE_BRIGHTNESS               1799    /* F8 07 07 */
#define NUM_TMU2_MAX_ACCEPTABLE_BRIGHTNESS               1800    /* F8 07 08 */
#define NUM_TMU2_LENS_CORR1                              1801    /* F8 07 09 */
#define NUM_TMU2_LENS_CORR2                              1802    /* F8 07 0A */
#define NUM_TMU2_LENS_CORR3                              1803    /* F8 07 0B */
#define NUM_TMU2_LENS_CORR4                              1804    /* F8 07 0C */
#define NUM_TMU2_LENS_CORR5                              1805    /* F8 07 0D */
#define NUM_TMU2_LENS_CORR6                              1806    /* F8 07 0E */
#define NUM_TMU2_LENS_CORR7                              1807    /* F8 07 0F */
#define NUM_TMU2_LENS_CORR8                              1808    /* F8 07 10 */
#define NUM_TMU2_LENS_CORR9                              1809    /* F8 07 11 */
#define NUM_TMU2_COMMON_PHASE1                           1810    /* F8 07 12 */
#define NUM_TMU2_COMMON_PHASE2                           1811    /* F8 07 13 */
#define NUM_TMU2_COEFF_ILLUM                             1812    /* F8 07 14 */
#define NUM_TMU2_COEFF_SENSOR                            1813    /* F8 07 15 */
#define NUM_TMU2_TEC_LASER_TEMP_MIN                      1814    /* F8 07 16 */
#define NUM_TMU2_TEC_LASER_TEMP_MAX                      1815    /* F8 07 17 */
#define NUM_TMU2_TEC_TARGET_TEMP                         1816    /* F8 07 18 */
#define NUM_TMU2_TEC_ON                                  1817    /* F8 07 19 */
#define NUM_TMU2_TEC_Kp                                  1818    /* F8 07 1A */
#define NUM_TMU2_TEC_Ki_DENOMINATOR                      1819    /* F8 07 1B */
#define NUM_TMU2_TEC_FAN_ON                              1820    /* F8 07 1C */
#define NUM_TMU2_TEC_SPARE02                             1821    /* F8 07 1D */
#define NUM_USB_AUX_PORTS                                1822    /* F8 07 1E */
#define NUM_COUPON_PRIORITIZATION_TIME                   1823    /* F8 07 1F */
#define NUM_STORE_DECODE_IMAGES                          1824    /* F8 07 20 */
#define NUM_USER_DATA                                    1825    /* F8 07 21 */
#define NUM_SSTO_EXIT_REARM_TIME                         1826    /* F8 07 22 */
#define NUM_QUICK_MOTION_DETECT                          1827    /* F8 07 23 */
#define NUM_IR_TRACKER_ALPHA                             1828    /* F8 07 24 */
#define NUM_IR_BASELINE_ALPHA                            1829    /* F8 07 25 */
#define NUM_IR_FILTER_SIZE                               1830    /* F8 07 26 */
#define NUM_IR_FILTER                                    1831    /* F8 07 27 */
#define NUM_ISERIALNUMBER_FORMAT                         1832    /* F8 07 28 */

#define NUM_HORIZ_ANALOG_GAIN_OVERRIDE                   1833    /* F8 07 29 */
#define NUM_HORIZ_DIGITAL_GAIN_OVERRIDE                  1834    /* F8 07 2A */
#define NUM_HORIZ_EXPOSURE_MULTIPLIER                    1835    /* F8 07 2B */
#define NUM_VERT_ANALOG_GAIN_OVERRIDE                    1836    /* F8 07 2C */
#define NUM_VERT_DIGITAL_GAIN_OVERRIDE                   1837    /* F8 07 2D */
#define NUM_VERT_EXPOSURE_MULTIPLIER                     1838    /* F8 07 2E */
#define NUM_RANKING_CONFIDENCE                           1839    /* F8 07 2F */
#define NUM_FPGA_THRESHOLD                               1840    /* F8 07 30 */

#define NUM_SSI_LITE_LEGACY_MODE                         1841    /* F8 07 31 */
#define NUM_IGNORE_SCALE_5_DIGIT_DIRECTIVE               1842    /* F8 07 32 */
#define NUM_MAX_SUPPS_GAP                                1843    /* F8 07 33 */
#define NUM_SAME_SYMBOL_EXCLUDES_SYMBOL_TYPE             1844    /* F8 07 34 */
#define NUM_C365_EN                                      1845    /* F8 07 35 */
#define NUM_BUTTON_SENSITIVITY                           1846    /* F8 07 36 */
#define NUM_LINKED_QR_MODE                               1847    /* F8 07 37 */
#define NUM_MOD_FREQ_CORR                                1848    /* F8 07 38 */
#define NUM_CAM_FREQ_SELECT                              1849    /* F8 07 39 */
#define NUM_TMU2_TEC_CUTOFF                              1850    /* F8 07 3A */
#define NUM_TMU2_TEC_SPARE03                             1851    /* F8 07 3B */
#define NUM_TMU2_DISABLE_TEMP_CORR                       1852    /* F8 07 3C */
#define NUM_TMU2_TARGET_DIST                             1853    /* F8 07 3D */
#define NUM_COMMON_PHASE_STATUS                          1854    /* F8 07 3E */

#define NUM_SSCG_ENABLE                                  1855    /* F8 07 3F */ // spread spectrum for TMU2
#define NUM_SSCG_PERIOD                                  1856    /* F8 07 40 */ // spread spectrum for TMU2
#define NUM_SSCG_MODULATION                              1857    /* F8 07 41 */ // spread spectrum for TMU2

#define NUM_TMU2_TILLUM_CALIB                            1858    /* F8 07 42 */
#define NUM_TMU2_TSENSOR_CALIB                           1859    /* F8 07 43 */
#define NUM_TMU2_CALIB_PREC                              1860    /* F8 07 44 */
#define NUM_HARD_CODED_INTERAL_CAP_POS                   1861    /* F8 07 45 */
#define NUM_HARD_CODED_INTERAL_CAP_NEG                   1862    /* F8 07 46 */
#define NUM_TEC_SCALING_DUTY_CYCLE                       1863    /* F8 07 47 */
#define NUM_USE_PIXELWISE                                1864    /* F8 07 48 */
#define NUM_USB_DCP_TOGGLE_ENUMERATION                   1865    /* F8 07 49 */
#define NUM_DECODE_LED_NOTIFICATION                      1866    /* F8 07 4A */

#define NUM_UPC_PCD                                      1867    /* F8 07 4B */
#define NUM_EAN0_PCD                                     1868    /* F8 07 4C */
#define NUM_EAN1_PCD                                     1869    /* F8 07 4D */
#define NUM_EAN2_PCD                                     1870    /* F8 07 4E */
#define NUM_EAN3_PCD                                     1871    /* F8 07 4F */
#define NUM_EAN4_PCD                                     1872    /* F8 07 50 */
#define NUM_EAN5_PCD                                     1873    /* F8 07 51 */
#define NUM_EAN6_PCD                                     1874    /* F8 07 52 */
#define NUM_EAN7_PCD                                     1875    /* F8 07 53 */
#define NUM_EAN8_PCD                                     1876    /* F8 07 54 */
#define NUM_EAN9_PCD                                     1877    /* F8 07 55 */

#define NUM_TMU2_TEC_Ki_NUMERATOR                        1878    /* F8 07 56 */
#define NUM_CONNECTED_AS_CASCADED_DEVICE                 1879    /* F8 07 57 */

#define NUM_OUTDOOR_PICKLIST                             1880    /* F8 07 58 */
#define NUM_TRANSMIT_EAN8_CHK_DIGIT                      1881    /* F8 07 59 */
#define NUM_TRANSMIT_EAN13_CHK_DIGIT                     1882    /* F8 07 5A */

#define NUM_SSCG_INIT_2                                  1883    /* F8 07 5B */ // spread spectrum for TMU2
#define NUM_SSCG_INIT_3                                  1884    /* F8 07 5C */ // spread spectrum for TMU2
#define NUM_SSCG_INIT_4                                  1885    /* F8 07 5D */ // spread spectrum for TMU2
#define NUM_SSCG_INIT_5                                  1886    /* F8 07 5E */ // spread spectrum for TMU2 
#define NUM_TEC_ASSEMBLY_STATUS                          1887    /* F8 07 5F */ // TEC in correct or backwards [TMU2]  
                                                                                // 
#define NUM_HNM_3_I2OF5_BARCODE_EN                       1888    /* F8 07 60 */
#define NUM_SWD_CUSTOM_1                                 1889    /* F8 07 61 */
#define NUM_SWD_CUSTOM_2                                 1890    /* F8 07 62 */
#define NUM_SWD_CUSTOM_3                                 1891    /* F8 07 63 */
#define NUM_SWD_CUSTOM_4                                 1892    /* F8 07 64 */
#define NUM_SWD_CUSTOM_5                                 1893    /* F8 07 65 */
#define NUM_SWD_CUSTOM_6                                 1894    /* F8 07 66 */
#define NUM_SWD_CUSTOM_7                                 1895    /* F8 07 67 */
#define NUM_SWD_CUSTOM_8                                 1896    /* F8 07 68 */
#define NUM_SWD_CUSTOM_9                                 1897    /* F8 07 69 */

#define NUM_C39_MISSEDBAR_N_UNEVNSPC                     1898    /* F8 07 6A */
#define NUM_BT_CHECK_LINK                                1899    /* F8 07 6B */
#define NUM_TRANSMIT_C39_START_STOP                      1900    /* F8 07 6C */
#define NUM_DECODE_UPC_WITH_VOIDS                        1901    /* F8 07 6D */
#define NUM_DECODE_UPC_WITH_VOIDS_REDUNDANCY             1902    /* F8 07 6E */
#define NUM_DOUBLE_IMAGE_RESOLUTION                      1903    /* F8 07 6F */
#define NUM_ULTRA_HIGH_DENSITY_DPM                       NUM_DOUBLE_IMAGE_RESOLUTION   // renamed in ImageKit
#define NUM_ROUGH_SHINY_SURFACE                          1904    /* F8 07 70 */
#define NUM_ALLY_EEPROM_SHADOW                           1905    /* F8 07 71 */
#define NUM_DOTCODE_EN                                   1906    /* F8 07 72 */
#define NUM_DOTCODE_INVERSE                              1907    /* F8 07 73 */
#define NUM_DOTCODE_MIRROR                               1908    /* F8 07 74 */

#define NUM_VIDEO_JPEG_QUALITY                           1909    /* F8 07 75 */
#define NUM_VIDEO_JPEG_QUALITY_OR_SIZE_OPTION            1910    /* F8 07 76 */
#define NUM_TMU2_FAN_THRES                               1911    /* F8 07 77 */
#define NUM_ETH_IE_PROT                                  1912    /* F8 07 78 */
#define NUM_ETH_DHCP_TIMEOUT                             1913    /* F8 07 79 */
#define NUM_ETH_IP_ADDR                                  1914    /* F8 07 7A */
#define NUM_ETH_SUBNET                                   1915    /* F8 07 7B */
#define NUM_ETH_GATEWAY                                  1916    /* F8 07 7C */
#define NUM_ETH_PROFI_NAME                               1917    /* F8 07 7D */
#define NUM_SIMULSCAN_FEATURE_MODE_A                     1918    /* F8 07 7E */
#define NUM_SIMULSCAN_FEATURE_MODE_B                     1919    /* F8 07 7F */
#define NUM_SIMULSCAN_FEATURE_MODE_C                     1920    /* F8 07 80 */
#define NUM_TMU2_HI_DYN_RANGE                            1921    /* F8 07 81 */

#define NUM_PRODUCTCODE_FIRMWARE_INSTALL                 1922    /* F8 07 82 */
#define NUM_ETH_SEND_UNPACKETED_DATA                     1923    /* F8 07 83 */

#define NUM_HDR_EXP_0                                    1924    /* F8 07 84 */
#define NUM_HDR_EXP_1                                    1925    /* F8 07 85 */
#define NUM_HDR_EXP_2                                    1926    /* F8 07 86 */
#define NUM_HANDHELD_ACTIVATION                          1927    /* F8 07 87 */

#define NUM_TELEPEN_EN                                   1928    /* F8 07 88 */
#define NUM_TELEPEN_ORIGINAL                             1929    /* F8 07 89 */
#define NUM_TELEPEN_L1                                   1930    /* F8 07 8A */
#define NUM_TELEPEN_L2                                   1931    /* F8 07 8B */
#define NUM_TELEPEN_SECURITY                             1932    /* F8 07 8C */

#define NUM_MARGINLESS_M2OF5_ENABLE                      1933    /* F8 07 8D */
#define NUM_BT_SNIFF_MODE                                1934    /* F8 07 8E */
#define NUM_BT_EMULATE_KEYPAD_LEADING_0                  1935    /* F8 07 8F */
#define NUM_ETH_PORT                                     1936    /* F8 07 90 */
#define NUM_DOTCODE_PRIORITIZE                           1937    /* F8 07 91 */
#define NUM_DATAMATRIX_ECI_EN                            1938    /* F8 07 92 */

#define NUM_RS232_POWER_ON_MODE                          1939    /* F8 07 93 */
#define NUM_IBM_SCANNER_GENERIC_MGMT_INFO_EN             1940    /* F8 07 94 */
#define NUM_IBM_SCANNER_VENDOR_SPE_MGMT_INFO_EN          1941    /* F8 07 95 */
#define NUM_IBM_SCALE_GENERIC_MGMT_INFO                  1942    /* F8 07 96 */
#define NUM_MD_CORR_THRESHOLD                            1943    /* F7 07 97 */
#define NUM_POST_FINNISH                                 1944    /* F7 07 98 */
#define NUM_MIRROR_FLIP_IMAGE                            1945    /* F7 07 99 */
#define NUM_IMAGER_INTERFACE                             1946    /* F7 07 9A */
#define NUM_WEBLINK_QR                                   1947    /* F7 07 9B */
#define NUM_NCR_LABEL_ID_MODE                            1948    /* F7 07 9C */
#define NUM_CVS_DOCCAP                                   1949    /* F7 07 9D */
#define NUM_RANGE_LIMIT_FACTOR                           1950    /* F7 07 9E */
#define NUM_ALLY_ILLUM_CUR                               1951    /* F7 07 9F */

#define NUM_RFID_LOCK_ON                                 1952    /* F8 07 A0 */
#define NUM_RFID_LOCK_OFF                                1953    /* F8 07 A1 */
#define NUM_RFID_LOCK_OFF_TIME                           1954    /* F8 07 A2 */
#define NUM_RFID_PROFILE_DETECT_LEVEL                    1955    /* F8 07 A3 */
#define NUM_RFID_PROFILE_DETECT_TIME                     1956    /* F8 07 A4 */
#define NUM_RFID_PROFILE_LOW_LEVEL                       1957    /* F8 07 A5 */
#define NUM_RFID_PROFILE_LOW_TIME                        1958    /* F8 07 A6 */
#define NUM_RFID_PROFILE_MEDIUM_LEVEL                    1959    /* F8 07 A7 */
#define NUM_RFID_PROFILE_MEDIUM_TIME                     1960    /* F8 07 A8 */
#define NUM_RFID_PROFILE_HIGH_LEVEL                      1961    /* F8 07 A9 */
#define NUM_RFID_PROFILE_HIGH_TIME                       1962    /* F8 07 AA */
#define NUM_RFID_PROFILE_MAX_LEVEL                       1963    /* F8 07 AB */
#define NUM_RFID_PROFILE_MAX_TIME                        1964    /* F8 07 AC */
#define NUM_RFID_CACHE_MGMT                              1965    /* F8 07 AD */
#define NUM_LAETUS_PHARMACODE                            1966    /* F8 07 AE */
#define NUM_RFID_BT_PASSWD_ENABLE                        1967    /* F8 07 AF */
#define NUM_REJECT_SAME_WEIGHT                           1968    /* F8 07 b0 */

#define NUM_PIXMARK_EN                                   1969    /* F8 07 b1 */
#define NUM_DIGIMARC_DENSITY                             1970    /* F8 07 B2 */
#define NUM_IBM_GS1_SEND_ASCII                           1971    /* F8 07 B3 */
#define NUM_XMIT_GS1_AS_ASCII_ON_IBM_TT                  1971    /* same as NUM_IBM_GS1_SEND_ASCII - just renamed : F8 08 4A */

// [MP7] Color Camera parameters (reserved 1972-2021 (50))
#define NUM_CC_IMG_RESOLUTION                            1972    /* F8 07 B4 */
#define NUM_CC_IMG_FORMAT                                1973    /* F8 07 B5 */
#define NUM_CC_BRIGHTNESS                                1974    /* F8 07 B6 */
#define NUM_CC_CONTRAST                                  1975    /* F8 07 B7 */
#define NUM_CC_HUE                                       1976    /* F8 07 B8 */
#define NUM_CC_SATURATION                                1977    /* F8 07 B9 */
#define NUM_CC_SHARPNESS                                 1978    /* F8 07 BA */
#define NUM_CC_WHITE_BALANCE                             1979    /* F8 07 BB */
#define NUM_CC_EXPOSURE                                  1980    /* F8 07 BC */
#define NUM_CC_VIDEO_MODE                                1981    /* F8 07 BD */
#define NUM_CC_ILLUMINATION_MODE                         1982    /* F8 07 BE */
#define NUM_CC_ORIENTATION                               1983    /* F8 07 BF */
#define NUM_CC_GAMMA                                     1984    /* F8 07 C0 */
#define NUM_CC_WHITE_BALANCE_AUTO                        1985    /* F8 07 C1 */
#define NUM_CC_POWER_USER_MODE                           1986    /* F8 07 C2 */
#define NUM_CC_CONTEXT1                                  1987    /* F8 07 C3 */
#define NUM_CC_CONTEXT2                                  1988    /* F8 07 C4 */
#define NUM_CC_CONTEXT3                                  1989    /* F8 07 C5 */
#define NUM_CC_CONTEXT4                                  1990    /* F8 07 C6 */
#define NUM_CC_BACKLIGHT_COMP                            1991    /* F8 07 C7 */

#define NUM_CC_END                                       2021    /* F8 07 E5 */
// Add [MP7] Color Camera paraters above this line (reserved 1972-2021 (50))

#define NUM_MFI_COMPATIBILITY                            2022    /* F8 07 E6 */
#define NUM_SWIPE_COUNT                                  2023    /* F8 07 E7 */
#define NUM_SWIPE_DECODE_TIME                            2024    /* F8 07 E8 */
#define NUM_OCR_CUSTOM                                   2025    /* F8 07 E9 */
#define NUM_RFID_BATTERY_RECHARGE_SOC_THRESHOLD          2026    /* F8 07 EA */
#define NUM_RFID_MAX_POWER_LEVEL_IN_CRADLE               2027    /* F8 07 EB */
#define NUM_HONOR_BEEP_CMDS                              2028    /* F8 07 EC */
#define NUM_AIMER_REG_OPTIMIZE                           2029    /* F8 07 ED */
#define NUM_MOMENTARY_AIM_DURATION                       2030    /* F8 07 EE */
#define NUM_POST_POSTI4S                                 2031    /* F8 07 EF */
#define NUM_MOMENTARY_TRIG_MODE_ALT                      2032    /* F8 07 F0 */
#define NUM_COLOR_CAMERA_ENABLED                         2033    /* F8 07 F1 */

#define NUM_WAKEUP_MODE                                  2034    /* F8 07 F2 */

#define NUM_RFID_PROFILE_DETECT_VOL                      2035    /* F8 07 F3 */
#define NUM_RFID_PROFILE_LOW_VOL                         2036    /* F8 07 F4 */
#define NUM_RFID_PROFILE_MEDIUM_VOL                      2037    /* F8 07 F5 */
#define NUM_RFID_PROFILE_HIGH_VOL                        2038    /* F8 07 F6 */
#define NUM_RFID_PROFILE_MAX_VOL                         2039    /* F8 07 F7 */
#define NUM_PLURAL_SUPPS_4THDIGIT                        2040    /* F8 07 ED  This number was created to allow PLURAL_STAGE to build in ImgKit Library build. I suspect this attribute was created (a long time ago) by accident and is supposed to be associated with PLURAL_STG_4TH_DIGIT_SRC. */

#define NUM_BF3905_FIXED_EXPOSURE                        2041    /* F8 07 F9 */  /* in terms of 100 microseconds */
#define NUM_BF3905_FIXED_GAIN                            2042    /* F8 07 FA */
#define NUM_BF3905_IMG_USE_AGC                           2043    /* F8 07 FB */  /* (auto-gain control) */

#define NUM_AES_RFID_KEY                                 2044    /* F8 07 FC */
#define NUM_DOCCAP_BORDER_EXPANSION                      2045    /* F8 07 FD */

#define NUM_STORE_DECODE_IMAGES_COUNT                    2046    /* F8 07 FE */
#define NUM_FLEXI_PAUSE_EN                               2047    /* F8 07 FF */

#define NUM_USB_REMOTE_WAKEUP_EN                         2048    /* F8 08 00 */
#define NUM_TEMPTIME_DM                                  2049    /* F8 08 01 */
#define NUM_CRADLE_RSM_TIMEOUT                           2050    /* F8 08 02 */
#define NUM_SCALE_IN_MOTION_DELAY_10MSEC                 2051    /* F8 08 03 */
#define NUM_SCALE_RESPONSE_DELAY_10MSEC                  2052    /* F8 08 04 */

#define NUM_ELEC_FENCE_ALARM_EN                          2053    /* F8 08 05 */
#define NUM_ELEC_FENCE_TIME_BEFORE_ACTIVATE              2054    /* F8 08 06 */
#define NUM_ELEC_FENCE_TIMEOUT                           2055    /* F8 08 07 */

#define NUM_FPGA_FILTER_PLATTER                          2056    /* F8 08 08 */
#define NUM_FPGA_FILTER_TOWER                            2057    /* F8 08 09 */
#define NUM_PRESENTATION_LED_DISABLE                     2058    /* F8 08 0A */
#define NUM_TIFF_BIG_ENDIAN                              2059    /* F8 08 0B */
#define NUM_BUTTON2_FUNC                                 2060    /* F8 08 0C */
#define NUM_HAPTICS_CAL_DATA                             2061    /* F8 08 0D */
#define NUM_AUX_USB_MODE                                 2062    /* F8 08 0E */
#define NUM_DOTCODE_ECC_ERASURE                          2063    /* F8 08 0F */
#define NUM_RFID_ENGINE_OFF_MODE_TIMEOUT                 2064    /* F8 08 10 */
#define NUM_BATTERY_AUTH_RESP                            2065    /* F8 08 11 */

#define NUM_ISBT_FORMAT                                  2066    /* F8 08 12 - old DCC name - no longer used */
#define NUM_ISBT_SEQ_CHECK                               2066    /* F8 08 12 - new DCC name for 2066*/

#define NUM_RFID_PA_FAULT_FLAG                           2067    /* F8 08 13 */
#define NUM_TRIGGERS_ENABLED                             2068    /* F8 08 14 */
#define NUM_USE_OBJECT_DECODE_MODE                       2069    /* F8 08 15 */
#define NUM_ADF_RULE_BUTTON1                             2070    /* F8 08 16 */
#define NUM_ADF_RULE_BUTTON2                             2071    /* F8 08 17 */
#define NUM_ADF_RULE_HANDSFREE                           2072    /* F8 08 18 */
#define NUM_ADF_RULE_SWTRIGGER                           2073    /* F8 08 19 */
#define NUM_SCALE_READ_WEIGHT_DELAY_50MSEC               2074    /* F8 08 1A */
#define NUM_SCAN_AVOIDANCE                               2075    /* F8 08 1B */
#define NUM_SCAN_AVOIDANCE_THRESHOLD                     2076    /* F8 08 1C */
#define NUM_COLOR_CAMERA_WEIGHT_EVENT_DELAY              2077    /* F8 08 1D */
#define NUM_STRONG_1D_THRESHOLD                          2078    /* F8 08 1E */
#define NUM_STRONG_1D_FILTER                             2079    /* F8 08 1F */
#define NUM_UNUSED1                                      2080    /* F8 08 20 */
#define NUM_UNUSED2                                      2081    /* F8 08 21 */
#define NUM_UNUSED3                                      2082    /* F8 08 22 */
#define NUM_UNUSED4                                      2083    /* F8 08 23 */

// Laser calibration parameters 
#define NUM_THERMAL_FATAL_THRESHOLD                      2084    /* F8 08 24 */
#define NUM_THERMAL_FATAL_EXIT_THRESHOLD                 2085    /* F8 08 25 */ 
#define NUM_THERMAL_WARNING_THRESHOLD                    2086    /* F8 08 26 */
#define NUM_THERMAL_WARNING_EXIT_THRESHOLD               2087    /* F8 08 27 */
#define NUM_LSR_CAL_V_V_SNS                              2088    /* F8 08 28 */
#define NUM_LSR_CAL_V_V_SNS_NEG                          2089    /* F8 08 29 */
#define NUM_LSR_CALD_I_TRM                               2090    /* F8 08 2A */
#define NUM_LSR_CAL_PWR_TRM                              2091    /* F8 08 2B */
#define NUM_LSR_CAL_PWR_TRM_NEG                          2092    /* F8 08 2C */
#define NUM_LSR_CAL_R_SNS                                2093    /* F8 08 2D */
#define NUM_LSR_CAL_R_SNS_NEG                            2094    /* F8 08 2E */
#define NUM_SSFAULTCHK_EN01                              2095    /* F8 08 2F */
#define NUM_SSFAULTCHK_EN02                              2096    /* F8 08 30 */
#define NUM_IDIOP_TEMP_THRS                              2097    /* F8 08 31 */
#define NUM_LSR_CAL_BUF_SENSE_AIM                        2098    /* F8 08 32 */
#define NUM_LSR_CAL_BUF_SENSE_AEL                        2099    /* F8 08 33 */
#define NUM_LSR_CAL_CUR_AIM                              2100    /* F8 08 34 */
#define NUM_LSR_CAL_CUR_AEL                              2101    /* F8 08 35 */
#define NUM_CHECKPOINT_PULSE_LENGTH_50MSEC               2102    /* F8 08 36 */
#define NUM_DOUBLE_CLICK_ON_TRIGGER_B                    2103    /* F8 08 37 */
#define NUM_PERCENT_SYMBOL_IN_ROI                        2104    /* F8 08 38 */

#define NUM_USE_SCENE_DETECT                             2105    /* F8 08 39 */
#define NUM_ENHANCED_DOTTED_DM                           2106    /* F8 08 3A */
#define NUM_DECODE_XMIT_DIR                              2107    /* F8 08 3B */
#define NUM_RS232_VARIANT_LABEL_ID_MODE                  2108    /* F8 08 3C */
#define NUM_ISBT_GAP_SIZE                                2109    /* F8 08 3D */
#define NUM_RS232_VARIANT_CODE_TYPE                      2110    /* F8 08 3E */
#define NUM_RS232_VARIANT_HOST_NUM                       2111    /* F8 08 3F */
#define NUM_GET_OCR_CHAR_BBOX                            2112    /* F8 08 40 */
#define NUM_FILMSTRIP_SKIP                               2113    /* F8 08 41 */
#define NUM_FILMSTRIP_SAVE_FRAME_NO                      2114    /* F8 08 42 */
#define NUM_HOST_CODE_ID_CONVERT                         2115    /* F8 08 43 */

#define NUM_CONSTANT_DECODE_MODE                         2116    /* F8 08 44 */
#define NUM_BQM_MODE                                     2117    /* F8 08 45 */
#define NUM_HF_ILLUM_BRIGHTNESS                          2118    /* F8 08 46 */
#define NUM_ELEC_FENCE_ALARM_DEFEAT                      2119    /* F8 08 47 */
#define NUM_ELEC_FENCE_ALARM_PAUSE                       2120    /* F8 08 48 */
#define NUM_REPORT_DUPLICATE_BARCODES                    2121    /* F8 08 49 */
#define NUM_MSI_SECURITY_LVL                             2122    /* F8 08 4A */
#define NUM_HID_REMOTE_DESKTOP                           2123    /* F8 08 4B */
#define NUM_ELEC_FENCE_ALARM_CRAD_EN                     2124    /* F8 08 4C */

#define NUM_TEMPTIME_THRESH_SENSOR_EN                    2125    /* F8 08 4D */
#define NUM_TEMPTIME_DETREND_EN                          2126    /* F8 08 4E */
#define NUM_TEMPTIME_N_IMAGES_AVGD                       2127    /* F8 08 4F */
#define NUM_TEMPTIME_MIN_PPM                             2128    /* F8 08 50 */
#define NUM_TEMPTIME_THR_XCORR_INIT                      2129    /* F8 08 51 */
#define NUM_TEMPTIME_THR_XCORR_MIN                       2130    /* F8 08 52 */
#define NUM_TEMPTIME_XTHR_STEP_TIME                      2131    /* F8 08 53 */

#define NUM_PD_MODE                                      2132    /* F8 08 54 */
#define NUM_LDC_GAIN_BUTTON1                             2133    /* F8 08 55 */
#define NUM_LDC_GAIN_BUTTON2                             2134    /* F8 08 56 */
#define NUM_RFID_HEX_TO_ASCII                            2135    /* F8 08 57 */
#define NUM_RFID_START_END_CONVERT_CHAR                  2136    /* F8 08 58 */
#define NUM_TRIGGER_DELAY                                2137    /* F8 08 59 */
#define NUM_OCR_CHAR_CONF_THRESHOLD                      2138    /* F8 08 5A */
#define NUM_AUTO_CRADLE_UPLOAD_EN                        2139    /* F8 08 5B */
#define NUM_DPM_RESOLUTIONS                              2140    /* F8 08 5C */
#define NUM_FORCE_ROI_EN                                 2141    /* F8 08 5D */
#define NUM_FORCE_ROI_FRAMES                             2142    /* F8 08 5E */

#define NUM_ENABLE_SHARED_HID_ENDPOINT                   2143    /* F8 08 5F */
/***************************************************************************************
* Canopy board parameter numbers (100 reserved)- Oxpecker
****************************************************************************************/
#define NUM_CANOPY_PARAM_FIRST                           2144    /* F8 08 60 */
#define NUM_CANOPY_PARAM_1                               2144    /* F8 08 60 */
#define NUM_CANOPY_PARAM_2                               2145    /* F8 08 61 */
#define NUM_CANOPY_PARAM_3                               2146    /* F8 08 62 */
#define NUM_CANOPY_PARAM_4                               2147    /* F8 08 63 */
#define NUM_CANOPY_PARAM_5                               2148    /* F8 08 64 */
#define NUM_CANOPY_PARAM_6                               2149    /* F8 08 65 */
#define NUM_CANOPY_PARAM_7                               2150    /* F8 08 66 */
#define NUM_CANOPY_PARAM_8                               2151    /* F8 08 67 */
#define NUM_CANOPY_PARAM_9                               2152    /* F8 08 68 */
#define NUM_CANOPY_PARAM_10                              2153    /* F8 08 69 */
#define NUM_CANOPY_PARAM_11                              2154    /* F8 08 6A */
#define NUM_CANOPY_PARAM_12                              2155    /* F8 08 6B */
#define NUM_CANOPY_PARAM_13                              2156    /* F8 08 6C */
#define NUM_CANOPY_PARAM_14                              2157    /* F8 08 6D */
#define NUM_CANOPY_PARAM_15                              2158    /* F8 08 6E */
#define NUM_CANOPY_PARAM_16                              2159    /* F8 08 6F */
#define NUM_CANOPY_PARAM_17                              2160    /* F8 08 70 */
#define NUM_CANOPY_PARAM_18                              2161    /* F8 08 71 */
#define NUM_CANOPY_PARAM_19                              2162    /* F8 08 72 */
#define NUM_CANOPY_PARAM_20                              2163    /* F8 08 73 */
#define NUM_CANOPY_PARAM_21                              2164    /* F8 08 74 */
#define NUM_CANOPY_PARAM_22                              2165    /* F8 08 75 */
#define NUM_CANOPY_PARAM_23                              2166    /* F8 08 76 */
#define NUM_CANOPY_PARAM_24                              2167    /* F8 08 77 */
#define NUM_CANOPY_PARAM_25                              2168    /* F8 08 78 */
#define NUM_CANOPY_PARAM_26                              2169    /* F8 08 79 */
#define NUM_CANOPY_PARAM_27                              2170    /* F8 08 7A */
#define NUM_CANOPY_PARAM_28                              2171    /* F8 08 7B */
#define NUM_CANOPY_PARAM_29                              2172    /* F8 08 7C */
#define NUM_CANOPY_PARAM_30                              2173    /* F8 08 7D */
#define NUM_CANOPY_PARAM_31                              2174    /* F8 08 7E */
#define NUM_CANOPY_PARAM_32                              2175    /* F8 08 7F */
#define NUM_CANOPY_PARAM_33                              2176    /* F8 08 80 */
#define NUM_CANOPY_PARAM_34                              2177    /* F8 08 81 */
#define NUM_CANOPY_PARAM_35                              2178    /* F8 08 82 */
#define NUM_CANOPY_PARAM_36                              2179    /* F8 08 83 */
#define NUM_CANOPY_PARAM_37                              2180    /* F8 08 84 */
#define NUM_CANOPY_PARAM_38                              2181    /* F8 08 85 */
#define NUM_CANOPY_PARAM_39                              2182    /* F8 08 86 */
#define NUM_CANOPY_PARAM_40                              2183    /* F8 08 87 */
#define NUM_CANOPY_PARAM_41                              2184    /* F8 08 88 */
#define NUM_CANOPY_PARAM_42                              2185    /* F8 08 89 */
#define NUM_CANOPY_PARAM_43                              2186    /* F8 08 8A */
#define NUM_CANOPY_PARAM_44                              2187    /* F8 08 8B */
#define NUM_CANOPY_PARAM_45                              2188    /* F8 08 8C */
#define NUM_CANOPY_PARAM_46                              2189    /* F8 08 8D */
#define NUM_CANOPY_PARAM_47                              2190    /* F8 08 8E */
#define NUM_CANOPY_PARAM_48                              2191    /* F8 08 8F */
#define NUM_CANOPY_PARAM_49                              2192    /* F8 08 90 */
#define NUM_CANOPY_PARAM_50                              2193    /* F8 08 91 */
#define NUM_CANOPY_PARAM_51                              2194    /* F8 08 92 */
#define NUM_CANOPY_PARAM_52                              2195    /* F8 08 93 */
#define NUM_CANOPY_PARAM_53                              2196    /* F8 08 94 */
#define NUM_CANOPY_PARAM_54                              2197    /* F8 08 95 */
#define NUM_CANOPY_PARAM_55                              2198    /* F8 08 96 */
#define NUM_CANOPY_PARAM_56                              2199    /* F8 08 97 */
#define NUM_CANOPY_PARAM_57                              2200    /* F8 08 98 */
#define NUM_CANOPY_PARAM_58                              2201    /* F8 08 99 */
#define NUM_CANOPY_PARAM_59                              2202    /* F8 08 9A */
#define NUM_CANOPY_PARAM_60                              2203    /* F8 08 9B */
#define NUM_CANOPY_PARAM_61                              2204    /* F8 08 9C */
#define NUM_CANOPY_PARAM_62                              2205    /* F8 08 9D */
#define NUM_CANOPY_PARAM_63                              2206    /* F8 08 9E */
#define NUM_CANOPY_PARAM_64                              2207    /* F8 08 9F */
#define NUM_CANOPY_PARAM_65                              2208    /* F8 08 A0 */
#define NUM_CANOPY_PARAM_66                              2209    /* F8 08 A1 */
#define NUM_CANOPY_PARAM_67                              2210    /* F8 08 A2 */
#define NUM_CANOPY_PARAM_68                              2211    /* F8 08 A3 */
#define NUM_CANOPY_PARAM_69                              2212    /* F8 08 A4 */
#define NUM_CANOPY_PARAM_70                              2213    /* F8 08 A5 */
#define NUM_CANOPY_PARAM_71                              2214    /* F8 08 A6 */
#define NUM_CANOPY_PARAM_72                              2215    /* F8 08 A7 */
#define NUM_CANOPY_PARAM_73                              2216    /* F8 08 A8 */
#define NUM_CANOPY_PARAM_74                              2217    /* F8 08 A9 */
#define NUM_CANOPY_PARAM_75                              2218    /* F8 08 AA */
#define NUM_CANOPY_PARAM_76                              2219    /* F8 08 AB */
#define NUM_CANOPY_PARAM_77                              2220    /* F8 08 AC */
#define NUM_CANOPY_PARAM_78                              2221    /* F8 08 AD */
#define NUM_CANOPY_PARAM_79                              2222    /* F8 08 AE */
#define NUM_CANOPY_PARAM_80                              2223    /* F8 08 AF */
#define NUM_CANOPY_PARAM_81                              2224    /* F8 08 B0 */
#define NUM_CANOPY_PARAM_82                              2225    /* F8 08 B1 */
#define NUM_CANOPY_PARAM_83                              2226    /* F8 08 B2 */
#define NUM_CANOPY_PARAM_84                              2227    /* F8 08 B3 */
#define NUM_CANOPY_PARAM_85                              2228    /* F8 08 B4 */
#define NUM_CANOPY_PARAM_86                              2229    /* F8 08 B5 */
#define NUM_CANOPY_PARAM_87                              2230    /* F8 08 B6 */
#define NUM_CANOPY_PARAM_88                              2231    /* F8 08 B7 */
#define NUM_CANOPY_PARAM_89                              2232    /* F8 08 B8 */
#define NUM_CANOPY_PARAM_90                              2233    /* F8 08 B9 */
#define NUM_CANOPY_PARAM_91                              2234    /* F8 08 BA */
#define NUM_CANOPY_PARAM_92                              2235    /* F8 08 BB */
#define NUM_CANOPY_PARAM_93                              2236    /* F8 08 BC */
#define NUM_CANOPY_PARAM_94                              2237    /* F8 08 BD */
#define NUM_CANOPY_PARAM_95                              2238    /* F8 08 BE */
#define NUM_CANOPY_PARAM_96                              2239    /* F8 08 BF */
#define NUM_CANOPY_PARAM_97                              2240    /* F8 08 C0 */
#define NUM_CANOPY_PARAM_98                              2241    /* F8 08 C1 */
#define NUM_CANOPY_PARAM_99                              2242    /* F8 08 C2 */
#define NUM_CANOPY_PARAM_100                             2243    /* F8 08 C3 */
#define NUM_CANOPY_PARAM_LAST                            NUM_CANOPY_PARAM_100
#define NUM_TIMEOUT_PREEMPT_PRESO                        2244    /* F8 08 C4 */
#define NUM_CRADLE_CFG_UPLOAD_CRC                        2245    /* F8 08 C5 */
#define NUM_ELEC_FENCE_AUDIO_ALARM                       2246    /* F8 08 C6 */
#define NUM_ELEC_FENCE_LEDS_ALARM                        2247    /* F8 08 C7 */
#define NUM_ELEC_FENCE_ILLUM_ALARM                       2248    /* F8 08 C8 */
#define NUM_ELEC_FENCE_HAPTICS_ALARM                     2249    /* F8 08 C9 */
#define NUM_FAKE_DECODE_MODE                             2250    /* F8 08 CA */
#define NUM_DRIVE_STRENGTH                               2251    /* F8 08 CB */
#define NUM_SHARED_SENSOR                                2252    /* F8 08 CC */
#define NUM_DATALOGIC_FORMAT_ENABLE                      2253    /* F8 08 CD */
#define NUM_INKSPREAD                                    2254    /* F8 08 CE */
#define NUM_ENHANCED_CHARGING                            2255    /* F8 08 CF */
#define NUM_IMG_EMBED_DATA_DEBUG                         2256    /* F8 08 D0 */
#define NUM_DIGIMARC_DATA_MODE                           2257    /* F8 08 D1 */
#define NUM_CENTER_IR_FAULT_REBOOT                       2258    /* F8 08 D2 */
#define NUM_WALMART_PARAMETERS_ALLOWED                   2259    /* F8 08 D3 */
#define NUM_SERIAL_SCAN_ENA_DIS_CMD                      2260    /* F8 08 D4 */
#define NUM_TRANSMIT_BBOX_COORDINATES                    2261    /* F8 08 D5 */
#define NUM_NIGHT_MODE_EN_DIS_RADIO_BEEPS                2262    /* F8 08 D6 */
#define NUM_NIGHT_MODE_EN_DIS_LO_BATT_BEEP               2263    /* F8 08 D7 */
#define NUM_NIGHT_MODE_EN_DIS_PARAM_PROG_BEEPS           2264    /* F8 08 D8 */
#define NUM_BT_GATT_STORAGE                              2265    /* F8 08 D9 */
#define NUM_CANOPY_FW_DOWNLOAD_MODE                      2266    /* F8 08 DA */
#define NUM_CHIDECODE_CONTROL                            2267    /* F8 08 DB */
#define NUM_UPCA_REPORTAS_EAN13                          2268    /* F8 08 DC */
#define NUM_KEYMAP_LAYOUT                                2269    /* F8 08 DD */

#define NUM_SWD_CUSTOM_10                                2270    /* F8 08 DE */
#define NUM_SWD_CUSTOM_11                                2271    /* F8 08 DF */
#define NUM_SWD_CUSTOM_12                                2272    /* F8 08 E0 */
#define NUM_SWD_CUSTOM_13                                2273    /* F8 08 E1 */
#define NUM_SWD_CUSTOM_14                                2274    /* F8 08 E2 */
#define NUM_SWD_CUSTOM_15                                2275    /* F8 08 E3 */
#define NUM_SWD_CUSTOM_16                                2276    /* F8 08 E4 */
#define NUM_SWD_CUSTOM_17                                2277    /* F8 08 E5 */
#define NUM_SWD_CUSTOM_18                                2278    /* F8 08 E6 */
#define NUM_SWD_CUSTOM_19                                2279    /* F8 08 E7 */

#define NUM_ENABLE_DEBUG_MSG                             2280    /* F8 08 E8 */

#define NUM_OBJDET_ILLUMUMINATION                        2281    /* F8 08 E9 */
#define NUM_OBJDET_ILLUMUMINATION2                       2282    /* F8 08 EA */
#define NUM_OBJDET_ANALOG_GAIN                           2283    /* F8 08 EB */
#define NUM_OBJDET_DIGITAL_GAIN                          2284    /* F8 08 EC */
#define NUM_OBJDET_FIXED_EXPOSURE                        2285    /* F8 08 ED */
#define NUM_CDC_CHECK_DTE_STATE                          2286    /* F8 08 EE */
#define NUM_DELIMITER_PAUSE_MARKER                       2287    /* F8 08 EF */
#define NUM_DELIMITER_PAUSE_TIME                         2288    /* F8 08 F0 */

#define NUM_ADF2_RULE_SET1_HOST                          2289    /* F8 08 F1 */
#define NUM_ADF2_RULE_SET2_HOST                          2290    /* F8 08 F2 */
#define NUM_ADF2_RULE_SET3_HOST                          2291    /* F8 08 F3 */
#define NUM_ADF2_RULE_SET4_HOST                          2292    /* F8 08 F4 */
#define NUM_ADF2_RULE_SET5_HOST                          2293    /* F8 08 F5 */
#define NUM_ADF2_RULE_SET6_HOST                          2294    /* F8 08 F6 */
#define NUM_ADF2_RULE_SET7_HOST                          2295    /* F8 08 F7 */
#define NUM_ADF2_RULE_SET8_HOST                          2296    /* F8 08 F8 */

#define NUM_NCR_CHANGE_HOST_CODE_TYPES                   2297    /* F8 08 F9 */
#define NUM_NCR_QR_FILTER_HTTP                           2298    /* F8 08 FA */
#define NUM_NCR_QR_FILTER_WWW                            2299    /* F8 08 FB */
#define NUM_NCR_SEND_CCC_AS_TYPE99                       2300    /* F8 08 FC */

#define NUM_TEMPTIME_PPM_MAX                             2301    /* F8 08 FD */
#define NUM_TEMPTIME_MIN_SLANT                           2302    /* F8 08 FE */
#define NUM_TEMPTIME_SLANT_MAX                           2303    /* F8 08 FF */
#define NUM_TEMPTIME_MIN_BRIGHTNESS                      2304    /* F8 09 00 */
#define NUM_TEMPTIME_BRIGHTNESS_MAX                      2305    /* F8 09 01 */

#define NUM_WALMART_EAS_STATUS_ERR                       2306    /* F8 09 02 */
#define NUM_WALMART_EAS_WAS_THERE                        2307    /* F8 09 03 */
#define NUM_WALMART_POLE_STATUS_ERR                      2308    /* F8 09 04 */
#define NUM_WALMART_POLE_WAS_THERE                       2309    /* F8 09 05 */

#define NUM_DCC_DEC_SETUP                                2310    /* F8 09 06 */
#define NUM_TEMPTIME_SEARCH_DISTANCE                     2311    /* F8 09 07 */
#define NUM_TEMPTIME_CUMULATIVE_CURVATURE_EN             2312    /* F8 09 08 */
#define NUM_TEMPTIME_BLUR_MAX                            2313    /* F8 09 09 */
#define NUM_TEMPTIME_MIN_WHITE                           2314    /* F8 09 0A */
#define NUM_TEMPTIME_MAX_BLACK                           2315    /* F8 09 0B */

#define NUM_SDK_SIMULATION_SWITCH                        2316    /* F8 09 0C */
#define NUM_SIMULATE_BATTERY_PACK_TEMP                   2317    /* F8 09 0D */
#define NUM_SIMULATE_BATTERY_HIGHEST_TEMP                2318    /* F8 09 0E */
#define NUM_SIMULATE_BATTERY_LOWEST_TEMP                 2319    /* F8 09 0F */
#define NUM_SIMULATE_BATTERY_CHARGING_Y_N                2320    /* F8 09 10 */
#define NUM_SIMULATE_FIRM_VERSION                        2321    /* F8 09 11 */
#define NUM_SIMULATE_TLRN_VERSION                        2322    /* F8 09 12 */
#define NUM_INCREASE_KBD_PULSE_WIDTH                     2323    /* F8 09 13 */
#define NUM_DECREASE_KBD_PULSE_WIDTH                     2324    /* F8 09 14 */

#define NUM_RFID_TAG_REPORT_BATCH_MODE_USB               2325    /* F8 09 15 */
#define NUM_RFID_ASCII_NETWORK_NOTIFY_ON_OFF             2326    /* F8 09 16 */
#define NUM_SIMULATE_SCALE_STATUS                        2327    /* F8 09 17 */
#define NUM_WAKEUP_TILE_X_COORDS                         2328    /* F8 09 18 */
#define NUM_WAKEUP_TILE_Y_COORDS                         2329    /* F8 09 19 */
#define NUM_DECODE_PRIORITY_MODE                         2330    /* F8 09 1A */
#define NUM_INTERNAL_DECODE_OPTIONS                      2331    /* F8 09 1B */
#define NUM_MAX_2D_CONTRAST_TRIES                        2332    /* F8 09 1C */
                                  
#define NUM_RFID_WIFI_FIRMWARE_DOWNLOAD_TYPE             2333    /* F8 09 1D */
#define NUM_RFID_RADIO_DEBUG_CONTROL_FLAG                2334    /* F8 09 1E */
#define NUM_RFID_NGE_DEBUG_CONTROL_FLAG                  2335    /* F8 09 1F */
#define NUM_RFID_WIFI_DEBUG_CONTROL_FLAG                 2336    /* F8 09 20 */
#define NUM_POWER_ENGINE_OFF_LP                          2337    /* F8 09 21 */
#define NUM_CRADLE_ADF2_COMPLIANT                        2338    /* F8 09 22 */

#define NUM_WALMART_VOLUME_CONTROL                       2339    /* F8 09 23 */
#define NUM_BARCODE_NUMBER_MULTIPLIER                    2340    /* F8 09 24 */
#define NUM_CHARGE_TERMINAL_STATUS                       2341    /* F8 09 25 */
#define NUM_CC_APPEND_DECODE_COUNT_FLAG                  2342    /* F8 09 26 */

#define NUM_CONTRAST_THRESHOLD                           2343    /* F8 09 27 */
#define NUM_DECODE_STRATEGY                              2344    /* F8 09 28 */
#define NUM_QUIET_ZONE                                   2345    /* F8 09 29 */
#define NUM_DETECTION_METHOD                             2346    /* F8 09 2A */
#define NUM_BARCODE_PRIORITY                             2347    /* F8 09 2B */
#define NUM_ALLOW_RECTANGLAR_CODES                       2348    /* F8 09 2C */
#define NUM_MAX_RECTANGLE_RATIO                          2349    /* F8 09 2D */
#define NUM_MIN_MODULE_SIZE                              2350    /* F8 09 2E */
#define NUM_MAX_MODULE_SIZE                              2351    /* F8 09 2F */
#define NUM_MIN_ROW_COUNT                                2352    /* F8 09 30 */
#define NUM_MAX_ROW_COUNT                                2353    /* F8 09 31 */
#define NUM_MIN_COLUMN_COUNT                             2354    /* F8 09 32 */
#define NUM_MAX_COLUMN_COUNT                             2355    /* F8 09 33 */
#define NUM_ECONNEX_TYPE                                 2356    /* F8 09 34 */
#define NUM_SCALE_ODM_VER                                2357    /* F8 09 35 */
#define NUM_CM_FRIENDLY_NAME                             2358    /* F8 09 36 */
#define NUM_SPEAKER_CONTROL                              2359    /* F8 09 37 */
#define NUM_NCR_ALTERNATE_WEIGHT_STATUS                  2360    /* F8 09 38 */
#define NUM_DUPLICATE_BARCODE_MODE                       2361    /* F8 09 39 */
#define NUM_RTC_LAST_KNOWN_TIME                          2362    /* F8 09 3A */
#define NUM_DECODE_AZTEC_ILLEGAL_DECODERS                2363    /* F8 09 3B */
#define NUM_COLOR_CAMERA_PING_RATE                       2364    /* F8 09 3C */
#define NUM_DELETE_BONDING_INFO_ON_UNPAIR                2365    /* F8 09 3D */ 
#define NUM_ILLUMINATION_WARNINGS                        2366    /* F8 09 3E */
#define NUM_EXTEND_SAME_SYMBOL_TIMEOUT                   2367    /* F8 09 3F */
#define NUM_SCAN_MODE		                             2368    /* F8 09 40 */
#define NUM_CANNED_IK_DECODE_MODE                        2369    /* F7 09 41 */
#define NUM_ADF2_PREAMBLE_MAX                            2370    /* F8 09 42 */
#define NUM_ADF2_COMPACT_CRITERIA_MAX                    2371    /* F8 09 43 */
#define NUM_ADF2_COMPACT_ACTION_MAX                      2372    /* F8 09 44 */
#define NUM_GS1_DIGITAL_LINK_EN                          2373    /* F8 09 45 */    
#define NUM_GS1_DIGITAL_LINK_MODE                        2374    /* F8 09 46 */
#define NUM_VOLUME_BUTTON_BEEP_SUPPRESSION               2375    /* F8 09 47 */
#define NUM_INVERT_BEEPER_DUTY_CYCLE                     2376    /* F8 09 48 */
#define NUM_MOTION_DETECT_MODE                           2377    /* F8 09 49 */
#define NUM_1D_PARAM_PROG                                2378    /* F8 09 4A */
#define NUM_SCN_NO_CONTACTS_COMM_TIMEOUT                 2379    /* F8 09 4B */
#define NUM_SCN_NO_CONTACTS_COMM_RST                     2380    /* F8 09 4C */
#define NUM_SCN_NO_CONTACTS_COMM_RST_LEFT                2381    /* F8 09 4D */
#define NUM_RESCAN_BEEP                                  2382    /* F8 09 4E */
#define NUM_BEEPER_VOLUME_ALT                            2383    /* F8 09 4F */
#define NUM_ENABLE_BEEPER_VOLUME_ALT                     2384    /* F8 09 50 */
#define NUM_COLOR_CAMERA_CONTINUOUS_MODE                 2385    /* F8 09 51 */
#define NUM_IK_WATERMARK_EN                              2386    /* F8 09 52 */
#define NUM_DECODE_PRIORITY                              2387    /* F8 09 53 */
#define NUM_DCC_ENG_TEST_0                               2388    /* F8 09 54 */
#define NUM_DCC_ENG_TEST_1                               2389    /* F8 09 55 */
#define NUM_DCC_ENG_TEST_2                               2390    /* F8 09 56 */
#define NUM_DCC_ENG_TEST_3                               2391    /* F8 09 57 */
#define NUM_DCC_ENG_TEST_4                               2392    /* F8 09 58 */
#define NUM_DCC_ENG_TEST_5                               2393    /* F8 09 59 */
#define NUM_DCC_ENG_TEST_6                               2394    /* F8 09 5A */
#define NUM_DCC_ENG_TEST_7                               2395    /* F8 09 5B */
#define NUM_DCC_ENG_TEST_8                               2396    /* F8 09 5C */
#define NUM_DCC_ENG_TEST_9                               2397    /* F8 09 5D */
#define NUM_TRIG_ON_SCAN_ENABLE                          2398    /* F8 09 5E */
#define NUM_EXTENDED_SSTO                                2399    /* F8 09 5F */
#define NUM_DECODE_RESOLUTION_WIDTH                      2400    /* F8 09 60 */
#define NUM_DECODE_RESOLUTION_HEIGHT                     2401    /* F8 09 61 */
// Beacon/Device Tracker
#define NUM_BEACON_COMMAND_EN						            2402    /* F8 09 62 */
#define NUM_BEACON_ON_DISCONNECT                         2403    /* F8 09 63 */
#define NUM_BEACON_ON_UNPAIRED                           2404    /* F8 09 64 */
#define NUM_BEACON_BEEP                                  2405    /* F8 09 65 */
#define NUM_BEACON_FREQUENCY                             2406    /* F8 09 66 */
#define NUM_BEACON_BATTTHRESHOLD                         2407    /* F8 09 67 */
#define NUM_BEACON_ID2                                   2408    /* F8 09 68 */
#define NUM_BEACON_ID3                                   2409    /* F8 09 69 */
#define NUM_SCANNER_ALIAS                                2410    /* F8 09 6A */
//
#define NUM_NOT_ON_FILE_BEEPS                            2411    /* F8 09 6B */
#define NUM_SYNC_BEEP_VOLUME                             2412    /* F8 09 6C */
#define NUM_DECODE_OUTSPEC_BINARY                        2413    /* F8 09 6D */
#define NUM_VERT_IMG_SPLIT3                              2414    /* F8 09 6E */
#define NUM_REPORT_UPC_BLOCK                             2415    /* F8 09 6F */
#define NUM_DECODE_UPC_WITHOUT_GUARDBARS                 2416    /* F8 09 70 */
#define NUM_DECODE_SCRIBED_CODES                         2417    /* F8 09 71 */
#define NUM_MD_CORRELATION_HEIGHT                        2418    /* F8 09 72 */
#define NUM_MD_CORRELATION_WIDTH                         2419    /* F8 09 73 */
#define NUM_MD_FOREGROUND_SIZE                           2420    /* F8 09 74 */
#define NUM_HID_ADD_SHIFT                                2421    /* F8 09 75 */
                          
#define NUM_RFID_TEST_MODE_PASSWORD                      2422    /* F8 09 76 */
#define NUM_BEACON_TYPE                                  2423    /* F8 09 77 */
#define NUM_DOUBLE_DECODE_PREVENTION                     2424    /* F8 09 78 */
#define NUM_MARGINLESS_CBAR_ENABLE                       2425    /* F8 09 79 */
#define NUM_CHECK_EAN_CHKDGT                             2426    /* F8 09 7A */
#define NUM_WW_ENABLE                                    2427    /* F8 09 7B */
#define NUM_SAVED_BATTERY_ID                             2428    /* F8 09 7C */
#define NUM_ENABLE_RECTANGULAR_DM                        2429    /* F8 09 7D */
#define NUM_ENABLE_SQUARE_DM                             2430    /* F8 09 7E */
#define NUM_OBJDET_MODE                                  2431    /* F8 09 7F */
#define NUM_C39_UNEVEN_ELEMENTS                          2432    /* F8 09 80 */
#define NUM_BATTERY_DATE_OF_MANUFACTURE                  2433    /* F8 09 81 */
#define NUM_BATTERY_MODEL_NUMBER                         2434    /* F8 09 82 */
#define NUM_BATTERY_ID                                   2435    /* F8 09 83 */

#define NUM_BQM_AXI_NONUNI_EN                            2436    /* F8 09 84 */
#define NUM_BQM_GRD_NONUNI_EN                            2437    /* F8 09 85 */
#define NUM_BQM_UNUSED_ECC_EN                            2438    /* F8 09 86 */
#define NUM_BQM_DECODE_EN                                2439    /* F8 09 87 */
#define NUM_BQM_SYM_CONTRA_EN                            2440    /* F8 09 88 */
#define NUM_BQM_FIXPTN_DMG_EN                            2441    /* F8 09 89 */
#define NUM_BQM_MODULATION_EN                            2442    /* F8 09 8A */   

#define NUM_IOT_ENDPOINT_CONFIG_PARAM_1                  2443    /* F8 09 8B */
#define NUM_IOT_ENDPOINT_CONFIG_FIRST_PARAM  NUM_IOT_ENDPOINT_CONFIG_PARAM_1
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_2                  2444    /* F8 09 8C */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_3                  2445    /* F8 09 8D */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_4                  2446    /* F8 09 8E */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_5                  2447    /* F8 09 8F */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_6                  2448    /* F8 09 90 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_7                  2449    /* F8 09 91 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_8                  2450    /* F8 09 92 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_9                  2451    /* F8 09 93 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_10                 2452    /* F8 09 94 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_11                 2453    /* F8 09 95 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_12                 2454    /* F8 09 96 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_13                 2455    /* F8 09 97 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_14                 2456    /* F8 09 98 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_15                 2457    /* F8 09 99 */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_16                 2458    /* F8 09 9A */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_17                 2459    /* F8 09 9B */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_18                 2460    /* F8 09 9C */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_19                 2461    /* F8 09 9D */
#define NUM_IOT_ENDPOINT_CONFIG_PARAM_20                 2462    /* F8 09 9E */
#define NUM_IOT_ENDPOINT_CONFIG_LAST_PARAM  NUM_IOT_ENDPOINT_CONFIG_PARAM_20
#define NUM_IOT_INTERFACE_CONFIG_PARAM                   2463    /* F8 09 9F */
#define NUM_NETWORK_CONFIG_PARAMS                        2464    /* F8 09 A0 */
#define NUM_WW_HEARTBEAT_LED_MODE                        2465    /* F8 09 A1 */
#define NUM_CAMERA_ORIENTATION                           2466    /* F8 09 A2 */

#define NUM_NCR_HOST_CDTYPE_EXTEND                       2467    /* F8 09 A3 */
// ATAG SYSTEM_PARAMETER END 2468

/*****************************************************************************************
* Statistic parameters: range 15000-19999
*****************************************************************************************/
#define NUM_FIRST_STATISTIC 15002
// ATAG SCANNER_STATISTICS START
#define NUM_STATS_RESERVED_FOR_CUSTOM                                        15000
#define NUM_STATS_RESERVED2                                                  15001

// A 'Statistical Counter' is always 2 parameters - as in the following 2 lines
#define NUM_STATS_TEST_CNT                                                   15002
#define NUM_STATS_TEST_CNT_MAX_TH                                            15003

// A 'Statistical Value' is always 5 parameters - as in the following 5 lines
#define NUM_STATS_TEST_VAL                                                   15004
#define NUM_STATS_TEST_VAL_MIN                                               15005
#define NUM_STATS_TEST_VAL_MAX                                               15006
#define NUM_STATS_TEST_VAL_MIN_TH                                            15007
#define NUM_STATS_TEST_VAL_MAX_TH                                            15008

// A 'Statistical Flag' is always 2 parameters - as in the following 2 lines
#define NUM_STATS_TEST_FLAG                                                  15009
#define NUM_STATS_TEST_FLAG_EVENTMASK                                        15010


/*****************************************************************************************
* Above are test statistical parameters. Below are actual product statistical parameter
*****************************************************************************************/

#define NUM_STATS_POWERON_CNT                                                15011  // Count of powerons
#define NUM_STATS_POWERON_CNT_MAX_TH                                         15012

#define NUM_STATS_TOTAL_TIME_POWERED_ON_CNT                                  15013  // Time (sec) powered on since shipped from factory
#define NUM_STATS_TOTAL_TIME_POWERED_ON_CNT_MAX_TH                           15014

#define NUM_STATS_TIME_SINCE_LAST_COLD_BOOT_CNT                              15015  // Time (sec) since last cold boot (starts at factory ship). Resets on normal power cycle
#define NUM_STATS_TIME_SINCE_LAST_COLD_BOOT_CNT_MAX_TH                       15016

#define NUM_STATS_TIME_SINCE_LAST_WARM_BOOT_CNT                              15017  // Time (sec) since last warm boot (starts at factory ship)
#define NUM_STATS_TIME_SINCE_LAST_WARM_BOOT_CNT_MAX_TH                       15018

#define NUM_STATS_TIME_ENABLED_BY_HOST_APP_CNT                               15019  // Time (sec) in the Scan-Enabled state since shipped from factory
#define NUM_STATS_TIME_ENABLED_BY_HOST_APP_CNT_MAX_TH                        15020

// This gap of 15021 - 15106 is useable

#define NUM_STATS_DECODE_AUX_CNT                                             15107  // Count of 'all decodes from AUX devices'
#define NUM_STATS_DECODE_AUX_CNT_MAX_TH                                      15108

#define NUM_STATS_DECODE_LOCAL_AUX_CNT                                       15109  // Count of 'all' decodes, including decodes from AUX devices) (=Local + AUX)
#define NUM_STATS_DECODE_LOCAL_AUX_CNT_MAX_TH                                15110

#define NUM_STATS_OBJECTS_DETECTED_CNT                                       15111  // Count of 'Objects Detected' in the wakeup volume
#define NUM_STATS_OBJECTS_DETECTED_CNT_MAX_TH                                15112

#define NUM_STATS_OBJDETECT_LEFT_IR_FAILURE_FLAG                             15113  // Flag:indicates if the Left Object Detect is currently in a failure state
#define NUM_STATS_OBJDETECT_LEFT_IR_FAILURE_FLAG_EVENTMASK                   15114
#define NUM_STATS_OBJDETECT_LEFT_IR_FAILURE_CNT                              15115
#define NUM_STATS_OBJDETECT_LEFT_IR_FAILURE_CNT_MAX_TH                       15116

#define NUM_STATS_LAST_DECODE_SYMBOLOGY_TYPE_VAL                             15117
#define NUM_STATS_LAST_DECODE_SYMBOLOGY_TYPE_VAL_MIN                         15118
#define NUM_STATS_LAST_DECODE_SYMBOLOGY_TYPE_VAL_MAX                         15119
#define NUM_STATS_LAST_DECODE_SYMBOLOGY_TYPE_VAL_MIN_TH                      15120
#define NUM_STATS_LAST_DECODE_SYMBOLOGY_TYPE_VAL_MAX_TH                      15121

#define NUM_STATS_ILLUM_FAIL_SOURCE_ALL_STATE                                15122  // State:indicator if 'all' illumination sources are currently in a failure state
#define NUM_STATS_ILLUM_FAIL_SOURCE_ALL_STATE_EVENTMASK                      15123
#define NUM_STATS_ILLUM_FAIL_SOURCE_ALL_CNT                                  15127  // Asscociated count of how many times 'all' illumination sources have failed
#define NUM_STATS_ILLUM_FAIL_SOURCE_ALL_CNT_MAX_TH                           15128

#define NUM_STATS_ILLUM_FAIL_SOURCE_ANY_STATE                                15129  // State:indicates if 'any' illumination source are currently in a failure state
#define NUM_STATS_ILLUM_FAIL_SOURCE_ANY_STATE_EVENTMASK                      15130
#define NUM_STATS_ILLUM_FAIL_SOURCE_ANY_CNT                                  15134  // Asscociated count of how many times 'any' illumination source has failed
#define NUM_STATS_ILLUM_FAIL_SOURCE_ANY_CNT_MAX_TH                           15135

#define NUM_STATS_ILLUM_FAIL_SOURCE_1_STATE                                  15136  // State:indicates if illumination source 1 is currently in a failure state
#define NUM_STATS_ILLUM_FAIL_SOURCE_1_STATE_EVENTMASK                        15137
#define NUM_STATS_ILLUM_FAIL_SOURCE_1_CNT                                    15141  // Asscociated count of how many times illumination source 2 has failed
#define NUM_STATS_ILLUM_FAIL_SOURCE_1_CNT_MAX_TH                             15142

#define NUM_STATS_ILLUM_FAIL_SOURCE_2_STATE                                  15143  // State:indicates if illumination source 2 is currently in a failure state
#define NUM_STATS_ILLUM_FAIL_SOURCE_2_STATE_EVENTMASK                        15144
#define NUM_STATS_ILLUM_FAIL_SOURCE_2_CNT                                    15148  // Asscociated count of how many times illumination source 3 has failed
#define NUM_STATS_ILLUM_FAIL_SOURCE_2_CNT_MAX_TH                             15149

#define NUM_STATS_ILLUM_FAIL_SOURCE_3_STATE                                  15150  // State:indicates if illumination source 3 is currently in a failure state
#define NUM_STATS_ILLUM_FAIL_SOURCE_3_STATE_EVENTMASK                        15151
#define NUM_STATS_ILLUM_FAIL_SOURCE_3_CNT                                    15155  // Asscociated count of how many times illumination source 4 has failed
#define NUM_STATS_ILLUM_FAIL_SOURCE_3_CNT_MAX_TH                             15156

#define NUM_STATS_ILLUM_FAIL_SOURCE_4_STATE                                  15157  // State:indicates if illumination source 4 is currently in a failure state
#define NUM_STATS_ILLUM_FAIL_SOURCE_4_STATE_EVENTMASK                        15158
#define NUM_STATS_ILLUM_FAIL_SOURCE_4_CNT                                    15162  // Asscociated count of how many times illumination source 5 has failed
#define NUM_STATS_ILLUM_FAIL_SOURCE_4_CNT_MAX_TH                             15163

#define NUM_STATS_ILLUM_FAIL_SOURCE_5_STATE                                  15164  // State:indicates if illumination source 5 is currently in a failure state
#define NUM_STATS_ILLUM_FAIL_SOURCE_5_STATE_EVENTMASK                        15165
#define NUM_STATS_ILLUM_FAIL_SOURCE_5_CNT                                    15169  // Asscociated count of how many times illumination source 6 has failed
#define NUM_STATS_ILLUM_FAIL_SOURCE_5_CNT_MAX_TH                             15170

#define NUM_STATS_ILLUM_FAIL_SOURCE_6_STATE                                  15171  // State:indicates if illumination source 6 is currently in a failure state
#define NUM_STATS_ILLUM_FAIL_SOURCE_6_STATE_EVENTMASK                        15172
#define NUM_STATS_ILLUM_FAIL_SOURCE_6_CNT                                    15176  // Asscociated count of how many times illumination source 1 has failed
#define NUM_STATS_ILLUM_FAIL_SOURCE_6_CNT_MAX_TH                             15177

#define NUM_STATS_ILLUM_FAIL_LEFT_AUX_FLAG                                   15178
#define NUM_STATS_ILLUM_FAIL_LEFT_AUX_FLAG_EVENTMASK                         15179
#define NUM_STATS_ILLUM_FAIL_LEFT_AUX_CNT                                    15180
#define NUM_STATS_ILLUM_FAIL_LEFT_AUX_CNT_MAX_TH                             15181

#define NUM_STATS_ILLUM_FAIL_RIGHT_AUX_FLAG                                  15182
#define NUM_STATS_ILLUM_FAIL_RIGHT_AUX_FLAG_EVENTMASK                        15183
#define NUM_STATS_ILLUM_FAIL_RIGHT_AUX_CNT                                   15184
#define NUM_STATS_ILLUM_FAIL_RIGHT_AUX_CNT_MAX_TH                            15185

#define NUM_STATS_DECODES_ON_SENSOR_CNT                                      15186  // Count of decoes on 'all' sensors (= sensor_1 + sensor_2) (=NUM_STATS_DECODE_CNT)
#define NUM_STATS_DECODES_ON_SENSOR_CNT_MAX_TH                               15187

#define NUM_STATS_DECODES_ON_SENSOR_1_CNT                                    15188  // Count of decodes on sensor_1
#define NUM_STATS_DECODES_ON_SENSOR_1_CNT_MAX_TH                             15189

#define NUM_STATS_DECODES_ON_SENSOR_2_CNT                                    15190  // Count of decodes on sensor_2
#define NUM_STATS_DECODES_ON_SENSOR_2_CNT_MAX_TH                             15191

#define NUM_STATS_SENSOR_FAIL_STATE                                          15192  // State/indicator if 'any' sensor has failed
#define NUM_STATS_SENSOR_FAIL_STATE_EVENTMASK                                15193
#define NUM_STATS_SENSOR_FAIL_CNT                                            15197  // Asscociated count of how many times 'any' sensor has failed
#define NUM_STATS_SENSOR_FAIL_CNT_MAX_TH                                     15198

#define NUM_STATS_SENSOR_FAIL_1_STATE                                        15199  // State/indicator if sensor_1 has failed
#define NUM_STATS_SENSOR_FAIL_1_STATE_EVENTMASK                              15200
#define NUM_STATS_SENSOR_FAIL_1_CNT                                          15204  // Asscociated count of how many times sensor_1 has failed
#define NUM_STATS_SENSOR_FAIL_1_CNT_MAX_TH                                   15205

#define NUM_STATS_SENSOR_FAIL_2_STATE                                        15206
#define NUM_STATS_SENSOR_FAIL_2_STATE_EVENTMASK                              15207  // State/indicator if sensor_2 has failed
#define NUM_STATS_SENSOR_FAIL_2_CNT                                          15211  // Asscociated count of how many times sensor_2 has failed
#define NUM_STATS_SENSOR_FAIL_2_CNT_MAX_TH                                   15212

#define NUM_STATS_SCALE_GET_WEIGHT_CMD_CNT                                   15213
#define NUM_STATS_SCALE_GET_WEIGHT_CMD_CNT_MAX_TH                            15214

#define NUM_STATS_SCALE_UNDERWEIGHT_ON_GET_WEIGHT_CMD_CNT                    15215
#define NUM_STATS_SCALE_UNDERWEIGHT_ON_GET_WEIGHT_CMD_CNT_MAX_TH             15216

#define NUM_STATS_SCALE_ZEROWEIGHT_ON_GET_WEIGHT_CMD_CNT                     15217
#define NUM_STATS_SCALE_ZEROWEIGHT_ON_GET_WEIGHT_CMD_CNT_MAX_TH              15218

#define NUM_STATS_SCALE_STABLEWEIGHT_ON_GET_WEIGHT_CMD_CNT                   15219
#define NUM_STATS_SCALE_STABLEWEIGHT_ON_GET_WEIGHT_CMD_CNT_MAX_TH            15220

#define NUM_STATS_SCALE_SLIGHT_OVERWEIGHT_ON_GET_WEIGHT_CMD_CNT              15221
#define NUM_STATS_SCALE_SLIGHT_OVERWEIGHT_ON_GET_WEIGHT_CMD_CNT_MAX_TH       15222

#define NUM_STATS_SCALE_ZERO_BUTTON_PRESSED_DURING_WEIGHT_BELOW_0_CNT        15223
#define NUM_STATS_SCALE_ZERO_BUTTON_PRESSED_DURING_WEIGHT_BELOW_0_CNT_MAX_TH 15224

#define NUM_STATS_SCALE_ZERO_BUTTON_PRESSED_DURING_WEIGHT_ABOVE_0_CNT        15225
#define NUM_STATS_SCALE_ZERO_BUTTON_PRESSED_DURING_WEIGHT_ABOVE_0_CNT_MAX_TH 15226

#define NUM_STATS_SCALE_FAILED_TO_0_ON_0_BUTTON_PRESS_FLAG                   15227
#define NUM_STATS_SCALE_FAILED_TO_0_ON_0_BUTTON_PRESS_FLAG_EVENTMASK         15228
#define NUM_STATS_SCALE_FAILED_TO_0_ON_0_BUTTON_PRESS_CNT                    15229
#define NUM_STATS_SCALE_FAILED_TO_0_ON_0_BUTTON_PRESS_CNT_MAX_TH             15230

#define NUM_STATS_SCALE_EXTREME_OVERWEIGHT_ON_GET_WEIGHT_CMD_CNT             15231
#define NUM_STATS_SCALE_EXTREME_OVERWEIGHT_ON_GET_WEIGHT_CMD_CNT_MAX_TH      15232

#define NUM_STATS_SCALE_ERROR_IN_CALIBRATION_PROCESS_CNT                     15233
#define NUM_STATS_SCALE_ERROR_IN_CALIBRATION_PROCESS_CNT_MAX_TH              15234

#define NUM_STATS_SCALE_OUTSIDE_DRIFT_THRESHOLD_FLAG                         15235
#define NUM_STATS_SCALE_OUTSIDE_DRIFT_THRESHOLD_FLAG_EVENTMASK               15236
#define NUM_STATS_SCALE_OUTSIDE_DRIFT_THRESHOLD_CNT                          15237
#define NUM_STATS_SCALE_OUTSIDE_DRIFT_THRESHOLD_CNT_MAX_TH                   15238

#define NUM_STATS_SCALE_NUMBER_OF_TIMES_CALIBRATED_CNT                       15239
#define NUM_STATS_SCALE_NUMBER_OF_TIMES_CALIBRATED_CNT_MAX_TH                15240
#define NUM_STATS_SCALE_NEEDS_TO_BE_CALIBRATED_FLAG                          15241
#define NUM_STATS_SCALE_NEEDS_TO_BE_CALIBRATED_FLAG_EVENTMASK                15242
//#define PARAM_STATS_SCALE_NEEDS_TO_BE_CALIBRATED_FLAG statbuf.stats_scale_NEEDS_TO_BE_CALIBRATED_flag // Special case - need read access

// 15243-15246 can be used

#define NUM_STATS_SCALE_COMM_ERROR_FLAG                                      15247
#define NUM_STATS_SCALE_COMM_ERROR_FLAG_EVENTMASK                            15248
#define NUM_STATS_SCALE_COMM_ERROR_CNT                                       15249
#define NUM_STATS_SCALE_COMM_ERROR_CNT_MAX_TH                                15250

#define NUM_STATS_SCALE_DISPLAY_COMM_ERROR_FLAG                              15251
#define NUM_STATS_SCALE_DISPLAY_COMM_ERROR_FLAG_EVENTMASK                    15252
#define NUM_STATS_SCALE_DISPLAY_COMM_ERROR_CNT                               15253
#define NUM_STATS_SCALE_DISPLAY_COMM_ERROR_CNT_MAX_TH                        15254

#define NUM_STATS_SCALE_NO_MOTION_FAULT_FLAG                                 15255
#define NUM_STATS_SCALE_NO_MOTION_FAULT_FLAG_EVENTMASK                       15256
#define NUM_STATS_SCALE_NO_MOTION_FAULT_CNT                                  15257
#define NUM_STATS_SCALE_NO_MOTION_FAULT_CNT_MAX_TH                           15258

#define NUM_STATS_EAS_OFFLINE_FLAG                                           15259
#define NUM_STATS_EAS_OFFLINE_FLAG_EVENTMASK                                 15260
#define NUM_STATS_EAS_OFFLINE_CNT                                            15261
#define NUM_STATS_EAS_OFFLINE_CNT_MAX_TH                                     15262

#define NUM_STATS_EAS_SOFT_TAG_CNT                                           15263
#define NUM_STATS_EAS_SOFT_TAG_CNT_MAX_TH                                    15264

#define NUM_STATS_EAS_MANUAL_DEACTIVATIONS_CNT                               15265
#define NUM_STATS_EAS_MANUAL_DEACTIVATIONS_CNT_MAX_TH                        15266

#define NUM_STATS_USB_RESET_CNT                                              15267
#define NUM_STATS_USB_RESET_CNT_MAX_TH                                       15268

#define NUM_STATS_USB_SUSPEND_CNT                                            15269
#define NUM_STATS_USB_SUSPEND_CNT_MAX_TH                                     15270

#define NUM_STATS_USB_RESUME_CNT                                             15271
#define NUM_STATS_USB_RESUME_CNT_MAX_TH                                      15272

#define NUM_STATS_USB_ENUMERATION_CNT                                        15273
#define NUM_STATS_USB_ENUMERATION_CNT_MAX_TH                                 15274

#define NUM_STATS_HOST_PROTOCOL_FAILURE_FLAG                                 15275
#define NUM_STATS_HOST_PROTOCOL_FAILURE_FLAG_EVENTMASK                       15276

#define NUM_STATS_HOST_PROTOCOL_FAILURE_CNT                                  15277
#define NUM_STATS_HOST_PROTOCOL_FAILURE_CNT_MAX_TH                           15278

#define NUM_STATS_AUX_USB_ENUMERATION_CNT                                    15279
#define NUM_STATS_AUX_USB_ENUMERATION_CNT_MAX_TH                             15280

#define NUM_STATS_OBJDETECT_RIGHT_IR_FAILURE_FLAG                            15281  // Flag:indicates if the RIGHT Object Detect is currently in a failure state
#define NUM_STATS_OBJDETECT_RIGHT_IR_FAILURE_FLAG_EVENTMASK                  15282
#define NUM_STATS_OBJDETECT_RIGHT_IR_FAILURE_CNT                             15283
#define NUM_STATS_OBJDETECT_RIGHT_IR_FAILURE_CNT_MAX_TH                      15284

#define NUM_STATS_FPGA_STATS_FAILURE_FLAG                                    15285
#define NUM_STATS_FPGA_STATS_FAILURE_FLAG_EVENTMASK                          15286
#define NUM_STATS_FPGA_STATS_FAILURE_CNT                                     15287
#define NUM_STATS_FPGA_STATS_FAILURE_CNT_MAX_TH                              15288

#define NUM_STATS_UI_HW_FAILURE_FLAG                                         15289
#define NUM_STATS_UI_HW_FAILURE_FLAG_EVENTMASK                               15290
#define NUM_STATS_UI_HW_FAILURE_CNT                                          15291
#define NUM_STATS_UI_HW_FAILURE_CNT_MAX_TH                                   15292

#define NUM_STATS_AUDIO_HW_FAILURE_FLAG                                      15293
#define NUM_STATS_AUDIO_HW_FAILURE_FLAG_EVENTMASK                            15294
#define NUM_STATS_AUDIO_HW_FAILURE_CNT                                       15295
#define NUM_STATS_AUDIO_HW_FAILURE_CNT_MAX_TH                                15296

#define NUM_STATS_NO_READ_CNT                                                15297
#define NUM_STATS_NO_READ_CNT_MAX_TH                                         15298

#define NUM_STATS_EAS_HARD_TAG_CNT                                           15299
#define NUM_STATS_EAS_HARD_TAG_CNT_MAX_TH                                    15300

#define NUM_STATS_COLD_BOOT_CNT                                              15301
#define NUM_STATS_COLD_BOOT_CNT_MAX_TH                                       15302

#define NUM_STATS_WARM_BOOT_CNT                                              15303
#define NUM_STATS_WARM_BOOT_CNT_MAX_TH                                       15304

#define NUM_STATS_SCALE_INTERNAL_ERROR_FLAG                                  15305
#define NUM_STATS_SCALE_INTERNAL_ERROR_FLAG_EVENTMASK                        15306
#define NUM_STATS_SCALE_INTERNAL_ERROR_CNT                                   15307
#define NUM_STATS_SCALE_INTERNAL_ERROR_CNT_MAX_TH                            15308

#define NUM_STATS_OBJDETECT_CENTER_IR_FAILURE_FLAG                           15309
#define NUM_STATS_OBJDETECT_CENTER_IR_FAILURE_FLAG_EVENTMASK                 15310
#define NUM_STATS_OBJDETECT_CENTER_IR_FAILURE_CNT                            15311
#define NUM_STATS_OBJDETECT_CENTER_IR_FAILURE_CNT_MAX_TH                     15312

// 15312 - 15314 can be used

#define NUM_STATS_UNSTABLE_WEIGHT_ON_WGHT_CMD_CNT                            15315
#define NUM_STATS_UNSTABLE_WEIGHT_ON_WGHT_CMD_CNT_MAX_TH                     15316

#define NUM_STATS_SCALE_ERROR_IN_CALIBRATION_PROCESS_FLAG                    15317
#define NUM_STATS_SCALE_ERROR_IN_CALIBRATION_PROCESS_FLAG_EVENTMASK          15318

// This gap of 15319 - 15399 is useable

#define   NUM_STATS_DECODE_CNT                                               15400  // Count of decodes of barcodes of all 1D + 2D + UNKNOWN
  #define NUM_STATS_DECODE_CNT_MAX_TH                                        15401  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_CNT_TIME                                          15402  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_CNT_TIME_MIN                                      15403  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_CNT_TIME_MAX                                      15404  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_CNT_TIME_AVG                                      15405  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_CNT_TIME_TOTAL                                    15406  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_1D_CNT                                            15407  // Count of decodes of barcodes of all 1D
  #define NUM_STATS_DECODE_1D_CNT_MAX_TH                                     15408  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_1D_CNT_TIME                                       15409  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_1D_CNT_TIME_MIN                                   15410  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_1D_CNT_TIME_MAX                                   15411  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_1D_CNT_TIME_AVG                                   15412  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_1D_CNT_TIME_TOTAL                                 15413  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_2D_CNT                                            15414  // Count of decodes of barcodes of all 2D
  #define NUM_STATS_DECODE_2D_CNT_MAX_TH                                     15415  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_2D_CNT_TIME                                       15416  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_2D_CNT_TIME_MIN                                   15417  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_2D_CNT_TIME_MAX                                   15418  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_2D_CNT_TIME_AVG                                   15419  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_2D_CNT_TIME_TOTAL                                 15420  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_UPC_CNT                                           15421  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_UPC_CNT_MAX_TH                                    15422  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_UPC_CNT_TIME                                      15423  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_UPC_CNT_TIME_MIN                                  15424  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_UPC_CNT_TIME_MAX                                  15425  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_UPC_CNT_TIME_AVG                                  15426  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_UPC_CNT_TIME_TOTAL                                15427  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_EAN_JAN_CNT                                       15428  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_EAN_JAN_CNT_MAX_TH                                15429  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_EAN_JAN_CNT_TIME                                  15430  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_EAN_JAN_CNT_TIME_MIN                              15431  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_EAN_JAN_CNT_TIME_MAX                              15432  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_EAN_JAN_CNT_TIME_AVG                              15433  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_EAN_JAN_CNT_TIME_TOTAL                            15434  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_C39_CNT                                           15435  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_C39_CNT_MAX_TH                                    15436  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_C39_CNT_TIME                                      15437  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_C39_CNT_TIME_MIN                                  15438  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C39_CNT_TIME_MAX                                  15439  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C39_CNT_TIME_AVG                                  15440  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C39_CNT_TIME_TOTAL                                15441  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_C128_CNT                                          15442  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_C128_CNT_MAX_TH                                   15443  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_C128_CNT_TIME                                     15444  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_C128_CNT_TIME_MIN                                 15445  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C128_CNT_TIME_MAX                                 15446  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C128_CNT_TIME_AVG                                 15447  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C128_CNT_TIME_TOTAL                               15448  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_2OF5_CNT                                          15449  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_2OF5_CNT_MAX_TH                                   15450  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_2OF5_CNT_TIME                                     15451  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_2OF5_CNT_TIME_MIN                                 15452  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_2OF5_CNT_TIME_MAX                                 15453  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_2OF5_CNT_TIME_AVG                                 15454  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_2OF5_CNT_TIME_TOTAL                               15455  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_CODABAR_CNT                                       15456  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_CODABAR_CNT_MAX_TH                                15457  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_CODABAR_CNT_TIME                                  15458  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_CODABAR_CNT_TIME_MIN                              15459  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_CODABAR_CNT_TIME_MAX                              15460  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_CODABAR_CNT_TIME_AVG                              15461  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_CODABAR_CNT_TIME_TOTAL                            15462  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_C93_CNT                                           15463  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_C93_CNT_MAX_TH                                    15464  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_C93_CNT_TIME                                      15465  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_C93_CNT_TIME_MIN                                  15466  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C93_CNT_TIME_MAX                                  15467  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C93_CNT_TIME_AVG                                  15468  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C93_CNT_TIME_TOTAL                                15469  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_MSI_CNT                                           15470  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_MSI_CNT_MAX_TH                                    15471  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_MSI_CNT_TIME                                      15472  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_MSI_CNT_TIME_MIN                                  15473  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_MSI_CNT_TIME_MAX                                  15474  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_MSI_CNT_TIME_AVG                                  15475  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_MSI_CNT_TIME_TOTAL                                15476  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_C11_CNT                                           15477  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_C11_CNT_MAX_TH                                    15478  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_C11_CNT_TIME                                      15479  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_C11_CNT_TIME_MIN                                  15480  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C11_CNT_TIME_MAX                                  15481  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C11_CNT_TIME_AVG                                  15482  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_C11_CNT_TIME_TOTAL                                15483  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_PDF_CNT                                           15484  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_PDF_CNT_MAX_TH                                    15485  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_PDF_CNT_TIME                                      15486  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_PDF_CNT_TIME_MIN                                  15487  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_PDF_CNT_TIME_MAX                                  15488  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_PDF_CNT_TIME_AVG                                  15489  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_PDF_CNT_TIME_TOTAL                                15490  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_DATAMATRIX_CNT                                    15491  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_DATAMATRIX_CNT_MAX_TH                             15492  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_DATAMATRIX_CNT_TIME                               15493  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_DATAMATRIX_CNT_TIME_MIN                           15494  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_DATAMATRIX_CNT_TIME_MAX                           15495  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_DATAMATRIX_CNT_TIME_AVG                           15496  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_DATAMATRIX_CNT_TIME_TOTAL                         15497  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_QR_CNT                                            15498  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_QR_CNT_MAX_TH                                     15499  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_QR_CNT_TIME                                       15500  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_QR_CNT_TIME_MIN                                   15501  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_QR_CNT_TIME_MAX                                   15502  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_QR_CNT_TIME_AVG                                   15503  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_QR_CNT_TIME_TOTAL                                 15504  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_POSTAL_CNT                                        15505  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_POSTAL_CNT_MAX_TH                                 15506  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_POSTAL_CNT_TIME                                   15507  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_POSTAL_CNT_TIME_MIN                               15508  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_POSTAL_CNT_TIME_MAX                               15509  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_POSTAL_CNT_TIME_AVG                               15510  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_POSTAL_CNT_TIME_TOTAL                             15511  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_GS1DATABAR_CNT                                    15512  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_GS1DATABAR_CNT_MAX_TH                             15513  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_GS1DATABAR_CNT_TIME                               15514  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_GS1DATABAR_CNT_TIME_MIN                           15515  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_GS1DATABAR_CNT_TIME_MAX                           15516  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_GS1DATABAR_CNT_TIME_AVG                           15517  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_GS1DATABAR_CNT_TIME_TOTAL                         15518  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_COMPOSITE_CNT                                     15519  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_COMPOSITE_CNT_MAX_TH                              15520  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_COMPOSITE_CNT_TIME                                15521  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_COMPOSITE_CNT_TIME_MIN                            15522  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_COMPOSITE_CNT_TIME_MAX                            15523  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_COMPOSITE_CNT_TIME_AVG                            15524  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_COMPOSITE_CNT_TIME_TOTAL                          15525  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_OCR_CNT                                           15526  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_OCR_CNT_MAX_TH                                    15527  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_OCR_CNT_TIME                                      15528  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_OCR_CNT_TIME_MIN                                  15529  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OCR_CNT_TIME_MAX                                  15530  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OCR_CNT_TIME_AVG                                  15531  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OCR_CNT_TIME_TOTAL                                15532  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_AZTEC_CNT                                         15533  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_AZTEC_CNT_MAX_TH                                  15534  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_AZTEC_CNT_TIME                                    15535  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_AZTEC_CNT_TIME_MIN                                15536  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_AZTEC_CNT_TIME_MAX                                15537  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_AZTEC_CNT_TIME_AVG                                15538  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_AZTEC_CNT_TIME_TOTAL                              15539  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_OTHER_1D_CNT                                      15540  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_OTHER_1D_CNT_MAX_TH                               15541  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_OTHER_1D_CNT_TIME                                 15542  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_OTHER_1D_CNT_TIME_MIN                             15543  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OTHER_1D_CNT_TIME_MAX                             15544  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OTHER_1D_CNT_TIME_AVG                             15545  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OTHER_1D_CNT_TIME_TOTAL                           15546  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_OTHER_2D_CNT                                      15547  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_OTHER_2D_CNT_MAX_TH                               15548  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_OTHER_2D_CNT_TIME                                 15549  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_OTHER_2D_CNT_TIME_MIN                             15550  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OTHER_2D_CNT_TIME_MAX                             15551  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OTHER_2D_CNT_TIME_AVG                             15552  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OTHER_2D_CNT_TIME_TOTAL                           15553  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_OTHER_CNT                                         15554  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_OTHER_CNT_MAX_TH                                  15555  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_OTHER_CNT_TIME                                    15556  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_OTHER_CNT_TIME_MIN                                15557  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OTHER_CNT_TIME_MAX                                15558  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OTHER_CNT_TIME_AVG                                15559  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_OTHER_CNT_TIME_TOTAL                              15560  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_CONSECUTIVE_BOOT_FAILURE_CNT                             15561  // How many consecutive boot failure
  #define NUM_STATS_CONSECUTIVE_BOOT_FAILURE_CNT_MAX_TH                      15562

#define   NUM_STATS_UART_FAILURE_CNT                                         15563  // Count of powerup uart failures
  #define NUM_STATS_UART_FAILURE_CNT_MAX_TH                                  15564


#define   NUM_STATS_AUTO_SCAN_ENABLE_DISABLE_SEQ_ERR_CNT                     15565  // Count number of times Decode/Scan-Enable/Scan-disable seq is violated
  #define NUM_STATS_AUTO_SCAN_ENABLE_DISABLE_SEQ_ERR_CNT_MAX_TH              15566

#define   NUM_STATS_EAS_HIGH_VOLTAGE_FAULT_FLAG                              15567
  #define NUM_STATS_EAS_HIGH_VOLTAGE_FAULT_FLAG_EVENTMASK                    15568
  #define NUM_STATS_EAS_HIGH_VOLTAGE_FAULT_CNT                               15569
  #define NUM_STATS_EAS_HIGH_VOLTAGE_FAULT_CNT_MAX_TH                        15570

// (20) Engineering test statistics - assign as needed for diagnostics. Cannot be in released firmware
// These will show up in 123Scan statistics page as 'unintrumented statistics'

  // ENG-01 - ENG_06 are 'FLAG & CNT' type statistics
#define   NUM_STATS_ENG_01_FAULT_FLAG                                        15571
  #define NUM_STATS_ENG_01_FAULT_FLAG_EVENTMASK                              15572
  #define NUM_STATS_ENG_01_FAULT_CNT                                         15573
  #define NUM_STATS_ENG_01_FAULT_CNT_MAX_TH                                  15574

#define   NUM_STATS_ENG_02_FAULT_FLAG                                        15575
  #define NUM_STATS_ENG_02_FAULT_FLAG_EVENTMASK                              15576
  #define NUM_STATS_ENG_02_FAULT_CNT                                         15577
  #define NUM_STATS_ENG_02_FAULT_CNT_MAX_TH                                  15578

#define   NUM_STATS_ENG_03_FAULT_FLAG                                        15579
  #define NUM_STATS_ENG_03_FAULT_FLAG_EVENTMASK                              15580
  #define NUM_STATS_ENG_03_FAULT_CNT                                         15581
  #define NUM_STATS_ENG_03_FAULT_CNT_MAX_TH                                  15582

#define   NUM_STATS_ENG_04_FAULT_FLAG                                        15583
  #define NUM_STATS_ENG_04_FAULT_FLAG_EVENTMASK                              15584
  #define NUM_STATS_ENG_04_FAULT_CNT                                         15585
  #define NUM_STATS_ENG_04_FAULT_CNT_MAX_TH                                  15586

#define   NUM_STATS_ENG_05_FAULT_FLAG                                        15587
  #define NUM_STATS_ENG_05_FAULT_FLAG_EVENTMASK                              15588
  #define NUM_STATS_ENG_05_FAULT_CNT                                         15589
  #define NUM_STATS_ENG_05_FAULT_CNT_MAX_TH                                  15590

// These next 4 stats have been used by 'Scale Read Problem'. No longer useable
#define   NUM_STATS_ENG_06_FAULT_FLAG                                        15591 
  #define NUM_STATS_ENG_06_FAULT_FLAG_EVENTMASK                              15592
  #define NUM_STATS_ENG_06_FAULT_CNT                                         15593
  #define NUM_STATS_ENG_06_FAULT_CNT_MAX_TH                                  15594
  #define NUM_STATS_SCALE_READ_PROBLEM_CNT                                   NUM_STATS_ENG_06_FAULT_CNT  // Hijacked: # of times 'Walmart Scale Read Problem' failed

// ENG-07 & 08 are 'CNT' type statistics
#define   NUM_STATS_ENG_07_CNT                                               15595
  #define NUM_STATS_ENG_07_CNT_MAX_TH                                        15596

#define   NUM_STATS_ENG_08_CNT                                               15597
  #define NUM_STATS_ENG_08_CNT_MAX_TH                                        15598

// ENG-09 & 10 are 'VAL' type statistics
#define   NUM_STATS_ENG_09_VAL                                               15599
  #define NUM_STATS_ENG_09_VAL_MIN                                           15600
  #define NUM_STATS_ENG_09_VAL_MAX                                           15601
  #define NUM_STATS_ENG_09_VAL_MIN_TH                                        15602
  #define NUM_STATS_ENG_09_VAL_MAX_TH                                        15603

#define   NUM_STATS_ENG_10_VAL                                               15604
  #define NUM_STATS_ENG_10_VAL_MIN                                           15605
  #define NUM_STATS_ENG_10_VAL_MAX                                           15606
  #define NUM_STATS_ENG_10_VAL_MIN_TH                                        15607
  #define NUM_STATS_ENG_10_VAL_MAX_TH                                        15608

// ENG-11 - ENG_16 are 'FLAG & CNT' type statistics
#define   NUM_STATS_ENG_11_FAULT_FLAG                                        15609
  #define NUM_STATS_ENG_11_FAULT_FLAG_EVENTMASK                              15610
  #define NUM_STATS_ENG_11_FAULT_CNT                                         15611
  #define NUM_STATS_ENG_11_FAULT_CNT_MAX_TH                                  15612

#define   NUM_STATS_ENG_12_FAULT_FLAG                                        15613
  #define NUM_STATS_ENG_12_FAULT_FLAG_EVENTMASK                              15614
  #define NUM_STATS_ENG_12_FAULT_CNT                                         15615
  #define NUM_STATS_ENG_12_FAULT_CNT_MAX_TH                                  15616

#define   NUM_STATS_ENG_13_FAULT_FLAG                                        15617
  #define NUM_STATS_ENG_13_FAULT_FLAG_EVENTMASK                              15618
  #define NUM_STATS_ENG_13_FAULT_CNT                                         15619
  #define NUM_STATS_ENG_13_FAULT_CNT_MAX_TH                                  15620

#define   NUM_STATS_ENG_14_FAULT_FLAG                                        15621
  #define NUM_STATS_ENG_14_FAULT_FLAG_EVENTMASK                              15622
  #define NUM_STATS_ENG_14_FAULT_CNT                                         15623
  #define NUM_STATS_ENG_14_FAULT_CNT_MAX_TH                                  15624

#define   NUM_STATS_ENG_15_FAULT_FLAG                                        15625
  #define NUM_STATS_ENG_15_FAULT_FLAG_EVENTMASK                              15626
  #define NUM_STATS_ENG_15_FAULT_CNT                                         15627
  #define NUM_STATS_ENG_15_FAULT_CNT_MAX_TH                                  15628

#define   NUM_STATS_ENG_16_FAULT_FLAG                                        15629
  #define NUM_STATS_ENG_16_FAULT_FLAG_EVENTMASK                              15630
  #define NUM_STATS_ENG_16_FAULT_CNT                                         15631
  #define NUM_STATS_ENG_16_FAULT_CNT_MAX_TH                                  15632

// ENG-17 & 18 are 'CNT' type statistics
#define   NUM_STATS_ENG_17_CNT                                               15633
  #define NUM_STATS_ENG_17_CNT_MAX_TH                                        15634

#define   NUM_STATS_ENG_18_CNT                                               15635
  #define NUM_STATS_ENG_18_CNT_MAX_TH                                        15636

// ENG-19 & 20 are 'VAL' type statistics
#define   NUM_STATS_ENG_19_VAL                                               15637
  #define NUM_STATS_ENG_19_VAL_MIN                                           15638
  #define NUM_STATS_ENG_19_VAL_MAX                                           15639
  #define NUM_STATS_ENG_19_VAL_MIN_TH                                        15640
  #define NUM_STATS_ENG_19_VAL_MAX_TH                                        15641

#define   NUM_STATS_ENG_20_VAL                                               15642
  #define NUM_STATS_ENG_20_VAL_MIN                                           15643
  #define NUM_STATS_ENG_20_VAL_MAX                                           15644
  #define NUM_STATS_ENG_20_VAL_MIN_TH                                        15645
  #define NUM_STATS_ENG_20_VAL_MAX_TH                                        15646
// End of (20) Engineering test statistics - assign as needed for diagnostics. Cannot be in released firmware

#define NUM_STATS_ILLUM_FAIL_LEFT_AUX_GEN1_VS_GEN2_FLAG                      15647
#define NUM_STATS_ILLUM_FAIL_LEFT_AUX_GEN1_VS_GEN2_FLAG_EVENTMASK            15648
#define NUM_STATS_ILLUM_FAIL_LEFT_AUX_GEN1_VS_GEN2_CNT                       15649
#define NUM_STATS_ILLUM_FAIL_LEFT_AUX_GEN1_VS_GEN2_CNT_MAX_TH                15650

#define NUM_STATS_ILLUM_FAIL_RIGHT_AUX_GEN1_VS_GEN2_FLAG                     15651
#define NUM_STATS_ILLUM_FAIL_RIGHT_AUX_GEN1_VS_GEN2_FLAG_EVENTMASK           15652
#define NUM_STATS_ILLUM_FAIL_RIGHT_AUX_GEN1_VS_GEN2_CNT                      15653
#define NUM_STATS_ILLUM_FAIL_RIGHT_AUX_GEN1_VS_GEN2_CNT_MAX_TH               15654

#define NUM_STATS_SCALE_STABLE_AT_LAST_DECODE_FAULT_FLAG                     15655
#define NUM_STATS_SCALE_STABLE_AT_LAST_DECODE_FAULT_FLAG_EVENTMASK           15656
#define NUM_STATS_SCALE_STABLE_AT_LAST_DECODE_FAULT_CNT                      15657
#define NUM_STATS_SCALE_STABLE_AT_LAST_DECODE_FAULT_CNT_MAX_TH               15658

#define   NUM_STATS_DECODE_MAXICODE_CNT                                      15659  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_MAXICODE_CNT_MAX_TH                               15660  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_MAXICODE_CNT_TIME                                 15661  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_MAXICODE_CNT_TIME_MIN                             15662  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_MAXICODE_CNT_TIME_MAX                             15663  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_MAXICODE_CNT_TIME_AVG                             15664  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_MAXICODE_CNT_TIME_TOTAL                           15665  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_COUPON_CNT                                        15666  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_COUPON_CNT_MAX_TH                                 15667  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_COUPON_CNT_TIME                                   15668  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_COUPON_CNT_TIME_MIN                               15669  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_COUPON_CNT_TIME_MAX                               15670  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_COUPON_CNT_TIME_AVG                               15671  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_COUPON_CNT_TIME_TOTAL                             15672  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_GS1DATAMATRIX_CNT                                 15673  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_GS1DATAMATRIX_CNT_MAX_TH                          15674  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_GS1DATAMATRIX_CNT_TIME                            15675  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_GS1DATAMATRIX_CNT_TIME_MIN                        15676  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_GS1DATAMATRIX_CNT_TIME_MAX                        15677  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_GS1DATAMATRIX_CNT_TIME_AVG                        15678  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_GS1DATAMATRIX_CNT_TIME_TOTAL                      15679  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_GS1QR_CNT                                         15680  // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_GS1QR_CNT_MAX_TH                                  15681  // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_GS1QR_CNT_TIME                                    15682  // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_GS1QR_CNT_TIME_MIN                                15683  // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_GS1QR_CNT_TIME_MAX                                15684  // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_GS1QR_CNT_TIME_AVG                                15685  // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_GS1QR_CNT_TIME_TOTAL                              15686  // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_TIME_BETWEEN_WATCHDOG_KICKS_VAL                          15687  // Engineering use only
  #define NUM_STATS_TIME_BETWEEN_WATCHDOG_KICKS_VAL_MIN                      15688
  #define NUM_STATS_TIME_BETWEEN_WATCHDOG_KICKS_VAL_MAX                      15689  // Track max time between Watchdog kicks. More than 7s means system broken
  #define NUM_STATS_TIME_BETWEEN_WATCHDOG_KICKS_VAL_MIN_TH                   15690
  #define NUM_STATS_TIME_BETWEEN_WATCHDOG_KICKS_VAL_MAX_TH                   15691

#define   NUM_STATS_IBM_RESET_CMD_CNT                                        15692  // Cnt IBM Reset cmds
  #define NUM_STATS_IBM_RESET_CMD_CNT_MAX_TH                                 15693

#define   NUM_STATS_IBM_UNKNOWN_CMD_CNT                                      15694  // Cnt IBM Unknown cmds
  #define NUM_STATS_IBM_UNKNOWN_CMD_CNT_MAX_TH                               15695

#define   NUM_STATS_I2C_FAULT_CNT                                            15696  // Cnt I2C Failures
  #define NUM_STATS_I2C_FAULT_CNT_MAX_TH                                     15697

// For each Symbology (or aggregate symbology) define the 'Histogram Bin Cnts' and 'Max Dec-Time Decode Data' statistics
#define   FIRST_STATS_DECTIME_HG_BIN_CNTS                                    15700 // Mark the first Array statistics
#define   NUM_STATS_DECODE_CNT_DECTIME_HG_BIN_CNTS                           15700 // All decode
#define   NUM_STATS_DECODE_CNT_DECTIME_MAX_DECODE_DATA                       15701
#define   NUM_STATS_DECODE_1D_CNT_DECTIME_HG_BIN_CNTS                        15702 // All 1D decode
#define   NUM_STATS_DECODE_1D_CNT_DECTIME_MAX_DECODE_DATA                    15703
#define   NUM_STATS_DECODE_2D_CNT_DECTIME_HG_BIN_CNTS                        15704 // All 2D decode
#define   NUM_STATS_DECODE_2D_CNT_DECTIME_MAX_DECODE_DATA                    15705
#define   NUM_STATS_DECODE_UPC_CNT_DECTIME_HG_BIN_CNTS                       15706
#define   NUM_STATS_DECODE_UPC_CNT_DECTIME_MAX_DECODE_DATA                   15707
#define   NUM_STATS_DECODE_EAN_JAN_CNT_DECTIME_HG_BIN_CNTS                   15708
#define   NUM_STATS_DECODE_EAN_JAN_CNT_DECTIME_MAX_DECODE_DATA               15709
#define   NUM_STATS_DECODE_C39_CNT_DECTIME_HG_BIN_CNTS                       15710
#define   NUM_STATS_DECODE_C39_CNT_DECTIME_MAX_DECODE_DATA                   15711
#define   NUM_STATS_DECODE_C128_CNT_DECTIME_HG_BIN_CNTS                      15712
#define   NUM_STATS_DECODE_C128_CNT_DECTIME_MAX_DECODE_DATA                  15713
#define   NUM_STATS_DECODE_2OF5_CNT_DECTIME_HG_BIN_CNTS                      15714
#define   NUM_STATS_DECODE_2OF5_CNT_DECTIME_MAX_DECODE_DATA                  15715
#define   NUM_STATS_DECODE_CODABAR_CNT_DECTIME_HG_BIN_CNTS                   15716
#define   NUM_STATS_DECODE_CODABAR_CNT_DECTIME_MAX_DECODE_DATA               15717
#define   NUM_STATS_DECODE_C93_CNT_DECTIME_HG_BIN_CNTS                       15718
#define   NUM_STATS_DECODE_C93_CNT_DECTIME_MAX_DECODE_DATA                   15719
#define   NUM_STATS_DECODE_MSI_CNT_DECTIME_HG_BIN_CNTS                       15720
#define   NUM_STATS_DECODE_MSI_CNT_DECTIME_MAX_DECODE_DATA                   15721
#define   NUM_STATS_DECODE_C11_CNT_DECTIME_HG_BIN_CNTS                       15722
#define   NUM_STATS_DECODE_C11_CNT_DECTIME_MAX_DECODE_DATA                   15723
#define   NUM_STATS_DECODE_PDF_CNT_DECTIME_HG_BIN_CNTS                       15724
#define   NUM_STATS_DECODE_PDF_CNT_DECTIME_MAX_DECODE_DATA                   15725
#define   NUM_STATS_DECODE_DATAMATRIX_CNT_DECTIME_HG_BIN_CNTS                15726
#define   NUM_STATS_DECODE_DATAMATRIX_CNT_DECTIME_MAX_DECODE_DATA            15727
#define   NUM_STATS_DECODE_QR_CNT_DECTIME_HG_BIN_CNTS                        15728
#define   NUM_STATS_DECODE_QR_CNT_DECTIME_MAX_DECODE_DATA                    15729
#define   NUM_STATS_DECODE_POSTAL_CNT_DECTIME_HG_BIN_CNTS                    15730
#define   NUM_STATS_DECODE_POSTAL_CNT_DECTIME_MAX_DECODE_DATA                15731
#define   NUM_STATS_DECODE_GS1DATABAR_CNT_DECTIME_HG_BIN_CNTS                15732
#define   NUM_STATS_DECODE_GS1DATABAR_CNT_DECTIME_MAX_DECODE_DATA            15733
#define   NUM_STATS_DECODE_COMPOSITE_CNT_DECTIME_HG_BIN_CNTS                 15734
#define   NUM_STATS_DECODE_COMPOSITE_CNT_DECTIME_MAX_DECODE_DATA             15735
#define   NUM_STATS_DECODE_OCR_CNT_DECTIME_HG_BIN_CNTS                       15736
#define   NUM_STATS_DECODE_OCR_CNT_DECTIME_MAX_DECODE_DATA                   15737
#define   NUM_STATS_DECODE_AZTEC_CNT_DECTIME_HG_BIN_CNTS                     15738
#define   NUM_STATS_DECODE_AZTEC_CNT_DECTIME_MAX_DECODE_DATA                 15739
#define   NUM_STATS_DECODE_OTHER_1D_CNT_DECTIME_HG_BIN_CNTS                  15740 // All other 1D - 'other' meaning those w/o a dedicated statistic
#define   NUM_STATS_DECODE_OTHER_1D_CNT_DECTIME_MAX_DECODE_DATA              15741
#define   NUM_STATS_DECODE_OTHER_2D_CNT_DECTIME_HG_BIN_CNTS                  15742 // All other 2D - 'other' meaning those w/o a dedicated statistic
#define   NUM_STATS_DECODE_OTHER_2D_CNT_DECTIME_MAX_DECODE_DATA              15743
#define   NUM_STATS_DECODE_OTHER_CNT_DECTIME_HG_BIN_CNTS                     15744 // These are mostly counting things that we don't expect
#define   NUM_STATS_DECODE_OTHER_CNT_DECTIME_MAX_DECODE_DATA                 15745
#define   NUM_STATS_DECODE_GS1DATAMATRIX_CNT_DECTIME_HG_BIN_CNTS             15746
#define   NUM_STATS_DECODE_GS1DATAMATRIX_CNT_DECTIME_MAX_DECODE_DATA         15747
#define   NUM_STATS_DECODE_GS1QR_CNT_DECTIME_HG_BIN_CNTS                     15748
#define   NUM_STATS_DECODE_GS1QR_CNT_DECTIME_MAX_DECODE_DATA                 15749
#define   NUM_STATS_DECODE_DIGIMARC_CNT_DECTIME_HG_BIN_CNTS                  15750
#define   NUM_STATS_DECODE_DIGIMARC_CNT_DECTIME_MAX_DECODE_DATA              15751
#define   NUM_STATS_DECODE_NO_DIGIMARC_CNT_DECTIME_HG_BIN_CNTS               15752
#define   NUM_STATS_DECODE_NO_DIGIMARC_CNT_DECTIME_MAX_DECODE_DATA           15753
#define   NUM_STATS_DECODE_MAXICODE_CNT_DECTIME_HG_BIN_CNTS                  15754
#define   NUM_STATS_DECODE_MAXICODE_CNT_DECTIME_MAX_DECODE_DATA              15755
#define   NUM_STATS_DECODE_COUPON_CNT_DECTIME_HG_BIN_CNTS                    15756
#define   NUM_STATS_DECODE_COUPON_CNT_DECTIME_MAX_DECODE_DATA                15757

#define   NUM_STATS_DECODE_DIGIMARC_CNT                                      15758 // Count of decodes of barcodes of this type
  #define NUM_STATS_DECODE_DIGIMARC_CNT_MAX_TH                               15759 // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_DIGIMARC_CNT_TIME                                 15760 // Associated Decode-Time (ms) of 'last' decode for this symbolgy
  #define NUM_STATS_DECODE_DIGIMARC_CNT_TIME_MIN                             15761 // Associated Minimum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_DIGIMARC_CNT_TIME_MAX                             15762 // Associated Maximum-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_DIGIMARC_CNT_TIME_AVG                             15763 // Associated Average-Decode-Time (ms) of 'all' decodes of this symbology
  #define NUM_STATS_DECODE_DIGIMARC_CNT_TIME_TOTAL                           15764 // Total of 'all' decodes of this symbology. Used for calc'ing 'avg'

#define   NUM_STATS_DECODE_NO_DIGIMARC_CNT                                   15765 // Count of images not decoded by Digimarc
  #define NUM_STATS_DECODE_NO_DIGIMARC_CNT_MAX_TH                            15766 // Generate 'event' when 'count' exceed this value
  #define NUM_STATS_DECODE_NO_DIGIMARC_CNT_TIME                              15767 // Decode-Time (ms) of 'last' Digimarc no decode
  #define NUM_STATS_DECODE_NO_DIGIMARC_CNT_TIME_MIN                          15768 // Minimum-Decode-Time (ms) of 'all' Digimarc no decodes
  #define NUM_STATS_DECODE_NO_DIGIMARC_CNT_TIME_MAX                          15769 // Maximum-Decode-Time (ms) of 'all' Digimarc no decodes
  #define NUM_STATS_DECODE_NO_DIGIMARC_CNT_TIME_AVG                          15770 // Average-Decode-Time (ms) of 'all' Digimarc no decodes
  #define NUM_STATS_DECODE_NO_DIGIMARC_CNT_TIME_TOTAL                        15771 // Total of 'all' Digimarc no decodes. Used for calc'ing 'avg'

#define NUM_STATS_CAMERA_BUTTON_PRESSES_CNT                                  15772 // Number of times the Camera button was pressed
#define NUM_STATS_CAMERA_BUTTON_PRESSES_CNT_MAX_TH                           15773

#define NUM_STATS_CAMERA_IMAGES_CNT                                          15774 // Number of Images transmitted (via button or host request)
#define NUM_STATS_CAMERA_IMAGES_CNT_MAX_TH                                   15775

#define   NUM_STATS_DECODE_OTHER_DM_CNT                                      15776  // Count of decodes of unsupported Digimarc barcodes
  #define NUM_STATS_DECODE_OTHER_DM_CNT_MAX_TH                               15777
  #define NUM_STATS_DECODE_OTHER_DM_CNT_TIME                                 15778
  #define NUM_STATS_DECODE_OTHER_DM_CNT_TIME_MIN                             15779
  #define NUM_STATS_DECODE_OTHER_DM_CNT_TIME_MAX                             15780
  #define NUM_STATS_DECODE_OTHER_DM_CNT_TIME_AVG                             15781
  #define NUM_STATS_DECODE_OTHER_DM_CNT_TIME_TOTAL                           15782
  #define NUM_STATS_DECODE_OTHER_DM_CNT_DECTIME_HG_BIN_CNTS                  15783
  #define NUM_STATS_DECODE_OTHER_DM_CNT_DECTIME_MAX_DECODE_DATA              15784
  #define NUM_STATS_DECODE_OTHER_DM_CNT_THROUGHPUT_TIME_AVG                  15785  // Digimarc Other Avg throughput time
  #define NUM_STATS_DECODE_OTHER_DM_CNT_THROUGHPUT_TIME_TOTAL                15786

#define   NUM_STATS_DECODE_UPC_DM_CNT                                        15787  // Count of decodes of barcodes of this type (UPC Digimarc) 
  #define NUM_STATS_DECODE_UPC_DM_CNT_MAX_TH                                 15788
  #define NUM_STATS_DECODE_UPC_DM_CNT_TIME                                   15789
  #define NUM_STATS_DECODE_UPC_DM_CNT_TIME_MIN                               15790
  #define NUM_STATS_DECODE_UPC_DM_CNT_TIME_MAX                               15791
  #define NUM_STATS_DECODE_UPC_DM_CNT_TIME_AVG                               15792
  #define NUM_STATS_DECODE_UPC_DM_CNT_TIME_TOTAL                             15793
  #define NUM_STATS_DECODE_UPC_DM_CNT_DECTIME_HG_BIN_CNTS                    15794
  #define NUM_STATS_DECODE_UPC_DM_CNT_DECTIME_MAX_DECODE_DATA                15795
  #define NUM_STATS_DECODE_UPC_DM_CNT_THROUGHPUT_TIME_AVG                    15796  // Digimarc UPC Avg throughput time
  #define NUM_STATS_DECODE_UPC_DM_CNT_THROUGHPUT_TIME_TOTAL                  15797

#define   NUM_STATS_DECODE_EAN_JAN_DM_CNT                                    15798  // Count of decodes of barcodes of this type (EAN/JAN Digimarc)
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_MAX_TH                             15799
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_TIME                               15800
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_TIME_MIN                           15801
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_TIME_MAX                           15802
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_TIME_AVG                           15803
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_TIME_TOTAL                         15804
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_DECTIME_HG_BIN_CNTS                15805
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_DECTIME_MAX_DECODE_DATA            15806
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_THROUGHPUT_TIME_AVG                15807  // Digimarc EAN/JAN Avg throughput time
  #define NUM_STATS_DECODE_EAN_JAN_DM_CNT_THROUGHPUT_TIME_TOTAL              15808

#define NUM_STATS_DECODE_UPC_CNT_THROUGHPUT_TIME_AVG                         15809  // UPC Avg throughput time 
#define NUM_STATS_DECODE_UPC_CNT_THROUGHPUT_TIME_TOTAL                       15810

#define NUM_STATS_DECODE_EAN_JAN_CNT_THROUGHPUT_TIME_AVG                     15811  // EAN/JAN Avg throughput time
#define NUM_STATS_DECODE_EAN_JAN_CNT_THROUGHPUT_TIME_TOTAL                   15812

#define   NUM_STATS_FIELD_CALIBRATION_ATTEMPTS_CNT                           15813  // Number of times 'field calibrated' was attempted (total pass & fail)
  #define NUM_STATS_FIELD_CALIBRATION_ATTEMPTS_CNT_MAX_TH                    15814
  //Usage:STATS_inc_counter(NUM_STATS_FIELD_CALIBRATION_ATTEMPTS_CNT); 

#define   NUM_STATS_FIELD_CALIBRATION_FAULT_CNT                              15815  // Number of times 'field calibrated' failed
  #define NUM_STATS_FIELD_CALIBRATION_FAULT_CNT_MAX_TH                       15816
  //Usage:STATS_inc_counter(NUM_STATS_FIELD_CALIBRATION_FAULT_CNT); 

#define NUM_STATS_DECODE_TIMEOUT_ERROR_CNT                                   15817 // Count of decode loop stuck error event
#define NUM_STATS_DECODE_TIMEOUT_ERROR_CNT_MAX_TH                            15818

#define NUM_STATS_NO_NEW_FRAME_ERROR_CNT                                     15819 // Count of no received frames error event
#define NUM_STATS_NO_NEW_FRAME_ERROR_CNT_MAX_TH                              15820

#define NUM_STATS_NO_NEW_FRAME_ERROR_STATE                                   15821 // State of flags/counters used to detect no new frames error
#define NUM_STATS_NO_NEW_FRAME_ERROR_STATE_VAL_MIN                           15822
#define NUM_STATS_NO_NEW_FRAME_ERROR_STATE_VAL_MAX                           15823
#define NUM_STATS_NO_NEW_FRAME_ERROR_STATE_MIN_TH                            15824
#define NUM_STATS_NO_NEW_FRAME_ERROR_STATE_MAX_TH                            15825

#define NUM_STATS_BLUETOOTH_RX_TIMEOUT_ERROR_CNT                             15826 // Count of BT RX timeout error events
#define NUM_STATS_BLUETOOTH_RX_TIMEOUT_ERROR_CNT_MAX_TH                      15827

#define   NUM_STATS_DECODE_EXPFRESH_DM_CNT                                   15828  // Count of decodes of barcodes of this type (UPC Digimarc) 
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_MAX_TH                            15829
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_TIME                              15830
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_TIME_MIN                          15831
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_TIME_MAX                          15832
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_TIME_AVG                          15833
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_TIME_TOTAL                        15834
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_DECTIME_HG_BIN_CNTS               15835
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_DECTIME_MAX_DECODE_DATA           15836
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_THROUGHPUT_TIME_AVG               15837  // Digimarc UPC Avg throughput time
  #define NUM_STATS_DECODE_EXPFRESH_DM_CNT_THROUGHPUT_TIME_TOTAL             15838

#define NUM_STATS_HANDHELD_DECODE_CNT                                        15839  // Count of all HandHeld barcode decodes
#define NUM_STATS_HANDHELD_DECODE_CNT_MAX_TH                                 15840

#define NUM_STATS_HANDSFREE_DECODE_CNT                                       15841  // Count of all HandsFree barcode decodes
#define NUM_STATS_HANDSFREE_DECODE_CNT_MAX_TH                                15842

#define NUM_STATS_RFID_DECODE_CNT                                            15843  // Count of all RFID tag decodes
#define NUM_STATS_RFID_DECODE_CNT_MAX_TH                                     15844 

#define NUM_STATS_CAMERA_RESET_CNT                                           15845
#define NUM_STATS_CAMERA_RESET_CNT_MAX_TH                                    15846

#define NUM_STATS_COLD_BOOT_RESET_CNT                                        15847
#define NUM_STATS_COLD_BOOT_RESET_CNT_MAX_TH                                 15848

#define NUM_STATS_WATCHDOG_RESET_CNT                                         15849
#define NUM_STATS_WATCHDOG_RESET_CNT_MAX_TH                                  15850

#define NUM_STATS_NON_ASSERT_HANG_CNT                                        15851
#define NUM_STATS_NON_ASSERT_HANG_CNT_MAX_TH                                 15852

#define NUM_STATS_ASSERT_HANG_CNT                                            15853
#define NUM_STATS_ASSERT_HANG_CNT_MAX_TH                                     15854

#define NUM_STATS_BT_RESET_CNT                                               15855
#define NUM_STATS_BT_RESET_CNT_MAX_TH                                        15856

#define NUM_STATS_SCN_NO_USB_CNT                                             15857
#define NUM_STATS_SCN_NO_USB_CNT_MAX_TH                                      15858

#define NUM_STATS_USB_HCC_FAULT_CNT                                          15859
#define NUM_STATS_USB_HCC_FAULT_CNT_MAX_TH                                   15860

#define NUM_STATS_MIPI_RESET_CNT                                             15861
#define NUM_STATS_MIPI_RESET_CNT_MAX_TH                                      15862
#define NUM_STATS_MIPI_NOFRAMES_CNT                                          15863
#define NUM_STATS_MIPI_NOFRAMES_CNT_MAX_TH                                   15864

#define NUM_STATS_SCAP_LOW_THRESHOLD_CNT                                     15865  // Count of hitting the 20% charge threshold
#define NUM_STATS_SCAP_LOW_THRESHOLD_CNT_MAX_TH                              15866 

#define NUM_STATS_LP_HANDOFF_FAILURE_CNT                                     15867 
#define NUM_STATS_LP_HANDOFF_FAILURE_CNT_MAX_TH                              15868 

#define NUM_STATS_USB_REPLUG_CNT                                             15869 // each replug
#define NUM_STATS_USB_REPLUG_CNT_MAX_TH                                      15870
#define NUM_STATS_USB_REPLUG_RETRIES                                         15871 // number of retries for last replug
#define NUM_STATS_USB_REPLUG_RETRIES_VAL_MIN                                 15872
#define NUM_STATS_USB_REPLUG_RETRIES_VAL_MAX                                 15873
#define NUM_STATS_USB_REPLUG_RETRIES_MIN_TH                                  15874
#define NUM_STATS_USB_REPLUG_RETRIES_MAX_TH                                  15875

#define NUM_STATS_SCAN_AVOIDANCE_CNT                                         15876
#define NUM_STATS_SCAN_AVOIDANCE_CNT_MAX_TH                                  15877

#define NUM_STATS_ELECTRIC_FENCE_CNT                                         15878
#define NUM_STATS_ELECTRIC_FENCE_CNT_MAX_TH                                  15879
#define NUM_STATS_ELECTRIC_FENCE_BATTPRESERVATION_CNT                        15880
#define NUM_STATS_ELECTRIC_FENCE_BATTPRESERVATION_CNT_MAX_TH                 15881

// Statistics for TOPS Market recovery logic.
#define NUM_STATS_USB_REPLUG_AUTO_CNT                                        15882 // Normal case. Each auto-reconnect (w/o D+ jiggle)
#define NUM_STATS_USB_REPLUG_AUTO_CNT_MAX_TH                                 15883
#define NUM_STATS_USB_REPLUG_SUCCESS_CNT                                     15884 // Reconnnected after a D+ jiggle. Recovered from TOPS unexpected disconnect.
#define NUM_STATS_USB_REPLUG_SUCCESS_CNT_MAX_TH                              15885
#define NUM_STATS_USB_REPLUG_FAILED_CNT                                      15886 // No reconnect. Exhausted all replug attempts - unsuccessful reconnect
#define NUM_STATS_USB_REPLUG_FAILED_CNT_MAX_TH                               15887

#define NUM_STATS_IBM_SCALE_CMD_TIMEOUT_CNT                                  15888                               
#define NUM_STATS_IBM_SCALE_CMD_TIMEOUT_CNT_MAX_TH                           15889
 
#define NUM_STATS_IBM_SCANNER_CMD_TIMEOUT_CNT                                15890
#define NUM_STATS_IBM_SCANNER_CMD_TIMEOUT_CNT_MAX_TH                         15891

#define NUM_STATS_CPU_POWERON_RESET_VAL                                      15892
#define NUM_STATS_CPU_POWERON_RESET_VAL_MIN                                  15893
#define NUM_STATS_CPU_POWERON_RESET_VAL_MAX                                  15894
#define NUM_STATS_CPU_POWERON_RESET_VAL_MIN_TH                               15895
#define NUM_STATS_CPU_POWERON_RESET_VAL_MAX_TH                               15896
#define NUM_STATS_NUM_INSERTIONS_CNT                                         15897
#define NUM_STATS_NUM_INSERTIONS_CNT_MAX_TH                                  15898
#define NUM_STATS_NUM_INSERTIONS_ATTEMPT_CNT                                 15899
#define NUM_STATS_NUM_INSERTIONS_ATTEMPT_CNT_MAX_TH                          15900
#define NUM_STATS_NUM_CHARGING_ERR_CNT                                       15901
#define NUM_STATS_NUM_CHARGING_ERR_CNT_MAX_TH                                15902
#define NUM_STATS_PREV_SCN_NO_USB_CNT                                        15903
#define NUM_STATS_PREV_SCN_NO_USB_CNT_MIN                                    15904
#define NUM_STATS_PREV_SCN_NO_USB_CNT_MAX                                    15905
#define NUM_STATS_PREV_SCN_NO_USB_CNT_MIN_TH                                 15906
#define NUM_STATS_PREV_SCN_NO_USB_CNT_MAX_TH                                 15907
// ATAG SCANNER_STATISTICS END 15908

// Add statistic entries above the previous line & keep 'NUM_STATS_LAST_DEFINED' accurate
#define NUM_UNUSED_STATISTIC                                                 19999
#define NUM_LAST_STATISTIC                                                   19999

#ifndef INCLUDE_MP72XX
/* ==========
   The following re mapping allow lines like below to exist in code even if a specific product does not support it.
   STATS_set_value(NUM_STATS_CPU_POWERON_RESET_VAL, value); // Store CPU Reset Value
============= */
#if defined(ODYSSEY)

#define   NUM_STATS_IBM_SCALE_CMD_TIMEOUT_CNT                                NUM_STATS_ENG_07_CNT         //15595
  #define NUM_STATS_IBM_SCALE_CMD_TIMEOUT_MAX_TH                             NUM_STATS_ENG_07_CNT_MAX_TH  //15596

#define   NUM_STATS_IBM_SCANNER_CMD_TIMEOUT_CNT                              NUM_STATS_ENG_08_CNT         //15597
  #define NUM_STATS_IBM_SCANNER_CMD_TIMEOUT_MAX_TH                           NUM_STATS_ENG_08_CNT_MAX_TH  //15598

#define   NUM_STATS_CPU_POWERON_RESET_VAL                                    NUM_STATS_ENG_09_VAL         //15599   // What type of CPU Reset
  #define NUM_STATS_CPU_POWERON_RESET_VAL_MIN                                NUM_STATS_ENG_09_VAL_MIN     //15600
  #define NUM_STATS_CPU_POWERON_RESET_VAL_MAX                                NUM_STATS_ENG_09_VAL_MAX     //15601
  #define NUM_STATS_CPU_POWERON_RESET_VAL_MIN_TH                             NUM_STATS_ENG_09_VAL_MIN_TH  //15602
  #define NUM_STATS_CPU_POWERON_RESET_VAL_MAX_TH                             NUM_STATS_ENG_09_VAL_MAX_TH  //15603

#define   NUM_STATS_PMIC_POWERON_RESET_VAL                                   NUM_STATS_ENG_10_VAL         //15604   // What type of PMIC Reset
  #define NUM_STATS_PMIC_POWERON_RESET_VAL_MIN                               NUM_STATS_ENG_10_VAL_MIN     //15605
  #define NUM_STATS_PMIC_POWERON_RESET_VAL_MAX                               NUM_STATS_ENG_10_VAL_MAX     //15606
  #define NUM_STATS_PMIC_POWERON_RESET_VAL_MIN_TH                            NUM_STATS_ENG_10_VAL_MIN_TH  //15607
  #define NUM_STATS_PMIC_POWERON_RESET_VAL_MAX_TH                            NUM_STATS_ENG_10_VAL_MAX_TH  //15608

#else // Otherwise remap these statistics to 'unused'

#define   NUM_STATS_IBM_SCALE_CMD_TIMEOUT_CNT                                NUM_UNUSED_STATISTIC
  #define NUM_STATS_IBM_SCALE_CMD_TIMEOUT_MAX_TH                             NUM_UNUSED_STATISTIC

#define   NUM_STATS_IBM_SCANNER_CMD_TIMEOUT_CNT                              NUM_UNUSED_STATISTIC
  #define NUM_STATS_IBM_SCANNER_CMD_TIMEOUT_MAX_TH                           NUM_UNUSED_STATISTIC

#define   NUM_STATS_CPU_POWERON_RESET_VAL                                    NUM_UNUSED_STATISTIC
  #define NUM_STATS_CPU_POWERON_RESET_VAL_MIN                                NUM_UNUSED_STATISTIC
  #define NUM_STATS_CPU_POWERON_RESET_VAL_MAX                                NUM_UNUSED_STATISTIC
  #define NUM_STATS_CPU_POWERON_RESET_VAL_MIN_TH                             NUM_UNUSED_STATISTIC
  #define NUM_STATS_CPU_POWERON_RESET_VAL_MAX_TH                             NUM_UNUSED_STATISTIC

#define   NUM_STATS_PMIC_POWERON_RESET_VAL                                   NUM_UNUSED_STATISTIC
  #define NUM_STATS_PMIC_POWERON_RESET_VAL_MIN                               NUM_UNUSED_STATISTIC
  #define NUM_STATS_PMIC_POWERON_RESET_VAL_MAX                               NUM_UNUSED_STATISTIC
  #define NUM_STATS_PMIC_POWERON_RESET_VAL_MIN_TH                            NUM_UNUSED_STATISTIC
  #define NUM_STATS_PMIC_POWERON_RESET_VAL_MAX_TH                            NUM_UNUSED_STATISTIC

#endif
#endif // INCLUDE_MP72XX

//==== End Statistics =========================================================================================


/*** IMPORTANT !!! ***********************************************************************
* DON'T FORGET TO ADD THE SAME NEW PARAMETERS IN THE OLD STYLE SECTION IN THE TOP HALF OF THIS FILE !!!!!
*****************************************************************************************/


// todo - aliased MCDSIG variables
#define NUM_MCDSIG_ENABLE        NUM_DOCCAP_MODE           //  594     F1 52
#define NUM_MCDSIG_ASPECT        NUM_DOCCAP_ASPECT         //  595     F1 53
#define NUM_MCDSIG_X             NUM_DOCCAP_X              //  596     F1 54
#define NUM_MCDSIG_Y             NUM_DOCCAP_Y              //  597     F1 55
#define NUM_MCDSIG_WIDTH         NUM_DOCCAP_WIDTH          //  598     F1 56
#define NUM_MCDSIG_HEIGHT        NUM_DOCCAP_HEIGHT         //  599     F1 57
#define NUM_MCDSIG_FMT           NUM_DOCCAP_FMT            //  601     F1 59
#define NUM_MCDSIG_BPP           NUM_DOCCAP_BPP            //  602     F1 5A
#define NUM_MCDSIG_JPEG_QUALITY  NUM_DOCCAP_JPEG_QUALITY   //  603     F1 5B

// from some custom
#define NUM_TRIGGER_SEND         NUM_APPS_8    /* 7a Siemens trigger mode enable*/


/***************************************************************************/
/* Special values for 0xf0 through 0xff (240 -- 255) */

#define SPECIALS                          0xf0     /* special values start here... */

/***************************************************************************
   When the following three defines are seen in a string dumping params, it
   indicates that instead of the data being <param num><value><param><value>,
   etc., the data looks as follows :
      <special param num><param_num - offset><value>
   where the offset is either 256, 512, or 768 as listed below.  This allows
   the param number to always be sent as a byte value, with the receiving s/w
   making the conversion to the correct param value by adding the offset back
   on.
   For example, if the PARAM_PLUS_256 is sent, the param number to be used
   by the receiving host is the param num + 256.
****************************************************************************/
#define PARAM_PLUS_256                    0xf0
#define PARAM_PLUS_512                    0xf1
#define PARAM_PLUS_768                    0xf2

/***************************************************************************
   This value indicates that a string of data that resides contiguously in
   the parameter buffer
      <PARAM_STRING><param num><len of params to follow><val1><val2>...
*****************************************************************************/
#define PARAM_STRING                      0xf3

/***************************************************************************
   This value indicates that a WORD of data follows :
      <PARAM_STRING><param num><high byte><low byte>
*****************************************************************************/
#define PARAM_WORD                        0xf4

/***************************************************************************
   This value indicates that a string of data with contiguous parameter
   numbers is to follow :
      <PARAM_NUM_STRING><param num start><len of params to follow><val1><val2>...
*****************************************************************************/
#define PARAM_NUM_STRING                  0xf5

/***************************************************************************
   This value indicates that an array of bytes follows:
      <PARAM_ARRAY><param num><len of array><byte0>...
*****************************************************************************/
#define PARAM_ARRAY                       0xf6


/***************************************************************************
  For mimic:
   This value indicates that an array of bytes (such as ADF data) follows according to the
   mumic spec for Multi-Packet Setting:
      <PARAM_MIMIC_MULTI><param num><len of array>,<2 byte offset><byte0>...
   Care must be taken to protect against corruption due to a partial buffer change.
*****************************************************************************/
/* The following two defines have the exact same meaning. Since they are
      referenced in different projects, both have to be included.
*/
#define PARAM_MIMIC_MULTI                 0xf7
#define PARAM_MPACKET                     PARAM_MIMIC_MULTI


/***************************************************************************
   This value indicates that the parameter number is 16 bits, normally used
   for parameters above 1024.

      <PARAM_SIZE16><param num hi byte><param num hi byte><value>

*****************************************************************************/
#define PARAM_SIZE16                      0xf8

#define PARAM_SPEC_UNUSED5                0xf9
#define PARAM_SPEC_UNUSED6                0xfa
#define PARAM_SPEC_UNUSED7                0xfb
#define PARAM_SPEC_UNUSED8                0xfc

#define PARAM_SEND_ALL_DEFAULTS           0xfd
#define PARAM_SEND_ALL                    0xfe
#define END_OF_PARAM_TABLE                0xff



