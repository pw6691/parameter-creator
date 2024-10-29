/*******************************************************************************
*
*  Filename:      parstruc.h
*
*  Copyright(c) Motorola Inc., 2008
*  Copyright(c) Symbol Technologies Inc., 2003
*
*  Description:     Parameter software include file.
*
*  Author:          Nina Bruk
*
*  Creation Date:   8/20/03
*
*  Derived From:    new
*
*******************************************************************************/
#ifndef PARSTRUC_H
#define PARSTRUC_H

#include "paramnum.h"
#include "parsizes.h"
#include "decapi.h"

// Enable to test parameter fixup/alignment after firmware up-rev & down-rev
#if defined(INCLUDE_SPECIAL_SECTION_EXTENSION_TEST)
   #define SECTION_EXTENSION      unsigned char section_extension[4];
   #define SECTION_EXTENSION_PAD  '-','-','-','-',
#else
   #define SECTION_EXTENSION
   #define SECTION_EXTENSION_PAD
#endif

#define PAR_REV_LEN           3
#define CUSTOM_STR_LEN        2
#define HOST_DATA_LEN         32 // As per Sri-Lanka team

/* rjp todo:  We need to have a review and make these fields bit positional */
#define DEC_OWNED             0
#define HOST_OWNED            1
#define ENG_OWNED             2   /* Parameter only relevent to engines. Not  */
                                  /* reportable to MIMIC. Not changeable when */
                                  /* engine is talking to MIMIC.              */

#define ENG_AND_HOST_OWNED    3   /* someone, I don't really care who, used ENG_OWNED with HOST_OWNED */
#define SPECIAL               4
#define STAT_PARAM            8   /* This is a statistical parameter */
#define PERSISTENT_USER      16   /* This is a persistent user parameter */

#define HIDDEN_PARAMETER_MASK 0x80
#define HIDDEN_DEC_OWNED      (DEC_OWNED | HIDDEN_PARAMETER_MASK)
#define HIDDEN_HOST_OWNED     (HOST_OWNED | HIDDEN_PARAMETER_MASK)


#define USB_SERIAL_SIZE       6

#define START_PARAM           0

#ifndef N_A
#define N_A                   0xff
#endif

#define N_A_BOUND             0xffff


#if 1 // Set to '1' to make a build that will force 'Specials/Mfg' and 'Persistant' parameters to defaults
#define SPECIALS_VALID_TRUE          (0x2B9C)   // Force 'Specials' to defaults
#define PERSISTENT_USER_VALID_TRUE   (0x2B8D)   // Force 'Persistent' to defaults
#else
#define SPECIALS_VALID_TRUE          (0x2B7C)   // Something unique but same for every product
#define PERSISTENT_USER_VALID_TRUE   (0x2B7D)
#endif

/** Plural Stage Added, NSK */
#define MAX_NUM_ID_CHARS      3

#define NUM_2STAGE_CODES      4  /*2 recodes for each row*/
#define NUM_3STAGE_CODES      6  /*2 recodes for each row*/
#define NUM_4STAGE_CODES      8  /*2 recodes for each row*/
#define NUM_SUPP_REC_CHARS    3
#define MAX_NUM_SRC_CHARS     10

/*recognition code data type*/
typedef struct {
   unsigned char character[MAX_NUM_ID_CHARS];
   unsigned char location[MAX_NUM_ID_CHARS];
} REC_CODE_TYPE; //recognition code data type
/** Plural Stage Added End */

#define COUNTRY_KBD_LEN       260
#define CODE_PAGE_LEN         256

#define INCLUDE_BIT_PARAM
#define INCLUDE_BYTE_PARAM
#define INCLUDE_WORD_PARAM
#define INCLUDE_DWORD_PARAM
#define INCLUDE_STRING_PARAM

