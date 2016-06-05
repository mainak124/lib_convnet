#include "inference_maxPoolNxN.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void inference_maxPoolNxN::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st20_fsm_17.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_1817_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_bdd_1064.read())) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                     !ap_sig_bdd_1064.read()) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
                     !esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0)))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        in_c_idx_reg_1770 = in_c_idx_2_reg_7587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_bdd_1064.read())) {
        in_c_idx_reg_1770 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        in_r_idx_reg_1759 = in_r_idx_mid2_reg_7530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_bdd_1064.read())) {
        in_r_idx_reg_1759 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        indvar_flatten_reg_1748 = indvar_flatten_next_reg_7525.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_bdd_1064.read())) {
        indvar_flatten_reg_1748 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
        ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1 = p_lshr_f2_reg_7540.read();
        exitcond_flatten_reg_7521 = exitcond_flatten_fu_1817_p2.read();
        out_2_14_1_reg_8306 = out_2_14_1_fu_7234_p3.read();
        out_2_15_1_reg_8313 = out_2_15_1_fu_7324_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_1817_p2.read()))) {
        in_c_idx_2_reg_7587 = in_c_idx_2_fu_1969_p2.read();
        in_r_idx_mid2_reg_7530 = in_r_idx_mid2_fu_1849_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        indvar_flatten_next_reg_7525 = indvar_flatten_next_fu_1823_p2.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        out_2_0_0_1_reg_7646 = out_2_0_0_1_fu_2202_p3.read();
        out_2_1_0_1_reg_7653 = out_2_1_0_1_fu_2292_p3.read();
        out_2_2_reg_7660 = out_2_2_fu_2341_p3.read();
        out_2_3_reg_7667 = out_2_3_fu_2391_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        out_2_0_1_reg_8000 = out_2_0_1_fu_4319_p3.read();
        out_2_14_0_1_reg_8014 = out_2_14_0_1_fu_4499_p3.read();
        out_2_15_0_1_reg_8021 = out_2_15_0_1_fu_4589_p3.read();
        out_2_1_1_reg_8007 = out_2_1_1_fu_4409_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        out_2_10_0_1_reg_7886 = out_2_10_0_1_fu_3712_p3.read();
        out_2_11_0_1_reg_7893 = out_2_11_0_1_fu_3802_p3.read();
        out_2_12_reg_7900 = out_2_12_fu_3851_p3.read();
        out_2_13_reg_7907 = out_2_13_fu_3901_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_2_10_1_reg_8258 = out_2_10_1_fu_6472_p3.read();
        out_2_11_1_reg_8265 = out_2_11_1_fu_6562_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        out_2_10_reg_7852 = out_2_10_fu_3549_p3.read();
        out_2_11_reg_7859 = out_2_11_fu_3599_p3.read();
        out_2_8_0_1_reg_7838 = out_2_8_0_1_fu_3410_p3.read();
        out_2_9_0_1_reg_7845 = out_2_9_0_1_fu_3500_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        out_2_12_0_1_reg_7952 = out_2_12_0_1_fu_4017_p3.read();
        out_2_13_0_1_reg_7959 = out_2_13_0_1_fu_4107_p3.read();
        out_2_14_reg_7966 = out_2_14_fu_4156_p3.read();
        out_2_15_reg_7973 = out_2_15_fu_4206_p3.read();
        tmp_241_reg_7914 = tmp_241_fu_3909_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_2_12_1_reg_8292 = out_2_12_1_fu_6864_p3.read();
        out_2_13_1_reg_8299 = out_2_13_1_fu_6954_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0))) {
        out_2_1_reg_7619 = out_2_1_fu_2089_p3.read();
        out_2_reg_7612 = out_2_fu_2039_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        out_2_2_0_1_reg_7694 = out_2_2_0_1_fu_2504_p3.read();
        out_2_3_0_1_reg_7701 = out_2_3_0_1_fu_2594_p3.read();
        out_2_4_reg_7708 = out_2_4_fu_2643_p3.read();
        out_2_5_reg_7715 = out_2_5_fu_2693_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_2_2_1_reg_8122 = out_2_2_1_fu_4904_p3.read();
        out_2_3_1_reg_8129 = out_2_3_1_fu_4994_p3.read();
        tmp_s_reg_8028 = tmp_s_fu_4596_p1.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        out_2_4_0_1_reg_7742 = out_2_4_0_1_fu_2806_p3.read();
        out_2_5_0_1_reg_7749 = out_2_5_0_1_fu_2896_p3.read();
        out_2_6_reg_7756 = out_2_6_fu_2945_p3.read();
        out_2_7_reg_7763 = out_2_7_fu_2995_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_2_4_1_reg_8156 = out_2_4_1_fu_5296_p3.read();
        out_2_5_1_reg_8163 = out_2_5_1_fu_5386_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        out_2_6_0_1_reg_7790 = out_2_6_0_1_fu_3108_p3.read();
        out_2_7_0_1_reg_7797 = out_2_7_0_1_fu_3198_p3.read();
        out_2_8_reg_7804 = out_2_8_fu_3247_p3.read();
        out_2_9_reg_7811 = out_2_9_fu_3297_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_2_6_1_reg_8190 = out_2_6_1_fu_5688_p3.read();
        out_2_7_1_reg_8197 = out_2_7_1_fu_5778_p3.read();
    }
    if ((esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_2_8_1_reg_8224 = out_2_8_1_fu_6080_p3.read();
        out_2_9_1_reg_8231 = out_2_9_1_fu_6170_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_1817_p2.read()))) {
        p_lshr_f2_reg_7540 = in_c_idx_mid2_fu_1841_p3.read().range(3, 1);
        p_lshr_f_cast_reg_7535 = in_r_idx_mid2_fu_1849_p3.read().range(3, 1);
        tmp_229_reg_7567 = tmp_229_fu_1951_p2.read();
        tmp_236_reg_7544 = tmp_236_fu_1937_p3.read();
    }
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        reg_1805 = x_1_q0.read();
        reg_1811 = x_1_q1.read();
    }
}

void inference_maxPoolNxN::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_bdd_1064.read()) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_fu_1817_p2.read()) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
                ap_NS_fsm = ap_ST_pp0_stg1_fsm_2;
            } else {
                ap_NS_fsm = ap_ST_st20_fsm_17;
            }
            break;
        case 4 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
                ap_NS_fsm = ap_ST_pp0_stg2_fsm_3;
            } else {
                ap_NS_fsm = ap_ST_st20_fsm_17;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_pp0_stg3_fsm_4;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_pp0_stg4_fsm_5;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_pp0_stg5_fsm_6;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_pp0_stg6_fsm_7;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_pp0_stg7_fsm_8;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_pp0_stg8_fsm_9;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_pp0_stg9_fsm_10;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_pp0_stg10_fsm_11;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_pp0_stg11_fsm_12;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_pp0_stg12_fsm_13;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_pp0_stg13_fsm_14;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_pp0_stg14_fsm_15;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_pp0_stg15_fsm_16;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

