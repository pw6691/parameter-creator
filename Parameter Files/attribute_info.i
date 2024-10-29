/*********************************************************************
*
*  Filename:        attribute_info.i
*
*  Copyright(c) Symbol Technologies Inc., 2005-2006
*
*  Description:     MSA attribute information file. It varies
*                    from project to project, depending on attributes
*                    that exist.
*########################################################################
        INTEND to change to be C file     !!!!  ----Naxin Sun
#########################################################################
*  Author:          Bob May
*
*  Creation Date:
*
*  Derived From:    Moved from attributes.c
*
**********************************************************************/
#define ATT_MFG_PERMISSIONS            (ATT_SM_PRW | ATT_UM_RO  )


#ifdef INCLUDE_INFO
//  number                              type               properties                   len                        config_mask
   {ATT_CODE39,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCA,                           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCE,                           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_EAN13,                          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_EAN8,                           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_D25,                            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_I25,                            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CODABAR,                        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CODE128,                        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CODE93,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CODE11,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MSI,                            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCE1,                          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_TRIOPTIC,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_EAN128,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PDF,                            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SUPPS,                          ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C39_FULL_ASCII,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C39_LEN1,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C39_LEN2,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_D25_LEN1,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_D25_LEN2,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_I25_LEN1,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_I25_LEN2,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CBR_LEN1,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CBR_LEN2,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C93_LEN1,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C93_LEN2,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C11_LEN1,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C11_LEN2,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MSI_LEN1,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MSI_LEN2,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCA_PREAM,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCE_PREAM,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCE1_PREAM,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCE_TO_A,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCE1_TO_A,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_EAN8_TO_13,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCA_CHK,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCE_CHK,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPCE1_CHK,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_XMIT_C39_CHK,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_XMIT_I25_CHK,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_XMIT_CODE_ID,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_XMIT_MSI_CHK,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_XMIT_C11_CHK,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C39_CHK_EN,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_I25_CHK_TYPE,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MSI_CHK_1_2,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MSI_CHK_SCHEME,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C11_CHK_TYPE,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CLSI,                           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_NOTIS,                          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DEC_BEEP,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C11_REDUN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C39_REDUN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C128_REDUN,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MSI_REDUN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CBR_REDUN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_I25_REDUN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_D25_REDUN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C93_REDUN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_TRI_REDUN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_LINEAR_UPC,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_LINEAR_SUPPS,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C39_STITCH,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C128_STITCH,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPC_SEC_LEV,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_LIN_SEC_LEV,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SUPP_REDUN,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_I25_TO_EAN13,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BOOKLAND,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_ISBT_128,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_COUPON,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CODE32,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_POST_US1,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_POST_US2,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_POST_UK,                        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SIGNATURE,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_XMIT_NO_READ,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_POST_US_PARITY,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_POST_UK_PARITY,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_KEYCAT_1,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYCAT_2,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYCAT_3,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYCAT_4,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYCAT_5,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYCAT_6,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYVAL_1,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYVAL_2,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYVAL_3,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYVAL_4,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYVAL_5,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_KEYVAL_6,                       ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_PAUSE_DUR,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
//   {ATT_BUFFER_C39,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_EMUL_EAN128,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_OPERATING_MODE,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SYNAPSE,                        ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 80                        ,CONFIG_SUPERVISOR},
   {ATT_LASER_ON_PRIM,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_LASER_OFF_PRIM,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PRIM_TRIG_MODE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BEEPER_VOLUME,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_HOST_LASER_OFF,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BEEPER_FREQ,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_LASER_SLEEP_DUR,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_POLE_AS_THERE,                  ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, 
//   {ATT_WALMART_POLE_WAS_THERE,         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, 
#ifdef INCLUDE_BLUETOOTH
   {ATT_PAR_PROCESS_MODE,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif   
   {ATT_BEEP_ON_BELL,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef OEM_BUILD                                                                                      
   {ATT_XMIT_BLK_INDEX,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_XMIT_MODE,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif  
//   {ATT_CUSTOM_BYTE_1,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_CUSTOM_BYTE_2,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SUPP2,                          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SUPP5,                          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C128_LEN1,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C128_LEN2,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef OEM_BUILD                                                                                      
   {ATT_XMT_CODE_ID_CHAR,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif         
   {ATT_ISBT_MAX_TRY,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPDF,                           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C32_PREFIX,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef OEM_BUILD                                                                                      
   {ATT_XMIT_PROTOCOL,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif                                                                                                
   {ATT_ASCII_OUT,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DATA_FORMAT,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PARAMETERS_ALLOWED,             ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_AIM_DURATION,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DECODE_EVENT,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_SYSTEM_EVENT,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_BOOTUP_EVENT,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_PARAM_EVENT,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_SYSTEM_ERROR,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_SCANNING_ERROR,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
#ifdef INCLUDE_BLUETOOTH
   {ATT_POWER_BEEP,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
#endif   
   {ATT_POSTAL_JAP,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_POSTAL_AUS,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DATAMATRIX,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_QRCODE,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MAXICODE,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_POST_SEND_BAR_REP,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_USE_AE,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_ILLUM,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_USE_JPEG_QUAL,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_IMG_AIM_SNAPSHOT,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_CROP,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_SUBSAMPLE,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_BPP,                        ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_FILE_FORMAT,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_JPEG_QUAL,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_AIM_MODE,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_IMG_SIG_FMT,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_IMG_SIG_BPP,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_CROP_TOP,                   ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_CROP_LEFT,                  ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_CROP_BOT,                   ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_CROP_RIGHT,                 ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_SNAPTIMEOUT,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifndef WIRELESS_DEVICE
   {ATT_IMG_VIDEOVF,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_POSTAL_DUTCH,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_VIDEO_FRAME,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifndef WIRELESS_DEVICE
   {ATT_IMG_VF_FRAME,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_RSS_14,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_RSS_LIM,                        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_RSS_EXP,                        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CCC_ENABLE,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CCAB_ENABLE,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UPC_COMPOSITE,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_IMAGE_USE_AE,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_IMAGE_ILLUM,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SIGCAP_WIDTH,                   ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
//   {ATT_SIGCAP_HEIGHT,                  ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_TCIF,                           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MARGIN_RATIO,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MIA_HOSTNUM,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_SUPERVISOR},
   {ATT_TARGET_WHITE,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_ADF_RULES,                      ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), RULE_BUFF_SIZE            ,CONFIG_MASK_1    },
   {ATT_DEMOTE_RSS,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_COMPOSITE_BEEP,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCAN_ST_SESS_TO,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SCANLINE_WIDTH,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_VOLUME_TRIGGER,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C25_REDUN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_C25_LEN1,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_C25_LEN2,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C25,                            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_HOST_BEEP_CONTROL,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_IMAGE_SIG_JPEG_QUALITY,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PICO_FOCUS_MODE,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_ALS_CONSTANT,                   ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_ALS_SAMPLE_PERIOD,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_EMUL_UCCEAN128,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },

#ifdef  PLURAL_STAGE
   {ATT_PLURAL_ROW1_FORMAT,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW2_FORMAT,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW3_FORMAT,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW4_FORMAT,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW5_FORMAT,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW1_PREFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW1_SUFFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW2_PREFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW2_SUFFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW3_PREFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW3_SUFFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW4_PREFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW4_SUFFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW5_PREFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_ROW5_SUFFIX,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_MODE_SELECT,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_DECODE_TRANSMIT,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_INHIBIT_TIMEOUT,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_2STG_ROW1_CODE1_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_2STG_ROW1_CODE1_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_2STG_ROW1_CODE2_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_2STG_ROW1_CODE2_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_2STG_ROW2_CODE1_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_2STG_ROW2_CODE1_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_STG_4TH_DIGIT_SRC,       ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_SRC_CHARS         ,CONFIG_MASK_ALL  },
   {ATT_PARAM_TYPE99,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
   {ATT_PLURAL_2STG_ROW2_CODE2_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_2STG_ROW2_CODE2_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW1_CODE1_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW1_CODE1_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW1_CODE2_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW1_CODE2_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW2_CODE1_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW2_CODE1_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW2_CODE2_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW2_CODE2_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW3_CODE1_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW3_CODE1_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW3_CODE2_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ROW3_CODE2_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW1_CODE1_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW1_CODE1_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW1_CODE2_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW1_CODE2_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW2_CODE1_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW2_CODE1_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW2_CODE2_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW2_CODE2_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW3_CODE1_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW3_CODE1_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW3_CODE2_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW3_CODE2_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW4_CODE1_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW4_CODE1_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW4_CODE2_CHAR,    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ROW4_CODE2_POSVAL,  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), MAX_NUM_ID_CHARS          ,CONFIG_MASK_ALL  },
   {ATT_PSTAGE_INTERDECODE_TIMEOUT,     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PSTAGE_SAMESYMBOL_TIMEOUT,      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_2STG_ENABLE_RC_MODE,     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_3STG_ENABLE_RC_MODE,     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_4STG_ENABLE_RC_MODE,     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_XMIT_RC_MODE,            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_SUPPLEMENTAL_RC,         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PLURAL_STG_SRC_CHARACTERS,      ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), NUM_SUPP_REC_CHARS+1      ,CONFIG_MASK_ALL  },
#endif

//   {ATT_IMAGE_FUZZY_1D,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef INCLUDE_DPM                                                                                    
   {ATT_DPM_EN,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif                                                                                                
   {ATT_MODEL_NUMBER,                   ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_RO   ), 18+1                      ,CONFIG_MASK_ALL  },
   {ATT_SERIAL_NUMBER,                  ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_RO   ), 16+1                      ,CONFIG_MASK_ALL  },
   {ATT_DATE_OF_MANUFACTURE,            ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_RO   ), 7+1                       ,CONFIG_MASK_ALL  },
   {ATT_DATE_OF_SERVICE,                ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_RO   ), 7+1                       ,CONFIG_MASK_ALL  },
   {ATT_MIRROR_IMAGE,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_ADDR,                        ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_RO   ), 6                         ,CONFIG_MASK_ALL  },   // Bluetooth address   
   {ATT_BATCH_MODE,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   // Batch Mode 
   {ATT_PAIR_ON_CONTACT,                ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   // Pair on Contacts 
#endif
#ifdef INCLUDE_SYSTEM_OCR
   {ATT_OCR_TEMPLATE1,                  ATT_TYPE_ARRAY,  (ATT_SM_PRW  | ATT_UM_PRW  ), OCR_TEMPLATE_LEN          ,CONFIG_MASK_ALL  },
#endif
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_PINCODE,                     ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), BT_PIN_CODE_LEN           ,CONFIG_MASK_ALL  },   // Bluetooth pincode 
#endif
#ifdef INCLUDE_SYSTEM_OCR
//   {ATT_OCR_SECURITY_LEVEL,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
#ifdef INCLUDE_BLUETOOTH
   {ATT_HOST_SEND_DLY,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },    
   {ATT_RECONNECT_ATTEMPTS,             ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },   // Number of reconnection attempts
   {ATT_BEEP_ON_RECON_ATTEMPT,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   // Beep on reconnection attempt                                                                                                             
#endif
   {ATT_IMG_JPEG_FILESIZEW,             ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_GAIN_EXP_PRIORITY,          ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_ENHANCEMENT,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DEC_TARGET_WHITE,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_FIXED_EXPOSURE,                 ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FIXED_GAIN,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_AE_METERING,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_ILLUM_BANK_CTRL,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UQR_EN,                         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_AZTEC,                          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SIGCAP2PASS,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BOOKLAND_FORMAT,                ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_ISBT_CONCAT_AUTOD,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CHECK_ISBT_TABLE,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SUPP_USER_1,                    ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_SUPP_USER_2,                    ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
//   {ATT_K35,                            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_1D_INVERSE,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_QR_INVERSE,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DATAMATRIX_INVERSE,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_AZTEC_INVERSE,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef HANDSFREE_AIM_CONTROL                                                                          
   {ATT_AIMMODEHANDSFREE,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif                                                                                                
   {ATT_POST_US3,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_MODE,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   
//   {ATT_DOCCAP_ASPECT,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_X,                       ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_Y,                       ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_WIDTH,                   ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_HEIGHT,                  ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_PDF_SECURITY_LEVEL,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_FMT,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_BPP,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_JPEG_QUALITY,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_AUTO_RECON,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BT_FRIENDLY_NAME,               ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), 24+1                      ,CONFIG_MASK_ALL  },  
   {ATT_PIN_CODE_TYPE,                  ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },             
#endif
   {ATT_PRESENTATION_ZONE,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_1    },
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_INQUIRY_MODE,                ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },    // inquiry_mode          
#endif
   {ATT_POST_US4,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_LOLITE_ENHANCE,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_PAGER_MOTOR_ENABLE,             ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DATE_FIRST_PROGRAM,             ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), 7+1                       ,CONFIG_MASK_ALL  },
   {ATT_PARAMETER_LOCK,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CONFIG_FILE,                    ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), 16+1                      ,CONFIG_MASK_ALL  },
   {ATT_ISSN_EAN_EN,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MATRIX_25_EN,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MATRIX_25_LEN1,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },      
   {ATT_MATRIX_25_LEN2,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },      
   {ATT_MATRIX_25_REDUN,                ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MATRIX_25_CHK_EN,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MATRIX_25_XMIT_CHK,             ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef OEM_BUILD
   {ATT_MIRROR_SENSOR_IMAGE,            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif   
//   {ATT_USER_PARAM_PASSTHROUGH,         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_PAGER_MOTOR_DURATION,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_RSM_DEVICE_LEVEL,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_SUPERVISOR},
   {ATT_BEEPER_DURATION,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_RANGE_RESTRICT,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   
   {ATT_HANDSFREE_MODE,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   
#ifdef INCLUDE_DS9808   
   {ATT_TRIG_AB_ENGINE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 633  
   {ATT_TRIG_AB_DBNC_TO,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   
   {ATT_TRIG_AB_DBNC_WAIT,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 635
   {ATT_LASER_PREF_TO,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif   
#if defined(INCLUDE_RFID) 
   {ATT_TRIG_A_ENGINE,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 631
   {ATT_TRIG_B_ENGINE,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 632
   {ATT_TRIG_HOST_ENGINE,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 636
   {ATT_RFID_BEEPER_FREQ,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 639
   {ATT_RFID_SAME_TAG_TO,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 640
   {ATT_RFID_HANDSFREE_MODE,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 641
   {ATT_RFID_TRIG_MODE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 642
   {ATT_RFID_XMIT_FORMAT,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 643
#endif
#if defined(INCLUDE_DLPARSE)
   {ATT_DL_PARSE_MODE,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 645
   {ATT_DL_PARSE_BUFF,                  ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), DL_PARSE_BUFF_SIZE        ,CONFIG_MASK_ALL  },
#endif   
//   {ATT_IMG_SNAP_DUPLEX,                ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_BLINK_SNAP_BY_MOTION,           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_CONTINUE_SNAPSHOT,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CONTINUE_BC_READ,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_PERFORMANCE_MODE,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SIG_MINPERCENT,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SIG_MAXROT,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SIG_BRIGHTEN,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SIG_SYMBOLOGY,                  ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
//   {ATT_SIG_MINTEXT,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SIG_MAXTEXT,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SIG_SHARPEN,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_MULTICODE_EXPRESSION,           ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), MULTICODE_EXPRESSION_LEN  ,CONFIG_MASK_ALL  },
   {ATT_PRESENTATION_SLEEP_TO,          ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_PRESENTATION_IDLE_TO,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_IMG_EDGE_SHARPEN,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_ROTATION,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMG_CONTRAST_ENHANCEMENT,       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_VIDEO_SUBSAMPLE,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_AIM_BRIGHTNESS,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_ILLUMINATION_BRIGHTNESS,        ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifndef INCLUDE_BLUETOOTH
   {ATT_STATIC_CDC,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
//   {ATT_RS232_RX_IN_LOW_POWER,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_AIMID_SUPP_FORMAT,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_EXCLUSIVE_CODE128_EN,           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   
//   {ATT_MULTICODE_MODE,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, 
   {ATT_NCR_USE_PREFIX,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  },
   {ATT_NCR_USE_BCC,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  },
   {ATT_NCR_INTERFACE,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  },
   {ATT_NCR_PREFIX,                     ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW   ), 2                        ,CONFIG_MASK_ALL  },
   {ATT_NCR_SUFFIX,                     ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW   ), 2                        ,CONFIG_MASK_ALL  },
#ifdef INCLUDE_SYSTEM_OCR
   {ATT_OCRA_EN,                        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCRB_EN,                        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MICR_E13B_EN,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_USCURRENCY_EN,                  ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCRA_VARIANT,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCRB_VARIANT,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_SUBSET,                     ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), OCR_SUBSET_LEN            ,CONFIG_MASK_ALL  },
   {ATT_OCR_ORIENTATION,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_CHK_DGT_MOD,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_MIN_CHAR,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_MAX_CHAR,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_LINES,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_VAL_CONCAT_PARAM_BARCODE,       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IMAGE_FILE_METADATA,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef INCLUDE_SYSTEM_OCR
   {ATT_OCR_CHK_DGT_VALID,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_QUIET_ZONE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_BW_LEVEL,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_DESPECKLE,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_THICKEN,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_LOW_PASS_FILTER,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_CHK_DGT_MULTI,              ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), OCR_CHK_DGT_MULTI_LEN     ,CONFIG_MASK_ALL  },
//   {ATT_OCR_BRIGHT_ILLUM,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_OCR_FINDER_EN,                  ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 702
#endif
   {ATT_XMIT_CBAR_CHKDGT,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 704
   {ATT_2D_PARAM_PROG,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 705
   {ATT_FEATURE_SET,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  }, // 706
#ifdef INCLUDE_SYSTEM_OCR
   {ATT_OCR_FINDER_EXTERNAL,            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 707
#endif
#if defined(INCLUDE_RFID) 
   {ATT_RFID_RPT_BUFF_FULL,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 708
   {ATT_RFID_XMIT_UNKN_TAG,             ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 709
   {ATT_RFID_ANTENNA_SELECT,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 710
   {ATT_RFID_ANTENNA_PWR_HH,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 711
   {ATT_RFID_ANTENNA_PWR_HF,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 712
   {ATT_RFID_HF_IDLE_TO,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 713
   {ATT_RFID_XMIT_RAW_W_PC,             ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 714
   {ATT_RFID_XMIT_APPEND_RSSI,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 715
#endif
   {ATT_CELL_EN,                        ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 716
//   {ATT_MULTICODE_CONCAT,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_POST_AUS_FMT,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DMV_PROCESSING,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DMV_TIMEOUT,                    ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_SUPPRESS_PWRUP_BEEPS,           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_MULTICODE_CONCAT_CODE_TYPE,     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_UNIQUEESS_EN,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_TRIG_TIMEOUT_SAME_SYMBOL,       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_SIG_FINDBOX,                    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DATABAR_LIM_MARGIN_CHK,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef INCLUDE_BLUETOOTH
   {ATT_AUTOAIM_AIM_OFF_TO_IDLE_TIME,   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },      
#endif
   {ATT_COUPON_REPORT,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 730
#if defined(INCLUDE_CRYPTO)
   {ATT_FIPS_MODE,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 736 FIPS Mode
   {ATT_AES_KEY,                        ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), CRYPTO_KEY_SIZE           ,CONFIG_MASK_ALL  }, // 737
   {ATT_SHARED_KEY,                     ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), CRYPTO_KEY_SIZE           ,CONFIG_MASK_ALL  }, // 738
#endif
#ifdef INCLUDE_UIDPARSE
   {ATT_UID_PARSE_MODE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 740
 #ifdef INCLUDE_UID_CONFIGBC
   {ATT_UID_TABLE,                      ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), UID_TABLE_BYTES           ,CONFIG_MASK_ALL  }, // 741
 #endif
   {ATT_UID_ERROR_MODE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 742
#endif
   {ATT_DECODE_LED,                     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 744
   {ATT_SIMULATED_SCANSTAND_DELAY,      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 745
   {ATT_C39_SECURITY_LEVEL,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 750
   {ATT_C128_SECURITY_LEVEL,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_TRIGGER_EVENT,                  ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_IR_SENSOR_CALIBRATE_VAL,        ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_CLEAR_MEMORY,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_EMBEDDED_SCAN_ENGINE,           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_AIM_WHILE_TRIGGER_RELEASED,     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_PRESO_POST_DECODE_ILLUM_OFF,    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_OBJECT_DETECT_SENSITIVITY,      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_OBJECT_DETECT_RANGE,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_BORDER,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DOCCAP_DELAY,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef INCLUDE_FLEXI_SCRIPT 
   {ATT_FLEXI_SCRIPT,                   ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), FLEXISCRIPT_LEN           ,CONFIG_MASK_ALL  },
#endif   
   {ATT_USPOSTNET_CHKDGT,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_USPLANET_CHKDGT,                ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CODABAR_CASE,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL},
#ifdef INCLUDE_SYSTEM_OCR   
   {ATT_OCR_INVERSE,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif   
//   {ATT_ILLUM_ON_ALWAYS,                ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MOTION_TOLERANCE,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DECODE_BLINKS,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  // 859
// {ATT_DECODE_BLINK_DUR,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  // 860

   {ATT_ILLUM_HORIZ_DURATION,           ATT_TYPE_WORD,    (ATT_MFG_PERMISSIONS       ), 2                         ,CONFIG_MASK_ALL  },  // 867
   {ATT_ILLUM_VERT_DURATION,            ATT_TYPE_WORD,    (ATT_MFG_PERMISSIONS       ), 2                         ,CONFIG_MASK_ALL  },  // 874
   {ATT_EXPOSURE_HORIZ_DURATION1,       ATT_TYPE_WORD,    (ATT_MFG_PERMISSIONS       ), 2                         ,CONFIG_MASK_ALL  },  // 876
#ifdef INCLUDE_FLEXI_SCRIPT                                                                                     
   {ATT_FLEXI_ENABLE,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  // 880
   {ATT_FLEXI_WORD_0,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FLEXI_WORD_1,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FLEXI_WORD_2,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FLEXI_WORD_3,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FLEXI_WORD_4,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FLEXI_WORD_5,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FLEXI_WORD_6,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FLEXI_WORD_7,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FLEXI_WORD_8,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_FLEXI_WORD_9,                   ATT_TYPE_INT,     (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },  // 890
#endif
   {ATT_GAIN_HORIZ_1,                   ATT_TYPE_WORD,    (ATT_MFG_PERMISSIONS       ), 2                         ,CONFIG_MASK_ALL  },  // 891
   {ATT_ANALOG_GAIN_HORIZ_1,            ATT_TYPE_WORD,    (ATT_MFG_PERMISSIONS       ), 2                         ,CONFIG_MASK_ALL  },  // 895

#ifdef INCLUDE_BLUETOOTH
//   {ATT_SSP_IO_CAPABILITY,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_COERCE_UPC_EAN,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_VIDEO_FORMAT,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },         
   {ATT_COUNTRY_KBD_TYPE,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CHARACTER_ENCODING,             ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
#ifdef ADVANCED_COUNTRY_KEYBOARD_TYPE
   {ATT_COUNTRY_KBD_DOWNLOAD,           ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), COUNTRY_KBD_LEN*2         ,CONFIG_MASK_1    },
   {ATT_CP_DOWNLOAD,                    ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), CODE_PAGE_LEN*2           ,CONFIG_MASK_1    },
#endif
   {ATT_TOPOLOGY_EVENT,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   
   {ATT_EAS_PRESENT,                    ATT_TYPE_BYTE,    (ATT_MFG_PERMISSIONS       ), 1                         ,CONFIG_MASK_ALL}, // 966 //mh_add   
   {ATT_SCALE_PRESENT,                  ATT_TYPE_BYTE,    (ATT_MFG_PERMISSIONS       ), 1                         ,CONFIG_MASK_ALL},   
#ifdef CJK_SUPPORT
   {ATT_CHINESE_NEIMA_INPUT,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_CONTROL_EMULATE_INPUT,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DIGIT_KEYPAD_INPUT,             ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
#ifdef ADVANCED_COUNTRY_KEYBOARD_TYPE
   {ATT_COUNTRY_KBD_DOWNLOAD_SEPARATE,  ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), COUNTRY_KBD_LEN*4         ,CONFIG_MASK_ALL  },
#endif
   {ATT_EAS_OPERATING_MODE,                ATT_TYPE_BYTE,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL},
   {ATT_EAS_REQ_COMM_MESS,                 ATT_TYPE_FLAG,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL},
   {ATT_EAS_DEACT,                         ATT_TYPE_FLAG,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL},
   {ATT_EAS_DETECT_GEIGER_COUNTER,         ATT_TYPE_FLAG,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL},
   {ATT_EAS_DEACT_OVERRIDE_BUTTON,         ATT_TYPE_FLAG,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL},
   {ATT_EAS_DEACT_TIMEOUT,                 ATT_TYPE_BYTE,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL},
   {ATT_EAS_CHCKPT_INTERLOCK_POL,          ATT_TYPE_FLAG,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL},
   {ATT_EAS_STAG_BEEP,                     ATT_TYPE_BYTE,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL},
   {ATT_EAS_HTAG_BEEP,                     ATT_TYPE_BYTE,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL},
   {ATT_CHECKPOINT_PULSE_LENGTH_50MSEC,    ATT_TYPE_BYTE,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL}, // 2102
   {ATT_SCALE_POLE_DISPLAY_CONFIG,      ATT_TYPE_BYTE,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_AUTO_ZERO_RETURN,         ATT_TYPE_FLAG,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_BEEP_AFTER_WEIGHT,        ATT_TYPE_FLAG,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_ENABLE_ZERO_BUTTON,       ATT_TYPE_FLAG,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_SERIAL_NUMBER,            ATT_TYPE_STRING, (ATT_MFG_PERMISSIONS        ), 16+1                      ,CONFIG_MASK_ALL  },
   {ATT_SCALE_DATE_OF_MANUFACTURER,     ATT_TYPE_STRING, (ATT_MFG_PERMISSIONS        ), 7+1                       ,CONFIG_MASK_ALL  },
   {ATT_SCALE_SW_REVISION,              ATT_TYPE_STRING, (ATT_MFG_PERMISSIONS        ), 16+1                      ,CONFIG_MASK_ALL  },
   {ATT_SCALE_MODEL_NUMBER,             ATT_TYPE_STRING, (ATT_MFG_PERMISSIONS        ), 18+1                      ,CONFIG_MASK_ALL  },
   {ATT_LEGAL_SCALE_UNITS,              ATT_TYPE_FLAG,   (ATT_MFG_PERMISSIONS        ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_LEGAL_SCALE_DAMP_FLTR_SETTING,  ATT_TYPE_BYTE,   (ATT_MFG_PERMISSIONS        ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_RS_GC_PROGRAMMED,         ATT_TYPE_FLAG,   (ATT_MFG_PERMISSIONS        ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_GC_CAL_LOC_SCALE_LATITUDE,      ATT_TYPE_STRING, (ATT_MFG_PERMISSIONS        ), 6+1                       ,CONFIG_MASK_ALL  },
   {ATT_GC_CAL_LOC_SCALE_HEIGHT_ASL,    ATT_TYPE_STRING, (ATT_MFG_PERMISSIONS        ), 5+1                       ,CONFIG_MASK_ALL  },
   {ATT_SCALE_ZERO_TRACKING,            ATT_TYPE_BYTE,   (ATT_MFG_PERMISSIONS        ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_GC_LOC_OF_USE_SCALE_LATITUDE,   ATT_TYPE_STRING, (ATT_MFG_PERMISSIONS        ), 6+1                       ,CONFIG_MASK_ALL},
   {ATT_GC_LOC_OF_USE_SCALE_HEIGHT_ASL, ATT_TYPE_STRING, (ATT_MFG_PERMISSIONS        ), 5+1                       ,CONFIG_MASK_ALL},
//   {ATT_DOCCAP_USEHID,                  ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef ADVANCED_COUNTRY_KEYBOARD_TYPE
   {ATT_COUNTRY_KBD_DOWNLOAD_TYPE,      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_INV_COMPOSITE,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_APPLE_HID_FEATURES,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BT_CLASS_OF_DEVICE_ZERO,        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DOUBLE_TRIGGER_TO,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DOUBLE_TRIGGER_HOLDOFF_TO,      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_UNSOL_HEARTBEAT_INTV,           ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
#ifdef CJK_SUPPORT
   {ATT_JAP_UTF_SHIFT_JIS,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_SCALE_ISCALIBRATED,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_I25_SECURITY_LEVEL,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_USB_SUSP_DETACH_DELAY,          ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_USB_SUSP_DETACH_MODE,           ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_AUX_SEND_TYPE_AS,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  //1124
   {ATT_EAS_REQ_VOLT_MESS,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  //1130 //mh_add
   {ATT_EAS_REQ_SCN_TIME,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  //1136 //mh_add
   {ATT_SAV_STAT_STG,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  //1137
   {ATT_SCALE_INTERVAL_RANGE,           ATT_TYPE_BYTE,    (ATT_MFG_PERMISSIONS       ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_HRES_MODE,                ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MGMT_HOST,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifndef INCLUDE_BLUETOOTH
   {ATT_USB_IBM_LDIO_ENABLE,            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
//   {ATT_RANKING_FILTER_THRESHOLD,       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },

#ifndef INCLUDE_BLUETOOTH
   {ATT_TOSHIBA_TEC_HEADER_CHAR,        ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_TOSHIBA_TEC_TERMINATOR_CHAR1,   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_LED_ON_GOOD_DECODE,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DECODE_BEEP_TIMING,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_HANXIN_EN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_HANXIN_INVERSE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1168
   {ATT_AIMING_PATTERN,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1187
#ifndef INCLUDE_BLUETOOTH
   {ATT_TOSHIBA_TEC_TERMINATOR_CHAR2,   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1190
#endif
#if defined(INCLUDE_DLPARSE)
   {ATT_DL_PARSE_ERROR,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif   
   {ATT_SCALE_ENABLE,                   ATT_TYPE_BYTE,  (ATT_SM_PRW  | ATT_UM_PRW    ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_GRAVITY_PLACE_OF_USE,     ATT_TYPE_DWORD, (ATT_MFG_PERMISSIONS         ), 4                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_GRAVITY_CAL_LOC,          ATT_TYPE_DWORD, (ATT_MFG_PERMISSIONS         ), 4                         ,CONFIG_MASK_ALL  },
   {ATT_STITCH_ITF,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1204
   {ATT_STITCH_C128_SECURITY,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1205
   {ATT_STITCH_C39_SECURITY,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1206
   {ATT_MARGINLESS_C128_ENABLE,         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MARGINLESS_C39_ENABLE,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MARGINLESS_ITF_ENABLE,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_LINEAR_IMG_PICKLIST_EN,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL},
//   {ATT_LINEAR_IMG_AIMING_LOCATION,     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL},
   {NUM_EAS_DEACT_FAIL_BEEP,            ATT_TYPE_BYTE,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                       ,CONFIG_MASK_ALL}, //1213   //mh_add
#ifndef INCLUDE_BLUETOOTH
   {ATT_SCAN_DISABLE_MODE,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
#ifdef SWITCH_NIGHTMODE_SUPPORT
   {ATT_NIGHT_MODE_TRIG_EN,             ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   // 1215
#endif
   {ATT_MARGINLESS_C93_ENABLE,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   // 1223
   {ATT_STITCH_C93_ENABLE,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   // 1224
   {ATT_TIMEOUT_SWIPE,                  ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },   // 1226
   {ATT_TIMEOUT_DEFAULT,                ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },   // 1227
   {ATT_TIMEOUT_CELL,                   ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },   // 1228
   {ATT_ANALOG_GAIN,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   // 1232
   {ATT_DIGITAL_GAIN,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_IGNORE_SCALE_DIRECTIVES,                ATT_TYPE_FLAG,  (ATT_SM_PRW  | ATT_UM_PRW   ), 1                   ,CONFIG_MASK_ALL},
//   {ATT_QUIET_MODE,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DEVICE_PORT_CONFIG,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   // 1246
   {ATT_SCALEHOST_INTERFACE,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALEHOST_BAUDRATE,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_C128_FNC4_IGNORE,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },     // 1253
//   {ATT_DEBUG_00,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   // 1258
   {ATT_DEBUG_01,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DEBUG_02,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DEBUG_03,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_DEBUG_04,                       ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
//   {ATT_DEBUG_05,                       ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
//   {ATT_DEBUG_06,                       ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
//   {ATT_DEBUG_07,                       ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_PID_TYPE,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SAME_SYMBOL_REPORT_TIMEOUT,             ATT_TYPE_BYTE,  (ATT_SM_PRW  | ATT_UM_PRW   ), 1                  ,CONFIG_MASK_ALL  },  // 1284
   {ATT_SCALE_MAX_INITIAL_ZERO_SETTING_RANGE,   ATT_TYPE_BYTE,  (ATT_SM_PRW  | ATT_UM_PRW   ), 1                  ,CONFIG_MASK_ALL  },  // 1285
   {ATT_IBM_SCALE_DEFAULT_RESPONSE_MODE,        ATT_TYPE_BYTE,  (ATT_SM_PRW  | ATT_UM_PRW   ), 1                  ,CONFIG_MASK_ALL  },  // 1286
   {ATT_VOLUME_BUTTON,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  // 1287
   {ATT_1D_MARGINLESS_LEVEL,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  // 1288
   {ATT_MARGINLESS_UPC_ENABLE,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BLOCK_LIFE_SPAN,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  // 1291
   {ATT_SILENCE_MODE_CHANGE,            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_THIRD_PARTY_SCALE,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL},
   {ATT_THIRD_PARTY_SCALE_LED_PIN,      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL},
   {ATT_THIRD_PARTY_SCALE_ZERO_PIN,     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL},
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_EXCLUDE_WIFI_CHN,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BT_WIFI_FRIENDLY_MODE,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_MOVEMENT_SENSITIVITY,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1300
#ifdef INCLUDE_BLUETOOTH
   {ATT_TOGGLE_PAIRING,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BT_RADIO_POWER_CLASS,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
// {ATT_IR_DETECT_TIMEOUT,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_BEHIND_ZERO_MODE,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1326
   
   {ATT_AUX1_BAUD,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1328
   {ATT_AUX1_STOP_BITS,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1329
   {ATT_AUX1_PARITY,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1330
   {ATT_AUX1_DATA_BITS,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1331
   {ATT_AUX2_BAUD,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1332
   {ATT_AUX2_STOP_BITS,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1333
   {ATT_AUX2_PARITY,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1334
   {ATT_AUX2_DATA_BITS,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1335
      
// {ATT_DECODE_POOR_QUALITY,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_GS1_DATAMATRIX_EN,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_MAILMARK,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SCALE_SW_REV_IN_AUDIT_TRAIL,    ATT_TYPE_BYTE,    (ATT_MFG_PERMISSIONS       ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_GS1_QR_EN,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//#ifdef HOST_DATA_LEN 
   //{ATT_HOST_DATA,                      ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), HOST_DATA_LEN             ,CONFIG_SUPERVISOR},      
//#endif
   {ATT_IGNORE_IBM_CMD,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1345
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_RADIO_STATE,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1354
#endif
   {ATT_NO_DECODE_FRAMES_NUM,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
//   {ATT_ITELLI_SAME_SYMBOL_TIMEOUT,     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },   
   {ATT_NCR_SCALE_BEEP_AFTER_WEIGHT,      ATT_TYPE_FLAG,  (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  },
#if defined(INCLUDE_STATS_DECTIME_HG_BINS_and_DECODE_DATA)
   {ATT_DECTIME_HISTOGRAM_BIN_THRESHOLD, ATT_TYPE_ARRAY,  (ATT_SM_PRW  | ATT_UM_PRW   ), STATS_SIZEOF_HG_BINS     ,CONFIG_MASK_ALL  },
#endif
   {ATT_HONOR_DIRECT_IO_BEEPS,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef INCLUDE_BLUETOOTH
   {ATT_FAST_HID,                       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_QUICK_KEYPAD_EMULATION,         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_MAX_SCALE_ZEROING_WEIGHT_LIMIT, ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },  // 1366
#ifdef WIRELESS_DEVICE
   {ATT_BATT_HI_THRESH,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BATT_MD_THRESH,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BATT_LO_THRESH,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_BATT_HEALTH_THRESH,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
   {ATT_MARGINLESS_MSI_ENABLE,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#ifdef WIRELESS_DEVICE
   {ATT_BT_SECURITY,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1393
#endif
#ifndef WIRELESS_DEVICE
   {ATT_TOSHIBA_TEC_HOST_SEND_DLY,      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1398
#endif
#ifdef WIRELESS_DEVICE
   {ATT_PERSISTENT_BATCH,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1399
#endif

#ifdef INCLUDE_PARAM_DEBUGGING
   {ATT_DEBUG_SC_ACQ,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1400
   {ATT_DEBUG_SC_CAMERA,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1401
   {ATT_DEBUG_SC_DECODE,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1402
   {ATT_DEBUG_SC_EAS,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1403
   {ATT_DEBUG_SC_FIRMWARE_UPDATE,       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1404
   {ATT_DEBUG_SC_FLASH_ACCESS,          ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1405
   {ATT_DEBUG_SC_IBM_RS485,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1406
   {ATT_DEBUG_SC_MOTIONDETECT,          ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1407
   {ATT_DEBUG_SC_NVP,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1408
   {ATT_DEBUG_SC_OS,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1409
   {ATT_DEBUG_SC_PARAM,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1410
   {ATT_DEBUG_SC_Platform,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1411
   {ATT_DEBUG_SC_IBM_USB,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1412
   {ATT_DEBUG_SC_RSI,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1413
   {ATT_DEBUG_SC_RSM,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1414
   {ATT_DEBUG_SC_SASI ,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1415
   {ATT_DEBUG_SC_SNAPI,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1416
   {ATT_DEBUG_SC_SSI,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1417
   {ATT_DEBUG_SC_SCALE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1418
   {ATT_DEBUG_SC_SCALEHOST,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1419
   {ATT_DEBUG_SC_STATS,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1420
   {ATT_DEBUG_SC_STG,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1421
   {ATT_DEBUG_SC_SYSTEM,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1422
   {ATT_DEBUG_SC_TRIGGERMGMT,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1423
   {ATT_DEBUG_SC_UIF,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1424
   {ATT_DEBUG_SC_UTILS,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, //1425
#endif
   {ATT_DEBUG_LOGGING_TYPE,                     ATT_TYPE_BYTE,  (ATT_SM_PRW  | ATT_UM_PRW   ), 1                   ,CONFIG_MASK_ALL},
//   {ATT_ICC_CENTRAL_PROC_ONLY,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1438
   {ATT_MAX_PROCESSING_TIME_PER_FRAME,  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1444
#ifdef INCLUDE_PARAM_DEBUGGING
//   {ATT_DEBUG_SC_BT,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1447
   {ATT_DEBUG_SC_USB,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1449
//   {ATT_DEBUG_SC_BT_KEYS,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1450  
#endif
#ifdef INCLUDE_RFID
   {ATT_RFID_REGION_SKU,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_RO    ), 1                        ,CONFIG_MASK_ALL  }, // 1581
   {ATT_RFID_REGION_CODE,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, // 1583
   {ATT_RFID_HOPPING_ENABLED,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, // 1584
   {ATT_RFID_REG_CHNL_LOWER_MASK,       ATT_TYPE_DWORD,   (ATT_SM_PRW  | ATT_UM_PRW   ), 4                        ,CONFIG_MASK_ALL  }, // 1647
   {ATT_RFID_REG_CHNL_UPPER_MASK,       ATT_TYPE_DWORD,   (ATT_SM_PRW  | ATT_UM_PRW   ), 4                        ,CONFIG_MASK_ALL  }, // 1648

#endif
#if defined(INCLUDE_DIGIMARC)
   {ATT_DIGIMARC_EN,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, // 1687
   {ATT_DIGIMARC_IMG1_FREQ,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, // 1688
   {ATT_DIGIMARC_IMG1_STRATEGY,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, // 1689
#endif

#ifndef INCLUDE_BLUETOOTH
   {ATT_COLES_POLE_DISPLAY,             ATT_TYPE_BYTE,    (ATT_MFG_PERMISSIONS       ), 1                         ,CONFIG_MASK_ALL  }, // 1692
   {ATT_TOSHIBA_TEC_SCAN_ENA_TO_DECODE_DLY,ATT_TYPE_BYTE, (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1694
   {ATT_BEEP_ON_AUX_DECODE,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1695
#endif
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_LINK_SUPERVISION_TIMEOUT,    ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 1698
#endif    
   {ATT_DATABAR_14_SEC_LVL,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1706
   {ATT_DATABAR_EXP_SEC_LVL,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1707
   {ATT_REFLECTIVE_PREF,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1709
   {ATT_ECLEVEL,                        ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 1710
#ifdef INCLUDE_LAMP_MODE
   {ATT_LAMP_MODE,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1711
   {ATT_LAMP_OFF_TIMEOUT,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1712
#endif
#ifndef WIRELESS_DEVICE
   {ATT_CDC_HOST_FORMAT,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1713
#endif
   {ATT_CAMERA_BUTTON_ENABLE,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1716
   {ATT_CAMERA_BUTTON_DELAY,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1717
   {ATT_GRIDMATRIX_EN,                  ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1718
   {ATT_GRIDMATRIX_INVERSE,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1719
//   {ATT_LIGHT_IMMUNITY,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1722
   {ATT_PID_VAL,                        ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 1725
#ifndef WIRELESS_DEVICE
   {ATT_IBM_FLASHUPDATE_ENABLE,         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1727
   {ATT_IBM_SPEC_LVL,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1729
#endif
   {ATT_UPCE_SUPP,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1735
   {ATT_GRIDMATRIX_MIRROR,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1736
#ifdef WIRELESS_DEVICE
   {ATT_BT_SAVE_CONNECTION_INFO_TO_FLASH,ATT_TYPE_FLAG,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1743
#endif
   {ATT_FEBRABAN_ENABLE,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, // 1750
   {ATT_SECUR_PHARM_EN,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, // 1752
   {ATT_SECUR_PHARM_FORMAT,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW   ), 1                        ,CONFIG_MASK_ALL  }, // 1753

#if defined(INCLUDE_STATS_DECTIME_HG_BINS_and_DECODE_DATA)
   {ATT_STATS_BC_IMG_SAV_BTYPE_LIST,    ATT_TYPE_ARRAY,  (ATT_SM_PRW  | ATT_UM_PRW   ), STATS_IMG_SAV_SYMBOL_NUM*sizeof(INT16U),CONFIG_MASK_ALL}, // 1755
   {ATT_STATS_BC_IMG_SAV_HG_BIN_TH,     ATT_TYPE_WORD,   (ATT_SM_PRW  | ATT_UM_PRW   ), 1                         ,CONFIG_MASK_ALL  }, // 1756
#endif
   {ATT_HP_LINK_MODE,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1763
//   {ATT_BATT_DISCONNECT_EN,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1765
//   {ATT_OCR_COMMON_FONTS_EN,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1766
//   {ATT_C39_BIG_GAP_EN,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1767
   {ATT_OCR_REDUNDANCY,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1770
   {ATT_MULTI_DECODE_PROTECTION,        ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1771
   {ATT_ENHANCED_DEMOTE_RSS,            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1774 
   {ATT_CBAR_SECURITY_LVL,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1776
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_AUTO_RECONN_SLEEP,           ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 1778 
   {ATT_BT_AUTO_RECONN_SEQ_CNT,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1779
#endif
   {ATT_DIAG_CLICK,                     ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 1781
   {ATT_LARGE_BARCODE_SSTO,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1782
   {ATT_MOD16_CBAR_CHKDGT,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1784
   {ATT_LENGTH_OF_LARGE_BARCODE_SSTO,   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1787
   {ATT_USB_AUX_PORTS,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1822
   {ATT_USER_DATA,                      ATT_TYPE_STRING,  (ATT_SM_PRW  | ATT_UM_PRW  ), USER_DATA_LEN+1           ,CONFIG_MASK_ALL  }, // 1825
   {ATT_ISERIALNUMBER_FORMAT,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1832
   {ATT_IGNORE_SCALE_5_DIGIT_DIRECTIVE, ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1842
   {ATT_SAME_SYMBOL_EXCLUDES_SYMBOL_TYPE, ATT_TYPE_BYTE,  (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1844
   {ATT_LINKED_QR_MODE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1847
   {ATT_UPC_PCD,                        ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1867
   {ATT_EAN0_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1868
   {ATT_EAN1_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1869
   {ATT_EAN2_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1870
   {ATT_EAN3_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1871
   {ATT_EAN4_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1872
   {ATT_EAN5_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1873
   {ATT_EAN6_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1874
   {ATT_EAN7_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1875
   {ATT_EAN8_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1876
   {ATT_EAN9_PCD,                       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1877
   {ATT_CONNECTED_AS_CASCADED_DEVICE,   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1879
   {ATT_OUTDOOR_PICKLIST,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1880
   {ATT_TRANSMIT_EAN8_CHK_DIGIT,        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1881
   {ATT_TRANSMIT_EAN13_CHK_DIGIT,       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1882
#ifdef INCLUDE_BLUETOOTH
   {ATT_BT_CHECK_LINK,                  ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1899
#endif
   {ATT_TRANSMIT_C39_START_STOP,        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1900
   {ATT_DECODE_UPC_WITH_VOIDS,          ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1901
   {ATT_DECODE_UPC_WITH_VOIDS_REDUNDANCY,ATT_TYPE_BYTE,   (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1902
#ifdef INCLUDE_ALLY   
   {ATT_ALLY_EEPROM_SHADOW,             ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_RO   ), 80                        ,CONFIG_MASK_ALL  }, // 1905
#endif
   {ATT_DOTCODE_EN,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1906
   {ATT_DOTCODE_INVERSE,                ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1907
   {ATT_DOTCODE_MIRROR,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1908
   {ATT_VIDEO_JPEG_QUALITY,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1909
   {ATT_VIDEO_JPEG_QUALITY_OR_SIZE_OPTION, ATT_TYPE_FLAG, (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1910
   {ATT_HANDHELD_ACTIVATION,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1927
   {ATT_DOTCODE_PRIORITIZE,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1937
   {ATT_RS232_POWER_ON_MODE,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1939
   {ATT_REJECT_SAME_WEIGHT,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1968
   {ATT_SCALE_IN_MOTION_DELAY_10MSEC,   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2051
   {ATT_SCALE_RESPONSE_DELAY_10MSEC,    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2052
   {ATT_SCALE_READ_WEIGHT_DELAY_50MSEC, ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2074   
   {ATT_IBM_SCANNER_GENERIC_MGMT_INFO_EN, ATT_TYPE_FLAG,  (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1940
   {ATT_IBM_SCANNER_VENDOR_SPE_MGMT_INFO_EN,ATT_TYPE_FLAG, (ATT_SM_PRW | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1941
   {NUM_IBM_SCALE_GENERIC_MGMT_INFO,    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1942   
   {ATT_MIRROR_FLIP_IMAGE,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1945
   {ATT_WEBLINK_QR,                     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1947
   {ATT_NCR_LABEL_ID_MODE,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1948
   {ATT_RANGE_LIMIT_FACTOR,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1950
//   {ATTR_RFID_CACHE_MGMT,               ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1965
   {ATT_XMIT_GS1_AS_ASCII_ON_IBM_TT,    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 1971
//   {ATT_MFI_COMPATIBILITY,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2022
   {ATT_POST_POSTI4S,                   ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2031
   {ATT_MOMENTARY_TRIG_MODE_ALT,        ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2032

   {ATT_FLEXI_PAUSE_EN,                 ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2047
#ifdef INCLUDE_ELECTRIC_FENCE
   {ATT_ELEC_FENCE_ALARM_EN,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2053
   {ATT_ELEC_FENCE_TIME_BEFORE_ACTIVE,  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2054
   {ATT_ELEC_FENCE_TIMEOUT,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2055
#endif
//   {ATT_TIFF_BIG_ENDIAN,                ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2059
   {ATT_DOTCODE_ECC_ERASURE,            ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2063
   {ATT_SCAN_AVOIDANCE,                 ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2075
   {ATT_SCAN_AVOIDANCE_THRESHOLD,       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2076
   {ATT_ENHANCED_DOTTED_DM,             ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2106
   {ATT_RS232_VARIANT_LABEL_ID_MODE,    ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2108
   {ATT_RS232_VARIANT_CODE_TYPE,        ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2110
   {ATT_RS232_VARIANT_HOST_NUM,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2111
   {ATT_HOST_CODE_ID_CONVERT,           ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW  ), HOST_CODE_ID_CONVERT_LEN  ,CONFIG_MASK_ALL  }, // 2115
#ifdef INCLUDE_ELECTRIC_FENCE
   {ATT_ELEC_FENCE_ALARM_DEFEAT,        ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2119
   {ATT_ELEC_FENCE_ALARM_PAUSE,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2120
 //{ATT_ELEC_FENCE_ALARM_CRAD_EN,       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2124
#endif
#if defined(INCLUDE_RFID) 
   {ATT_RFID_HEX_TO_ASCII,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2135
   {ATT_RFID_START_END_CONVERT_CHAR,    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2136
#endif
//   {ATT_AUTO_CRADLE_UPLOAD_EN,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2139
//   {ATT_CRADLE_CFG_UPLOAD_CRC,          ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 2245
#ifdef INCLUDE_ELECTRIC_FENCE
   {ATT_ELEC_FENCE_AUDIO_ALARM,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2246
   {ATT_ELEC_FENCE_LEDS_ALARM,          ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2247
   {ATT_ELEC_FENCE_ILLUM_ALARM,         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2248
   {ATT_ELEC_FENCE_HAPTICS_ALARM,       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2249   
#endif
   {ATT_DATALOGIC_FORMAT_ENABLE,        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2253   
   {ATT_INKSPREAD,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2254
   {ATT_SERIAL_SCAN_ENA_DIS_CMD,        ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2260
   {ATT_TRANSMIT_BBOX_COORDINATES,      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2261
#if defined(INCLUDE_BLUETOOTH) && !defined(CRADLE_PROD)
   {ATT_NIGHT_MODE_EN_DIS_RADIO_BEEPS,  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2262
   {ATT_NIGHT_MODE_EN_DIS_LO_BATT_BEEP, ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2263
#endif
//   {ATT_NIGHT_MODE_EN_DIS_PARAM_PROG_BEEPS, ATT_TYPE_BYTE, (ATT_SM_PRW  | ATT_UM_PRW  ), 1                        ,CONFIG_MASK_ALL  }, // 2264
   {ATT_UPCA_REPORTAS_EAN13,            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2268

   {ATT_DELIMITER_PAUSE_MARKER,         ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2287 
   {ATT_DELIMITER_PAUSE_TIME,           ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2288 
#ifdef ADF_RULESET_HOST_SEL
   // deprecated for ADF2
   {ATT_ADF2_RULE_SET1_HOST,            ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 2289
   {ATT_ADF2_RULE_SET2_HOST,            ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 2290
   {ATT_ADF2_RULE_SET3_HOST,            ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 2291
   {ATT_ADF2_RULE_SET4_HOST,            ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 2292
   {ATT_ADF2_RULE_SET5_HOST,            ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 2293
   {ATT_ADF2_RULE_SET6_HOST,            ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 2294
   {ATT_ADF2_RULE_SET7_HOST,            ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 2295
   {ATT_ADF2_RULE_SET8_HOST,            ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_PRW  ), 2                         ,CONFIG_MASK_ALL  }, // 2296
#endif
   {ATT_NCR_CHANGE_HOST_CODE_TYPES,     ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2297
   {ATT_NCR_QR_FILTER_HTTP,             ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2298
   {ATT_NCR_QR_FILTER_WWW,              ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2299

//   {ATT_INCREASE_KBD_PULSE_WIDTH,       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2323
//   {ATT_DECREASE_KBD_PULSE_WIDTH,       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2324
   {ATT_WALMART_VOLUME_CONTROL,         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2339
   {ATT_SCALE_ODM_VER,                  ATT_TYPE_STRING,(ATT_MFG_PERMISSIONS         ), 16+1                      ,CONFIG_MASK_ALL  }, // 2357 
   {ATT_EXTEND_SAME_SYMBOL_TIMEOUT,     ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2367
   {ATT_ADF2_PREAMBLE_MAX,              ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  }, // 2370
   {ATT_ADF2_COMPACT_CRITERIA_MAX,      ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 2371
   {ATT_ADF2_COMPACT_ACTION_MAX,        ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 2372
   {ATT_GS1_DIGITAL_LINK_EN,            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2373
   {ATT_GS1_DIGITAL_LINK_MODE,          ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2374
   {ATT_VOLUME_BUTTON_BEEP_SUPPRESSION, ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2375
   {ATT_BEEPER_VOLUME_ALT,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2383
   {ATT_ENABLE_BEEPER_VOLUME_ALT,       ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2384
   {ATT_COLOR_CAMERA_CONTINUOUS_MODE,   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2385
   {ATT_TRIG_ON_SCAN_ENABLE,            ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2398
   {ATT_EXTENDED_SSTO,                  ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2399
   {ATT_NOT_ON_FILE_BEEPS,              ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2411
   {ATT_SYNC_BEEP_VOLUME,               ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2412
   {ATT_DOUBLE_DECODE_PREVENTION,       ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2424
   {ATT_WW_ENABLE,                      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2427
   {ATT_OBJDET_MODE,                    ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2431
   {ATT_WW_HEARTBEAT_LED_MODE,          ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  }, // 2465
// ATAG SYSTEM_PARAMETER END 2468
   
//------------------------------------------------------------------------------------------------------------------------------------------
// Non-parameter attributes start at 5,000
#ifdef INCLUDE_IBM_RS485
   {ATT_IBM_IGNORE_CONFIG_DIRS,         ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
#ifdef INCLUDE_IBM
   {ATT_IBM_HH_IGNORE_CONFIG_DIRS,      ATT_TYPE_FLAG,    (ATT_SM_PRW  | ATT_UM_PRW  ), 1                         ,CONFIG_MASK_ALL  },
#endif
     {ATT_SET_SW_COMPONENT,             ATT_TYPE_BYTE,    (ATT_SM_WO   | ATT_UM_WO    ), 1                        ,CONFIG_MASK_ALL  },   // Set SW component number (ex. 3 - product code)
     {ATT_GET_META_DATA,                ATT_TYPE_ARRAY,   (ATT_SM_RO   | ATT_UM_RO    ), sizeof(META_DATA_T)      ,CONFIG_SUPERVISOR},      
     {ATT_GET_FIRMWARE,                 ATT_TYPE_ARRAY,   (ATT_SM_RO   | ATT_UM_RO    ), sizeof(SW_SC_T)          ,CONFIG_SUPERVISOR},     
   {ATT_CONTEXT_ADDRESS,                ATT_TYPE_STRING,  (ATT_SM_RW   | ATT_UM_RW    ), 10+1                     ,CONFIG_SUPERVISOR},
#ifdef INCLUDE_STATS
   {ATT_STATS_RESET,                    ATT_TYPE_WORD,    (ATT_SM_WO   | ATT_UM_WO   ), 2                         ,CONFIG_MASK_ALL  },   // Reset single stat param
#endif
   {ATT_GET_CURRENT_INTERFACE,          ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO    ), 2                        ,CONFIG_MASK_ALL},  
   {ATT_GET_SUPPORTED_INTERFACES,       ATT_TYPE_ARRAY,   (ATT_SM_RO   | ATT_UM_RO    ), (2 * NUM_SUPPORTED_INTERFACES) ,CONFIG_MASK_ALL},         
#ifdef SWITCH_NIGHTMODE_SUPPORT
   {ATT_NIGHT_MODE,                      ATT_TYPE_FLAG,    (ATT_SM_RW   | ATT_UM_RW   ), 1                         ,CONFIG_MASK_ALL  },   // 5014
#endif
//   {ATT_PAGER_MOTOR_AVAIL,               ATT_TYPE_FLAG,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   // 5015
#if defined(AUDIO_DOWNLOAD)
   {ATT_DOWNLOADABLE_DECODE_TONE,        ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_PRW   ), (DOWNLOADABLE_DECODE_TONE_ATTRIBUTE_SIZE) ,CONFIG_MASK_ALL}, // 5016
   {ATT_DOWNLOADABLE_DECODE_TONE_STATUS, ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO    ), 1                                         ,CONFIG_MASK_ALL}, // 5017  
   {ATT_DOWNLOADABLE_DECODE_TONE_FILENAME, ATT_TYPE_STRING,(ATT_SM_PRW  | ATT_UM_PRW   ), (DOWNLOADABLE_DECODE_TONE_FILENAME_SIZE)  ,CONFIG_MASK_ALL}, // 5018
#endif

   {ATT_DOWNLOADABLE_PARAM_CFG,         ATT_TYPE_BYTE,  (ATT_SM_RO   | ATT_UM_RO     ), 1                         ,CONFIG_MASK_ALL  },   // 5021
#if defined(INCLUDE_SSC_DRM)
   {ATT_DRM_SET_LICENSE_INDEX,          ATT_TYPE_BYTE,    (ATT_SM_RW   | ATT_UM_RW   ), 1                         ,CONFIG_MASK_ALL  },   // 5022 
   {ATT_DRM_GET_LICENSE_KEY,            ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), LICENSE_KEY_SIZE          ,CONFIG_MASK_ALL  },   // 5023 
#endif
#if defined(ADF2)
   {ATT_ADF2_RULE_SET_STATE,            ATT_TYPE_WORD,    (ATT_SM_RW   | ATT_UM_RW   ), 2                         ,CONFIG_MASK_ALL  },   // 5031 
#endif
   {ATT_DEFAULT_STATUS_BLOCK,           ATT_TYPE_BYTE,  (ATT_SM_WO   | ATT_UM_HIDDEN ), 1                         ,CONFIG_MASK_ALL  },   // 5109
#if defined(BT_ERROR_LOGGING)
   {ATT_TEST_TX_ISSUE,                  ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   // 5128
#endif
#ifdef INCLUDE_DEC_PERF
   // Decode Performance attributes 5350-5360
   {ATT_DECPERF_TRIG_TO_CAM_TIME,       ATT_TYPE_DWORD,    (ATT_SM_RO   | ATT_UM_RO   ), 4                        ,CONFIG_MASK_ALL  }, // 5350
   {ATT_DECPERF_CAM_TO_1STFRAME_TIME,   ATT_TYPE_DWORD,    (ATT_SM_RO   | ATT_UM_RO   ), 4                        ,CONFIG_MASK_ALL  }, // 5351
   {ATT_DECPERF_CAM_TO_DECSTART_TIME,   ATT_TYPE_DWORD,    (ATT_SM_RO   | ATT_UM_RO   ), 4                        ,CONFIG_MASK_ALL  }, // 5352
   {ATT_DECPERF_DEC_PROC_TIME,          ATT_TYPE_DWORD,    (ATT_SM_RO   | ATT_UM_RO   ), 4                        ,CONFIG_MASK_ALL  }, // 5353
   {ATT_DECPERF_DEC_TO_BEEP_TIME,       ATT_TYPE_DWORD,    (ATT_SM_RO   | ATT_UM_RO   ), 4                        ,CONFIG_MASK_ALL  }, // 5354
   {ATT_DECPERF_PROC_NUM_FRAMES,        ATT_TYPE_DWORD,    (ATT_SM_RO   | ATT_UM_RO   ), 4                        ,CONFIG_MASK_ALL  }, // 5355
   {ATT_DECPERF_RECV_NUM_FRAMES,        ATT_TYPE_DWORD,    (ATT_SM_RO   | ATT_UM_RO   ), 4                        ,CONFIG_MASK_ALL  }, // 5356
   {ATT_DECPERF_PROC_FRAME_TIMES,       ATT_TYPE_STRING,   (ATT_SM_RO   | ATT_UM_RO   ), 500+1                    ,CONFIG_MASK_ALL  }, // 5357
#endif
//------------------------------------------------------------------------------------------------------------------------------------------
// Action attributes start at 6,000
   {ATT_SET_UIF,                        ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_SET_DEFAULTS,                   ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_GET_PARBUF,                     ATT_TYPE_ARRAY,   (ATT_SM_RO   | ATT_UM_RO   ), sizeof(default_table_a)   ,CONFIG_MASK_ALL  },
   {ATT_BOOTUP_BEEP,                    ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_REBOOT,                         ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_HOST_TRIGGER_SESSION,           ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  }, 
#if defined(INCLUDE_SCALE)
   {ATT_ENTER_FAT_SCALE_CAL,          ATT_TYPE_ACTION, (ATT_SM_WO   | ATT_UM_HIDDEN), 1                        ,CONFIG_MASK_ALL},
   {ATT_SCALE_SAVE_RESET,             ATT_TYPE_ACTION, (ATT_SM_WO   | ATT_UM_HIDDEN), 1                        ,CONFIG_MASK_ALL},
   {ATT_SCALE_GET_WGHT_STATUS,        ATT_TYPE_ARRAY,  (ATT_SM_RO   | ATT_UM_HIDDEN), 12                       ,CONFIG_MASK_ALL},
#endif
#ifdef INCLUDE_STATS
   {ATT_STATS_RESET_ALL,                ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },   // Reset all statistical parameter  
#endif
   {ATT_ATTRIBUTE_EVENT,                ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                        ,CONFIG_MASK_ALL  },
#if defined(INCLUDE_SCALE)
   {ATT_SCALE_READ_WEIGHT,            ATT_TYPE_ARRAY,  (ATT_SM_RO   | ATT_UM_RO    ), 6                        ,CONFIG_MASK_ALL},
   {ATT_SCALE_ZERO,                   ATT_TYPE_ACTION, (ATT_SM_WO   | ATT_UM_WO    ), 1                        ,CONFIG_MASK_ALL},
   {ATT_SCALE_RESET,                  ATT_TYPE_ACTION, (ATT_SM_WO   | ATT_UM_WO    ), 1                        ,CONFIG_MASK_ALL},
   {ATT_SCALE_READ_HIRES_WEIGHT,      ATT_TYPE_LONGINT,(ATT_SM_RO   | ATT_UM_RO    ), 4                        ,CONFIG_MASK_ALL},
   {ATT_SCALE_READ_HIPRECISION_WEIGHT,  ATT_TYPE_LONGINT,(ATT_SM_RO    | ATT_UM_RO   ), 4                        ,CONFIG_MASK_ALL},
   {ATT_SCALE_READ_CAL_SWITCH,        ATT_TYPE_BYTE,   (ATT_SM_RO   | ATT_UM_RO    ), 1                        ,CONFIG_MASK_ALL},
#endif //defined(INCLUDE_SCALE)
#if defined(AUDIO_DOWNLOAD)
   {ATT_DOWNLOADABLE_DECODE_TONE_ERASE, ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                        ,CONFIG_MASK_ALL  },
#endif
   {ATT_IMG_ACTION,                     ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 8                        ,CONFIG_MASK_ALL  },
   #if defined(INCLUDE_BLUETOOTH)
   {ATT_BT_DISCONNECT,                  ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },
#endif
//   {ATT_PAGER_MOTOR_ACTION,             ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },   
#ifdef INCLUDE_LAMP_MODE
   {ATT_LAMP_MODE_CONTROL,              ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },
#endif
#if defined(INCLUDE_STATS_DECTIME_HG_BINS_and_DECODE_DATA)   
   {ATT_GET_SLOWEST_DEC_IMG,            ATT_TYPE_WORD,    (ATT_SM_WO   | ATT_UM_WO   ), 2                         ,CONFIG_MASK_ALL  },
#endif   
#ifdef INCLUDE_EXTENDED_ASSET
   {ATT_CALC_ATTRIBUTE_CRC,             ATT_TYPE_ACTION,  (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },  // 6041
#endif
//------------------------------------------------------------------------------------------------------------------------------------------
#if defined(INCLUDE_SSC_DRM)
   {ATT_DRM_LICENSE_LOAD,               ATT_TYPE_STRING,  (ATT_SM_WO   | ATT_UM_WO   ), LICENSE_KEY_SIZE          ,CONFIG_MASK_ALL  },
   {ATT_DRM_LICENSE_REMV,               ATT_TYPE_BYTE,    (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },   
   {ATT_DRM_LICENSE_COMMIT,             ATT_TYPE_BYTE,    (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },   
#endif
// Non parameter attributes start at 10,000
#ifdef IMG_AVERAGE_SUPPORT
   {ATT_NUM_IMG_AVERAGE,                ATT_TYPE_BYTE,    (ATT_SM_RW   | ATT_UM_RW   ), 1                         ,CONFIG_MASK_ALL  },
#endif
#ifdef INCLUDE_ALLY
   {ATT_ALLY_EEPROM_READ,               ATT_TYPE_ARRAY,   (ATT_SM_RO   | ATT_UM_HIDDEN),128                       ,CONFIG_MASK_ALL  },
#endif
#ifdef INCLUDE_STATS
//------------------------------------------------------------------------------------------------------------------------------------------
// Statistic Attributes start at 15000-19999
   #define STATS_ATTRIBUTE_INFO // include only 'attribute info' stuff 
   #include "stats_api.i"           
   #undef STATS_ATTRIBUTE_INFO 
#endif


//------------------------------------------------------------------------------------------------------------------------------------------
// Discovery attributes start at 20,000
   {ATT_FIRM_VERSION,                   ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), RELEASE_NAME_LEN+1        ,CONFIG_MASK_ALL  },
   {ATT_ENGINE_ID,                      ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_HARDWARE_VERSION,               ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_DEVICE_CLASS,                   ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 18+1                      ,CONFIG_MASK_ALL  },
   {ATT_SCANKIT_VERSION,                ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), SCANKIT_NAME_LEN+1        ,CONFIG_MASK_ALL  },
   {ATT_FIRM_VERSION_CONCAT,            ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), CONCAT_RELEASE_NAME_LEN+1 ,CONFIG_MASK_ALL  },
   {ATT_PRIVILEGE_LEVEL,                ATT_TYPE_BYTE,    (ATT_SM_WO   | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },
   {ATT_RSM_VERSION,                    ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), RSM_VERSION_LEN+1         ,CONFIG_MASK_ALL  },
   {ATT_TLRN_VERSION,                   ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), TOP_LEVEL_RELEASE_LEN+1   ,CONFIG_MASK_ALL  },
#ifndef SCANNER_1D_SYSTEM
   {ATT_IMAGEKIT_VERSION,               ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), IMAGEKIT_NAME_LEN+1       ,CONFIG_MASK_ALL  },   // imagekit Revision
#endif
// ATT_DL_PARSER_VERSION_ID  
//   {ATT_GET_SW_COMPONENTS,              ATT_TYPE_ARRAY,   (ATT_SM_RO   | ATT_UM_RO   ), SW_COMPONENTS_LEN         ,CONFIG_MASK_ALL  },   // Get supported SC components   
#ifdef INCLUDE_FLEXI_SCRIPT
   {ATT_FLEXI_VERSION,                  ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), FLEXI_VER_STRING_LEN+1,    CONFIG_MASK_ALL  },
#endif
   {ATT_BUILD_NUMBER,                   ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 32                        ,CONFIG_MASK_ALL  },
   {ATT_PLATFORM_ID,                    ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   // 20020
   {ATT_SYS_CONFIG,                     ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_HIDDEN),2                         ,CONFIG_MASK_ALL  },
   {ATT_PHYSICAL_DEVICE_NAME,           ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 20+1                      ,CONFIG_MASK_ALL  },   // 20025
   {ATT_MODEL_NAME,                     ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), MAX_MODEL_NAME+1          ,CONFIG_MASK_ALL  },   // 20026
   {ATT_BUS_TYPE,                       ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   // 20027
   {ATT_DEVICE_CATEGORY,                ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   // 20028
   {ATT_DEVICE_ID,                      ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 20+1                      ,CONFIG_MASK_ALL  },   // 20029
   {ATT_MANUFACTURER_NAME,              ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 20+1                      ,CONFIG_MASK_ALL  },   // 20030
#ifdef ADF2
   {ATT_ADF_VERSION_NUM,                ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },   // 20035
#endif
#ifdef INCLUDE_BLUETOOTH
   {ATT_IN_CRADLE_DETECT,               ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   // 25000 - In cradle detection
   {ATT_OPERATION_MODE,                 ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   // Operation Mode
   {ATT_CHARGING,                       ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   // Charging
#endif
   {ATT_SCANNER_HEALTH,                 ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   // heartbeat
   {ATT_LAST_DECODE_DATA,               ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), LEN_DECODE_DATA_STORED+1  ,CONFIG_MASK_ALL  },   // return 25 chars of last decode    ////
#if defined(INCLUDE_SCALE)    
   {ATT_SCALE_WEIGHT_MIN,             ATT_TYPE_DWORD,  (ATT_SM_RO   | ATT_UM_RO    ), 4                       ,CONFIG_MASK_ALL},   // return the minimum weight that the scale can measure
   {ATT_SCALE_WEIGHT_MAX,             ATT_TYPE_DWORD,  (ATT_SM_RO   | ATT_UM_RO    ), 4                       ,CONFIG_MASK_ALL},   // return the maximum weight that the scale can measure
   {ATT_SCALE_CALIBRATION_COUNTER,      ATT_TYPE_WORD,   (ATT_SM_RO    | ATT_UM_RO    ), 2                        ,CONFIG_MASK_ALL  },
   {ATT_SCALE_LEGAL_PARAM_COUNTER,      ATT_TYPE_WORD,   (ATT_SM_RO    | ATT_UM_RO    ), 2                        ,CONFIG_MASK_ALL  },
#endif
#if defined(INCLUDE_DLLWRAP) || defined(INCLUDE_SSC_DRM)
   { ATT_DLLWRAP_SUPPORTED,             ATT_TYPE_FLAG,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  }, // 25009
   { ATT_DLLWRAP_DLP_LOADED,            ATT_TYPE_ARRAY,   (ATT_SM_RO   | ATT_UM_RO   ), SWID_SIZE                 ,CONFIG_MASK_ALL  }, // 25010
   { ATT_DLLWRAP_DLP_VERSION,           ATT_TYPE_ARRAY,   (ATT_SM_RO   | ATT_UM_RO   ), LIBVERS_SIZE              ,CONFIG_MASK_ALL  }, // 25011
   { ATT_DLLWRAP_DLP_ACTIVATED,         ATT_TYPE_FLAG,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  }, // 25012
#endif
   {ATT_CONFIGURATIONCHECKSUM,          ATT_TYPE_DWORD,   (ATT_SM_RO   | ATT_UM_RO    ), 4                        ,CONFIG_MASK_ALL  }, // 25013
   {ATT_TOTAL_TIME_POWERED_ON_HOURS,    ATT_TYPE_DWORD,   (ATT_SM_RO   | ATT_UM_RO    ), 4                        ,CONFIG_MASK_ALL  }, // 25014
#if defined(INCLUDE_SSC_DRM)
   { ATT_DRM_LICENSE_ACTIVATED,         ATT_TYPE_FLAG,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },   
   { ATT_DRM_FEATURE_LIST,              ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), MAX_OUTPUT_LEN            ,CONFIG_MASK_ALL  },   
   { ATT_DRM_LICENSE_SUPPORTED,         ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), MAX_OUTPUT_LEN            ,CONFIG_MASK_ALL  },     
#endif
#ifdef RESET_CAUSE_DETECTION
   { ATT_LAST_RESET_INFO,               ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 30                        ,CONFIG_MASK_ALL  }, // 25105
#endif
#ifdef ADF2_SYNTAX
   { ATT_ADF2_SYNTAX_ERROR_COUNT,       ATT_TYPE_BYTE,    (ATT_SM_RO   | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  }, // 25109
#endif
//   { ATT_OBJDET_THRESHOLD,              ATT_TYPE_ARRAY,   (ATT_SM_RO   | ATT_UM_RO   ), 32                        ,CONFIG_MASK_ALL  }, // 25106
#ifdef GIFTED_BATTERY
   {ATT_GIFTED_BATTERY_STATUS,          ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },  // 30009
   {ATT_GIFTED_BATTERY_VOLTAGE,         ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30010
   {ATT_GIFTED_BATTERY_CURRENT,         ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30011
   {ATT_GIFTED_BATTERY_PERCENTAGE,      ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30012
   {ATT_GIFTED_BATTERY_STATE_OF_HEALTH, ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30013
   {ATT_GIFTED_BATTERY_DESIRED_VOLTAGE, ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30014
   {ATT_GIFTED_BATTERY_DESIRED_CURRENT, ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30015
   {ATT_GIFTED_BATTERY_PACK_TEMPERATURE,ATT_TYPE_INT,     (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30016
   {ATT_GIFTED_BATTERY_MODEL_NUMBER,    ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 30                        ,CONFIG_MASK_ALL  }, // 30017
   {ATT_GIFTED_BATTERY_MANUFACTURE_DATE,ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 8                         ,CONFIG_MASK_ALL  }, // 30018
   {ATT_GIFTED_BATTERY_FIRMWARE_VERSION,ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 37                        ,CONFIG_MASK_ALL  }, // 30019
   {ATT_GIFTED_BATTERY_FULL_CHARGE_CAPACITY,ATT_TYPE_WORD,(ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_GIFTED_BATTERY_CYCLE_COUNT,     ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_GIFTED_BATTERY_SERIAL_NUMBER,   ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_GIFTED_BATTERY_TIME_TO_FULL_CHARGE,ATT_TYPE_WORD, (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_GIFTED_BATTERY_HIGHEST_TEMP,    ATT_TYPE_INT,     (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_GIFTED_BATTERY_LOWEST_TEMP,     ATT_TYPE_INT,     (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_GIFTED_BATTERY_CHARGING_Y_N,    ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_GIFTED_BATTERY_REMAINING_CAPACITY,ATT_TYPE_WORD,  (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },
   {ATT_GIFTED_BATTERY_CHARGE_STATUS,   ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30028
   {ATT_GIFTED_BATTERY_DESIGN_CAPACITY, ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30029
   {ATT_GIFTED_BATTERY_ID,              ATT_TYPE_STRING,  (ATT_SM_RO   | ATT_UM_RO   ), 32                        ,CONFIG_MASK_ALL  }, // 30030
   {ATT_GIFTED_BATTERY_STATS_STATE,     ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30034
   {ATT_GIFTED_BATTERY_STATE_OF_HEALTH_GG, ATT_TYPE_WORD, (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  }, // 30043
#elif SUPERCAP
   {ATT_BATTERY_VOLTAGE,                ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },  // 30000  
   {ATT_BATTERY_STATUS,                 ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },  // 30003
   {ATT_GIFTED_BATTERY_PERCENTAGE,      ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },  // 30012
   {ATT_GIFTED_BATTERY_STATE_OF_HEALTH, ATT_TYPE_WORD,    (ATT_SM_RW   | ATT_UM_RW   ), 2                         ,CONFIG_MASK_ALL  },  // 30013
   {ATT_BATTERY_IMPEDANCE_VOLTAGE_DROP, ATT_TYPE_WORD,    (ATT_SM_RO   | ATT_UM_RO   ), 2                         ,CONFIG_MASK_ALL  },  // 30044   
#endif   
#if defined(INCLUDE_RFID)
   {ATT_RFID_LAST_TAG_ID,               ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_RO   ), 32+2                      ,CONFIG_MASK_ALL  },  // 35001
   {ATT_RFID_TAG_ID,                    ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_WO   ), 32+2                      ,CONFIG_MASK_ALL  },  // 35002
   {ATT_RFID_BANK,                      ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },  // 35003
   {ATT_RFID_DATA,                      ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_RW   ), 64+2                      ,CONFIG_MASK_ALL  },  // 35004
   {ATT_RFID_OFFSET,                    ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },  // 35005
   {ATT_RFID_LENGTH,                    ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },  // 35006
   {ATT_RFID_PASSWORD,                  ATT_TYPE_ARRAY,   (ATT_SM_PRW  | ATT_UM_WO   ), 4                         ,CONFIG_MASK_ALL  },  // 35007
   {ATT_RFID_COMMAND,                   ATT_TYPE_BYTE,    (ATT_SM_PRW  | ATT_UM_WO   ), 1                         ,CONFIG_MASK_ALL  },  // 35008
   {ATT_RFID_CMD_STATUS,                ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_RO   ), 1                         ,CONFIG_MASK_ALL  },  // 35009
   {ATT_RFID_TAG_CACHE,                 ATT_TYPE_WORD,    (ATT_SM_PRW  | ATT_UM_RW   ), 1                         ,CONFIG_MASK_ALL  },  // 35010
#endif   

   {50000,                   ATT_TYPE_DWORD,    (ATT_SM_PRW  | ATT_UM_RW   ), 4                         ,CONFIG_MASK_ALL  },
   {50001,                   ATT_TYPE_BYTE,     (ATT_SM_PRW  | ATT_UM_RW   ), 1                         ,CONFIG_MASK_ALL  },
   {50002,                   ATT_TYPE_WORD,     (ATT_SM_PRW  | ATT_UM_RW   ), 2                         ,CONFIG_MASK_ALL  },
   {50003,                   ATT_TYPE_DWORD,    (ATT_SM_PRW  | ATT_UM_RW   ), 4                         ,CONFIG_MASK_ALL  },
   {50004,                   ATT_TYPE_DWORD,    (ATT_SM_PRW  | ATT_UM_RW   ), 4                         ,CONFIG_MASK_ALL  },
   {50005,                   ATT_TYPE_BYTE,     (ATT_SM_PRW  | ATT_UM_RW   ), 1                         ,CONFIG_MASK_ALL  },

   {ATT_LAST_VALUE,                     ATT_TYPE_NONE,    (ATT_SM_PRW  | ATT_UM_PRW  ), 0                         ,CONFIG_MASK_ALL  },

#endif  //INCLUDE_INFO

#ifdef INCLUDE_READ_FUNCS

// Table containing access functions for "reading" the value of an attribute.
//    !!!!!! ANY READABLE ATTRIBUTE MUST HAVE AN ENTRY IN THIS TABLE !!!!!!
// NOTE: THESE ATTRIBUTE FUNCTIONS MUST BE IN ASCENDING ORDER OF ATTRIBUTE VALUES!!!

#ifdef INCLUDE_IBM_RS485
   {ATT_IBM_IGNORE_CONFIG_DIRS,         {(void *)ibm_get_config_dirs_status         } }, // 5000
#endif
#if defined(INCLUDE_IBM) && !defined(EXCLUDE_USB_IBM)
   {ATT_IBM_HH_IGNORE_CONFIG_DIRS,      {(void *)ibm_hh_get_config_dirs_status      } }, // 5001
#endif
   {ATT_GET_META_DATA,                  {(void*)get_meta_data                       } }, // 5003
   {ATT_GET_FIRMWARE,                   {(void*)get_firmware                        } }, // 5004
#ifdef INCLUDE_RSM_EVENTS
   {ATT_CONTEXT_ADDRESS,                {(void*) mgmt_get_context_address           } }, // 5005
#endif
   {ATT_GET_CURRENT_INTERFACE,          {(void *)get_current_interface              } }, // 5007 Get current host and variant
   {ATT_GET_SUPPORTED_INTERFACES,       {(void *)get_supported_interfaces           } }, // 5008 Get a list of all supported host and variants on the product
#ifdef SWITCH_NIGHTMODE_SUPPORT
   {ATT_NIGHT_MODE,                     {(void *)get_night_mode                     } }, // 5014 Night mode state
#endif
//   {ATT_PAGER_MOTOR_AVAIL,              {(void *)get_pager_motor_avail              } }, // 5015 Pager motor populated or not
#if defined(AUDIO_DOWNLOAD)
   {ATT_DOWNLOADABLE_DECODE_TONE,       {(void *)get_downloadable_decode_tone       } }, // 5016
   {ATT_DOWNLOADABLE_DECODE_TONE_STATUS,{(void *)get_downloadable_decode_tone_status }}, // 5017
   {ATT_DOWNLOADABLE_DECODE_TONE_FILENAME,{(void *)get_downloadable_decode_tone_filename}}, // 5018
#endif
   {ATT_DOWNLOADABLE_PARAM_CFG,         {(void *)get_downloadble_cfg_support        } }, // 5021 Support params download from a 'Param Config' DAT file
#if defined(INCLUDE_SSC_DRM)
   {ATT_DRM_SET_LICENSE_INDEX,          {(void *)get_drm_lk_index                   } }, // 5022 Get License Key index  
   {ATT_DRM_GET_LICENSE_KEY,            {(void *)get_drm_license_key                } }, // 5023 Get License Key detailed info by index which is setu by "set_drm_lk_index()"
#endif
#ifdef ADF2
   {ATT_ADF2_RULE_SET_STATE,            {(void *)get_adf2_rule_set_state            } }, // 5031
#endif
#if defined(BT_ERROR_LOGGING)
   {ATT_TEST_TX_ISSUE,                  {(void *)get_tx_issue_count                 } }, // 5128
#endif                                                                              
#ifdef INCLUDE_DEC_PERF
   // Decode Performance attributes 5350-5360
   {ATT_DECPERF_TRIG_TO_CAM_TIME,        {(void*)decperf_trig_to_cam_time           } }, // 5350 time (ms) from trigger to CamStart done
   {ATT_DECPERF_CAM_TO_1STFRAME_TIME,    {(void*)decperf_cam_to_1stframe_time       } }, // 5351 time (ms) from CamStart done to 1stFrame received
   {ATT_DECPERF_CAM_TO_DECSTART_TIME,    {(void*)decperf_cam_to_decstart_time       } }, // 5352 time (ms) from 1stFrame to DecStart
   {ATT_DECPERF_DEC_PROC_TIME,           {(void*)decperf_dec_proc_time              } }, // 5353 time (ms) from DecStart to Decode
   {ATT_DECPERF_DEC_TO_BEEP_TIME,        {(void*)decperf_dec_to_beep_time           } }, // 5354 time (ms) from Decode to Beep
   {ATT_DECPERF_PROC_NUM_FRAMES,         {(void*)decperf_proc_num_frames            } }, // 5355 number of frames processed
   {ATT_DECPERF_RECV_NUM_FRAMES,         {(void*)decperf_recv_num_frames            } }, // 5356 number of frames received
   {ATT_DECPERF_PROC_FRAME_TIMES,        {(void*)decperf_frame_proc_times           } }, // 5357 string of time(ms) each processed frame
#endif
#ifdef IMG_AVERAGE_SUPPORT
   {ATT_NUM_IMG_AVERAGE,                {(void *)get_num_images_averaged            } }, // 10052
#endif
#ifdef INCLUDE_ALLY
   {ATT_ALLY_EEPROM_READ,               {(void *)get_ally_eeprom_read               } }, // 10064 
#endif
   {ATT_FIRM_VERSION,                   {(void *)get_firmware_revision              } }, // 20004
   {ATT_ENGINE_ID,                      {(void *)get_engine_id                      } }, // 20005 
   {ATT_HARDWARE_VERSION,               {(void *)get_hw_version                     } }, // 20006
   {ATT_DEVICE_CLASS,                   {(void *)get_device_class                   } }, // 20007
   {ATT_SCANKIT_VERSION,                {(void *)get_scankit_revision               } }, // 20008
   {ATT_FIRM_VERSION_CONCAT,            {(void *)get_concatenated_firmware_revision } }, // 20009
   {ATT_RSM_VERSION,                    {(void *)get_rsm_revision                   } }, // 20011
   {ATT_TLRN_VERSION,                   {(void *)get_top_level_revision             } }, // 20012
#ifndef SCANNER_1D_SYSTEM     ////
   {ATT_IMAGEKIT_VERSION,               {(void *)get_imagekit_revision              } }, // 20013 Imagekit version      // varies ... IMGKITDLL_4.10T02.2.2  
#endif                        ////
#ifdef INCLUDE_FLEXI_SCRIPT
   {ATT_FLEXI_VERSION,                  {(void *)Flexi_GetVersion                   } }, // 20017
#endif
   {ATT_BUILD_NUMBER,                   {(void *)get_build_number                   } }, // 20019
   {ATT_PLATFORM_ID,                    {(void *)get_platform_id                    } }, // 20020
   {ATT_SYS_CONFIG,                     {(void *)SysConfigGet                       } }, // 20021
   {ATT_PHYSICAL_DEVICE_NAME,           {(void *)get_physical_device_name,          } }, // 20025
   {ATT_MODEL_NAME,                     {(void *)get_model_name,                    } }, // 20026
   {ATT_BUS_TYPE,                       {(void *)get_bus_type,                      } }, // 20027
   {ATT_DEVICE_CATEGORY,                {(void *)get_device_category,               } }, // 20028
   {ATT_DEVICE_ID,                      {(void *)get_device_id,                     } }, // 20029
   {ATT_MANUFACTURER_NAME,              {(void *)get_manufacturer_name,             } }, // 20030
#ifdef ADF2_MERGE
   {ATT_ADF_VERSION_NUM,                {(void *)get_adf_version,                   } }, // 20035
#endif
#ifdef INCLUDE_BLUETOOTH
   {ATT_IN_CRADLE_DETECT,               {(void *)in_cradle_detect                   } }, // 25000 In cradle detection
   {ATT_OPERATION_MODE,                 {(void *)is_hands_free                      } }, // 25001 Operation mode
   {ATT_CHARGING,                       {(void *)is_charging                        } }, // 25002 Charging
#endif
   {ATT_SCANNER_HEALTH,                 {(void *)get_scannerHealth                  } }, // 25003 scanner health
   {ATT_LAST_DECODE_DATA,               {(void *)get_stored_decode_data             } },   // returns 25 chars of the last successful decode    ////
#if defined(INCLUDE_SCALE)
//   {ATT_SCALE_WEIGHT_MIN,        {(void *)get_scale_weight_min       } },   // return the minimum weight that the scale can measure
//   {ATT_SCALE_WEIGHT_MAX,        {(void *)get_scale_weight_max       } },   // return the maximum weight that the scale can measure
#endif
#ifdef INCLUDE_SCALE
   {ATT_SCALE_CALIBRATION_COUNTER,      {(void*)SCALE_getCalibrationCount           } }, //25007
   {ATT_SCALE_LEGAL_PARAM_COUNTER,      {(void*)SCALE_getLegalParameterCount        } }, //25008
#endif
#if defined(INCLUDE_DLLWRAP) || defined(INCLUDE_SSC_DRM)
   {ATT_DLLWRAP_SUPPORTED,              {(void *)get_dllwrap_supported              } }, // 25009
   {ATT_DLLWRAP_DLP_LOADED,             {(void *)get_dllwrap_dlp_loaded             } }, // 25010
   {ATT_DLLWRAP_DLP_VERSION,            {(void *)get_dllwrap_dlp_version            } }, // 25011
   {ATT_DLLWRAP_DLP_ACTIVATED,          {(void *)get_dllwrap_dlp_activated          } }, // 25012
#endif   
   {ATT_CONFIGURATIONCHECKSUM,          {(void*)ATT_get_ConfigurationChecksum       } }, // 25013
   {ATT_TOTAL_TIME_POWERED_ON_HOURS,    {(void*)get_powered_on_time_hours           } }, // 25014
#if defined(INCLUDE_SSC_DRM)
   {ATT_DRM_LICENSE_ACTIVATED,          {(void *)get_drm_license_activated          } }, // 25102
   {ATT_DRM_FEATURE_LIST,               {(void *)get_drm_feature_list               } }, // 25103
   {ATT_DRM_LICENSE_SUPPORTED,          {(void *)get_drm_license_supported          } }, // 25104
#endif 
#ifdef RESET_CAUSE_DETECTION
   {ATT_LAST_RESET_INFO,                {(void *)get_last_reset_info                } }, // 25105
#endif
//   {ATT_OBJDET_THRESHOLD,               {(void *)get_objdet_thresholds              } }, // 25106
#ifdef ADF2_SYNTAX
   {ATT_ADF2_SYNTAX_ERROR_COUNT,        {(void *)get_adf2_syntax_error_count        } }, // 25109
#endif

#ifdef GIFTED_BATTERY
   {ATT_GIFTED_BATTERY_STATUS,          {(void *)get_gifted_batt_status             } }, // 30009
   {ATT_GIFTED_BATTERY_VOLTAGE,         {(void *)get_gifted_batt_voltage            } }, // 30010
   {ATT_GIFTED_BATTERY_CURRENT,         {(void *)get_gifted_batt_current            } }, // 30011
   {ATT_GIFTED_BATTERY_PERCENTAGE,      {(void *)get_gifted_batt_percentage         } }, // 30012
   {ATT_GIFTED_BATTERY_STATE_OF_HEALTH, {(void *)get_gifted_batt_StateofHealth      } }, // 30013
   {ATT_GIFTED_BATTERY_DESIRED_VOLTAGE, {(void *)get_gifted_batt_desired_voltage    } }, // 30014
   {ATT_GIFTED_BATTERY_DESIRED_CURRENT, {(void *)get_gifted_batt_desired_current    } }, // 30015
   {ATT_GIFTED_BATTERY_PACK_TEMPERATURE,{(void *)get_gifted_batt_temperature        } }, // 30016
   {ATT_GIFTED_BATTERY_MODEL_NUMBER,    {(void *)get_gifted_batt_model_number       } }, // 30017
   {ATT_GIFTED_BATTERY_MANUFACTURE_DATE,{(void *)get_gifted_batt_manu_date          } }, // 30018
   {ATT_GIFTED_BATTERY_FIRMWARE_VERSION,{(void *)get_gifted_batt_firmware_version   } }, // 30019
   {ATT_GIFTED_BATTERY_FULL_CHARGE_CAPACITY,{(void *)get_gifted_batt_full_charge_capacity   } },
   {ATT_GIFTED_BATTERY_CYCLE_COUNT,     {(void *)get_gifted_batt_cycle_count        } },
   {ATT_GIFTED_BATTERY_SERIAL_NUMBER,   {(void *)get_gifted_batt_serial_number      } },
   {ATT_GIFTED_BATTERY_TIME_TO_FULL_CHARGE,{(void *)get_gifted_batt_time_to_full_charge     } },
   {ATT_GIFTED_BATTERY_HIGHEST_TEMP,    {(void *)get_gifted_batt_highest_temp       } },
   {ATT_GIFTED_BATTERY_LOWEST_TEMP,     {(void *)get_gifted_batt_lowest_temp        } }, // 30025
   {ATT_GIFTED_BATTERY_CHARGING_Y_N,	{(void *)get_gifted_batt_charging_Y_N       } }, // 30026
   {ATT_GIFTED_BATTERY_REMAINING_CAPACITY,{(void *)get_gifted_batt_remaining_capacity   } }, // 30027
   {ATT_GIFTED_BATTERY_CHARGE_STATUS,   {(void *)get_gifted_batt_charge_status      } }, // 30028
   {ATT_GIFTED_BATTERY_DESIGN_CAPACITY, {(void *)get_gifted_batt_design_capacity    } }, // 30029
   {ATT_GIFTED_BATTERY_ID,              {(void *)get_gifted_batt_ID                 } }, // 30030
   {ATT_GIFTED_BATTERY_STATS_STATE,     {(void *)get_gifted_batt_stats_state        } }, // 30034
   {ATT_GIFTED_BATTERY_STATE_OF_HEALTH_GG, {(void *)get_gifted_batt_StateofHealth_GG} }, // 30043
#elif SUPERCAP
   {ATT_BATTERY_VOLTAGE,                {(void *)get_cap_voltage                    } }, // 30000 
   {ATT_BATTERY_STATUS,                 {(void *)get_cap_status                     } }, // 30003
   {ATT_GIFTED_BATTERY_PERCENTAGE,      {(void *)get_cap_state_of_charge            } }, // 30012                                                                                         
   {ATT_GIFTED_BATTERY_STATE_OF_HEALTH, {(void *)get_cap_state_of_health            } }, // 30013   
   {ATT_BATTERY_IMPEDANCE_VOLTAGE_DROP, {(void *)get_cap_impedance_voltage_drop     } }, // 30044 
#endif
#if defined(INCLUDE_RFID)
   {ATT_RFID_LAST_TAG_ID,               {(VOIDP_FP)get_rfid_last_tag_id             } }, // 35001
   {ATT_RFID_DATA,                      {(VOIDP_FP)get_rfid_data                    } }, // 35004
   {ATT_RFID_CMD_STATUS,                {(VOIDP_FP)get_rfid_cmd_status              } }, // 35009
   {ATT_RFID_TAG_CACHE,                 {(VOIDP_FP)get_rfid_tag_cache               } }, // 35010
#endif

#if defined(INCLUDE_ICON_DEBUG_RW)
   { 50000, {(void *)debug_read_icon_addr }},
   { 50001, {(void *)debug_read_icon_byte }},
   { 50002, {(void *)debug_read_icon_word }},
   { 50003, {(void *)debug_read_icon_dword }},
#endif
#ifdef INCLUDE_ALLY
   { 50004, {(void *)debug_read_ally_addr }},
   { 50005, {(void *)debug_read_ally_byte }},   
#endif

   // End of table marker
   {ATT_LAST_VALUE,                     {(VOIDP_FP)NULL                             } }

#endif  // INCLUDE_READ_FUNCS

#ifdef INCLUDE_WRITE_FUNCS

// Table containing access functions for "writing" the value of an attribute.
//    !!!!!! ANY WRITEABLE ATTRIBUTE MUST HAVE AN ENTRY IN THIS TABLE !!!!!!
#if defined(INCLUDE_CRYPTO)
   {ATT_AES_KEY,                        {(void *)set_aes_key                 } },        // 737
   {ATT_SHARED_KEY,                     {(void *)set_shared_key              } },        // 738
#endif
#ifdef INCLUDE_STATS_DECTIME_HG_BINS_and_DECODE_DATA
   {ATT_STATS_BC_IMG_SAV_BTYPE_LIST,    {(void *)set_store_bc_list           } },        // 1755
   {ATT_STATS_BC_IMG_SAV_HG_BIN_TH,     {(void *)set_store_bc_threshold      } },        // 1756
#endif
#ifdef INCLUDE_IBM_RS485
   {ATT_IBM_IGNORE_CONFIG_DIRS,         {(void *)ibm_set_config_dirs_status         } }, // 5000
#endif
#if defined(INCLUDE_IBM) && !defined(EXCLUDE_USB_IBM)
   {ATT_IBM_HH_IGNORE_CONFIG_DIRS,      {(void *)ibm_hh_set_config_dirs_status      } }, // 5001
#endif
   {ATT_SET_SW_COMPONENT,               {(void *)set_sw_component                   } }, // 5002
#ifdef INCLUDE_RSM_EVENTS
   {ATT_CONTEXT_ADDRESS,                {(void *)mgmt_set_context_address           } }, // 5005
#endif
#ifdef INCLUDE_STATS
   {ATT_STATS_RESET,                    {(void *)reset_statistic                    } }, // 5006
#endif
#if defined(AUDIO_DOWNLOAD)
   {ATT_DOWNLOADABLE_DECODE_TONE,       {(void *)set_downloadable_decode_tone       } },
   {ATT_DOWNLOADABLE_DECODE_TONE_FILENAME,{(void *)set_downloadable_decode_tone_filename } },
#endif
#ifdef SWITCH_NIGHTMODE_SUPPORT
   {ATT_NIGHT_MODE,                     {(void *)night_mode_toggle                  } }, // 5014
#endif
   {ATT_DEFAULT_STATUS_BLOCK,           {(void *)default_status_block               } }, // 5109
#if defined(INCLUDE_SSC_DRM)
   {ATT_DRM_SET_LICENSE_INDEX,          {(void *)set_drm_lk_index                   } }, // 5022 Set License Key index that to be retrieved
#endif
#ifdef ADF2
   {ATT_ADF2_RULE_SET_STATE,            {(void *)set_adf2_rule_set_state            } }, // 5031
#endif
#ifdef IMG_AVERAGE_SUPPORT
   {ATT_NUM_IMG_AVERAGE,                {(void *)set_num_images_averaged            } }, // 10052
#endif 
   {ATT_PRIVILEGE_LEVEL,                {(void *)set_privilege_level                } }, // 20010l
#ifdef SUPERCAP
   {ATT_GIFTED_BATTERY_STATE_OF_HEALTH, {(void *)cap_state_of_health_req            } }, // 30013
#endif
#if defined(INCLUDE_RFID)
   {ATT_RFID_TAG_ID,                    {(WVOIDP_FP)set_rfid_tag_id                 } }, // 35002
   {ATT_RFID_BANK,                      {(WVOIDP_FP)set_rfid_bank                   } }, // 35003
   {ATT_RFID_DATA,                      {(WVOIDP_FP)set_rfid_data                   } }, // 35004
   {ATT_RFID_OFFSET,                    {(WVOIDP_FP)set_rfid_offset                 } }, // 35005
   {ATT_RFID_LENGTH,                    {(WVOIDP_FP)set_rfid_length                 } }, // 35006
   {ATT_RFID_PASSWORD,                  {(WVOIDP_FP)set_rfid_password               } }, // 35007
   {ATT_RFID_COMMAND,                   {(WVOIDP_FP)set_rfid_command                } }, // 35008
   {ATT_RFID_TAG_CACHE,                 {(WVOIDP_FP)set_rfid_tag_cache              } }, // 35010
#endif   
#if defined(INCLUDE_ICON_DEBUG_RW)
   { 50000, {(void *)debug_write_icon_addr }},
   { 50001, {(void *)debug_write_icon_byte }},
   { 50002, {(void *)debug_write_icon_word }},
   { 50003, {(void *)debug_write_icon_dword }},
#endif
#if defined(INCLUDE_ALLY)
   { 50004, {(void *)debug_write_ally_addr }},
   { 50005, {(void *)debug_write_ally_byte }},
#endif
   {ATT_LAST_VALUE,                     {(WVOIDP_FP)NULL                            } }

#endif   // INCLUDE_WRITE_FUNCS