typedef struct
{
   unsigned short int c39_en                               :  1;    /*  0.0 */
   unsigned short int upca_en                              :  1;    /*  0.1 */
   unsigned short int upce_en                              :  1;    /*  0.2 */
   unsigned short int ean13_en                             :  1;    /*  0.3 */
   unsigned short int ean8_en                              :  1;    /*  0.4 */
   unsigned short int d25_en                               :  1;    /*  0.5 */
   unsigned short int i25_en                               :  1;    /*  0.6 */
   unsigned short int cbar_en                              :  1;    /*  0.7 */
   unsigned short int c128_en                              :  1;    /*  1.0 */
   unsigned short int c93_en                               :  1;    /*  1.1 */
   unsigned short int c11_en                               :  1;    /*  1.2 */
   unsigned short int cmsi_en                              :  1;    /*  1.3 */
   unsigned short int upce1_en                             :  1;    /*  1.4 */
   unsigned short int suppl_2                              :  1;    /*  1.5 */
   unsigned short int suppl_5                              :  1;    /*  1.6 */
   unsigned short int tri_c39                              :  1;    /*  1.7 */
   unsigned short int book_ean                             :  1;    /*  2.0 */
   unsigned short int coupon_en                            :  1;    /*  2.1 */
   unsigned short int isbt128_en                           :  1;    /*  2.2 */
   unsigned short int rss_14_en                            :  1;    /*  2.3 */
   unsigned short int rss_lim_en                           :  1;    /*  2.4 */
   unsigned short int rss_exp_en                           :  1;    /*  2.5 */
   unsigned short int c25_en                               :  1;    /*  2.6 */
   unsigned short int conv_upce2a_b                        :  1;    /*  2.7 */
   unsigned short int conv_ean8to13_b                      :  1;    /*  3.0 */
   unsigned short int upc_a_chk_b                          :  1;    /*  3.1 */
   unsigned short int upc_e_chk_b                          :  1;    /*  3.2 */
   unsigned short int code39_chk_b                         :  1;    /*  3.3 */
   unsigned short int clsi_editing                         :  1;    /*  3.4 */
   unsigned short int notis_editing                        :  1;    /*  3.5 */
   unsigned short int xmit_code_id_char                    :  1;    /*  3.6 */
   unsigned short int xmit_no_decode_msg                   :  1;    /*  3.7 */
   unsigned short int code39_full_ascii                    :  1;    /*  4.0 */
   unsigned short int dotcode_en                           :  1;    /*  4.1 */
   unsigned short int report_msi_chk                       :  1;    /*  4.2 */
   unsigned short int report_c11_chk                       :  1;    /*  4.3 */
   unsigned short int conv_upce1_2a_b                      :  1;    /*  4.4 */
   unsigned short int upc_e1_chk_b                         :  1;    /*  4.5 */
   unsigned short int xmit_aim_id_char                     :  1;    /*  4.6 */
   unsigned short int xmit_i25_chkdgt                      :  1;    /*  4.7 */
   unsigned short int itf14_to_ean13                       :  1;    /*  5.0 */
   unsigned short int msi_chkdgt_scheme                    :  1;    /*  5.1 */
   unsigned short int code39_xmit_chkdgt                   :  1;    /*  5.2 */
   unsigned short int c39_to_c32_conv                      :  1;    /*  5.3 */
   unsigned short int c32_prefix                           :  1;    /*  5.4 */
   unsigned short int ascii_out                            :  1;    /*  5.5 */
   unsigned short int demote_rss                           :  1;    /*  5.6 */
   unsigned short int buffer_c39                           :  1;    /*  5.7 */
   unsigned short int decode_beep_b                        :  1;    /*  6.0 */
   unsigned short int c128_stitch_enabled                  :  1;    /*  6.1 */
   unsigned short int accept_prev_blk                      :  1;    /*  6.2 */
   unsigned short int c11_red_enabled                      :  1;    /*  6.3 */
   unsigned short int c39_red_enabled                      :  1;    /*  6.4 */
   unsigned short int c128_red_enabled                     :  1;    /*  6.5 */
   unsigned short int cmsi_red_enabled                     :  1;    /*  6.6 */
   unsigned short int cbar_red_enabled                     :  1;    /*  6.7 */
   unsigned short int ci25_red_enabled                     :  1;    /*  7.0 */
   unsigned short int cd25_red_enabled                     :  1;    /*  7.1 */
   unsigned short int c93_red_enabled                      :  1;    /*  7.2 */
   unsigned short int linear_upc_enabled                   :  1;    /*  7.3 */
   unsigned short int ean128_enabled                       :  1;    /*  7.4 */
   unsigned short int force_hands_free                     :  1;    /*  7.5 */
   unsigned short int c39_stitch_enabled                   :  1;    /*  7.6 */
   unsigned short int auto_raster_enabled                  :  1;    /*  7.7 */
   unsigned short int upc_hblk_stitching                   :  1;    /*  8.0 */
   unsigned short int linear_supp_enabled                  :  1;    /*  8.1 */
   unsigned short int tri39_red_enabled                    :  1;    /*  8.2 */
   unsigned short int enable_blktmr_chk                    :  1;    /*  8.3 */
   unsigned short int c25_red_enabled                      :  1;    /*  8.4 */
   unsigned short int motor_duty                           :  1;    /*  8.5 */
   unsigned short int host_beep_control                    :  1;    /*  8.6 */
   unsigned short int check_parity                         :  1;    /*  8.7 */
   unsigned short int send_packets                         :  1;    /*  9.0 */
   unsigned short int operating_mode                       :  1;    /*  9.1 */
   unsigned short int host_rts_state                       :  1;    /*  9.2 */
   unsigned short int pdf_en                               :  1;    /*  9.3 */
   unsigned short int updf_en                              :  1;    /*  9.4 */
   unsigned short int DataMatrix                           :  1;    /*  9.5 */
   unsigned short int JapanPost                            :  1;    /*  9.6 */
   unsigned short int AustraliaPost                        :  1;    /*  9.7 */
   unsigned short int Maxicode                             :  1;    /*  A.0 */
   unsigned short int QRCode                               :  1;    /*  A.1 */
   unsigned short int CompositeCode                        :  1;    /*  A.2 */
   unsigned short int KoreaPost                            :  1;    /*  A.3 */
   unsigned short int DutchPost                            :  1;    /*  A.4 */
   unsigned short int send_bar_rep                         :  1;    /*  A.5 */
   unsigned short int small_dmatrix                        :  1;    /*  A.6 */
   unsigned short int UseAE                                :  1;    /*  A.7 */
   unsigned short int Illum                                :  1;    /*  B.0 */
   unsigned short int AimOnCapture                         :  1;    /*  B.1 */
   unsigned short int CropImage                            :  1;    /*  B.2 */
   unsigned short int UseJpegQual                          :  1;    /*  B.3 */
   unsigned short int VideoViewFinder                      :  1;    /*  B.4 */
   unsigned short int Portrait                             :  1;    /*  B.5 */
   unsigned short int signature                            :  1;    /*  B.6 */
   unsigned short int ccab_en                              :  1;    /*  B.7 */
   unsigned short int bidir_redundancy                     :  1;    /*  C.0 */
   unsigned short int emul_ean128_en                       :  1;    /*  C.1 */
   unsigned short int report_time                          :  1;    /*  C.2 */
   unsigned short int post_us1                             :  1;    /*  C.3 */
   unsigned short int post_us2                             :  1;    /*  C.4 */
   unsigned short int post_uk                              :  1;    /*  C.5 */
   unsigned short int post_can                             :  1;    /*  C.6 */
   unsigned short int post_us_parity                       :  1;    /*  C.7 */
   unsigned short int post_uk_parity                       :  1;    /*  D.0 */
   unsigned short int post_can_alt                         :  1;    /*  D.1 */
   unsigned short int xmit_as_code_words                   :  1;    /*  D.2 */
   unsigned short int xmit_file_name                       :  1;    /*  D.3 */
   unsigned short int xmit_block_count                     :  1;    /*  D.4 */
   unsigned short int xmit_time_stamp                      :  1;    /*  D.5 */
   unsigned short int xmit_sender                          :  1;    /*  D.6 */
   unsigned short int xmit_addressee                       :  1;    /*  D.7 */
   unsigned short int xmit_file_size                       :  1;    /*  E.0 */
   unsigned short int xmit_check_sum                       :  1;    /*  E.1 */
   unsigned short int xmit_file_id                         :  1;    /*  E.2 */
   unsigned short int xmit_block_index                     :  1;    /*  E.3 */
   unsigned short int xmit_end_of_set                      :  1;    /*  E.4 */
   unsigned short int xmit_unknown_cw                      :  1;    /*  E.5 */
   unsigned short int ccc_en                               :  1;    /*  E.6 */
   unsigned short int l1d_send                             :  1;    /*  E.7 */
   unsigned short int tcif_en                              :  1;    /*  F.0 */
   unsigned short int parameters_allowed                   :  1;    /*  F.1 */
   unsigned short int webcode_en                           :  1;    /*  F.2 */
   unsigned short int gt_webcode_en                        :  1;    /*  F.3 */
   unsigned short int bootup_event                         :  1;    /*  F.4 */
   unsigned short int decode_event                         :  1;    /*  F.5 */
   unsigned short int param_event                          :  1;    /*  F.6 */
   unsigned short int system_event                         :  1;    /*  F.7 */
   unsigned short int system_error                         :  1;    /* 10.0 */
   unsigned short int scanning_error                       :  1;    /* 10.1 */
   unsigned short int misc1_event                          :  1;    /* 10.2 */
   unsigned short int misc2_event                          :  1;    /* 10.3 */
   unsigned short int flatten_decode                       :  1;    /* 10.4 */
   unsigned short int UCCEAN_C128_Emul                     :  1;    /* 10.5 */
   unsigned short int param_type99                         :  1;    /* 10.6 */
   unsigned short int image_fuzzy_1D                       :  1;    /* 10.7 */
   unsigned short int sigcap2pass                          :  1;    /* 11.0 */
   unsigned short int xmit_image                           :  1;    /* 11.1 */
   unsigned short int uqr_en                               :  1;    /* 11.2 */
   unsigned short int aztec_en                             :  1;    /* 11.3 */
   unsigned short int PostUS3                              :  1;    /* 11.4 */
   unsigned short int bookland_format                      :  1;    /* 11.5 */
   unsigned short int dpm_en                               :  1;    /* 11.6 */
   unsigned short int check_ISBT_table                     :  1;    /* 11.7 */
   unsigned short int range_restrict                       :  1;    /* 12.0 */
   unsigned short int handsfree_mode                       :  1;    /* 12.1 */
   unsigned short int trig_ab_debounce_wait                :  1;    /* 12.2 */
   unsigned short int image_snapshot_duplex                :  1;    /* 12.3 */
   unsigned short int blink_snap_bymotion                  :  1;    /* 12.4 */
   unsigned short int continuous_snapshot                  :  1;    /* 12.5 */
   unsigned short int continuous_bc_read                   :  1;    /* 12.6 */
   unsigned short int parameter_lock                       :  1;    /* 12.7 */
   unsigned short int lolite_en                            :  1;    /* 13.0 */
   unsigned short int multi_code_mode_en                   :  1;    /* 13.1 */
   unsigned short int matrix_25_en                         :  1;    /* 13.2 */
   unsigned short int matrix_25_redun                      :  1;    /* 13.3 */
   unsigned short int matrix_25_chk_en                     :  1;    /* 13.4 */
   unsigned short int matrix_25_xmit_chk                   :  1;    /* 13.5 */
   unsigned short int post_us4                             :  1;    /* 13.6 */
   unsigned short int issn_EAN_en                          :  1;    /* 13.7 */
   unsigned short int rs232_rx_in_low_power                :  1;    /* 14.0 */
   unsigned short int swipe_presentation_mode              :  1;    /* 14.1 */
   unsigned short int multi_code_concat_en                 :  1;    /* 14.2 */
   unsigned short int continuous_bc_read_uniqueness_en     :  1;    /* 14.3 */
   unsigned short int trig_same_symbol_to                  :  1;    /* 14.4 */
   unsigned short int DMV_processing_en                    :  1;    /* 14.5 */
   unsigned short int k35_en                               :  1;    /* 14.6 */
   unsigned short int static_cdc                           :  1;    /* 14.7 */
   unsigned short int mirror_sensor_image                  :  1;    /* 15.0 */
   unsigned short int user_param_passthrough               :  1;    /* 15.1 */
   unsigned short int val_concat_param_barcode             :  1;    /* 15.2 */
   unsigned short int ibm_scanner_generic_mgmt_info_en     :  1;    /* 15.3 */
   unsigned short int ocr_bright_illum                     :  1;    /* 15.4 */
   unsigned short int ocra_enable                          :  1;    /* 15.5 */
   unsigned short int ocrb_enable                          :  1;    /* 15.6 */
   unsigned short int micr_e13b_enable                     :  1;    /* 15.7 */
   unsigned short int uscurrency_enable                    :  1;    /* 16.0 */
   unsigned short int ocr_finder_en                        :  1;    /* 16.1 */
   unsigned short int ocr_finder_external                  :  1;    /* 16.2 */
   unsigned short int bt_authentication                    :  1;    /* 16.3 */
   unsigned short int bt_encryption                        :  1;    /* 16.4 */
   unsigned short int beep_on_recon_attempt                :  1;    /* 16.5 */
   unsigned short int pin_code_type                        :  1;    /* 16.6 */
   unsigned short int inquiry_mode                         :  1;    /* 16.7 */
   unsigned short int pair_on_contact                      :  1;    /* 17.0 */
   unsigned short int power_beep                           :  1;    /* 17.1 */
   unsigned short int img_portrait_en                      :  1;    /* 17.2 */
   unsigned short int rfid_xmit_unkn_tag                   :  1;    /* 17.3 */
   unsigned short int rfid_xmit_raw_w_pc                   :  1;    /* 17.4 */
   unsigned short int rfid_xmit_append_rssi                :  1;    /* 17.5 */
   unsigned short int suppress_pwrup_beeps                 :  1;    /* 17.6 */
   unsigned short int exclusive_code128_en                 :  1;    /* 17.7 */
   unsigned short int smoothing_en                         :  1;    /* 18.0 */
   unsigned short int fips_mode                            :  1;    /* 18.1 */
   unsigned short int become_bt_master                     :  1;    /* 18.2 */
   unsigned short int codabar_start_stop_char_case         :  1;    /* 18.3 */
   unsigned short int sig_brighten                         :  1;    /* 18.4 */
   unsigned short int sig_sharpen                          :  1;    /* 18.5 */
   unsigned short int embedded_scan_engine                 :  1;    /* 18.6 */
   unsigned short int proximity_enable                     :  1;    /* 18.7 */
   unsigned short int keep_hw_assist_data                  :  1;    /* 19.0 */
   unsigned short int eas_deactivation                     :  1;    /* 19.1 */
   unsigned short int eas_detect_geiger_counter            :  1;    /* 19.2 */
   unsigned short int eas_deactivation_override_button     :  1;    /* 19.3 */
   unsigned short int eas_checkpoint_interlock_polarity    :  1;    /* 19.4 */
   unsigned short int motion_tolerance_en                  :  1;    /* 19.5 */
   unsigned short int doccap_usehid                        :  1;    /* 19.6 */
   unsigned short int flexi_enable                         :  1;    /* 19.7 */
   unsigned short int img_split_decode                     :  1;    /* 1A.0 */
   unsigned short int enable_cmdline                       :  1;    /* 1A.1 */
   unsigned short int motion_proximity_center              :  1;    /* 1A.2 */
   unsigned short int center_object_detect                 :  1;    /* 1A.3 */
   unsigned short int scale_hres_mode                      :  1;    /* 1A.4 */
   unsigned short int eas_req_volt_mess                    :  1;    /* 1A.5 */
   unsigned short int eas_req_comm_mess                    :  1;    /* 1A.6 */
   unsigned short int eas_req_scn_time                     :  1;    /* 1A.7 */
   unsigned short int sav_stat_stg                         :  1;    /* 1B.0 */
   unsigned short int topology_event                       :  1;    /* 1B.1 */
   unsigned short int nrf_rank_limiter                     :  1;    /* 1B.2 */
   unsigned short int usb_ibm_ldio_enable                  :  1;    /* 1B.3 */
   unsigned short int sig_findbox                          :  1;    /* 1B.4 */
   unsigned short int allow_writing_mfg_params             :  1;    /* 1B.5 */
   unsigned short int stitch_itf                           :  1;    /* 1B.6 */
   unsigned short int marginless_c128_enable               :  1;    /* 1B.7 */
   unsigned short int marginless_c39_enable                :  1;    /* 1C.0 */
   unsigned short int marginless_itf_enable                :  1;    /* 1C.1 */
   unsigned short int double_stage_on                      :  1;    /* 1C.2 */
   unsigned short int triple_stage_on                      :  1;    /* 1C.3 */
   unsigned short int quad_stage_on                        :  1;    /* 1C.4 */
   unsigned short int xmit_pstage_reccode                  :  1;    /* 1C.5 */
   unsigned short int supp_rec_chars                       :  1;    /* 1C.6 */
   unsigned short int check_SRC_4thDigit                   :  1;    /* 1C.7 */
   unsigned short int control_emulate_input                :  1;    /* 1D.0 */
   unsigned short int digit_keypad_input                   :  1;    /* 1D.1 */
   unsigned short int jap_utf_shift_jis                    :  1;    /* 1D.2 */
   unsigned short int hanxin_enable                        :  1;    /* 1D.3 */
   unsigned short int uspostnet_chkdgt                     :  1;    /* 1D.4 */
   unsigned short int usplanet_chkdgt                      :  1;    /* 1D.5 */
   unsigned short int clear_memory                         :  1;    /* 1D.6 */
   unsigned short int illum_on_always                      :  1;    /* 1D.7 */
   unsigned short int pager_motor_enable                   :  1;    /* 1E.0 */
   unsigned short int night_mode_trig_en                   :  1;    /* 1E.1 */
   unsigned short int quiet_mode                           :  1;    /* 1E.2 */
   unsigned short int beep_on_bell                         :  1;    /* 1E.3 */
   unsigned short int c128_fnc4_ignore                     :  1;    /* 1E.4 */
   unsigned short int marginless_upc_enable                :  1;    /* 1E.5 */
   unsigned short int silence_mode_change                  :  1;    /* 1E.6 */
   unsigned short int bt_apple_hid_features                :  1;    /* 1E.7 */
   unsigned short int bt_class_of_device_zero              :  1;    /* 1F.0 */
   unsigned short int bt_wifi_friendly_mode                :  1;    /* 1F.1 bluetooth Wi-Fi friendly mode*/
   unsigned short int bt_android_hid_features              :  1;    /* 1F.2 android hid features */
   unsigned short int bt_sniff_mode                        :  1;    /* 1F.3 */
   unsigned short int fast_HID                             :  1;    /* 1F.4 */
   unsigned short int quick_keypad_emulation               :  1;    /* 1F.5 */
   unsigned short int radio_state                          :  1;    /* 1F.6 */
   unsigned short int icc_central_proc_only                :  1;    /* 1F.7 */
   unsigned short int gs1_datamatrix_en                    :  1;    /* 20.0 */
   unsigned short int gs1_qr_en                            :  1;    /* 20.1 */
   unsigned short int mailmark_en                          :  1;    /* 20.2 */
   unsigned short int toggle_pairing                       :  1;    /* 20.3 */
   unsigned short int honor_direct_io_beeps                :  1;    /* 20.4 */
   unsigned short int persistent_batch                     :  1;    /* 20.5 */
   unsigned short int usb_susp_detach_mode                 :  1;    /* 20.6 */
   unsigned short int bt_hid_wait_for_connection           :  1;    /* 20.7 */
   unsigned short int marginless_msi_enable                :  1;    /* 21.0 */
   unsigned short int ibm_flashupdate_enable               :  1;    /* 21.1 */
   unsigned short int trigger_event                        :  1;    /* 21.2 */
   unsigned short int bt_save_connection_info              :  1;    /* 21.3 */   
   unsigned short int grid_matrix_en                       :  1;    /* 21.4 */
   unsigned short int connected_as_cascaded_device         :  1;    /* 21.5 */
   unsigned short int intelligent_same_symbol_timeout      :  1;    /* 21.6 */
   unsigned short int ibm_scanner_vendor_spe_mgmt_info_en  :  1;    /* 21.7 */

   unsigned short int secur_pharm_en                       :  1;    /* 22.0 */
   unsigned short int bt_spp_purge_non_ascii               :  1;    /* 22.1 */
   unsigned short int ssi_lite_legacy_mode                 :  1;    /* 22.2 */
   unsigned short int french_lottery                       :  1;    /* 22.3 */
   unsigned short int french_lottery_crc_chk               :  1;    /* 22.4 */
   unsigned short int c39_big_gap_en                       :  1;    /* 22.5 */
   unsigned short int mod16_cbar_chkdgt                    :  1;    /* 22.6 */
   unsigned short int outdoor_picklist                     :  1;    /* 22.7 */

   unsigned short int ibm_scale_generic_mgmt_info          :  1;    /* 23.0 */
   unsigned short int postal_dutch_3s                      :  1;    /* 23.1 */
   unsigned short int enhanced_demote_rss                  :  1;    /* 23.2 */
   unsigned short int xmit_cbar_chkdgt                     :  1;    /* 23.3 */
   unsigned short int video_jpeg_quality_or_size_option    :  1;    /* 23.4 */
   unsigned short int transmit_ean8_chk_digit              :  1;    /* 23.5 */
   unsigned short int transmit_ean13_chk_digit             :  1;    /* 23.6 */
   unsigned short int transmit_c39_start_stop              :  1;    /* 23.7 */

   unsigned short int constant_decode_mode                 :  1;    /* 24.0 */
   unsigned short int pd_mode                              :  1;    /* 24.1 */
   unsigned short int ncr_scale_beep_after_weight          :  1;    /* 24.2 */
   unsigned short int ignore_scale_directives              :  1;    /* 24.3 */   
   unsigned short int scale_auto_zero_return               :  1;    /* 24.4 */ 
   unsigned short int scale_beep_after_weight              :  1;    /* 24.5 */ 
   unsigned short int scale_enable_zero_button             :  1;    /* 24.6 */    
   unsigned short int ncr_use_prefix                       :  1;    /* 24.7 */

   unsigned short int ncr_use_bcc                          :  1;    /* 25.0 */
   unsigned short int datalogic_format_enable              :  1;    /* 25.1 */
   unsigned short int ww_enable                            :  1;    /* 25.2 */
   unsigned short int flexi_pause_en                       :  1;    /* 25.3 */
   unsigned short int gs1_digital_link_en                  :  1;    /* 25.4 */
   unsigned short int enable_beeper_volume_alt             :  1;    /* 25.5 */
   unsigned short int pole_was_there                       :  1;    /* 25.6 */
   unsigned short int rs232_variant_label_id_mode          :  1;    /* 25.7 */

   unsigned short int stitch_c93                           :  1;    /* 26.0 */
   unsigned short int xmit_gs1_as_ascii_on_ibm_tt          :  1;    /* 26.1 */
   unsigned short int weblink_qr                           :  1;    /* 26.2 */
   unsigned short int serial_scan_ena_dis_cmd              :  1;    /* 26.3 */
   unsigned short int sync_beep_volume                     :  1;    /* 26.4 */
   unsigned short int trig_on_scan_enable                  :  1;    /* 26.5 */
   unsigned short int marginless_c93_enable                :  1;    /* 26.6 */
   unsigned short int ncr_qr_filter_http                   :  1;    /* 26.7 */

   unsigned short int ncr_qr_filter_www                    :  1;    /* 27.0 */
   unsigned short int ncr_change_host_code_types           :  1;    /* 27.1 */
   unsigned short int walmart_volume_control               :  1;    /* 27.2 */
   unsigned short int volume_button_beep_suppression       :  1;    /* 27.3 */
   unsigned short int stg_clone_status                     :  1;    /* 27.4 */
   unsigned short int spare_27_5                           :  1;    /* 27.5 */
   unsigned short int spare_27_6                           :  1;    /* 27.6 */
   unsigned short int spare_27_7                           :  1;    /* 27.7 */
// FLAG END SPARES 3 28

   /* As new parameters are needed use 'spares' above.

      Some of these spares have a default of '0' and some have a default of
      '1' - you must assign the new parameter to the correct default - do
      not change default value in deftable.i.

      If a 'spare' with the correct default does not exist allocate 16 new
      bits, leaving the other spare for future use.

      When these are exhausted allocate 32 new spare bits. Each time 32 bits
      are allocated make a few of them default of '1' (in deftable.i)

      This technique keeps this structure correctly dword aligned and
      ensures correct defaults values are installed for new params after
      a firmware up-rev.
   */
   SECTION_EXTENSION// Expands based on test build switch
} BIT_PARAMS;

typedef struct
{
   unsigned char c39_l1;                          
   unsigned char c39_l2;                          
   unsigned char codabar_l1;                      
   unsigned char codabar_l2;                      
   unsigned char d25_l1;                          
   unsigned char d25_l2;                          
   unsigned char i25_l1;                          
   unsigned char i25_l2;                          
   unsigned char c93_l1;                          
   unsigned char c93_l2;                          
   unsigned char c11_l1;                          
   unsigned char c11_l2;                          
   unsigned char supps_autod;                     
   unsigned char msi_l1;                          
   unsigned char msi_l2;                          
   unsigned char tri39_l1;                        
   unsigned char tri39_l2;                        
   unsigned char c25_l1;                          
   unsigned char c25_l2;                          
   unsigned char upce_preamble;                   
   unsigned char upca_preamble;                   
   unsigned char upce1_preamble;                  
   unsigned char laser_on_timeout_p;              
   unsigned char laser_off_timeout_p;             
   unsigned char beeper_volume;                   
   unsigned char scan_pattern;                    
   unsigned char beeper_frequency;                
   unsigned char laser_sleep_duration;            
   unsigned char upcean_security_level;           
   unsigned char c11_chk_dgt;                     
   unsigned char c128_stitch_level;               
   unsigned char multi_decode_level;              
   unsigned char linear_security_level;           
   unsigned char c39_stitch_level;                
   unsigned char xmit_code_id;                    
   unsigned char no_supp_max;                     
   unsigned char upc_stitching_level;             
   unsigned char upc_num_ovlap;                   
   unsigned char check_i25_chkdgt;                
   unsigned char random_weight_chkdgt;            
   unsigned char param_process_mode;              
   unsigned char aim_duration;                    
   unsigned char marg_ratio;                      
   unsigned char volume_trigger;                  
   unsigned char adj_beep_freq;                   
   unsigned char host_char_timeout;               
   unsigned char hw_handshaking;                  
   unsigned char sw_handshaking;                  
   unsigned char response_to;                     
   unsigned char baud_rte;                        
   unsigned char stop2_b;                         
   unsigned char parity_type;                     
   unsigned char upc_composite;                   
   unsigned char c128_l1;                         
   unsigned char c128_l2;                         
   unsigned char webcode_l1;                      
   unsigned char webcode_l2;                      
   unsigned char prim_trig_mode;                  
   unsigned char SubSample;                       
   unsigned char bpp;                             
   unsigned char FileFormat;                      
   unsigned char JPEGQuality;                     
   unsigned char AimMode;                         
   unsigned char illum_bank_ctrl;                 
   unsigned char JPEGOptions;                     
   unsigned char LightEnv;                        
   unsigned char GainOffset;                      
   unsigned char SigFormat;                       
   unsigned char SigBpp;                          
   unsigned char MaxAETime;                       
   unsigned char SnapTimeout;                     
   unsigned char VideoFrameSize;                  
   unsigned char VideoVFFrameSize;                
   unsigned char ReverseVideo;                    
   unsigned char ImgCapUseAE;                     
   unsigned char ImgCapIllum;                     
   unsigned char Noisy1D;                         
   unsigned char MultiReturn;                     
   unsigned char SigCapEvent;                     
   unsigned char SigJPEGQuality;                  
   unsigned char xmit_protocol;                   
   unsigned char MultiPacket;                     
   unsigned char InterPacket;                     
   unsigned char host_laser_off_time;             
   unsigned char xmit_mode;                       
   unsigned char comp_beep_mode;                  
   unsigned char pico_focus_mode;                 
   unsigned char ALS_SamplePeriod;                
   unsigned char ImgPwrMode;                      
   unsigned char ScanStandSessTo;                 
   unsigned char data_format;                     
   unsigned char keystroke_delay;                 
   unsigned char pause_duration;                  
   unsigned char mia_hostnum;                     
   unsigned char syn_cable_autod;                 
   unsigned char ImgExtIllumMode;                 
   unsigned char suffix1_keycat;                  
   unsigned char prefix1_keycat;                  
   unsigned char suffix2_keycat;                  
   unsigned char suffix1_value;                   
   unsigned char prefix1_value;                   
   unsigned char suffix2_value;                   
   unsigned char MirrorImage;                     
   unsigned char scanline_width;                  
   unsigned char img_gain_exp_priority;           
   unsigned char img_enhancement;                 
   unsigned char scene_detect_subsample;          
   unsigned char img_target_white;                
   unsigned char dec_target_white;                
   unsigned char fixed_gain;                      
   unsigned char max_dec_slit_frames;             
   unsigned char ae_metering;                     
   unsigned char AimModeHandsfree;                
   unsigned char inverse_1d;                      
   unsigned char qr_inverse;                      
   unsigned char datamatrix_inverse;              
   unsigned char aztec_inverse;                   
   unsigned char pdf_security;                    
   unsigned char presentation_zone;               
   unsigned char isbt_max_try;                    
   unsigned char isbt_concat_autod;               
   unsigned char beeper_duration;                 
   unsigned char trig_a_engine;                   
   unsigned char trig_b_engine;                   
   unsigned char trig_ab_engine;                  
   unsigned char trig_ab_debounce_to;             
   unsigned char trig_host_engine;                
   unsigned char laser_pref_to;                   
   unsigned char performance_mode;                
   unsigned char presentation_sleep_to;           
   unsigned char presentation_idle_to;            
   unsigned char matrix_25_l1;                    
   unsigned char matrix_25_l2;                    
   unsigned char aimid_supp_format;               
   unsigned char img_edge_sharpening;             
   unsigned char img_contrast_enhancement;        
   unsigned char illumination_brightness;         
   unsigned char TwoD_param_prog;                 
   unsigned char cell_en;                         
   unsigned char k35_l1;                          
   unsigned char k35_l2;                          
   unsigned char multi_code_concat_code_type;     
   unsigned char img_rotation;                    
   unsigned char video_subsample;                 
   unsigned char aim_brightness;                  
   unsigned char video_format;                      
   unsigned char ocra_variant;                    
   unsigned char ocrb_variant;                    
   unsigned char ocr_orientation;                 
   unsigned char ocr_chk_dgt_mod;                 
   unsigned char ocr_min_char;                    
   unsigned char ocr_max_char;                    
   unsigned char ocr_lines;                       
   unsigned char ocr_security_level;              
   unsigned char ocr_chk_dgt_valid;               
   unsigned char ocr_quiet_zone;                  
   unsigned char ocr_bw_level;                    
   unsigned char ocr_despeckle;                   
   unsigned char ocr_thicken;                     
   unsigned char ocr_low_pass_filter;             
   unsigned char autoaim_aim_off_to_idle_time;    
   unsigned char rfid_beeper_freq;                
   unsigned char rfid_same_tag_to;                
   unsigned char rfid_handsfree_mode;             
   unsigned char rfid_trig_mode;                  
   unsigned char rfid_xmit_format;                
   unsigned char rfid_rpt_buff_full;              
   unsigned char rfid_antenna_select;             
   unsigned char rfid_antenna_pwr_hh;             
   unsigned char rfid_antenna_pwr_hf;             
   unsigned char rfid_hf_idle_to;                 
   unsigned char Post_Aus_Fmt;                    
   unsigned char databar_lim_margin_chk; // formerly called "databar_lim_sec_lev"
   unsigned char coupon_report;                   
   unsigned char code39_security_level;           
   unsigned char code128_security_level;          
   unsigned char smoothing_border;                
   unsigned char dl_parse_mode;                   
   unsigned char eas_operating_mode;              
   unsigned char eas_deactivation_timeout;        
   unsigned char eas_stag_beep;                   
   unsigned char eas_htag_beep;                   
   unsigned char time_to_decode_mode;             
   unsigned char stitch_c128_security;            
   unsigned char stitch_c39_security;             
   unsigned char stitch_itf_security;             
   unsigned char row1_xmit_format;                
   unsigned char row2_xmit_format;                
   unsigned char row3_xmit_format;                
   unsigned char row4_xmit_format;                
   unsigned char row5_xmit_format;                
   unsigned char pstage_rec_mode;                 
   unsigned char nrc_mode_numstages;              
   unsigned char nrc_mode_delay_time_p;           
   unsigned char PstageInterDecodeTime;           
   unsigned char PstageSameSymbolTime;            
   unsigned char country_kbd_type;                
   unsigned char chinese_neima_input;             
   unsigned char country_kbd_download_type;       
   unsigned char hanxin_inverse;                  
   unsigned char ocr_inverse;
   unsigned char decode_blinks; 
   unsigned char decode_blink_dur;
   unsigned char aim_while_trigger_released;
   unsigned char preso_post_decode_illum_off;
   unsigned char object_detect_sensitivity;   
   unsigned char object_detect_range;
   unsigned char coerce_upc_ean;
   unsigned char doccap_mode;
   unsigned char doccap_fmt;
   unsigned char doccap_bpp;
   unsigned char doccap_jpeg_quality;
   unsigned char sig_minpercent;
   unsigned char sig_maxrot;
   unsigned char aiming_pattern;
   unsigned char doccap_min_text;
   unsigned char doccap_max_text;
   unsigned char doccap_delay;
   unsigned char doccap_border;
   unsigned char analog_gain; 
   unsigned char digital_gain;
   unsigned char doccap_aspect;
   unsigned char pager_motor_duration;
   unsigned char scan_disable_mode;
   unsigned char debug_00;
   unsigned char debug_01;
   unsigned char debug_02;
   unsigned char debug_03;
   unsigned char toshiba_tec_header_char;
   unsigned char toshiba_tec_terminator_char1;
   unsigned char toshiba_tec_terminator_char2;
   unsigned char led_on_good_decode;
   unsigned char decode_beeper_timing;
   unsigned char i25_security_level;
   unsigned char marginless_level_1d;
   unsigned char simulated_scanstand_dly;
   unsigned char movement_sensitivity;
   unsigned char IR_detect_timeout;
   unsigned char decode_poor_quality;
   unsigned char diag_suffix;
   unsigned char hf_dec_target_white;
   unsigned char linear_img_aiming_location;
   unsigned char linear_img_picklist_en;
   unsigned char ignore_ibm_cmd;
   unsigned char batch_mode;
   unsigned char bt_auto_recon;
   unsigned char host_send_dly;
   unsigned char bt_exclude_wifi_chn;
   unsigned char ssp_io_capability;
#ifdef INCLUDE_DLPARSE
   unsigned char dl_parse_error;   
#else
   unsigned char spare_byte_dlp;  /* fill a dummy byte */
#endif
   unsigned char batt_hi_thresh;
   unsigned char batt_md_thresh;
   unsigned char batt_lo_thresh;
   unsigned char batt_health_thresh;
   unsigned char bt_security;
   unsigned char double_trigger_to;
   unsigned char double_trigger_holdoff_to;
   unsigned char usb_susp_detach_delay;
   unsigned char toshiba_tec_host_send_dly;
   unsigned char toshiba_tec_scan_ena_to_decode_dly;

   unsigned char bt_radio_power; 
   unsigned char reflective_pref;
   unsigned char lamp_mode;
   unsigned char lamp_off_timeout;
   unsigned char ibm_spec_lvl;
   unsigned char databar_lim_inverse;
   unsigned char databar_exp_inverse;
   unsigned char databar_sec_lev;
   unsigned char databar_exp_sec_lev;
   unsigned char composite_inverse;
   unsigned char cdc_host_type;
   unsigned char pid_type;

   unsigned char bin_threshold;
   unsigned char digimarc_en;
   unsigned char digimarc_img1_freq;
   unsigned char digimarc_img1_strategy;

   unsigned char secur_pharm_format;
   unsigned char grid_matrix_inverse;
   unsigned char grid_matrix_mirrror;
   unsigned char ocr_redundancy_level;

   unsigned char number_of_no_decode_frames;
   unsigned char ocr_common_fonts_en;
   unsigned char decode_led_behavior;
   unsigned char cbar_security_val;

   unsigned char hp_link_mode;
   unsigned char linked_qr_mode;
   unsigned char febraban_enable;
   unsigned char rfid_region_code;
   
   unsigned char max_processing_time_per_frame;
   unsigned char handheld_activation;
   unsigned char video_jpeg_quality;
   unsigned char debug_sc_acq;
   
   unsigned char debug_sc_camera;
   unsigned char debug_sc_decode;
   unsigned char debug_sc_eas;
   unsigned char debug_sc_firmware_update;
   
   unsigned char debug_sc_flash_access;
   unsigned char debug_sc_ibm_rs485;
   unsigned char debug_sc_motiondetect;
   unsigned char debug_sc_nvp;
   
   unsigned char debug_sc_os;
   unsigned char debug_sc_param;
   unsigned char debug_sc_platform;
   unsigned char debug_sc_ibm_usb;
   
   unsigned char debug_sc_rsi;
   unsigned char debug_sc_rsm;
   unsigned char debug_sc_sasi;
   unsigned char debug_sc_snapi;
   
   unsigned char debug_sc_ssi ;
   unsigned char debug_sc_scale;
   unsigned char debug_sc_scalehost;
   unsigned char debug_sc_stats;
   
   unsigned char debug_sc_stg;
   unsigned char debug_sc_system;
   unsigned char debug_sc_triggermgmt;
   unsigned char debug_sc_uif;
   
   unsigned char debug_sc_utils ;
   unsigned char mirror_flip_image;
   unsigned char range_limit_factor;
   unsigned char msi_chk_dgt;
   
   unsigned char dotcode_inverse;
   unsigned char dotcode_mirror;
   unsigned char dotcode_prioritize;
   unsigned char aergn_mode;
   
   unsigned char image_file_metadata;
   unsigned char volume_button;
   unsigned char momentary_aim_duration;
   unsigned char momentary_trig_mode_alt;

   unsigned char filmstrip_skip;   
   unsigned char filmstrip_save_frame_no;  
   unsigned char filmstrip_acq_distribution_mode;  
   unsigned char scale_in_motion_delay_10msec;  

   unsigned char max_scale_zeroing_weight_limit; 
   unsigned char scale_response_delay_10msec; 
   unsigned char ignore_scale_5_digit_directive; 
   unsigned char ibm_scale_default_response_mode;   // 0=2-byte/normal, 1=3-byte/extended

   unsigned char scale_read_weight_delay_50msec; 
   unsigned char scale_debug; 
   unsigned char scale_behind_zero_mode; 
   unsigned char scale_max_initial_zero_setting_range; 

   unsigned char scaleHost_interface; 
   unsigned char ncr_weigh_poll; 
   unsigned char third_party_scale; 
   unsigned char third_party_scale_led_pin; 

   unsigned char third_party_scale_zero_pin; 
   unsigned char third_party_scale_mfg_pin; 
   unsigned char camera_button_enable; 
   unsigned char camera_button_delay; 
   
   unsigned char scale_pole_display_config;
   unsigned char scale_enable;
   unsigned char scaleHost_baudrate;
   unsigned char objdet_fixed_exposure;  
   
   unsigned char objdet_illumumination;  
   unsigned char objdet_illumumination2; 
   unsigned char objdet_analog_gain;     
   unsigned char objdet_digital_gain;    

   unsigned char color_camera_enabled; 
   unsigned char eas_deact_fail_beep;     
   unsigned char aux_send_type_as;   
   unsigned char objdet_mode;      

   unsigned char aux1_baud;                                
   unsigned char aux1_stop_bits;                           
   unsigned char aux1_parity;                              
   unsigned char aux1_data_bits;                           

   unsigned char aux2_baud;                                
   unsigned char aux2_stop_bits;                           
   unsigned char aux2_parity;                              
   unsigned char aux2_data_bits;                           

   unsigned char reject_same_weight;                       
   unsigned char device_port_config;      
   unsigned char usb_aux_ports;      
   unsigned char beep_on_aux_decode;

   unsigned char frame_rate;
   unsigned char color_camera_weight_event_delay;
   unsigned char stitch_c93_security;
   unsigned char ncr_interface;     

   unsigned char scan_avoidance;
   unsigned char scan_avoidance_threshold;
   unsigned char debug_logging_type;
   unsigned char color_camera_ping_rate;

   unsigned char gs1_digital_link_mode;
   unsigned char double_decode_prevention; // Engineering use only
   unsigned char color_camera_continuous_mode;
   unsigned char ncr_label_id_mode;

   unsigned char upc_pcd;
   unsigned char ean0_pcd;
   unsigned char ean1_pcd;
   unsigned char ean2_pcd;

   unsigned char ean3_pcd;
   unsigned char ean4_pcd;
   unsigned char ean5_pcd;
   unsigned char ean6_pcd;

   unsigned char ean7_pcd;
   unsigned char ean8_pcd;
   unsigned char ean9_pcd;
   unsigned char beeper_volume_alt;

   unsigned char not_on_file_beeps;
   unsigned char block_life_span;
   unsigned char multi_decode_protection;
   unsigned char same_symbol_excludes_symbol_type;

   unsigned char adf2_preamble_max;
   unsigned char delimiter_pause_marker;
   unsigned char delimiter_pause_time;
   unsigned char rs232_power_on_mode;

   unsigned char rs232_variant_host_num; 
   unsigned char rs232_variant_code_type;
   unsigned char decode_upc_with_voids;
   unsigned char decode_upc_with_voids_redundancy;
   
   unsigned char upce_supp;                      
   unsigned char checkpoint_pulse_length_50msec; // 2102
   unsigned char ww_heartbeat_led_mode;           
   unsigned char extended_ssto;

   unsigned char same_symbol_report_timeout;
   unsigned char debug_sc_usb;
   unsigned char large_barcode_ssto;
   unsigned char length_of_large_barcode_ssto;

   unsigned char extend_same_symbol_timeout; 
   unsigned char spare_byte_02;
   unsigned char spare_byte_03;
   unsigned char spare_byte_04;
// BYTE END SPARES 3

   /* As new parameters are needed use 'spares' or add new above this line */

   /* As new parameters are needed;
        1. first if a spare exists with the correct default value (check
           it in deftable.i - it is typically default of '0') then use
           it (rename it to your param)
        2. next, if a spare exists but the incorrect default value
           then leave the spare and allocate 4 new bytes, one for your
           new parameter and 3 spares (setting the spares default value to
           '0' in deftable.i)
        3. finally (if both cases above are false) no spares exist
           so allocate 4 new bytes, one for your new parameter and 3
           spares (setting the spares default value to '0' in deftable.i)

       When using a spare DO NOT change its default value. If the default
       value does not match your requirement then you must allocate 4
       new bytes (see #2 above).

       This technique keeps this structure correctly dword aligned and
       ensures correct defaults values are installed for new params after
       a firmware up-rev.

       An example of adding 1 new byte when no spares exists
       unsigned char my_new_param;        // D8
       unsigned char spare_byte_D9;       // D9
       unsigned char spare_byte_DA;       // DA
       unsigned char spare_byte_DB;       // DB


   */
   SECTION_EXTENSION // Expands based on test build switch
} BYTE_PARAMS;

typedef struct
{              
   unsigned short JPEGFilesizeW;           
   unsigned short fixed_exposure;          
   unsigned short CropTop;                 
   unsigned short CropLeft;                
   unsigned short CropBot;                 
   unsigned short CropRight;               
   unsigned short SigCapWidth;             
   unsigned short SigCapHeight;            
   unsigned short ALS_Constant;            
   unsigned short supp_user_1;             
   unsigned short supp_user_2;             
   unsigned short sleep_exp;               
   unsigned short motion_detect_thresh;    
   unsigned short DMV_timeout;             
   unsigned short reconnect_attempts;      
   unsigned short character_encoding;      
   unsigned short unsol_heartbeat_intv;    
   signed   short doccap_x;
   signed   short doccap_y;
   unsigned short doccap_width;            
   unsigned short doccap_height;   
   unsigned short ae_max_exposure;
   unsigned short ae_hf_max_exposure;
#ifdef INCLUDE_FLEXI_SCRIPT
   signed   short flexi_0;                 
   signed   short flexi_1;                 
   signed   short flexi_2;                 
   signed   short flexi_3;                 
   signed   short flexi_4;                 
   signed   short flexi_5;                 
   signed   short flexi_6;                 
   signed   short flexi_7;                 
   signed   short flexi_8;                 
   signed   short flexi_9;                 
#endif
  signed   short bt_link_supervision;
  
#if defined(INCLUDE_STATS_DECTIME_HG_BINS_and_DECODE_DATA)
   unsigned short stats_bc_img_sav_hg_bin_th;
   unsigned short stats_bc_img_get_stats_id; 
#endif

   unsigned short output_test_data;
   unsigned short doccap_symbology; 
   unsigned short aergn_xoff;
   unsigned short aergn_yoff;
   unsigned short aergn_width;
   unsigned short aergn_height;
   unsigned short diag_click;  
   unsigned short timeout_swipe;
   unsigned short ncr_prefix;  
   unsigned short ncr_suffix;

   unsigned short adf2_compact_crit_max;
   unsigned short adf2_compact_act_max;

   unsigned short timeout_cell;            
   unsigned short timeout_default;  
// WORD END SPARES 0         
   
   /* As new parameters are needed;
        1. first if a spare exists with the correct default value (check
           it in deftable.i - it is typically default of '0') then use
           it (rename it to your param)
        2. next, if a spare exists but the incorrect default value
           then leave the spare and allocate 2 new words, one for your
           new parameter and 1 spare (setting the spares default value to
           '0' in deftable.i)
        3. finally (if both cases above are false) no spares exist
           so allocate 2 new words, one for your new parameter and 1
           spare (setting the spare default value to '0' in deftable.i)

       When using a spare DO NOT change its default value. If the default
       value does not match your requirement then you must allocate 2
       new words (see #2 above).

       Each time 2 words are added they must be on a 4-byte boundary.
       For example; D8,D9,DA,DB is valid, but D9,DA,DB,DC is not

       This technique keeps this structure correctly dword aligned and
       ensures correct defaults values are installed for new params after
       a firmware up-rev.

       An example of adding 1 new word when no spares exists
       unsigned short my_new_param;            // D8-D9
       unsigned short spare_word_DA;           // DA-DB

   */
   SECTION_EXTENSION // Expands based on test build switch
} WORD_PARAMS;

typedef struct
{
   // Include Statistics
   #define STATS_DWORD_PARAM_STRUCT // include only 'DWORD_PARAM_STRUCT' stuff
   #include "stats_api.i"
   #undef STATS_DWORD_PARAM_STRUCT

   unsigned long pad; // Need at least 1 entry
// DWORD END
    /* As new dword parameters are needed add above this line */
   SECTION_EXTENSION // Expands based on test build switch
} DWORD_PARAMS;  // 4 bytes

typedef struct                                                 
{                                                              
   unsigned char dat[SYNAPSE_SIZE];                            
   unsigned char datf_keycat[6];                               
   unsigned char datf_value[6];                                
   unsigned char rule_buffer[RULE_BUFF_SIZE];                  
   unsigned char lookup_table[NUM_LOOKUPS];                    
   unsigned char config_file[16];                              
#if defined(MULTICODE_SUPPORTED)
   unsigned char multi_code_express[MULTICODE_EXPRESSION_LEN]; 
#endif
#ifdef INCLUDE_SYSTEM_OCR
   unsigned char ocr_subset[OCR_SUBSET_LEN];                   
   unsigned char ocr_template1[OCR_TEMPLATE_LEN];              
   unsigned char ocr_chk_dgt_multi[OCR_CHK_DGT_MULTI_LEN];     
#endif
#ifdef INCLUDE_DLPARSE
   unsigned char dl_parse_buff[DL_PARSE_BUFF_SIZE];            
#endif
#ifdef INCLUDE_FLEXI_SCRIPT
   unsigned char flexiscript_buf[FLEXISCRIPT_LEN];             
#endif
#ifdef ADVANCED_COUNTRY_KEYBOARD_TYPE
   unsigned char country_kbd_layout[COUNTRY_KBD_LEN*2];        
   unsigned char code_page[CODE_PAGE_LEN];                     
   unsigned char country_kbd_layout_separate[COUNTRY_KBD_LEN*4];
#endif
#ifdef INCLUDE_BLUETOOTH
   unsigned char bt_pincode[BT_PIN_CODE_LEN];                          /*   6/06 */
   unsigned char bt_friendly_name[BT_FRIENDLY_NAME_LEN];               /*  24/18 */
#ifdef STC_SUPPORT
   unsigned char stc_buffer[7];
#endif   
   unsigned char bt_link_keys[BT_LINK_KEYS_SIZE];
#endif
#ifdef INCLUDE_CRYPTO
   unsigned char shared_key[CRYPTO_KEY_SIZE];         /* */
#endif

#if defined(INCLUDE_STATS_DECTIME_HG_BINS_and_DECODE_DATA)
   unsigned long dectime_histogram_bin_threshold[STATS_NUM_HG_BINS];
   unsigned short stats_bc_img_sav_btype_list[STATS_IMG_SAV_SYMBOL_NUM];
#endif

#if defined(INCLUDE_MP72XX)
   unsigned short wakeup_tile_x_coords[5]; // X offset to start of 1st [0] tile and end of 1st-4th tile [1]-[4]. Units pixels (0-1920)                           
   unsigned short wakeup_tile_y_coords[5]; // y offset to start of 1st [0] tile and end of 1st-4th tile [1]-[4]. Units pixels (0-1280)                           
#endif // defined(INCLUDE_MP72XX)

   unsigned char par_struct_rev[PAR_REV_LEN];            
   unsigned char default_val_rev[PAR_REV_LEN];           
   unsigned char custom_par_valid[CUSTOM_STR_LEN];
   unsigned char pad1[1];
#ifdef  PLURAL_STAGE
   /***************** IMPORTANT NOTE  *************************************
   *  "PLURAL STAGE SECTION" HAS TO BE THE LAST SECTION OF "STRING_PARAMS"
   *       APPEND THE OTHER STREING PARAMETER BEFORE THIS SECTION 
   ***********************************************************************/    
   /***********************************************************************
   * Plural Stage Parameters 
   * Special things to know: 
   *   1. When "Set Defaults" or "Set Factory Defaults", special 
   *      processing for these parameters. The plural stage processing
   *      requires all RC and SRC without loading the factory defaults
   *      or custom values.
   *   2. These parameters can be cleared by scanning "H" type parameter
   *      barcode.
   *   3. All the other plural stage relative parameters would be
   *      reset as usual (including the below "stage_datf_keycat" and
   *      "stage_datf_value".
   *   4. This section has to be the last of STRING_PARAMS section.
   ***********************************************************************/ 
   unsigned char stage_datf_keycat[10];                                  
   unsigned char stage_datf_value[10];                                   
   unsigned char double_stage_id[NUM_2STAGE_CODES*sizeof(REC_CODE_TYPE)];
   unsigned char triple_stage_id[NUM_3STAGE_CODES*sizeof(REC_CODE_TYPE)];
   unsigned char quad_stage_id[NUM_4STAGE_CODES*sizeof(REC_CODE_TYPE)];  
   unsigned char supps_rec_chars[NUM_SUPP_REC_CHARS];                    
   unsigned char supps_rec_fourth_digit[MAX_NUM_SRC_CHARS];              
   unsigned char pad[1]; // makes the entire PLURAL_STAGE block a multiple of 4.
#endif
   unsigned char host_code_id_convert[HOST_CODE_ID_CONVERT_LEN];
// STRING END
   // Add new strings above - keep DWORD/32Bit aligned (by adding spare byte if necessary)
   SECTION_EXTENSION // Expands based on test build switch
} STRING_PARAMS;

/***********************************************************************
*  Special parameters. Some things to know:
***********************************************************************/
/***********************************************************************
* 
*    1. Not modified by a Set Defaults
*    2. Numbers not reported to SPCI or SSI on a "request all"
*    3. Numbers/values are reported if they are specifically requested
*    4. Values can be changed by parameter barcode or command
*    5. If used this section MUST come first in parameter buffer
*    6. The contents of this structure can change only by adding to
*       the end of the structure. However, realize that in the field 
*       a product can be rev'ed either from a smaller to bigger Special
*       section (firmware-upgrade) or from a bigger to smaller Special 
*       section (firmware-downgrade). So if the Special section is 
*       changed and a firmware-update is performed the following actions 
*       will occur;
*          a. The params will be defaulted (params meaning exclusive of  
*             this Special-Params section).
*          b. If the firmware-update loads a bigger Special section then
*             new fields in the Special section will be defaulted.
*          c. If the firmware-update loads a smaller Special section then
*             fields from the bigger Special section are lost.
*    7. The structure has to be WORD alligned. The pad byte should have 
*       a default value of 0xFF
*    8. The only purpose of the field 'specials_valid' is so that on the
*       very first powerup the Special section is defaulted. 
* 
***********************************************************************/
typedef struct
{
   unsigned short length_of_specials;
   unsigned short specials_valid;
   // Electronic Serial Number
   unsigned char  data00, data01, data02, data03, data04, data05;
   unsigned char  data06, data07, data08, data09, data10, data11;
   unsigned char  model_num[18];
   unsigned char  serial_num[16];
   unsigned char  date_of_manufacture[7];
   unsigned char  date_of_service[7];
   unsigned short aim_near_x1;
   unsigned short aim_near_y1;
   unsigned short aim_near_x2;
   unsigned short aim_near_y2;
   unsigned short aim_far_x1;
   unsigned short aim_far_y1;
   unsigned short aim_far_x2;
   unsigned short aim_far_y2;
   unsigned short aim_sensor1_z1;
   unsigned short aim_sensor1_z2;
   unsigned short aim_sensor2_z1;
   unsigned short aim_sensor2_z2;
   unsigned short aim_sensor1_d1;
   unsigned short aim_sensor1_d2;
   unsigned short aim_sensor2_d1;
   unsigned short aim_sensor2_d2;
   unsigned char  date_of_first_program[7];
   unsigned char  rsm_device_level;
   unsigned char  feature_set;
   unsigned char  ranking_filter_threshold;
#ifdef INCLUDE_BLUETOOTH   
   unsigned char  bt_addr[6];
#endif	  
#ifdef INCLUDE_CRYPTO
   unsigned char  aes_key[CRYPTO_KEY_SIZE];
#endif
   unsigned char  rfid_region_SKU;
#if 0 // 11/03/2020:CJF: MP5 doesn't use this struct so reuse 
   unsigned char  ally_eeprom_shadow[80];
#else
   unsigned char  shared_sensor;   // Set at Mfg time. This hw config is sharing the sensor between mono/decode and color/vision-apps
   unsigned char  spare1[78];
#endif
   
   unsigned char ally_illum_cur;
   unsigned short horiz_img_split1;                    // Offset in pixels/bytes to left split of horizontal image
   unsigned short horiz_img_split2;                    // Offset in pixels/bytes to right split of horizontal image
   unsigned short vert_img_split1;                     // Offset in pixels/bytes to left split of vertcal image
   unsigned short vert_img_split2;                     // Offset in pixels/bytes to right split of vertical image
   unsigned short vert_img_split3;                     // Last column of a dead zone

   unsigned long  scale_gravity_place_of_use;
   unsigned long  scale_gravity_cal_loc;

   unsigned char  coles_pole_display;
   unsigned char  scale_sw_rev_in_audit_trail; 
   unsigned char  dummy_1[6];  // Used to be gc_cal_loc_scale_latitude[6] 
   unsigned char  dummy_2[5];  // Used to be gc_cal_loc_scale_height_asl[5] 
   unsigned char  dummy_3[6];  // Used to be gc_loc_of_use_scale_latitude[6];   
   unsigned char  dummy_4[5];  // Used to be gc_loc_of_use_scale_height_asl[5];    
   unsigned char  scale_serial_number[16];
   unsigned char  scale_date_of_manufacturer[7]; 
   unsigned char  scale_sw_revision[16]; 
   unsigned char  scale_model_number[18]; 
   unsigned char  scale_present;
   unsigned char  legal_scale_units;
   unsigned char  legal_scale_dampening_filter_setting;
   unsigned char  scale_rs_gc_programmed;
   unsigned char  scale_iscalibrated;
   unsigned char  scale_interval_range;
   unsigned char  scale_zero_tracking;
   unsigned char  eas_present;       
   unsigned char  spare_byte_01;     
   unsigned char  spare_byte_02;     
   unsigned char  spare_byte_03;     

   unsigned short illum_horiz_duration;      // Illum duration for horizontal platter in usec
   unsigned short illum_vert_duration;       // Illum duration for vertical tower in usec
   unsigned short analog_gain_horiz_1;       // analog gain
   unsigned short gain_horiz_1;              // digital gain
   unsigned short exposure_horiz_duration1;  // exposure
   unsigned short spare_short_02;
   unsigned char  scale_odm_revision[16];
//////////////////////////////////////////////////////////////////////////
// These scale string type parameters were moved here because their
// sizes were incorrectly defined.  
// This was done so that it is not instrusive to the parameters 
// above it in this special section. The special_validate function called 
// from PAR_init will resize and re-align this section in flash without 
// changing the values of the parameters that appear above this point. 
//////////////////////////////////////////////////////////////////////////
   unsigned char  gc_cal_loc_scale_latitude[32]; // The +1 is for the 'NUL' character   
   unsigned char  gc_cal_loc_scale_height_asl[16];
   unsigned char  gc_loc_of_use_scale_latitude[32];   
   unsigned char  gc_loc_of_use_scale_height_asl[16];    
#if defined(INCLUDE_SPECIAL_SECTION_EXTENSION_TEST)
   unsigned char  special_section_extension[4];     
#endif   
 /* As new parameters are needed use 'spares' or add new above this line */

 /* As new parameters are needed;
      1. first if a spare exists with the correct default value (check
         it in deftable.i then use it (rename it to your param)
      2. Otherwise allocate in increments of 4 bytes. Use the needed bytes
         and set the unused as spares with various default values (values
         like 0, 1, FF that might be default values in the future) in
         deftable.i

     When using a spare DO NOT change its default value. If the default
     value does not match your requirement then you must allocate in increments
     of 4 bytes (see #2 above).

     This technique keeps this structure correctly dword aligned and
     ensures correct defaults values are installed for new params after
     a firmware up-rev.

     An example of adding 1 new word when no spares exists
     unsigned short my_new_param;        // D8/D9
     unsigned char  spare_byte_DA;       // DA
     unsigned char  spare_byte_DB;       // DB
 */
  SECTION_EXTENSION // Expands bases on test build switch
} SPECIAL_PARAMS;

// Persistent User parameters. Some things to know:
//    1. Not modified by a Set Defaults or firmware up-rev / down-rev
//    2. The contents of this structure can change only by adding to
//       the end of the structure. However, realize that in the field
//       a product can be rev'ed either from a smaller to bigger Persistant
//       section (firmware-upgrade) or from a bigger to smaller Persistant
//       section (firmware-downgrade). So if this section is
//       changed and a firmware-update is performed the following actions
//       will occur;
//          a. The params will be defaulted (params meaning exclusive of
//             this Persistant-Params section).
//          b. If the firmware-update loads a bigger Persistant section then
//             new fields in the Persistant section will be defaulted.
//          c. If the firmware-update loads a smaller Persistant section then
//             fields from the bigger Persistant section are lost.
//    3. The structure has to be DWORD alligned. The pad byte should have
//       a default value of 0xFF
//
typedef struct
{
   unsigned short valid;  // life time initialization value
   unsigned char  pad[2]; // Useable
   unsigned char  host_data[HOST_DATA_LEN];
   unsigned char  mgmt_host;
   unsigned char  iserialnumber_format;
   unsigned char  psp_spare_2;
   unsigned char  psp_spare_3;
   unsigned short eclevel;
   unsigned short pid_val;
   unsigned char  user_data[USER_DATA_LEN];
   unsigned char  psp_spare_4;
   unsigned char  psp_spare_5;
   // As entries are added above add 'pd' to keep 4-byte aligned and add same to default.i

  SECTION_EXTENSION // Expands bases on test build switch
} PERSISTENT_USER_PARAMS;

typedef struct
{
   SPECIAL_PARAMS         special_pars;
   unsigned long          bit_pars_len;             // sizeof BITS_PARS in bytes
   BIT_PARAMS             bit_pars;
   unsigned long          byte_pars_len;            // sizeof BYTE_PARS in bytes
   BYTE_PARAMS            byte_pars;
   unsigned long          word_pars_len;            // sizeof WORD_PARS in bytes
   WORD_PARAMS            word_pars;
   unsigned long          dword_pars_len;           // sizeof DWORD_PARS in bytes
   DWORD_PARAMS           dword_pars;
   unsigned long          string_pars_len;          // sizeof STRING_PARS in bytes
   STRING_PARAMS          string_pars;
   unsigned long          persistent_user_pars_len; // sizeof PERSISTENT_USER_PARAMS in bytes
   PERSISTENT_USER_PARAMS persistent_user_pars;
   unsigned short         pad;                      // Include extra 2-bytes for 4-byte alignment */
   unsigned short         checksum;
   unsigned long          back_rev_pad[100];        // Padding to accomodate back-rev'ing
} PARAMBUF_T;

extern PARAMBUF_T param_buf;

enum PAR_TYPE
{
   BIT_0,
   BIT_1,
   BIT_2,
   BIT_3,
   BIT_4,
   BIT_5,
   BIT_6,
   BIT_7,
   BYTE_PARAM,
   STRING_PARAM,
   WORD_PARAM,
   DWORD_PARAM,
   BAD_PARAM_TYPE = 0xff
};
#endif

