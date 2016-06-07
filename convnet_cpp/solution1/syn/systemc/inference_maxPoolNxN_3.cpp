#include "inference_maxPoolNxN.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void inference_maxPoolNxN::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st20_fsm_17.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st20_fsm_17.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_bdd_1064() {
    ap_sig_bdd_1064 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_37() {
    ap_sig_bdd_37 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void inference_maxPoolNxN::thread_ap_sig_bdd_4966() {
    ap_sig_bdd_4966 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(17, 17));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_634() {
    ap_sig_bdd_634 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_650() {
    ap_sig_bdd_650 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_660() {
    ap_sig_bdd_660 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_670() {
    ap_sig_bdd_670 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(5, 5));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_680() {
    ap_sig_bdd_680 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(6, 6));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_690() {
    ap_sig_bdd_690 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(7, 7));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_700() {
    ap_sig_bdd_700 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(8, 8));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_710() {
    ap_sig_bdd_710 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(9, 9));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_720() {
    ap_sig_bdd_720 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(10, 10));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_730() {
    ap_sig_bdd_730 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(11, 11));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_740() {
    ap_sig_bdd_740 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(12, 12));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_750() {
    ap_sig_bdd_750 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(13, 13));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_760() {
    ap_sig_bdd_760 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(14, 14));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_770() {
    ap_sig_bdd_770 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(15, 15));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_780() {
    ap_sig_bdd_780 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(16, 16));
}

void inference_maxPoolNxN::thread_ap_sig_bdd_790() {
    ap_sig_bdd_790 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_bdd_790.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg10_fsm_11() {
    if (ap_sig_bdd_730.read()) {
        ap_sig_cseq_ST_pp0_stg10_fsm_11 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg10_fsm_11 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg11_fsm_12() {
    if (ap_sig_bdd_740.read()) {
        ap_sig_cseq_ST_pp0_stg11_fsm_12 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg11_fsm_12 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg12_fsm_13() {
    if (ap_sig_bdd_750.read()) {
        ap_sig_cseq_ST_pp0_stg12_fsm_13 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg12_fsm_13 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg13_fsm_14() {
    if (ap_sig_bdd_760.read()) {
        ap_sig_cseq_ST_pp0_stg13_fsm_14 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg13_fsm_14 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg14_fsm_15() {
    if (ap_sig_bdd_770.read()) {
        ap_sig_cseq_ST_pp0_stg14_fsm_15 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg14_fsm_15 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg15_fsm_16() {
    if (ap_sig_bdd_780.read()) {
        ap_sig_cseq_ST_pp0_stg15_fsm_16 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg15_fsm_16 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg1_fsm_2() {
    if (ap_sig_bdd_634.read()) {
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg2_fsm_3() {
    if (ap_sig_bdd_650.read()) {
        ap_sig_cseq_ST_pp0_stg2_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg2_fsm_3 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg3_fsm_4() {
    if (ap_sig_bdd_660.read()) {
        ap_sig_cseq_ST_pp0_stg3_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg3_fsm_4 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg4_fsm_5() {
    if (ap_sig_bdd_670.read()) {
        ap_sig_cseq_ST_pp0_stg4_fsm_5 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg4_fsm_5 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg5_fsm_6() {
    if (ap_sig_bdd_680.read()) {
        ap_sig_cseq_ST_pp0_stg5_fsm_6 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg5_fsm_6 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg6_fsm_7() {
    if (ap_sig_bdd_690.read()) {
        ap_sig_cseq_ST_pp0_stg6_fsm_7 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg6_fsm_7 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg7_fsm_8() {
    if (ap_sig_bdd_700.read()) {
        ap_sig_cseq_ST_pp0_stg7_fsm_8 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg7_fsm_8 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg8_fsm_9() {
    if (ap_sig_bdd_710.read()) {
        ap_sig_cseq_ST_pp0_stg8_fsm_9 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg8_fsm_9 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_pp0_stg9_fsm_10() {
    if (ap_sig_bdd_720.read()) {
        ap_sig_cseq_ST_pp0_stg9_fsm_10 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg9_fsm_10 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_37.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_ap_sig_cseq_ST_st20_fsm_17() {
    if (ap_sig_bdd_4966.read()) {
        ap_sig_cseq_ST_st20_fsm_17 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st20_fsm_17 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_exitcond_flatten_fu_1817_p2() {
    exitcond_flatten_fu_1817_p2 = (!indvar_flatten_phi_fu_1752_p4.read().is_01() || !ap_const_lv5_19.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_phi_fu_1752_p4.read() == ap_const_lv5_19);
}

void inference_maxPoolNxN::thread_grp_fu_1781_opcode() {
    grp_fu_1781_opcode = ap_const_lv5_2;
}

void inference_maxPoolNxN::thread_grp_fu_1781_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_1781_p0 = reg_1805.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_1781_p0 = x_0_q0.read();
    } else {
        grp_fu_1781_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void inference_maxPoolNxN::thread_grp_fu_1781_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_1781_p1 = out_2_12_1_reg_8292.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        grp_fu_1781_p1 = out_2_10_1_reg_8258.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        grp_fu_1781_p1 = out_2_8_1_reg_8224.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        grp_fu_1781_p1 = out_2_6_1_reg_8190.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        grp_fu_1781_p1 = out_2_4_1_reg_8156.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        grp_fu_1781_p1 = out_2_2_1_reg_8122.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_1781_p1 = out_2_0_1_reg_8000.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_1781_p1 = out_2_0_0_1_reg_7646.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_1781_p1 = out_2_12_reg_7900.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_1781_p1 = out_2_10_reg_7852.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_1781_p1 = out_2_8_reg_7804.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_1781_p1 = out_2_6_reg_7756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_1781_p1 = out_2_4_reg_7708.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_1781_p1 = out_2_2_reg_7660.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_1781_p1 = out_2_reg_7612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        grp_fu_1781_p1 = ap_const_lv32_0;
    } else {
        grp_fu_1781_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void inference_maxPoolNxN::thread_grp_fu_1787_opcode() {
    grp_fu_1787_opcode = ap_const_lv5_2;
}

void inference_maxPoolNxN::thread_grp_fu_1787_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_1787_p0 = reg_1811.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_1787_p0 = x_0_q1.read();
    } else {
        grp_fu_1787_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void inference_maxPoolNxN::thread_grp_fu_1787_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_1787_p1 = out_2_13_1_reg_8299.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        grp_fu_1787_p1 = out_2_11_1_reg_8265.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        grp_fu_1787_p1 = out_2_9_1_reg_8231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        grp_fu_1787_p1 = out_2_7_1_reg_8197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        grp_fu_1787_p1 = out_2_5_1_reg_8163.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        grp_fu_1787_p1 = out_2_3_1_reg_8129.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_1787_p1 = out_2_1_1_reg_8007.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_1787_p1 = out_2_1_0_1_reg_7653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_1787_p1 = out_2_13_reg_7907.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_1787_p1 = out_2_11_reg_7859.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_1787_p1 = out_2_9_reg_7811.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_1787_p1 = out_2_7_reg_7763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_1787_p1 = out_2_5_reg_7715.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_1787_p1 = out_2_3_reg_7667.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_1787_p1 = out_2_1_reg_7619.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        grp_fu_1787_p1 = ap_const_lv32_0;
    } else {
        grp_fu_1787_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void inference_maxPoolNxN::thread_grp_fu_1793_opcode() {
    grp_fu_1793_opcode = ap_const_lv5_2;
}

void inference_maxPoolNxN::thread_grp_fu_1793_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        grp_fu_1793_p0 = reg_1805.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_1793_p0 = x_0_q0.read();
    } else {
        grp_fu_1793_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void inference_maxPoolNxN::thread_grp_fu_1793_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_1793_p1 = out_2_14_1_reg_8306.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_1793_p1 = out_2_14_0_1_reg_8014.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        grp_fu_1793_p1 = out_2_12_0_1_reg_7952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        grp_fu_1793_p1 = out_2_10_0_1_reg_7886.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        grp_fu_1793_p1 = out_2_8_0_1_reg_7838.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        grp_fu_1793_p1 = out_2_6_0_1_reg_7790.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        grp_fu_1793_p1 = out_2_4_0_1_reg_7742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_1793_p1 = out_2_2_0_1_reg_7694.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_1793_p1 = out_2_14_reg_7966.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())))) {
        grp_fu_1793_p1 = ap_const_lv32_0;
    } else {
        grp_fu_1793_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void inference_maxPoolNxN::thread_grp_fu_1799_opcode() {
    grp_fu_1799_opcode = ap_const_lv5_2;
}

void inference_maxPoolNxN::thread_grp_fu_1799_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        grp_fu_1799_p0 = reg_1811.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_1799_p0 = x_0_q1.read();
    } else {
        grp_fu_1799_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void inference_maxPoolNxN::thread_grp_fu_1799_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_1799_p1 = out_2_15_1_reg_8313.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_1799_p1 = out_2_15_0_1_reg_8021.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        grp_fu_1799_p1 = out_2_13_0_1_reg_7959.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        grp_fu_1799_p1 = out_2_11_0_1_reg_7893.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        grp_fu_1799_p1 = out_2_9_0_1_reg_7845.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        grp_fu_1799_p1 = out_2_7_0_1_reg_7797.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        grp_fu_1799_p1 = out_2_5_0_1_reg_7749.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_1799_p1 = out_2_3_0_1_reg_7701.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_1799_p1 = out_2_15_reg_7973.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())))) {
        grp_fu_1799_p1 = ap_const_lv32_0;
    } else {
        grp_fu_1799_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void inference_maxPoolNxN::thread_in_c_idx_2_fu_1969_p2() {
    in_c_idx_2_fu_1969_p2 = (!in_c_idx_mid2_fu_1841_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<4>(): (sc_biguint<4>(in_c_idx_mid2_fu_1841_p3.read()) + sc_biguint<4>(ap_const_lv4_2));
}

void inference_maxPoolNxN::thread_in_c_idx_mid2_fu_1841_p3() {
    in_c_idx_mid2_fu_1841_p3 = (!tmp_202_fu_1835_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_202_fu_1835_p2.read()[0].to_bool())? in_c_idx_phi_fu_1774_p4.read(): ap_const_lv4_0);
}

void inference_maxPoolNxN::thread_in_c_idx_phi_fu_1774_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        in_c_idx_phi_fu_1774_p4 = in_c_idx_2_reg_7587.read();
    } else {
        in_c_idx_phi_fu_1774_p4 = in_c_idx_reg_1770.read();
    }
}

void inference_maxPoolNxN::thread_in_r_idx_2_fu_1829_p2() {
    in_r_idx_2_fu_1829_p2 = (!ap_const_lv4_2.is_01() || !in_r_idx_phi_fu_1763_p4.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_2) + sc_biguint<4>(in_r_idx_phi_fu_1763_p4.read()));
}

void inference_maxPoolNxN::thread_in_r_idx_mid2_fu_1849_p3() {
    in_r_idx_mid2_fu_1849_p3 = (!tmp_202_fu_1835_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_202_fu_1835_p2.read()[0].to_bool())? in_r_idx_phi_fu_1763_p4.read(): in_r_idx_2_fu_1829_p2.read());
}

void inference_maxPoolNxN::thread_in_r_idx_phi_fu_1763_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        in_r_idx_phi_fu_1763_p4 = in_r_idx_mid2_reg_7530.read();
    } else {
        in_r_idx_phi_fu_1763_p4 = in_r_idx_reg_1759.read();
    }
}

void inference_maxPoolNxN::thread_indvar_flatten_next_fu_1823_p2() {
    indvar_flatten_next_fu_1823_p2 = (!indvar_flatten_phi_fu_1752_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(indvar_flatten_phi_fu_1752_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void inference_maxPoolNxN::thread_indvar_flatten_phi_fu_1752_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        indvar_flatten_phi_fu_1752_p4 = indvar_flatten_next_reg_7525.read();
    } else {
        indvar_flatten_phi_fu_1752_p4 = indvar_flatten_reg_1748.read();
    }
}

void inference_maxPoolNxN::thread_newIndex7_cast_fu_1927_p1() {
    newIndex7_cast_fu_1927_p1 = esl_zext<7,3>(p_lshr_f2_fu_1917_p4.read());
}

void inference_maxPoolNxN::thread_notlhs100_fu_3682_p2() {
    notlhs100_fu_3682_p2 = (!tmp_528_fu_3650_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_528_fu_3650_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs101_fu_6424_p2() {
    notlhs101_fu_6424_p2 = (!tmp_535_fu_6393_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_535_fu_6393_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs102_fu_6442_p2() {
    notlhs102_fu_6442_p2 = (!tmp_537_fu_6410_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_537_fu_6410_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs103_fu_6626_p2() {
    notlhs103_fu_6626_p2 = (!tmp_544_fu_6595_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_544_fu_6595_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs104_fu_6644_p2() {
    notlhs104_fu_6644_p2 = (!tmp_546_fu_6612_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_546_fu_6612_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs105_fu_3575_p2() {
    notlhs105_fu_3575_p2 = (!tmp_553_fu_3561_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_553_fu_3561_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs106_fu_3754_p2() {
    notlhs106_fu_3754_p2 = (!tmp_558_fu_3723_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_558_fu_3723_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs107_fu_3772_p2() {
    notlhs107_fu_3772_p2 = (!tmp_560_fu_3740_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_560_fu_3740_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs108_fu_6514_p2() {
    notlhs108_fu_6514_p2 = (!tmp_567_fu_6483_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_567_fu_6483_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs109_fu_6532_p2() {
    notlhs109_fu_6532_p2 = (!tmp_569_fu_6500_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_569_fu_6500_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs110_fu_6721_p2() {
    notlhs110_fu_6721_p2 = (!tmp_576_fu_6690_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_576_fu_6690_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs111_fu_6739_p2() {
    notlhs111_fu_6739_p2 = (!tmp_578_fu_6707_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_578_fu_6707_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs112_fu_3827_p2() {
    notlhs112_fu_3827_p2 = (!tmp_585_fu_3813_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_585_fu_3813_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs113_fu_3969_p2() {
    notlhs113_fu_3969_p2 = (!tmp_590_fu_3938_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_590_fu_3938_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs114_fu_3987_p2() {
    notlhs114_fu_3987_p2 = (!tmp_592_fu_3955_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_592_fu_3955_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs115_fu_6816_p2() {
    notlhs115_fu_6816_p2 = (!tmp_599_fu_6785_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_599_fu_6785_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs116_fu_6834_p2() {
    notlhs116_fu_6834_p2 = (!tmp_601_fu_6802_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_601_fu_6802_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs117_fu_6996_p2() {
    notlhs117_fu_6996_p2 = (!tmp_608_fu_6965_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_608_fu_6965_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs118_fu_7014_p2() {
    notlhs118_fu_7014_p2 = (!tmp_610_fu_6982_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_610_fu_6982_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs119_fu_3877_p2() {
    notlhs119_fu_3877_p2 = (!tmp_617_fu_3863_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_617_fu_3863_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs120_fu_4059_p2() {
    notlhs120_fu_4059_p2 = (!tmp_622_fu_4028_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_622_fu_4028_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs121_fu_4077_p2() {
    notlhs121_fu_4077_p2 = (!tmp_624_fu_4045_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_624_fu_4045_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs122_fu_6906_p2() {
    notlhs122_fu_6906_p2 = (!tmp_631_fu_6875_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_631_fu_6875_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs123_fu_6924_p2() {
    notlhs123_fu_6924_p2 = (!tmp_633_fu_6892_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_633_fu_6892_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs124_fu_7091_p2() {
    notlhs124_fu_7091_p2 = (!tmp_640_fu_7060_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_640_fu_7060_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs125_fu_7109_p2() {
    notlhs125_fu_7109_p2 = (!tmp_642_fu_7077_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_642_fu_7077_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs126_fu_4132_p2() {
    notlhs126_fu_4132_p2 = (!tmp_649_fu_4118_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_649_fu_4118_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs127_fu_4451_p2() {
    notlhs127_fu_4451_p2 = (!tmp_654_fu_4420_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_654_fu_4420_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs128_fu_4469_p2() {
    notlhs128_fu_4469_p2 = (!tmp_656_fu_4437_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_656_fu_4437_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs129_fu_7186_p2() {
    notlhs129_fu_7186_p2 = (!tmp_663_fu_7155_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_663_fu_7155_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs130_fu_7204_p2() {
    notlhs130_fu_7204_p2 = (!tmp_665_fu_7172_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_665_fu_7172_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs131_fu_7366_p2() {
    notlhs131_fu_7366_p2 = (!tmp_672_fu_7335_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_672_fu_7335_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs132_fu_7384_p2() {
    notlhs132_fu_7384_p2 = (!tmp_674_fu_7352_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_674_fu_7352_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs133_fu_4182_p2() {
    notlhs133_fu_4182_p2 = (!tmp_681_fu_4168_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_681_fu_4168_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs134_fu_4541_p2() {
    notlhs134_fu_4541_p2 = (!tmp_686_fu_4510_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_686_fu_4510_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs135_fu_4559_p2() {
    notlhs135_fu_4559_p2 = (!tmp_688_fu_4527_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_688_fu_4527_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs136_fu_7276_p2() {
    notlhs136_fu_7276_p2 = (!tmp_695_fu_7245_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_695_fu_7245_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs137_fu_7294_p2() {
    notlhs137_fu_7294_p2 = (!tmp_697_fu_7262_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_697_fu_7262_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs138_fu_7461_p2() {
    notlhs138_fu_7461_p2 = (!tmp_704_fu_7430_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_704_fu_7430_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs139_fu_7479_p2() {
    notlhs139_fu_7479_p2 = (!tmp_706_fu_7447_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_706_fu_7447_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs16_fu_2154_p2() {
    notlhs16_fu_2154_p2 = (!tmp_206_fu_2123_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_206_fu_2123_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs18_fu_2172_p2() {
    notlhs18_fu_2172_p2 = (!tmp_208_fu_2140_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_208_fu_2140_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs20_fu_4271_p2() {
    notlhs20_fu_4271_p2 = (!tmp_215_fu_4240_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_215_fu_4240_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs22_fu_4289_p2() {
    notlhs22_fu_4289_p2 = (!tmp_217_fu_4257_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_217_fu_4257_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs24_fu_4666_p2() {
    notlhs24_fu_4666_p2 = (!tmp_224_fu_4635_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_224_fu_4635_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs26_fu_4684_p2() {
    notlhs26_fu_4684_p2 = (!tmp_226_fu_4652_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_226_fu_4652_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs28_fu_2065_p2() {
    notlhs28_fu_2065_p2 = (!tmp_233_fu_2051_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_233_fu_2051_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs30_fu_2244_p2() {
    notlhs30_fu_2244_p2 = (!tmp_238_fu_2213_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_238_fu_2213_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs32_fu_2262_p2() {
    notlhs32_fu_2262_p2 = (!tmp_240_fu_2230_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_240_fu_2230_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs34_fu_4361_p2() {
    notlhs34_fu_4361_p2 = (!tmp_247_fu_4330_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_247_fu_4330_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs36_fu_4379_p2() {
    notlhs36_fu_4379_p2 = (!tmp_249_fu_4347_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_249_fu_4347_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs38_fu_4761_p2() {
    notlhs38_fu_4761_p2 = (!tmp_256_fu_4730_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_256_fu_4730_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs40_fu_4779_p2() {
    notlhs40_fu_4779_p2 = (!tmp_258_fu_4747_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_258_fu_4747_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs42_fu_2317_p2() {
    notlhs42_fu_2317_p2 = (!tmp_265_fu_2303_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_265_fu_2303_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs43_fu_2456_p2() {
    notlhs43_fu_2456_p2 = (!tmp_270_fu_2425_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_270_fu_2425_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs44_fu_2474_p2() {
    notlhs44_fu_2474_p2 = (!tmp_272_fu_2442_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_272_fu_2442_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs45_fu_4856_p2() {
    notlhs45_fu_4856_p2 = (!tmp_279_fu_4825_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_279_fu_4825_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs46_fu_4874_p2() {
    notlhs46_fu_4874_p2 = (!tmp_281_fu_4842_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_281_fu_4842_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs47_fu_5058_p2() {
    notlhs47_fu_5058_p2 = (!tmp_288_fu_5027_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_288_fu_5027_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs48_fu_5076_p2() {
    notlhs48_fu_5076_p2 = (!tmp_290_fu_5044_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_290_fu_5044_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs49_fu_2367_p2() {
    notlhs49_fu_2367_p2 = (!tmp_297_fu_2353_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_297_fu_2353_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs50_fu_2546_p2() {
    notlhs50_fu_2546_p2 = (!tmp_302_fu_2515_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_302_fu_2515_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs51_fu_2564_p2() {
    notlhs51_fu_2564_p2 = (!tmp_304_fu_2532_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_304_fu_2532_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs52_fu_4946_p2() {
    notlhs52_fu_4946_p2 = (!tmp_311_fu_4915_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_311_fu_4915_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs53_fu_4964_p2() {
    notlhs53_fu_4964_p2 = (!tmp_313_fu_4932_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_313_fu_4932_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs54_fu_5153_p2() {
    notlhs54_fu_5153_p2 = (!tmp_320_fu_5122_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_320_fu_5122_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs55_fu_5171_p2() {
    notlhs55_fu_5171_p2 = (!tmp_322_fu_5139_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_322_fu_5139_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs56_fu_2619_p2() {
    notlhs56_fu_2619_p2 = (!tmp_329_fu_2605_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_329_fu_2605_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs57_fu_2758_p2() {
    notlhs57_fu_2758_p2 = (!tmp_334_fu_2727_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_334_fu_2727_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs58_fu_2776_p2() {
    notlhs58_fu_2776_p2 = (!tmp_336_fu_2744_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_336_fu_2744_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs59_fu_5248_p2() {
    notlhs59_fu_5248_p2 = (!tmp_343_fu_5217_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_343_fu_5217_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs60_fu_5266_p2() {
    notlhs60_fu_5266_p2 = (!tmp_345_fu_5234_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_345_fu_5234_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs61_fu_5450_p2() {
    notlhs61_fu_5450_p2 = (!tmp_352_fu_5419_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_352_fu_5419_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs62_fu_5468_p2() {
    notlhs62_fu_5468_p2 = (!tmp_354_fu_5436_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_354_fu_5436_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs63_fu_2669_p2() {
    notlhs63_fu_2669_p2 = (!tmp_361_fu_2655_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_361_fu_2655_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs64_fu_2848_p2() {
    notlhs64_fu_2848_p2 = (!tmp_366_fu_2817_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_366_fu_2817_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs65_fu_2866_p2() {
    notlhs65_fu_2866_p2 = (!tmp_368_fu_2834_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_368_fu_2834_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs66_fu_5338_p2() {
    notlhs66_fu_5338_p2 = (!tmp_375_fu_5307_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_375_fu_5307_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs67_fu_5356_p2() {
    notlhs67_fu_5356_p2 = (!tmp_377_fu_5324_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_377_fu_5324_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs68_fu_5545_p2() {
    notlhs68_fu_5545_p2 = (!tmp_384_fu_5514_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_384_fu_5514_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs69_fu_5563_p2() {
    notlhs69_fu_5563_p2 = (!tmp_386_fu_5531_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_386_fu_5531_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs70_fu_2921_p2() {
    notlhs70_fu_2921_p2 = (!tmp_393_fu_2907_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_393_fu_2907_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs71_fu_3060_p2() {
    notlhs71_fu_3060_p2 = (!tmp_398_fu_3029_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_398_fu_3029_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs72_fu_3078_p2() {
    notlhs72_fu_3078_p2 = (!tmp_400_fu_3046_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_400_fu_3046_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs73_fu_5640_p2() {
    notlhs73_fu_5640_p2 = (!tmp_407_fu_5609_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_407_fu_5609_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs74_fu_5658_p2() {
    notlhs74_fu_5658_p2 = (!tmp_409_fu_5626_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_409_fu_5626_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs75_fu_5842_p2() {
    notlhs75_fu_5842_p2 = (!tmp_416_fu_5811_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_416_fu_5811_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs76_fu_5860_p2() {
    notlhs76_fu_5860_p2 = (!tmp_418_fu_5828_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_418_fu_5828_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs77_fu_2971_p2() {
    notlhs77_fu_2971_p2 = (!tmp_425_fu_2957_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_425_fu_2957_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs78_fu_3150_p2() {
    notlhs78_fu_3150_p2 = (!tmp_430_fu_3119_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_430_fu_3119_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs79_fu_3168_p2() {
    notlhs79_fu_3168_p2 = (!tmp_432_fu_3136_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_432_fu_3136_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs80_fu_5730_p2() {
    notlhs80_fu_5730_p2 = (!tmp_439_fu_5699_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_439_fu_5699_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs81_fu_5748_p2() {
    notlhs81_fu_5748_p2 = (!tmp_441_fu_5716_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_441_fu_5716_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs82_fu_5937_p2() {
    notlhs82_fu_5937_p2 = (!tmp_448_fu_5906_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_448_fu_5906_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs83_fu_5955_p2() {
    notlhs83_fu_5955_p2 = (!tmp_450_fu_5923_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_450_fu_5923_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs84_fu_3223_p2() {
    notlhs84_fu_3223_p2 = (!tmp_457_fu_3209_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_457_fu_3209_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs85_fu_3362_p2() {
    notlhs85_fu_3362_p2 = (!tmp_462_fu_3331_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_462_fu_3331_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs86_fu_3380_p2() {
    notlhs86_fu_3380_p2 = (!tmp_464_fu_3348_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_464_fu_3348_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs87_fu_6032_p2() {
    notlhs87_fu_6032_p2 = (!tmp_471_fu_6001_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_471_fu_6001_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs88_fu_6050_p2() {
    notlhs88_fu_6050_p2 = (!tmp_473_fu_6018_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_473_fu_6018_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs89_fu_6234_p2() {
    notlhs89_fu_6234_p2 = (!tmp_480_fu_6203_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_480_fu_6203_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs90_fu_6252_p2() {
    notlhs90_fu_6252_p2 = (!tmp_482_fu_6220_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_482_fu_6220_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs91_fu_3273_p2() {
    notlhs91_fu_3273_p2 = (!tmp_489_fu_3259_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_489_fu_3259_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs92_fu_3452_p2() {
    notlhs92_fu_3452_p2 = (!tmp_494_fu_3421_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_494_fu_3421_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs93_fu_3470_p2() {
    notlhs93_fu_3470_p2 = (!tmp_496_fu_3438_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_496_fu_3438_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs94_fu_6122_p2() {
    notlhs94_fu_6122_p2 = (!tmp_503_fu_6091_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_503_fu_6091_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs95_fu_6140_p2() {
    notlhs95_fu_6140_p2 = (!tmp_505_fu_6108_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_505_fu_6108_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs96_fu_6329_p2() {
    notlhs96_fu_6329_p2 = (!tmp_512_fu_6298_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_512_fu_6298_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs97_fu_6347_p2() {
    notlhs97_fu_6347_p2 = (!tmp_514_fu_6315_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_514_fu_6315_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs98_fu_3525_p2() {
    notlhs98_fu_3525_p2 = (!tmp_521_fu_3511_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_521_fu_3511_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs99_fu_3664_p2() {
    notlhs99_fu_3664_p2 = (!tmp_526_fu_3633_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_526_fu_3633_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notlhs_fu_2015_p2() {
    notlhs_fu_2015_p2 = (!tmp_201_fu_2001_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_201_fu_2001_p4.read() != ap_const_lv8_FF);
}

void inference_maxPoolNxN::thread_notrhs100_fu_3688_p2() {
    notrhs100_fu_3688_p2 = (!tmp_713_fu_3660_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_713_fu_3660_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs101_fu_6430_p2() {
    notrhs101_fu_6430_p2 = (!tmp_714_fu_6403_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_714_fu_6403_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs102_fu_6448_p2() {
    notrhs102_fu_6448_p2 = (!tmp_715_fu_6420_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_715_fu_6420_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs103_fu_6632_p2() {
    notrhs103_fu_6632_p2 = (!tmp_716_fu_6605_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_716_fu_6605_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs104_fu_6650_p2() {
    notrhs104_fu_6650_p2 = (!tmp_717_fu_6622_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_717_fu_6622_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs105_fu_3581_p2() {
    notrhs105_fu_3581_p2 = (!tmp_718_fu_3571_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_718_fu_3571_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs106_fu_3760_p2() {
    notrhs106_fu_3760_p2 = (!tmp_719_fu_3733_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_719_fu_3733_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs107_fu_3778_p2() {
    notrhs107_fu_3778_p2 = (!tmp_720_fu_3750_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_720_fu_3750_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs108_fu_6520_p2() {
    notrhs108_fu_6520_p2 = (!tmp_721_fu_6493_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_721_fu_6493_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs109_fu_6538_p2() {
    notrhs109_fu_6538_p2 = (!tmp_722_fu_6510_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_722_fu_6510_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs110_fu_6727_p2() {
    notrhs110_fu_6727_p2 = (!tmp_723_fu_6700_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_723_fu_6700_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs111_fu_6745_p2() {
    notrhs111_fu_6745_p2 = (!tmp_724_fu_6717_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_724_fu_6717_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs112_fu_3833_p2() {
    notrhs112_fu_3833_p2 = (!tmp_725_fu_3823_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_725_fu_3823_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs113_fu_3975_p2() {
    notrhs113_fu_3975_p2 = (!tmp_726_fu_3948_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_726_fu_3948_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs114_fu_3993_p2() {
    notrhs114_fu_3993_p2 = (!tmp_727_fu_3965_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_727_fu_3965_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs115_fu_6822_p2() {
    notrhs115_fu_6822_p2 = (!tmp_728_fu_6795_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_728_fu_6795_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs116_fu_6840_p2() {
    notrhs116_fu_6840_p2 = (!tmp_729_fu_6812_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_729_fu_6812_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs117_fu_7002_p2() {
    notrhs117_fu_7002_p2 = (!tmp_730_fu_6975_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_730_fu_6975_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs118_fu_7020_p2() {
    notrhs118_fu_7020_p2 = (!tmp_731_fu_6992_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_731_fu_6992_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs119_fu_3883_p2() {
    notrhs119_fu_3883_p2 = (!tmp_732_fu_3873_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_732_fu_3873_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs120_fu_4065_p2() {
    notrhs120_fu_4065_p2 = (!tmp_733_fu_4038_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_733_fu_4038_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs121_fu_4083_p2() {
    notrhs121_fu_4083_p2 = (!tmp_734_fu_4055_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_734_fu_4055_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs122_fu_6912_p2() {
    notrhs122_fu_6912_p2 = (!tmp_735_fu_6885_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_735_fu_6885_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs123_fu_6930_p2() {
    notrhs123_fu_6930_p2 = (!tmp_736_fu_6902_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_736_fu_6902_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs124_fu_7097_p2() {
    notrhs124_fu_7097_p2 = (!tmp_737_fu_7070_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_737_fu_7070_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs125_fu_7115_p2() {
    notrhs125_fu_7115_p2 = (!tmp_738_fu_7087_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_738_fu_7087_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs126_fu_4138_p2() {
    notrhs126_fu_4138_p2 = (!tmp_739_fu_4128_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_739_fu_4128_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs127_fu_4457_p2() {
    notrhs127_fu_4457_p2 = (!tmp_740_fu_4430_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_740_fu_4430_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs128_fu_4475_p2() {
    notrhs128_fu_4475_p2 = (!tmp_741_fu_4447_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_741_fu_4447_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs129_fu_7192_p2() {
    notrhs129_fu_7192_p2 = (!tmp_742_fu_7165_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_742_fu_7165_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs130_fu_7210_p2() {
    notrhs130_fu_7210_p2 = (!tmp_743_fu_7182_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_743_fu_7182_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs131_fu_7372_p2() {
    notrhs131_fu_7372_p2 = (!tmp_744_fu_7345_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_744_fu_7345_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs132_fu_7390_p2() {
    notrhs132_fu_7390_p2 = (!tmp_745_fu_7362_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_745_fu_7362_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs133_fu_4188_p2() {
    notrhs133_fu_4188_p2 = (!tmp_746_fu_4178_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_746_fu_4178_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs134_fu_4547_p2() {
    notrhs134_fu_4547_p2 = (!tmp_747_fu_4520_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_747_fu_4520_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs135_fu_4565_p2() {
    notrhs135_fu_4565_p2 = (!tmp_748_fu_4537_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_748_fu_4537_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs136_fu_7282_p2() {
    notrhs136_fu_7282_p2 = (!tmp_749_fu_7255_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_749_fu_7255_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs137_fu_7300_p2() {
    notrhs137_fu_7300_p2 = (!tmp_750_fu_7272_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_750_fu_7272_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs138_fu_7467_p2() {
    notrhs138_fu_7467_p2 = (!tmp_751_fu_7440_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_751_fu_7440_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs139_fu_7485_p2() {
    notrhs139_fu_7485_p2 = (!tmp_752_fu_7457_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_752_fu_7457_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs17_fu_2160_p2() {
    notrhs17_fu_2160_p2 = (!tmp_387_fu_2133_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_387_fu_2133_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs19_fu_2178_p2() {
    notrhs19_fu_2178_p2 = (!tmp_394_fu_2150_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_394_fu_2150_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs21_fu_4277_p2() {
    notrhs21_fu_4277_p2 = (!tmp_399_fu_4250_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_399_fu_4250_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs23_fu_4295_p2() {
    notrhs23_fu_4295_p2 = (!tmp_401_fu_4267_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_401_fu_4267_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs25_fu_4672_p2() {
    notrhs25_fu_4672_p2 = (!tmp_408_fu_4645_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_408_fu_4645_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs27_fu_4690_p2() {
    notrhs27_fu_4690_p2 = (!tmp_410_fu_4662_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_410_fu_4662_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs29_fu_2071_p2() {
    notrhs29_fu_2071_p2 = (!tmp_417_fu_2061_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_417_fu_2061_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs31_fu_2250_p2() {
    notrhs31_fu_2250_p2 = (!tmp_419_fu_2223_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_419_fu_2223_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs33_fu_2268_p2() {
    notrhs33_fu_2268_p2 = (!tmp_426_fu_2240_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_426_fu_2240_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs35_fu_4367_p2() {
    notrhs35_fu_4367_p2 = (!tmp_431_fu_4340_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_431_fu_4340_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs37_fu_4385_p2() {
    notrhs37_fu_4385_p2 = (!tmp_433_fu_4357_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_433_fu_4357_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs39_fu_4767_p2() {
    notrhs39_fu_4767_p2 = (!tmp_440_fu_4740_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_440_fu_4740_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs41_fu_4785_p2() {
    notrhs41_fu_4785_p2 = (!tmp_442_fu_4757_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_442_fu_4757_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs42_fu_2323_p2() {
    notrhs42_fu_2323_p2 = (!tmp_449_fu_2313_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_449_fu_2313_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs43_fu_2462_p2() {
    notrhs43_fu_2462_p2 = (!tmp_451_fu_2435_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_451_fu_2435_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs44_fu_2480_p2() {
    notrhs44_fu_2480_p2 = (!tmp_458_fu_2452_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_458_fu_2452_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs45_fu_4862_p2() {
    notrhs45_fu_4862_p2 = (!tmp_463_fu_4835_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_463_fu_4835_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs46_fu_4880_p2() {
    notrhs46_fu_4880_p2 = (!tmp_465_fu_4852_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_465_fu_4852_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs47_fu_5064_p2() {
    notrhs47_fu_5064_p2 = (!tmp_472_fu_5037_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_472_fu_5037_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs48_fu_5082_p2() {
    notrhs48_fu_5082_p2 = (!tmp_474_fu_5054_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_474_fu_5054_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs49_fu_2373_p2() {
    notrhs49_fu_2373_p2 = (!tmp_481_fu_2363_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_481_fu_2363_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs50_fu_2552_p2() {
    notrhs50_fu_2552_p2 = (!tmp_483_fu_2525_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_483_fu_2525_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs51_fu_2570_p2() {
    notrhs51_fu_2570_p2 = (!tmp_490_fu_2542_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_490_fu_2542_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs52_fu_4952_p2() {
    notrhs52_fu_4952_p2 = (!tmp_495_fu_4925_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_495_fu_4925_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs53_fu_4970_p2() {
    notrhs53_fu_4970_p2 = (!tmp_497_fu_4942_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_497_fu_4942_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs54_fu_5159_p2() {
    notrhs54_fu_5159_p2 = (!tmp_504_fu_5132_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_504_fu_5132_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs55_fu_5177_p2() {
    notrhs55_fu_5177_p2 = (!tmp_506_fu_5149_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_506_fu_5149_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs56_fu_2625_p2() {
    notrhs56_fu_2625_p2 = (!tmp_513_fu_2615_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_513_fu_2615_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs57_fu_2764_p2() {
    notrhs57_fu_2764_p2 = (!tmp_515_fu_2737_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_515_fu_2737_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs58_fu_2782_p2() {
    notrhs58_fu_2782_p2 = (!tmp_522_fu_2754_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_522_fu_2754_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs59_fu_5254_p2() {
    notrhs59_fu_5254_p2 = (!tmp_527_fu_5227_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_527_fu_5227_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs60_fu_5272_p2() {
    notrhs60_fu_5272_p2 = (!tmp_529_fu_5244_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_529_fu_5244_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs61_fu_5456_p2() {
    notrhs61_fu_5456_p2 = (!tmp_536_fu_5429_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_536_fu_5429_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs62_fu_5474_p2() {
    notrhs62_fu_5474_p2 = (!tmp_538_fu_5446_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_538_fu_5446_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs63_fu_2675_p2() {
    notrhs63_fu_2675_p2 = (!tmp_545_fu_2665_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_545_fu_2665_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs64_fu_2854_p2() {
    notrhs64_fu_2854_p2 = (!tmp_547_fu_2827_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_547_fu_2827_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs65_fu_2872_p2() {
    notrhs65_fu_2872_p2 = (!tmp_554_fu_2844_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_554_fu_2844_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs66_fu_5344_p2() {
    notrhs66_fu_5344_p2 = (!tmp_559_fu_5317_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_559_fu_5317_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs67_fu_5362_p2() {
    notrhs67_fu_5362_p2 = (!tmp_561_fu_5334_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_561_fu_5334_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs68_fu_5551_p2() {
    notrhs68_fu_5551_p2 = (!tmp_568_fu_5524_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_568_fu_5524_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs69_fu_5569_p2() {
    notrhs69_fu_5569_p2 = (!tmp_570_fu_5541_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_570_fu_5541_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs70_fu_2927_p2() {
    notrhs70_fu_2927_p2 = (!tmp_577_fu_2917_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_577_fu_2917_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs71_fu_3066_p2() {
    notrhs71_fu_3066_p2 = (!tmp_579_fu_3039_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_579_fu_3039_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs72_fu_3084_p2() {
    notrhs72_fu_3084_p2 = (!tmp_586_fu_3056_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_586_fu_3056_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs73_fu_5646_p2() {
    notrhs73_fu_5646_p2 = (!tmp_591_fu_5619_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_591_fu_5619_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs74_fu_5664_p2() {
    notrhs74_fu_5664_p2 = (!tmp_593_fu_5636_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_593_fu_5636_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs75_fu_5848_p2() {
    notrhs75_fu_5848_p2 = (!tmp_600_fu_5821_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_600_fu_5821_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs76_fu_5866_p2() {
    notrhs76_fu_5866_p2 = (!tmp_602_fu_5838_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_602_fu_5838_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs77_fu_2977_p2() {
    notrhs77_fu_2977_p2 = (!tmp_609_fu_2967_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_609_fu_2967_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs78_fu_3156_p2() {
    notrhs78_fu_3156_p2 = (!tmp_611_fu_3129_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_611_fu_3129_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs79_fu_3174_p2() {
    notrhs79_fu_3174_p2 = (!tmp_618_fu_3146_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_618_fu_3146_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs80_fu_5736_p2() {
    notrhs80_fu_5736_p2 = (!tmp_623_fu_5709_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_623_fu_5709_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs81_fu_5754_p2() {
    notrhs81_fu_5754_p2 = (!tmp_625_fu_5726_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_625_fu_5726_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs82_fu_5943_p2() {
    notrhs82_fu_5943_p2 = (!tmp_632_fu_5916_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_632_fu_5916_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs83_fu_5961_p2() {
    notrhs83_fu_5961_p2 = (!tmp_634_fu_5933_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_634_fu_5933_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs84_fu_3229_p2() {
    notrhs84_fu_3229_p2 = (!tmp_641_fu_3219_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_641_fu_3219_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs85_fu_3368_p2() {
    notrhs85_fu_3368_p2 = (!tmp_643_fu_3341_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_643_fu_3341_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs86_fu_3386_p2() {
    notrhs86_fu_3386_p2 = (!tmp_650_fu_3358_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_650_fu_3358_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs87_fu_6038_p2() {
    notrhs87_fu_6038_p2 = (!tmp_655_fu_6011_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_655_fu_6011_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs88_fu_6056_p2() {
    notrhs88_fu_6056_p2 = (!tmp_657_fu_6028_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_657_fu_6028_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs89_fu_6240_p2() {
    notrhs89_fu_6240_p2 = (!tmp_664_fu_6213_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_664_fu_6213_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs90_fu_6258_p2() {
    notrhs90_fu_6258_p2 = (!tmp_666_fu_6230_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_666_fu_6230_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs91_fu_3279_p2() {
    notrhs91_fu_3279_p2 = (!tmp_673_fu_3269_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_673_fu_3269_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs92_fu_3458_p2() {
    notrhs92_fu_3458_p2 = (!tmp_675_fu_3431_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_675_fu_3431_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs93_fu_3476_p2() {
    notrhs93_fu_3476_p2 = (!tmp_682_fu_3448_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_682_fu_3448_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs94_fu_6128_p2() {
    notrhs94_fu_6128_p2 = (!tmp_687_fu_6101_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_687_fu_6101_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs95_fu_6146_p2() {
    notrhs95_fu_6146_p2 = (!tmp_689_fu_6118_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_689_fu_6118_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs96_fu_6335_p2() {
    notrhs96_fu_6335_p2 = (!tmp_696_fu_6308_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_696_fu_6308_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs97_fu_6353_p2() {
    notrhs97_fu_6353_p2 = (!tmp_698_fu_6325_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_698_fu_6325_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs98_fu_3531_p2() {
    notrhs98_fu_3531_p2 = (!tmp_705_fu_3521_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_705_fu_3521_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs99_fu_3670_p2() {
    notrhs99_fu_3670_p2 = (!tmp_707_fu_3643_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_707_fu_3643_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_notrhs_fu_2021_p2() {
    notrhs_fu_2021_p2 = (!tmp_385_fu_2011_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_385_fu_2011_p1.read() == ap_const_lv23_0);
}

void inference_maxPoolNxN::thread_out_2_0_0_1_fu_2202_p3() {
    out_2_0_0_1_fu_2202_p3 = (!tmp_214_fu_2196_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_214_fu_2196_p2.read()[0].to_bool())? reg_1805.read(): out_2_reg_7612.read());
}

void inference_maxPoolNxN::thread_out_2_0_0_1_to_int_fu_4254_p1() {
    out_2_0_0_1_to_int_fu_4254_p1 = out_2_0_0_1_reg_7646.read();
}

void inference_maxPoolNxN::thread_out_2_0_1_1_fu_4714_p3() {
    out_2_0_1_1_fu_4714_p3 = (!tmp_232_fu_4708_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_232_fu_4708_p2.read()[0].to_bool())? reg_1805.read(): out_2_0_1_reg_8000.read());
}

void inference_maxPoolNxN::thread_out_2_0_1_fu_4319_p3() {
    out_2_0_1_fu_4319_p3 = (!tmp_223_fu_4313_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_223_fu_4313_p2.read()[0].to_bool())? x_0_q0.read(): out_2_0_0_1_reg_7646.read());
}

void inference_maxPoolNxN::thread_out_2_0_1_to_int_fu_4649_p1() {
    out_2_0_1_to_int_fu_4649_p1 = out_2_0_1_reg_8000.read();
}

void inference_maxPoolNxN::thread_out_2_0_to_int_fu_2137_p1() {
    out_2_0_to_int_fu_2137_p1 = out_2_reg_7612.read();
}

void inference_maxPoolNxN::thread_out_2_10_0_1_fu_3712_p3() {
    out_2_10_0_1_fu_3712_p3 = (!tmp_534_fu_3706_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_534_fu_3706_p2.read()[0].to_bool())? reg_1805.read(): out_2_10_reg_7852.read());
}

void inference_maxPoolNxN::thread_out_2_10_0_1_to_int_fu_6407_p1() {
    out_2_10_0_1_to_int_fu_6407_p1 = out_2_10_0_1_reg_7886.read();
}

void inference_maxPoolNxN::thread_out_2_10_1_1_fu_6674_p3() {
    out_2_10_1_1_fu_6674_p3 = (!tmp_552_fu_6668_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_552_fu_6668_p2.read()[0].to_bool())? reg_1805.read(): out_2_10_1_reg_8258.read());
}

void inference_maxPoolNxN::thread_out_2_10_1_fu_6472_p3() {
    out_2_10_1_fu_6472_p3 = (!tmp_543_fu_6466_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_543_fu_6466_p2.read()[0].to_bool())? x_0_q0.read(): out_2_10_0_1_reg_7886.read());
}

void inference_maxPoolNxN::thread_out_2_10_1_to_int_fu_6609_p1() {
    out_2_10_1_to_int_fu_6609_p1 = out_2_10_1_reg_8258.read();
}

void inference_maxPoolNxN::thread_out_2_10_fu_3549_p3() {
    out_2_10_fu_3549_p3 = (!tmp_525_fu_3543_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_525_fu_3543_p2.read()[0].to_bool())? x_0_q0.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_10_to_int_fu_3647_p1() {
    out_2_10_to_int_fu_3647_p1 = out_2_10_reg_7852.read();
}

void inference_maxPoolNxN::thread_out_2_11_0_1_fu_3802_p3() {
    out_2_11_0_1_fu_3802_p3 = (!tmp_566_fu_3796_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_566_fu_3796_p2.read()[0].to_bool())? reg_1811.read(): out_2_11_reg_7859.read());
}

void inference_maxPoolNxN::thread_out_2_11_0_1_to_int_fu_6497_p1() {
    out_2_11_0_1_to_int_fu_6497_p1 = out_2_11_0_1_reg_7893.read();
}

void inference_maxPoolNxN::thread_out_2_11_1_1_fu_6769_p3() {
    out_2_11_1_1_fu_6769_p3 = (!tmp_584_fu_6763_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_584_fu_6763_p2.read()[0].to_bool())? reg_1811.read(): out_2_11_1_reg_8265.read());
}

void inference_maxPoolNxN::thread_out_2_11_1_fu_6562_p3() {
    out_2_11_1_fu_6562_p3 = (!tmp_575_fu_6556_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_575_fu_6556_p2.read()[0].to_bool())? x_0_q1.read(): out_2_11_0_1_reg_7893.read());
}

void inference_maxPoolNxN::thread_out_2_11_1_to_int_fu_6704_p1() {
    out_2_11_1_to_int_fu_6704_p1 = out_2_11_1_reg_8265.read();
}

void inference_maxPoolNxN::thread_out_2_11_fu_3599_p3() {
    out_2_11_fu_3599_p3 = (!tmp_557_fu_3593_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_557_fu_3593_p2.read()[0].to_bool())? x_0_q1.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_11_to_int_fu_3737_p1() {
    out_2_11_to_int_fu_3737_p1 = out_2_11_reg_7859.read();
}

void inference_maxPoolNxN::thread_out_2_12_0_1_fu_4017_p3() {
    out_2_12_0_1_fu_4017_p3 = (!tmp_598_fu_4011_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_598_fu_4011_p2.read()[0].to_bool())? reg_1805.read(): out_2_12_reg_7900.read());
}

void inference_maxPoolNxN::thread_out_2_12_0_1_to_int_fu_6799_p1() {
    out_2_12_0_1_to_int_fu_6799_p1 = out_2_12_0_1_reg_7952.read();
}

void inference_maxPoolNxN::thread_out_2_12_1_1_fu_7044_p3() {
    out_2_12_1_1_fu_7044_p3 = (!tmp_616_fu_7038_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_fu_7038_p2.read()[0].to_bool())? reg_1805.read(): out_2_12_1_reg_8292.read());
}

void inference_maxPoolNxN::thread_out_2_12_1_fu_6864_p3() {
    out_2_12_1_fu_6864_p3 = (!tmp_607_fu_6858_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_607_fu_6858_p2.read()[0].to_bool())? x_0_q0.read(): out_2_12_0_1_reg_7952.read());
}

void inference_maxPoolNxN::thread_out_2_12_1_to_int_fu_6979_p1() {
    out_2_12_1_to_int_fu_6979_p1 = out_2_12_1_reg_8292.read();
}

void inference_maxPoolNxN::thread_out_2_12_fu_3851_p3() {
    out_2_12_fu_3851_p3 = (!tmp_589_fu_3845_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_589_fu_3845_p2.read()[0].to_bool())? x_0_q0.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_12_to_int_fu_3952_p1() {
    out_2_12_to_int_fu_3952_p1 = out_2_12_reg_7900.read();
}

void inference_maxPoolNxN::thread_out_2_13_0_1_fu_4107_p3() {
    out_2_13_0_1_fu_4107_p3 = (!tmp_630_fu_4101_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_630_fu_4101_p2.read()[0].to_bool())? reg_1811.read(): out_2_13_reg_7907.read());
}

void inference_maxPoolNxN::thread_out_2_13_0_1_to_int_fu_6889_p1() {
    out_2_13_0_1_to_int_fu_6889_p1 = out_2_13_0_1_reg_7959.read();
}

void inference_maxPoolNxN::thread_out_2_13_1_1_fu_7139_p3() {
    out_2_13_1_1_fu_7139_p3 = (!tmp_648_fu_7133_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_648_fu_7133_p2.read()[0].to_bool())? reg_1811.read(): out_2_13_1_reg_8299.read());
}

void inference_maxPoolNxN::thread_out_2_13_1_fu_6954_p3() {
    out_2_13_1_fu_6954_p3 = (!tmp_639_fu_6948_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_639_fu_6948_p2.read()[0].to_bool())? x_0_q1.read(): out_2_13_0_1_reg_7959.read());
}

void inference_maxPoolNxN::thread_out_2_13_1_to_int_fu_7074_p1() {
    out_2_13_1_to_int_fu_7074_p1 = out_2_13_1_reg_8299.read();
}

void inference_maxPoolNxN::thread_out_2_13_fu_3901_p3() {
    out_2_13_fu_3901_p3 = (!tmp_621_fu_3895_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_621_fu_3895_p2.read()[0].to_bool())? x_0_q1.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_13_to_int_fu_4042_p1() {
    out_2_13_to_int_fu_4042_p1 = out_2_13_reg_7907.read();
}

void inference_maxPoolNxN::thread_out_2_14_0_1_fu_4499_p3() {
    out_2_14_0_1_fu_4499_p3 = (!tmp_662_fu_4493_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_662_fu_4493_p2.read()[0].to_bool())? reg_1805.read(): out_2_14_reg_7966.read());
}

void inference_maxPoolNxN::thread_out_2_14_0_1_to_int_fu_7169_p1() {
    out_2_14_0_1_to_int_fu_7169_p1 = out_2_14_0_1_reg_8014.read();
}

void inference_maxPoolNxN::thread_out_2_14_1_1_fu_7414_p3() {
    out_2_14_1_1_fu_7414_p3 = (!tmp_680_fu_7408_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_680_fu_7408_p2.read()[0].to_bool())? reg_1805.read(): out_2_14_1_reg_8306.read());
}

void inference_maxPoolNxN::thread_out_2_14_1_fu_7234_p3() {
    out_2_14_1_fu_7234_p3 = (!tmp_671_fu_7228_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_671_fu_7228_p2.read()[0].to_bool())? x_0_q0.read(): out_2_14_0_1_reg_8014.read());
}

void inference_maxPoolNxN::thread_out_2_14_1_to_int_fu_7349_p1() {
    out_2_14_1_to_int_fu_7349_p1 = out_2_14_1_reg_8306.read();
}

void inference_maxPoolNxN::thread_out_2_14_fu_4156_p3() {
    out_2_14_fu_4156_p3 = (!tmp_653_fu_4150_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_653_fu_4150_p2.read()[0].to_bool())? x_0_q0.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_14_to_int_fu_4434_p1() {
    out_2_14_to_int_fu_4434_p1 = out_2_14_reg_7966.read();
}

void inference_maxPoolNxN::thread_out_2_15_0_1_fu_4589_p3() {
    out_2_15_0_1_fu_4589_p3 = (!tmp_694_fu_4583_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_694_fu_4583_p2.read()[0].to_bool())? reg_1811.read(): out_2_15_reg_7973.read());
}

void inference_maxPoolNxN::thread_out_2_15_0_1_to_int_fu_7259_p1() {
    out_2_15_0_1_to_int_fu_7259_p1 = out_2_15_0_1_reg_8021.read();
}

void inference_maxPoolNxN::thread_out_2_15_1_1_fu_7509_p3() {
    out_2_15_1_1_fu_7509_p3 = (!tmp_712_fu_7503_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_712_fu_7503_p2.read()[0].to_bool())? reg_1811.read(): out_2_15_1_reg_8313.read());
}

void inference_maxPoolNxN::thread_out_2_15_1_fu_7324_p3() {
    out_2_15_1_fu_7324_p3 = (!tmp_703_fu_7318_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_703_fu_7318_p2.read()[0].to_bool())? x_0_q1.read(): out_2_15_0_1_reg_8021.read());
}

void inference_maxPoolNxN::thread_out_2_15_1_to_int_fu_7444_p1() {
    out_2_15_1_to_int_fu_7444_p1 = out_2_15_1_reg_8313.read();
}

void inference_maxPoolNxN::thread_out_2_15_fu_4206_p3() {
    out_2_15_fu_4206_p3 = (!tmp_685_fu_4200_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_685_fu_4200_p2.read()[0].to_bool())? x_0_q1.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_15_to_int_fu_4524_p1() {
    out_2_15_to_int_fu_4524_p1 = out_2_15_reg_7973.read();
}

void inference_maxPoolNxN::thread_out_2_1_0_1_fu_2292_p3() {
    out_2_1_0_1_fu_2292_p3 = (!tmp_246_fu_2286_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_246_fu_2286_p2.read()[0].to_bool())? reg_1811.read(): out_2_1_reg_7619.read());
}

void inference_maxPoolNxN::thread_out_2_1_0_1_to_int_fu_4344_p1() {
    out_2_1_0_1_to_int_fu_4344_p1 = out_2_1_0_1_reg_7653.read();
}

void inference_maxPoolNxN::thread_out_2_1_1_1_fu_4809_p3() {
    out_2_1_1_1_fu_4809_p3 = (!tmp_264_fu_4803_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_264_fu_4803_p2.read()[0].to_bool())? reg_1811.read(): out_2_1_1_reg_8007.read());
}

void inference_maxPoolNxN::thread_out_2_1_1_fu_4409_p3() {
    out_2_1_1_fu_4409_p3 = (!tmp_255_fu_4403_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_255_fu_4403_p2.read()[0].to_bool())? x_0_q1.read(): out_2_1_0_1_reg_7653.read());
}

void inference_maxPoolNxN::thread_out_2_1_1_to_int_fu_4744_p1() {
    out_2_1_1_to_int_fu_4744_p1 = out_2_1_1_reg_8007.read();
}

void inference_maxPoolNxN::thread_out_2_1_fu_2089_p3() {
    out_2_1_fu_2089_p3 = (!tmp_237_fu_2083_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_237_fu_2083_p2.read()[0].to_bool())? x_0_q1.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_1_to_int_fu_2227_p1() {
    out_2_1_to_int_fu_2227_p1 = out_2_1_reg_7619.read();
}

void inference_maxPoolNxN::thread_out_2_2_0_1_fu_2504_p3() {
    out_2_2_0_1_fu_2504_p3 = (!tmp_278_fu_2498_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_278_fu_2498_p2.read()[0].to_bool())? reg_1805.read(): out_2_2_reg_7660.read());
}

void inference_maxPoolNxN::thread_out_2_2_0_1_to_int_fu_4839_p1() {
    out_2_2_0_1_to_int_fu_4839_p1 = out_2_2_0_1_reg_7694.read();
}

void inference_maxPoolNxN::thread_out_2_2_1_1_fu_5106_p3() {
    out_2_2_1_1_fu_5106_p3 = (!tmp_296_fu_5100_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_296_fu_5100_p2.read()[0].to_bool())? reg_1805.read(): out_2_2_1_reg_8122.read());
}

void inference_maxPoolNxN::thread_out_2_2_1_fu_4904_p3() {
    out_2_2_1_fu_4904_p3 = (!tmp_287_fu_4898_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_287_fu_4898_p2.read()[0].to_bool())? x_0_q0.read(): out_2_2_0_1_reg_7694.read());
}

void inference_maxPoolNxN::thread_out_2_2_1_to_int_fu_5041_p1() {
    out_2_2_1_to_int_fu_5041_p1 = out_2_2_1_reg_8122.read();
}

void inference_maxPoolNxN::thread_out_2_2_fu_2341_p3() {
    out_2_2_fu_2341_p3 = (!tmp_269_fu_2335_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_269_fu_2335_p2.read()[0].to_bool())? x_0_q0.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_2_to_int_fu_2439_p1() {
    out_2_2_to_int_fu_2439_p1 = out_2_2_reg_7660.read();
}

void inference_maxPoolNxN::thread_out_2_3_0_1_fu_2594_p3() {
    out_2_3_0_1_fu_2594_p3 = (!tmp_310_fu_2588_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_310_fu_2588_p2.read()[0].to_bool())? reg_1811.read(): out_2_3_reg_7667.read());
}

void inference_maxPoolNxN::thread_out_2_3_0_1_to_int_fu_4929_p1() {
    out_2_3_0_1_to_int_fu_4929_p1 = out_2_3_0_1_reg_7701.read();
}

void inference_maxPoolNxN::thread_out_2_3_1_1_fu_5201_p3() {
    out_2_3_1_1_fu_5201_p3 = (!tmp_328_fu_5195_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_328_fu_5195_p2.read()[0].to_bool())? reg_1811.read(): out_2_3_1_reg_8129.read());
}

void inference_maxPoolNxN::thread_out_2_3_1_fu_4994_p3() {
    out_2_3_1_fu_4994_p3 = (!tmp_319_fu_4988_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_319_fu_4988_p2.read()[0].to_bool())? x_0_q1.read(): out_2_3_0_1_reg_7701.read());
}

void inference_maxPoolNxN::thread_out_2_3_1_to_int_fu_5136_p1() {
    out_2_3_1_to_int_fu_5136_p1 = out_2_3_1_reg_8129.read();
}

void inference_maxPoolNxN::thread_out_2_3_fu_2391_p3() {
    out_2_3_fu_2391_p3 = (!tmp_301_fu_2385_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_301_fu_2385_p2.read()[0].to_bool())? x_0_q1.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_3_to_int_fu_2529_p1() {
    out_2_3_to_int_fu_2529_p1 = out_2_3_reg_7667.read();
}

void inference_maxPoolNxN::thread_out_2_4_0_1_fu_2806_p3() {
    out_2_4_0_1_fu_2806_p3 = (!tmp_342_fu_2800_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_342_fu_2800_p2.read()[0].to_bool())? reg_1805.read(): out_2_4_reg_7708.read());
}

void inference_maxPoolNxN::thread_out_2_4_0_1_to_int_fu_5231_p1() {
    out_2_4_0_1_to_int_fu_5231_p1 = out_2_4_0_1_reg_7742.read();
}

void inference_maxPoolNxN::thread_out_2_4_1_1_fu_5498_p3() {
    out_2_4_1_1_fu_5498_p3 = (!tmp_360_fu_5492_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_360_fu_5492_p2.read()[0].to_bool())? reg_1805.read(): out_2_4_1_reg_8156.read());
}

void inference_maxPoolNxN::thread_out_2_4_1_fu_5296_p3() {
    out_2_4_1_fu_5296_p3 = (!tmp_351_fu_5290_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_351_fu_5290_p2.read()[0].to_bool())? x_0_q0.read(): out_2_4_0_1_reg_7742.read());
}

void inference_maxPoolNxN::thread_out_2_4_1_to_int_fu_5433_p1() {
    out_2_4_1_to_int_fu_5433_p1 = out_2_4_1_reg_8156.read();
}

void inference_maxPoolNxN::thread_out_2_4_fu_2643_p3() {
    out_2_4_fu_2643_p3 = (!tmp_333_fu_2637_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_333_fu_2637_p2.read()[0].to_bool())? x_0_q0.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_4_to_int_fu_2741_p1() {
    out_2_4_to_int_fu_2741_p1 = out_2_4_reg_7708.read();
}

void inference_maxPoolNxN::thread_out_2_5_0_1_fu_2896_p3() {
    out_2_5_0_1_fu_2896_p3 = (!tmp_374_fu_2890_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_374_fu_2890_p2.read()[0].to_bool())? reg_1811.read(): out_2_5_reg_7715.read());
}

void inference_maxPoolNxN::thread_out_2_5_0_1_to_int_fu_5321_p1() {
    out_2_5_0_1_to_int_fu_5321_p1 = out_2_5_0_1_reg_7749.read();
}

void inference_maxPoolNxN::thread_out_2_5_1_1_fu_5593_p3() {
    out_2_5_1_1_fu_5593_p3 = (!tmp_392_fu_5587_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_392_fu_5587_p2.read()[0].to_bool())? reg_1811.read(): out_2_5_1_reg_8163.read());
}

void inference_maxPoolNxN::thread_out_2_5_1_fu_5386_p3() {
    out_2_5_1_fu_5386_p3 = (!tmp_383_fu_5380_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_383_fu_5380_p2.read()[0].to_bool())? x_0_q1.read(): out_2_5_0_1_reg_7749.read());
}

void inference_maxPoolNxN::thread_out_2_5_1_to_int_fu_5528_p1() {
    out_2_5_1_to_int_fu_5528_p1 = out_2_5_1_reg_8163.read();
}

void inference_maxPoolNxN::thread_out_2_5_fu_2693_p3() {
    out_2_5_fu_2693_p3 = (!tmp_365_fu_2687_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_365_fu_2687_p2.read()[0].to_bool())? x_0_q1.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_5_to_int_fu_2831_p1() {
    out_2_5_to_int_fu_2831_p1 = out_2_5_reg_7715.read();
}

void inference_maxPoolNxN::thread_out_2_6_0_1_fu_3108_p3() {
    out_2_6_0_1_fu_3108_p3 = (!tmp_406_fu_3102_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_406_fu_3102_p2.read()[0].to_bool())? reg_1805.read(): out_2_6_reg_7756.read());
}

void inference_maxPoolNxN::thread_out_2_6_0_1_to_int_fu_5623_p1() {
    out_2_6_0_1_to_int_fu_5623_p1 = out_2_6_0_1_reg_7790.read();
}

void inference_maxPoolNxN::thread_out_2_6_1_1_fu_5890_p3() {
    out_2_6_1_1_fu_5890_p3 = (!tmp_424_fu_5884_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_424_fu_5884_p2.read()[0].to_bool())? reg_1805.read(): out_2_6_1_reg_8190.read());
}

void inference_maxPoolNxN::thread_out_2_6_1_fu_5688_p3() {
    out_2_6_1_fu_5688_p3 = (!tmp_415_fu_5682_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_415_fu_5682_p2.read()[0].to_bool())? x_0_q0.read(): out_2_6_0_1_reg_7790.read());
}

void inference_maxPoolNxN::thread_out_2_6_1_to_int_fu_5825_p1() {
    out_2_6_1_to_int_fu_5825_p1 = out_2_6_1_reg_8190.read();
}

void inference_maxPoolNxN::thread_out_2_6_fu_2945_p3() {
    out_2_6_fu_2945_p3 = (!tmp_397_fu_2939_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_397_fu_2939_p2.read()[0].to_bool())? x_0_q0.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_6_to_int_fu_3043_p1() {
    out_2_6_to_int_fu_3043_p1 = out_2_6_reg_7756.read();
}

void inference_maxPoolNxN::thread_out_2_7_0_1_fu_3198_p3() {
    out_2_7_0_1_fu_3198_p3 = (!tmp_438_fu_3192_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_438_fu_3192_p2.read()[0].to_bool())? reg_1811.read(): out_2_7_reg_7763.read());
}

void inference_maxPoolNxN::thread_out_2_7_0_1_to_int_fu_5713_p1() {
    out_2_7_0_1_to_int_fu_5713_p1 = out_2_7_0_1_reg_7797.read();
}

void inference_maxPoolNxN::thread_out_2_7_1_1_fu_5985_p3() {
    out_2_7_1_1_fu_5985_p3 = (!tmp_456_fu_5979_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_456_fu_5979_p2.read()[0].to_bool())? reg_1811.read(): out_2_7_1_reg_8197.read());
}

void inference_maxPoolNxN::thread_out_2_7_1_fu_5778_p3() {
    out_2_7_1_fu_5778_p3 = (!tmp_447_fu_5772_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_447_fu_5772_p2.read()[0].to_bool())? x_0_q1.read(): out_2_7_0_1_reg_7797.read());
}

void inference_maxPoolNxN::thread_out_2_7_1_to_int_fu_5920_p1() {
    out_2_7_1_to_int_fu_5920_p1 = out_2_7_1_reg_8197.read();
}

void inference_maxPoolNxN::thread_out_2_7_fu_2995_p3() {
    out_2_7_fu_2995_p3 = (!tmp_429_fu_2989_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_429_fu_2989_p2.read()[0].to_bool())? x_0_q1.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_7_to_int_fu_3133_p1() {
    out_2_7_to_int_fu_3133_p1 = out_2_7_reg_7763.read();
}

void inference_maxPoolNxN::thread_out_2_8_0_1_fu_3410_p3() {
    out_2_8_0_1_fu_3410_p3 = (!tmp_470_fu_3404_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_470_fu_3404_p2.read()[0].to_bool())? reg_1805.read(): out_2_8_reg_7804.read());
}

void inference_maxPoolNxN::thread_out_2_8_0_1_to_int_fu_6015_p1() {
    out_2_8_0_1_to_int_fu_6015_p1 = out_2_8_0_1_reg_7838.read();
}

void inference_maxPoolNxN::thread_out_2_8_1_1_fu_6282_p3() {
    out_2_8_1_1_fu_6282_p3 = (!tmp_488_fu_6276_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_488_fu_6276_p2.read()[0].to_bool())? reg_1805.read(): out_2_8_1_reg_8224.read());
}

void inference_maxPoolNxN::thread_out_2_8_1_fu_6080_p3() {
    out_2_8_1_fu_6080_p3 = (!tmp_479_fu_6074_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_479_fu_6074_p2.read()[0].to_bool())? x_0_q0.read(): out_2_8_0_1_reg_7838.read());
}

void inference_maxPoolNxN::thread_out_2_8_1_to_int_fu_6217_p1() {
    out_2_8_1_to_int_fu_6217_p1 = out_2_8_1_reg_8224.read();
}

void inference_maxPoolNxN::thread_out_2_8_fu_3247_p3() {
    out_2_8_fu_3247_p3 = (!tmp_461_fu_3241_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_461_fu_3241_p2.read()[0].to_bool())? x_0_q0.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_8_to_int_fu_3345_p1() {
    out_2_8_to_int_fu_3345_p1 = out_2_8_reg_7804.read();
}

void inference_maxPoolNxN::thread_out_2_9_0_1_fu_3500_p3() {
    out_2_9_0_1_fu_3500_p3 = (!tmp_502_fu_3494_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_502_fu_3494_p2.read()[0].to_bool())? reg_1811.read(): out_2_9_reg_7811.read());
}

void inference_maxPoolNxN::thread_out_2_9_0_1_to_int_fu_6105_p1() {
    out_2_9_0_1_to_int_fu_6105_p1 = out_2_9_0_1_reg_7845.read();
}

void inference_maxPoolNxN::thread_out_2_9_1_1_fu_6377_p3() {
    out_2_9_1_1_fu_6377_p3 = (!tmp_520_fu_6371_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_520_fu_6371_p2.read()[0].to_bool())? reg_1811.read(): out_2_9_1_reg_8231.read());
}

void inference_maxPoolNxN::thread_out_2_9_1_fu_6170_p3() {
    out_2_9_1_fu_6170_p3 = (!tmp_511_fu_6164_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_511_fu_6164_p2.read()[0].to_bool())? x_0_q1.read(): out_2_9_0_1_reg_7845.read());
}

void inference_maxPoolNxN::thread_out_2_9_1_to_int_fu_6312_p1() {
    out_2_9_1_to_int_fu_6312_p1 = out_2_9_1_reg_8231.read();
}

void inference_maxPoolNxN::thread_out_2_9_fu_3297_p3() {
    out_2_9_fu_3297_p3 = (!tmp_493_fu_3291_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_493_fu_3291_p2.read()[0].to_bool())? x_0_q1.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_2_9_to_int_fu_3435_p1() {
    out_2_9_to_int_fu_3435_p1 = out_2_9_reg_7811.read();
}

void inference_maxPoolNxN::thread_out_2_fu_2039_p3() {
    out_2_fu_2039_p3 = (!tmp_205_fu_2033_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_205_fu_2033_p2.read()[0].to_bool())? x_0_q0.read(): ap_const_lv32_0);
}

void inference_maxPoolNxN::thread_out_feature_0_0_address0() {
    out_feature_0_0_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_0_0_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_0_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_0_d0() {
    out_feature_0_0_d0 = out_2_0_1_1_fu_4714_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_0_we0 = ap_const_logic_1;
    } else {
        out_feature_0_0_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_10_address0() {
    out_feature_0_10_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_0_10_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_10_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_10_d0() {
    out_feature_0_10_d0 = out_2_10_1_1_fu_6674_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_10_we0 = ap_const_logic_1;
    } else {
        out_feature_0_10_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_11_address0() {
    out_feature_0_11_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_0_11_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_11_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_11_d0() {
    out_feature_0_11_d0 = out_2_11_1_1_fu_6769_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_11_we0 = ap_const_logic_1;
    } else {
        out_feature_0_11_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_12_address0() {
    out_feature_0_12_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_0_12_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_12_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_12_d0() {
    out_feature_0_12_d0 = out_2_12_1_1_fu_7044_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_12_we0 = ap_const_logic_1;
    } else {
        out_feature_0_12_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_13_address0() {
    out_feature_0_13_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_0_13_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_13_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_13_d0() {
    out_feature_0_13_d0 = out_2_13_1_1_fu_7139_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_13_we0 = ap_const_logic_1;
    } else {
        out_feature_0_13_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_14_address0() {
    out_feature_0_14_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_0_14_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_14_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_14_d0() {
    out_feature_0_14_d0 = out_2_14_1_1_fu_7414_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_0)))) {
        out_feature_0_14_we0 = ap_const_logic_1;
    } else {
        out_feature_0_14_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_15_address0() {
    out_feature_0_15_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_0_15_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_15_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_15_d0() {
    out_feature_0_15_d0 = out_2_15_1_1_fu_7509_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_0)))) {
        out_feature_0_15_we0 = ap_const_logic_1;
    } else {
        out_feature_0_15_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_1_address0() {
    out_feature_0_1_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_0_1_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_1_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_1_d0() {
    out_feature_0_1_d0 = out_2_1_1_1_fu_4809_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_1_we0 = ap_const_logic_1;
    } else {
        out_feature_0_1_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_2_address0() {
    out_feature_0_2_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_0_2_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_2_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_2_d0() {
    out_feature_0_2_d0 = out_2_2_1_1_fu_5106_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_2_we0 = ap_const_logic_1;
    } else {
        out_feature_0_2_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_3_address0() {
    out_feature_0_3_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_0_3_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_3_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_3_d0() {
    out_feature_0_3_d0 = out_2_3_1_1_fu_5201_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_3_we0 = ap_const_logic_1;
    } else {
        out_feature_0_3_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_4_address0() {
    out_feature_0_4_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_0_4_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_4_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_4_d0() {
    out_feature_0_4_d0 = out_2_4_1_1_fu_5498_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_4_we0 = ap_const_logic_1;
    } else {
        out_feature_0_4_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_5_address0() {
    out_feature_0_5_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_0_5_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_5_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_5_d0() {
    out_feature_0_5_d0 = out_2_5_1_1_fu_5593_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_5_we0 = ap_const_logic_1;
    } else {
        out_feature_0_5_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_6_address0() {
    out_feature_0_6_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_0_6_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_6_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_6_d0() {
    out_feature_0_6_d0 = out_2_6_1_1_fu_5890_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_6_we0 = ap_const_logic_1;
    } else {
        out_feature_0_6_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_7_address0() {
    out_feature_0_7_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_0_7_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_7_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_7_d0() {
    out_feature_0_7_d0 = out_2_7_1_1_fu_5985_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_7_we0 = ap_const_logic_1;
    } else {
        out_feature_0_7_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_8_address0() {
    out_feature_0_8_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_0_8_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_8_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_8_d0() {
    out_feature_0_8_d0 = out_2_8_1_1_fu_6282_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_8_we0 = ap_const_logic_1;
    } else {
        out_feature_0_8_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_9_address0() {
    out_feature_0_9_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_0_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_0_9_ce0 = ap_const_logic_1;
    } else {
        out_feature_0_9_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_0_9_d0() {
    out_feature_0_9_d0 = out_2_9_1_1_fu_6377_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_0_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_0_9_we0 = ap_const_logic_1;
    } else {
        out_feature_0_9_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_0_address0() {
    out_feature_1_0_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_1_0_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_0_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_0_d0() {
    out_feature_1_0_d0 = out_2_0_1_1_fu_4714_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_0_we0 = ap_const_logic_1;
    } else {
        out_feature_1_0_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_10_address0() {
    out_feature_1_10_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_1_10_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_10_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_10_d0() {
    out_feature_1_10_d0 = out_2_10_1_1_fu_6674_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_10_we0 = ap_const_logic_1;
    } else {
        out_feature_1_10_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_11_address0() {
    out_feature_1_11_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_1_11_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_11_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_11_d0() {
    out_feature_1_11_d0 = out_2_11_1_1_fu_6769_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_11_we0 = ap_const_logic_1;
    } else {
        out_feature_1_11_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_12_address0() {
    out_feature_1_12_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_1_12_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_12_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_12_d0() {
    out_feature_1_12_d0 = out_2_12_1_1_fu_7044_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_12_we0 = ap_const_logic_1;
    } else {
        out_feature_1_12_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_13_address0() {
    out_feature_1_13_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_1_13_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_13_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_13_d0() {
    out_feature_1_13_d0 = out_2_13_1_1_fu_7139_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_13_we0 = ap_const_logic_1;
    } else {
        out_feature_1_13_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_14_address0() {
    out_feature_1_14_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_1_14_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_14_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_14_d0() {
    out_feature_1_14_d0 = out_2_14_1_1_fu_7414_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_1)))) {
        out_feature_1_14_we0 = ap_const_logic_1;
    } else {
        out_feature_1_14_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_15_address0() {
    out_feature_1_15_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_1_15_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_15_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_15_d0() {
    out_feature_1_15_d0 = out_2_15_1_1_fu_7509_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_1)))) {
        out_feature_1_15_we0 = ap_const_logic_1;
    } else {
        out_feature_1_15_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_1_address0() {
    out_feature_1_1_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_1_1_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_1_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_1_d0() {
    out_feature_1_1_d0 = out_2_1_1_1_fu_4809_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_1_we0 = ap_const_logic_1;
    } else {
        out_feature_1_1_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_2_address0() {
    out_feature_1_2_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_1_2_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_2_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_2_d0() {
    out_feature_1_2_d0 = out_2_2_1_1_fu_5106_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_2_we0 = ap_const_logic_1;
    } else {
        out_feature_1_2_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_3_address0() {
    out_feature_1_3_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_1_3_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_3_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_3_d0() {
    out_feature_1_3_d0 = out_2_3_1_1_fu_5201_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_3_we0 = ap_const_logic_1;
    } else {
        out_feature_1_3_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_4_address0() {
    out_feature_1_4_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_1_4_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_4_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_4_d0() {
    out_feature_1_4_d0 = out_2_4_1_1_fu_5498_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_4_we0 = ap_const_logic_1;
    } else {
        out_feature_1_4_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_5_address0() {
    out_feature_1_5_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_1_5_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_5_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_5_d0() {
    out_feature_1_5_d0 = out_2_5_1_1_fu_5593_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_5_we0 = ap_const_logic_1;
    } else {
        out_feature_1_5_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_6_address0() {
    out_feature_1_6_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_1_6_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_6_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_6_d0() {
    out_feature_1_6_d0 = out_2_6_1_1_fu_5890_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_6_we0 = ap_const_logic_1;
    } else {
        out_feature_1_6_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_7_address0() {
    out_feature_1_7_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_1_7_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_7_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_7_d0() {
    out_feature_1_7_d0 = out_2_7_1_1_fu_5985_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_7_we0 = ap_const_logic_1;
    } else {
        out_feature_1_7_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_8_address0() {
    out_feature_1_8_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_1_8_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_8_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_8_d0() {
    out_feature_1_8_d0 = out_2_8_1_1_fu_6282_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_8_we0 = ap_const_logic_1;
    } else {
        out_feature_1_8_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_9_address0() {
    out_feature_1_9_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_1_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_1_9_ce0 = ap_const_logic_1;
    } else {
        out_feature_1_9_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_1_9_d0() {
    out_feature_1_9_d0 = out_2_9_1_1_fu_6377_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_1_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1)))) {
        out_feature_1_9_we0 = ap_const_logic_1;
    } else {
        out_feature_1_9_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_0_address0() {
    out_feature_2_0_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_2_0_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_0_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_0_d0() {
    out_feature_2_0_d0 = out_2_0_1_1_fu_4714_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_0_we0 = ap_const_logic_1;
    } else {
        out_feature_2_0_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_10_address0() {
    out_feature_2_10_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_2_10_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_10_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_10_d0() {
    out_feature_2_10_d0 = out_2_10_1_1_fu_6674_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_10_we0 = ap_const_logic_1;
    } else {
        out_feature_2_10_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_11_address0() {
    out_feature_2_11_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_2_11_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_11_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_11_d0() {
    out_feature_2_11_d0 = out_2_11_1_1_fu_6769_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_11_we0 = ap_const_logic_1;
    } else {
        out_feature_2_11_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_12_address0() {
    out_feature_2_12_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_2_12_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_12_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_12_d0() {
    out_feature_2_12_d0 = out_2_12_1_1_fu_7044_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_12_we0 = ap_const_logic_1;
    } else {
        out_feature_2_12_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_13_address0() {
    out_feature_2_13_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_2_13_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_13_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_13_d0() {
    out_feature_2_13_d0 = out_2_13_1_1_fu_7139_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_13_we0 = ap_const_logic_1;
    } else {
        out_feature_2_13_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_14_address0() {
    out_feature_2_14_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_2_14_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_14_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_14_d0() {
    out_feature_2_14_d0 = out_2_14_1_1_fu_7414_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_2)))) {
        out_feature_2_14_we0 = ap_const_logic_1;
    } else {
        out_feature_2_14_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_15_address0() {
    out_feature_2_15_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_2_15_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_15_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_15_d0() {
    out_feature_2_15_d0 = out_2_15_1_1_fu_7509_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_2)))) {
        out_feature_2_15_we0 = ap_const_logic_1;
    } else {
        out_feature_2_15_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_1_address0() {
    out_feature_2_1_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_2_1_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_1_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_1_d0() {
    out_feature_2_1_d0 = out_2_1_1_1_fu_4809_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_1_we0 = ap_const_logic_1;
    } else {
        out_feature_2_1_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_2_address0() {
    out_feature_2_2_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_2_2_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_2_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_2_d0() {
    out_feature_2_2_d0 = out_2_2_1_1_fu_5106_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_2_we0 = ap_const_logic_1;
    } else {
        out_feature_2_2_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_3_address0() {
    out_feature_2_3_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_2_3_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_3_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_3_d0() {
    out_feature_2_3_d0 = out_2_3_1_1_fu_5201_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_3_we0 = ap_const_logic_1;
    } else {
        out_feature_2_3_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_4_address0() {
    out_feature_2_4_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_2_4_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_4_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_4_d0() {
    out_feature_2_4_d0 = out_2_4_1_1_fu_5498_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_4_we0 = ap_const_logic_1;
    } else {
        out_feature_2_4_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_5_address0() {
    out_feature_2_5_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_2_5_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_5_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_5_d0() {
    out_feature_2_5_d0 = out_2_5_1_1_fu_5593_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_5_we0 = ap_const_logic_1;
    } else {
        out_feature_2_5_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_6_address0() {
    out_feature_2_6_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_2_6_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_6_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_6_d0() {
    out_feature_2_6_d0 = out_2_6_1_1_fu_5890_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_6_we0 = ap_const_logic_1;
    } else {
        out_feature_2_6_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_7_address0() {
    out_feature_2_7_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_2_7_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_7_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_7_d0() {
    out_feature_2_7_d0 = out_2_7_1_1_fu_5985_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_7_we0 = ap_const_logic_1;
    } else {
        out_feature_2_7_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_8_address0() {
    out_feature_2_8_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_2_8_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_8_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_8_d0() {
    out_feature_2_8_d0 = out_2_8_1_1_fu_6282_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_8_we0 = ap_const_logic_1;
    } else {
        out_feature_2_8_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_9_address0() {
    out_feature_2_9_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_2_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_2_9_ce0 = ap_const_logic_1;
    } else {
        out_feature_2_9_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_2_9_d0() {
    out_feature_2_9_d0 = out_2_9_1_1_fu_6377_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_2_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2)))) {
        out_feature_2_9_we0 = ap_const_logic_1;
    } else {
        out_feature_2_9_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_0_address0() {
    out_feature_3_0_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_3_0_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_0_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_0_d0() {
    out_feature_3_0_d0 = out_2_0_1_1_fu_4714_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_0_we0 = ap_const_logic_1;
    } else {
        out_feature_3_0_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_10_address0() {
    out_feature_3_10_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_3_10_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_10_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_10_d0() {
    out_feature_3_10_d0 = out_2_10_1_1_fu_6674_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_10_we0 = ap_const_logic_1;
    } else {
        out_feature_3_10_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_11_address0() {
    out_feature_3_11_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_3_11_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_11_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_11_d0() {
    out_feature_3_11_d0 = out_2_11_1_1_fu_6769_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_11_we0 = ap_const_logic_1;
    } else {
        out_feature_3_11_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_12_address0() {
    out_feature_3_12_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_3_12_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_12_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_12_d0() {
    out_feature_3_12_d0 = out_2_12_1_1_fu_7044_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_12_we0 = ap_const_logic_1;
    } else {
        out_feature_3_12_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_13_address0() {
    out_feature_3_13_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_3_13_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_13_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_13_d0() {
    out_feature_3_13_d0 = out_2_13_1_1_fu_7139_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_13_we0 = ap_const_logic_1;
    } else {
        out_feature_3_13_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_14_address0() {
    out_feature_3_14_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_3_14_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_14_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_14_d0() {
    out_feature_3_14_d0 = out_2_14_1_1_fu_7414_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_3)))) {
        out_feature_3_14_we0 = ap_const_logic_1;
    } else {
        out_feature_3_14_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_15_address0() {
    out_feature_3_15_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_3_15_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_15_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_15_d0() {
    out_feature_3_15_d0 = out_2_15_1_1_fu_7509_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_3)))) {
        out_feature_3_15_we0 = ap_const_logic_1;
    } else {
        out_feature_3_15_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_1_address0() {
    out_feature_3_1_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_3_1_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_1_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_1_d0() {
    out_feature_3_1_d0 = out_2_1_1_1_fu_4809_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_1_we0 = ap_const_logic_1;
    } else {
        out_feature_3_1_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_2_address0() {
    out_feature_3_2_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_3_2_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_2_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_2_d0() {
    out_feature_3_2_d0 = out_2_2_1_1_fu_5106_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_2_we0 = ap_const_logic_1;
    } else {
        out_feature_3_2_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_3_address0() {
    out_feature_3_3_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_3_3_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_3_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_3_d0() {
    out_feature_3_3_d0 = out_2_3_1_1_fu_5201_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_3_we0 = ap_const_logic_1;
    } else {
        out_feature_3_3_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_4_address0() {
    out_feature_3_4_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_3_4_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_4_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_4_d0() {
    out_feature_3_4_d0 = out_2_4_1_1_fu_5498_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_4_we0 = ap_const_logic_1;
    } else {
        out_feature_3_4_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_5_address0() {
    out_feature_3_5_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_3_5_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_5_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_5_d0() {
    out_feature_3_5_d0 = out_2_5_1_1_fu_5593_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_5_we0 = ap_const_logic_1;
    } else {
        out_feature_3_5_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_6_address0() {
    out_feature_3_6_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_3_6_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_6_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_6_d0() {
    out_feature_3_6_d0 = out_2_6_1_1_fu_5890_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_6_we0 = ap_const_logic_1;
    } else {
        out_feature_3_6_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_7_address0() {
    out_feature_3_7_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_3_7_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_7_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_7_d0() {
    out_feature_3_7_d0 = out_2_7_1_1_fu_5985_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_7_we0 = ap_const_logic_1;
    } else {
        out_feature_3_7_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_8_address0() {
    out_feature_3_8_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_3_8_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_8_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_8_d0() {
    out_feature_3_8_d0 = out_2_8_1_1_fu_6282_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_8_we0 = ap_const_logic_1;
    } else {
        out_feature_3_8_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_9_address0() {
    out_feature_3_9_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_3_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_3_9_ce0 = ap_const_logic_1;
    } else {
        out_feature_3_9_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_3_9_d0() {
    out_feature_3_9_d0 = out_2_9_1_1_fu_6377_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_3_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3)))) {
        out_feature_3_9_we0 = ap_const_logic_1;
    } else {
        out_feature_3_9_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_0_address0() {
    out_feature_4_0_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_4_0_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_0_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_0_d0() {
    out_feature_4_0_d0 = out_2_0_1_1_fu_4714_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_0_we0 = ap_const_logic_1;
    } else {
        out_feature_4_0_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_10_address0() {
    out_feature_4_10_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_4_10_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_10_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_10_d0() {
    out_feature_4_10_d0 = out_2_10_1_1_fu_6674_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_10_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_10_we0 = ap_const_logic_1;
    } else {
        out_feature_4_10_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_11_address0() {
    out_feature_4_11_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()))) {
        out_feature_4_11_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_11_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_11_d0() {
    out_feature_4_11_d0 = out_2_11_1_1_fu_6769_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_11_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg15_fsm_16.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_11_we0 = ap_const_logic_1;
    } else {
        out_feature_4_11_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_12_address0() {
    out_feature_4_12_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_4_12_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_12_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_12_d0() {
    out_feature_4_12_d0 = out_2_12_1_1_fu_7044_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_12_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_12_we0 = ap_const_logic_1;
    } else {
        out_feature_4_12_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_13_address0() {
    out_feature_4_13_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        out_feature_4_13_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_13_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_13_d0() {
    out_feature_4_13_d0 = out_2_13_1_1_fu_7139_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_13_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_13_we0 = ap_const_logic_1;
    } else {
        out_feature_4_13_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_14_address0() {
    out_feature_4_14_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_4_14_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_14_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_14_d0() {
    out_feature_4_14_d0 = out_2_14_1_1_fu_7414_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_14_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_0)))) {
        out_feature_4_14_we0 = ap_const_logic_1;
    } else {
        out_feature_4_14_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_15_address0() {
    out_feature_4_15_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        out_feature_4_15_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_15_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_15_d0() {
    out_feature_4_15_d0 = out_2_15_1_1_fu_7509_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_15_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(ap_reg_ppstg_p_lshr_f2_reg_7540_pp0_it1.read(), ap_const_lv3_0)))) {
        out_feature_4_15_we0 = ap_const_logic_1;
    } else {
        out_feature_4_15_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_1_address0() {
    out_feature_4_1_address0 =  (sc_lv<3>) (tmp_s_fu_4596_p1.read());
}

void inference_maxPoolNxN::thread_out_feature_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        out_feature_4_1_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_1_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_1_d0() {
    out_feature_4_1_d0 = out_2_1_1_1_fu_4809_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_1_we0 = ap_const_logic_1;
    } else {
        out_feature_4_1_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_2_address0() {
    out_feature_4_2_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_4_2_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_2_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_2_d0() {
    out_feature_4_2_d0 = out_2_2_1_1_fu_5106_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_2_we0 = ap_const_logic_1;
    } else {
        out_feature_4_2_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_3_address0() {
    out_feature_4_3_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()))) {
        out_feature_4_3_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_3_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_3_d0() {
    out_feature_4_3_d0 = out_2_3_1_1_fu_5201_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg11_fsm_12.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_3_we0 = ap_const_logic_1;
    } else {
        out_feature_4_3_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_4_address0() {
    out_feature_4_4_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_4_4_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_4_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_4_d0() {
    out_feature_4_4_d0 = out_2_4_1_1_fu_5498_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_4_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_4_we0 = ap_const_logic_1;
    } else {
        out_feature_4_4_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_5_address0() {
    out_feature_4_5_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()))) {
        out_feature_4_5_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_5_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_5_d0() {
    out_feature_4_5_d0 = out_2_5_1_1_fu_5593_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_5_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg12_fsm_13.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_5_we0 = ap_const_logic_1;
    } else {
        out_feature_4_5_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_6_address0() {
    out_feature_4_6_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_4_6_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_6_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_6_d0() {
    out_feature_4_6_d0 = out_2_6_1_1_fu_5890_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_6_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_6_we0 = ap_const_logic_1;
    } else {
        out_feature_4_6_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_7_address0() {
    out_feature_4_7_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()))) {
        out_feature_4_7_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_7_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_7_d0() {
    out_feature_4_7_d0 = out_2_7_1_1_fu_5985_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_7_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg13_fsm_14.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_7_we0 = ap_const_logic_1;
    } else {
        out_feature_4_7_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_8_address0() {
    out_feature_4_8_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_4_8_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_8_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_8_d0() {
    out_feature_4_8_d0 = out_2_8_1_1_fu_6282_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_8_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_8_we0 = ap_const_logic_1;
    } else {
        out_feature_4_8_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_9_address0() {
    out_feature_4_9_address0 =  (sc_lv<3>) (tmp_s_reg_8028.read());
}

void inference_maxPoolNxN::thread_out_feature_4_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()))) {
        out_feature_4_9_ce0 = ap_const_logic_1;
    } else {
        out_feature_4_9_ce0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_out_feature_4_9_d0() {
    out_feature_4_9_d0 = out_2_9_1_1_fu_6377_p3.read();
}

void inference_maxPoolNxN::thread_out_feature_4_9_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(exitcond_flatten_reg_7521.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg14_fsm_15.read()) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_3) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_2) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_1) && 
          !esl_seteq<1,3,3>(p_lshr_f2_reg_7540.read(), ap_const_lv3_0)))) {
        out_feature_4_9_we0 = ap_const_logic_1;
    } else {
        out_feature_4_9_we0 = ap_const_logic_0;
    }
}

void inference_maxPoolNxN::thread_p_lshr_f2_fu_1917_p4() {
    p_lshr_f2_fu_1917_p4 = in_c_idx_mid2_fu_1841_p3.read().range(3, 1);
}

void inference_maxPoolNxN::thread_p_shl1_cast_fu_1879_p1() {
    p_shl1_cast_fu_1879_p1 = esl_zext<7,6>(tmp_fu_1871_p3.read());
}

void inference_maxPoolNxN::thread_p_shl_cast_fu_1907_p1() {
    p_shl_cast_fu_1907_p1 = esl_zext<7,6>(tmp_209_fu_1899_p3.read());
}

void inference_maxPoolNxN::thread_tmp_17_0_s_fu_1889_p2() {
    tmp_17_0_s_fu_1889_p2 = (in_r_idx_mid2_fu_1849_p3.read() | ap_const_lv4_1);
}

void inference_maxPoolNxN::thread_tmp_18_0_1_cast_fu_1895_p1() {
    tmp_18_0_1_cast_fu_1895_p1 = esl_zext<7,4>(tmp_17_0_s_fu_1889_p2.read());
}

void inference_maxPoolNxN::thread_tmp_201_fu_2001_p4() {
    tmp_201_fu_2001_p4 = x_0_load_to_int_fu_1997_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_202_fu_1835_p2() {
    tmp_202_fu_1835_p2 = (!in_c_idx_phi_fu_1774_p4.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): (sc_biguint<4>(in_c_idx_phi_fu_1774_p4.read()) < sc_biguint<4>(ap_const_lv4_A));
}

void inference_maxPoolNxN::thread_tmp_203_fu_2027_p2() {
    tmp_203_fu_2027_p2 = (notrhs_fu_2021_p2.read() | notlhs_fu_2015_p2.read());
}

void inference_maxPoolNxN::thread_tmp_205_fu_2033_p2() {
    tmp_205_fu_2033_p2 = (tmp_203_fu_2027_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_206_fu_2123_p4() {
    tmp_206_fu_2123_p4 = x_1_load_to_int_fu_2119_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_207_fu_1883_p2() {
    tmp_207_fu_1883_p2 = (!p_shl1_cast_fu_1879_p1.read().is_01() || !tmp_4_cast_fu_1867_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl1_cast_fu_1879_p1.read()) + sc_biguint<7>(tmp_4_cast_fu_1867_p1.read()));
}

void inference_maxPoolNxN::thread_tmp_208_fu_2140_p4() {
    tmp_208_fu_2140_p4 = out_2_0_to_int_fu_2137_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_209_fu_1899_p3() {
    tmp_209_fu_1899_p3 = esl_concat<4,2>(tmp_17_0_s_fu_1889_p2.read(), ap_const_lv2_0);
}

void inference_maxPoolNxN::thread_tmp_210_fu_2166_p2() {
    tmp_210_fu_2166_p2 = (notrhs17_fu_2160_p2.read() | notlhs16_fu_2154_p2.read());
}

void inference_maxPoolNxN::thread_tmp_211_fu_2184_p2() {
    tmp_211_fu_2184_p2 = (notrhs19_fu_2178_p2.read() | notlhs18_fu_2172_p2.read());
}

void inference_maxPoolNxN::thread_tmp_212_fu_2190_p2() {
    tmp_212_fu_2190_p2 = (tmp_210_fu_2166_p2.read() & tmp_211_fu_2184_p2.read());
}

void inference_maxPoolNxN::thread_tmp_214_fu_2196_p2() {
    tmp_214_fu_2196_p2 = (tmp_212_fu_2190_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_215_fu_4240_p4() {
    tmp_215_fu_4240_p4 = x_0_load_12_to_int_fu_4236_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_216_fu_1911_p2() {
    tmp_216_fu_1911_p2 = (!p_shl_cast_fu_1907_p1.read().is_01() || !tmp_18_0_1_cast_fu_1895_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_1907_p1.read()) + sc_biguint<7>(tmp_18_0_1_cast_fu_1895_p1.read()));
}

void inference_maxPoolNxN::thread_tmp_217_fu_4257_p4() {
    tmp_217_fu_4257_p4 = out_2_0_0_1_to_int_fu_4254_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_218_fu_1931_p2() {
    tmp_218_fu_1931_p2 = (!newIndex7_cast_fu_1927_p1.read().is_01() || !tmp_207_fu_1883_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(newIndex7_cast_fu_1927_p1.read()) + sc_biguint<7>(tmp_207_fu_1883_p2.read()));
}

void inference_maxPoolNxN::thread_tmp_219_fu_4283_p2() {
    tmp_219_fu_4283_p2 = (notrhs21_fu_4277_p2.read() | notlhs20_fu_4271_p2.read());
}

void inference_maxPoolNxN::thread_tmp_220_fu_4301_p2() {
    tmp_220_fu_4301_p2 = (notrhs23_fu_4295_p2.read() | notlhs22_fu_4289_p2.read());
}

void inference_maxPoolNxN::thread_tmp_221_fu_4307_p2() {
    tmp_221_fu_4307_p2 = (tmp_219_fu_4283_p2.read() & tmp_220_fu_4301_p2.read());
}

void inference_maxPoolNxN::thread_tmp_223_fu_4313_p2() {
    tmp_223_fu_4313_p2 = (tmp_221_fu_4307_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_224_fu_4635_p4() {
    tmp_224_fu_4635_p4 = x_1_load_12_to_int_fu_4631_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_225_fu_1945_p1() {
    tmp_225_fu_1945_p1 = esl_zext<64,11>(tmp_234_fu_1937_p3.read());
}

void inference_maxPoolNxN::thread_tmp_226_fu_4652_p4() {
    tmp_226_fu_4652_p4 = out_2_0_1_to_int_fu_4649_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_227_fu_1951_p2() {
    tmp_227_fu_1951_p2 = (!newIndex7_cast_fu_1927_p1.read().is_01() || !tmp_216_fu_1911_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(newIndex7_cast_fu_1927_p1.read()) + sc_biguint<7>(tmp_216_fu_1911_p2.read()));
}

void inference_maxPoolNxN::thread_tmp_228_fu_4678_p2() {
    tmp_228_fu_4678_p2 = (notrhs25_fu_4672_p2.read() | notlhs24_fu_4666_p2.read());
}

void inference_maxPoolNxN::thread_tmp_229_fu_4696_p2() {
    tmp_229_fu_4696_p2 = (notrhs27_fu_4690_p2.read() | notlhs26_fu_4684_p2.read());
}

void inference_maxPoolNxN::thread_tmp_230_fu_4702_p2() {
    tmp_230_fu_4702_p2 = (tmp_228_fu_4678_p2.read() & tmp_229_fu_4696_p2.read());
}

void inference_maxPoolNxN::thread_tmp_232_fu_4708_p2() {
    tmp_232_fu_4708_p2 = (tmp_230_fu_4702_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_233_fu_2051_p4() {
    tmp_233_fu_2051_p4 = x_0_load_13_to_int_fu_2047_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_234_fu_1937_p3() {
    tmp_234_fu_1937_p3 = esl_concat<7,4>(tmp_218_fu_1931_p2.read(), ap_const_lv4_0);
}

void inference_maxPoolNxN::thread_tmp_235_fu_2077_p2() {
    tmp_235_fu_2077_p2 = (notrhs29_fu_2071_p2.read() | notlhs28_fu_2065_p2.read());
}

void inference_maxPoolNxN::thread_tmp_237_fu_2083_p2() {
    tmp_237_fu_2083_p2 = (tmp_235_fu_2077_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_238_fu_2213_p4() {
    tmp_238_fu_2213_p4 = x_1_load_13_to_int_fu_2209_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_239_fu_3909_p3() {
    tmp_239_fu_3909_p3 = esl_concat<7,4>(tmp_227_reg_7567.read(), ap_const_lv4_0);
}

void inference_maxPoolNxN::thread_tmp_240_fu_2230_p4() {
    tmp_240_fu_2230_p4 = out_2_1_to_int_fu_2227_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_241_fu_3916_p1() {
    tmp_241_fu_3916_p1 = esl_zext<64,11>(tmp_239_fu_3909_p3.read());
}

void inference_maxPoolNxN::thread_tmp_242_fu_2256_p2() {
    tmp_242_fu_2256_p2 = (notrhs31_fu_2250_p2.read() | notlhs30_fu_2244_p2.read());
}

void inference_maxPoolNxN::thread_tmp_243_fu_2274_p2() {
    tmp_243_fu_2274_p2 = (notrhs33_fu_2268_p2.read() | notlhs32_fu_2262_p2.read());
}

void inference_maxPoolNxN::thread_tmp_244_fu_2280_p2() {
    tmp_244_fu_2280_p2 = (tmp_242_fu_2256_p2.read() & tmp_243_fu_2274_p2.read());
}

void inference_maxPoolNxN::thread_tmp_246_fu_2286_p2() {
    tmp_246_fu_2286_p2 = (tmp_244_fu_2280_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_247_fu_4330_p4() {
    tmp_247_fu_4330_p4 = x_0_load_14_to_int_fu_4326_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_248_fu_1957_p2() {
    tmp_248_fu_1957_p2 = (tmp_234_fu_1937_p3.read() | ap_const_lv11_1);
}

void inference_maxPoolNxN::thread_tmp_249_fu_4347_p4() {
    tmp_249_fu_4347_p4 = out_2_1_0_1_to_int_fu_4344_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_250_fu_3922_p2() {
    tmp_250_fu_3922_p2 = (tmp_239_fu_3909_p3.read() | ap_const_lv11_1);
}

void inference_maxPoolNxN::thread_tmp_251_fu_4373_p2() {
    tmp_251_fu_4373_p2 = (notrhs35_fu_4367_p2.read() | notlhs34_fu_4361_p2.read());
}

void inference_maxPoolNxN::thread_tmp_252_fu_4391_p2() {
    tmp_252_fu_4391_p2 = (notrhs37_fu_4385_p2.read() | notlhs36_fu_4379_p2.read());
}

void inference_maxPoolNxN::thread_tmp_253_fu_4397_p2() {
    tmp_253_fu_4397_p2 = (tmp_251_fu_4373_p2.read() & tmp_252_fu_4391_p2.read());
}

void inference_maxPoolNxN::thread_tmp_255_fu_4403_p2() {
    tmp_255_fu_4403_p2 = (tmp_253_fu_4397_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_256_fu_4730_p4() {
    tmp_256_fu_4730_p4 = x_1_load_14_to_int_fu_4726_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_257_fu_1975_p2() {
    tmp_257_fu_1975_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_2);
}

void inference_maxPoolNxN::thread_tmp_258_fu_4747_p4() {
    tmp_258_fu_4747_p4 = out_2_1_1_to_int_fu_4744_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_259_fu_4214_p2() {
    tmp_259_fu_4214_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_2);
}

void inference_maxPoolNxN::thread_tmp_260_fu_4773_p2() {
    tmp_260_fu_4773_p2 = (notrhs39_fu_4767_p2.read() | notlhs38_fu_4761_p2.read());
}

void inference_maxPoolNxN::thread_tmp_261_fu_4791_p2() {
    tmp_261_fu_4791_p2 = (notrhs41_fu_4785_p2.read() | notlhs40_fu_4779_p2.read());
}

void inference_maxPoolNxN::thread_tmp_262_fu_4797_p2() {
    tmp_262_fu_4797_p2 = (tmp_260_fu_4773_p2.read() & tmp_261_fu_4791_p2.read());
}

void inference_maxPoolNxN::thread_tmp_264_fu_4803_p2() {
    tmp_264_fu_4803_p2 = (tmp_262_fu_4797_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_265_fu_2303_p4() {
    tmp_265_fu_2303_p4 = x_0_load_15_to_int_fu_2299_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_266_fu_1986_p2() {
    tmp_266_fu_1986_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_3);
}

void inference_maxPoolNxN::thread_tmp_267_fu_2329_p2() {
    tmp_267_fu_2329_p2 = (notrhs42_fu_2323_p2.read() | notlhs42_fu_2317_p2.read());
}

void inference_maxPoolNxN::thread_tmp_269_fu_2335_p2() {
    tmp_269_fu_2335_p2 = (tmp_267_fu_2329_p2.read() & grp_fu_1793_p2.read());
}

void inference_maxPoolNxN::thread_tmp_270_fu_2425_p4() {
    tmp_270_fu_2425_p4 = x_1_load_15_to_int_fu_2421_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_271_fu_4225_p2() {
    tmp_271_fu_4225_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_3);
}

void inference_maxPoolNxN::thread_tmp_272_fu_2442_p4() {
    tmp_272_fu_2442_p4 = out_2_2_to_int_fu_2439_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_273_fu_2097_p2() {
    tmp_273_fu_2097_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_4);
}

void inference_maxPoolNxN::thread_tmp_274_fu_2468_p2() {
    tmp_274_fu_2468_p2 = (notrhs43_fu_2462_p2.read() | notlhs43_fu_2456_p2.read());
}

void inference_maxPoolNxN::thread_tmp_275_fu_2486_p2() {
    tmp_275_fu_2486_p2 = (notrhs44_fu_2480_p2.read() | notlhs44_fu_2474_p2.read());
}

void inference_maxPoolNxN::thread_tmp_276_fu_2492_p2() {
    tmp_276_fu_2492_p2 = (tmp_274_fu_2468_p2.read() & tmp_275_fu_2486_p2.read());
}

void inference_maxPoolNxN::thread_tmp_278_fu_2498_p2() {
    tmp_278_fu_2498_p2 = (tmp_276_fu_2492_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_279_fu_4825_p4() {
    tmp_279_fu_4825_p4 = x_0_load_16_to_int_fu_4821_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_280_fu_4609_p2() {
    tmp_280_fu_4609_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_4);
}

void inference_maxPoolNxN::thread_tmp_281_fu_4842_p4() {
    tmp_281_fu_4842_p4 = out_2_2_0_1_to_int_fu_4839_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_282_fu_2108_p2() {
    tmp_282_fu_2108_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_5);
}

void inference_maxPoolNxN::thread_tmp_283_fu_4868_p2() {
    tmp_283_fu_4868_p2 = (notrhs45_fu_4862_p2.read() | notlhs45_fu_4856_p2.read());
}

void inference_maxPoolNxN::thread_tmp_284_fu_4886_p2() {
    tmp_284_fu_4886_p2 = (notrhs46_fu_4880_p2.read() | notlhs46_fu_4874_p2.read());
}

void inference_maxPoolNxN::thread_tmp_285_fu_4892_p2() {
    tmp_285_fu_4892_p2 = (tmp_283_fu_4868_p2.read() & tmp_284_fu_4886_p2.read());
}

void inference_maxPoolNxN::thread_tmp_287_fu_4898_p2() {
    tmp_287_fu_4898_p2 = (tmp_285_fu_4892_p2.read() & grp_fu_1793_p2.read());
}

void inference_maxPoolNxN::thread_tmp_288_fu_5027_p4() {
    tmp_288_fu_5027_p4 = x_1_load_16_to_int_fu_5023_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_289_fu_4620_p2() {
    tmp_289_fu_4620_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_5);
}

void inference_maxPoolNxN::thread_tmp_290_fu_5044_p4() {
    tmp_290_fu_5044_p4 = out_2_2_1_to_int_fu_5041_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_291_fu_2399_p2() {
    tmp_291_fu_2399_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_6);
}

void inference_maxPoolNxN::thread_tmp_292_fu_5070_p2() {
    tmp_292_fu_5070_p2 = (notrhs47_fu_5064_p2.read() | notlhs47_fu_5058_p2.read());
}

void inference_maxPoolNxN::thread_tmp_293_fu_5088_p2() {
    tmp_293_fu_5088_p2 = (notrhs48_fu_5082_p2.read() | notlhs48_fu_5076_p2.read());
}

void inference_maxPoolNxN::thread_tmp_294_fu_5094_p2() {
    tmp_294_fu_5094_p2 = (tmp_292_fu_5070_p2.read() & tmp_293_fu_5088_p2.read());
}

void inference_maxPoolNxN::thread_tmp_296_fu_5100_p2() {
    tmp_296_fu_5100_p2 = (tmp_294_fu_5094_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_297_fu_2353_p4() {
    tmp_297_fu_2353_p4 = x_0_load_17_to_int_fu_2349_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_298_fu_5001_p2() {
    tmp_298_fu_5001_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_6);
}

void inference_maxPoolNxN::thread_tmp_299_fu_2379_p2() {
    tmp_299_fu_2379_p2 = (notrhs49_fu_2373_p2.read() | notlhs49_fu_2367_p2.read());
}

void inference_maxPoolNxN::thread_tmp_301_fu_2385_p2() {
    tmp_301_fu_2385_p2 = (tmp_299_fu_2379_p2.read() & grp_fu_1799_p2.read());
}

void inference_maxPoolNxN::thread_tmp_302_fu_2515_p4() {
    tmp_302_fu_2515_p4 = x_1_load_17_to_int_fu_2511_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_303_fu_2410_p2() {
    tmp_303_fu_2410_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_7);
}

void inference_maxPoolNxN::thread_tmp_304_fu_2532_p4() {
    tmp_304_fu_2532_p4 = out_2_3_to_int_fu_2529_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_305_fu_5012_p2() {
    tmp_305_fu_5012_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_7);
}

void inference_maxPoolNxN::thread_tmp_306_fu_2558_p2() {
    tmp_306_fu_2558_p2 = (notrhs50_fu_2552_p2.read() | notlhs50_fu_2546_p2.read());
}

void inference_maxPoolNxN::thread_tmp_307_fu_2576_p2() {
    tmp_307_fu_2576_p2 = (notrhs51_fu_2570_p2.read() | notlhs51_fu_2564_p2.read());
}

void inference_maxPoolNxN::thread_tmp_308_fu_2582_p2() {
    tmp_308_fu_2582_p2 = (tmp_306_fu_2558_p2.read() & tmp_307_fu_2576_p2.read());
}

void inference_maxPoolNxN::thread_tmp_310_fu_2588_p2() {
    tmp_310_fu_2588_p2 = (tmp_308_fu_2582_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_311_fu_4915_p4() {
    tmp_311_fu_4915_p4 = x_0_load_18_to_int_fu_4911_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_312_fu_2701_p2() {
    tmp_312_fu_2701_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_8);
}

void inference_maxPoolNxN::thread_tmp_313_fu_4932_p4() {
    tmp_313_fu_4932_p4 = out_2_3_0_1_to_int_fu_4929_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_314_fu_5393_p2() {
    tmp_314_fu_5393_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_8);
}

void inference_maxPoolNxN::thread_tmp_315_fu_4958_p2() {
    tmp_315_fu_4958_p2 = (notrhs52_fu_4952_p2.read() | notlhs52_fu_4946_p2.read());
}

void inference_maxPoolNxN::thread_tmp_316_fu_4976_p2() {
    tmp_316_fu_4976_p2 = (notrhs53_fu_4970_p2.read() | notlhs53_fu_4964_p2.read());
}

void inference_maxPoolNxN::thread_tmp_317_fu_4982_p2() {
    tmp_317_fu_4982_p2 = (tmp_315_fu_4958_p2.read() & tmp_316_fu_4976_p2.read());
}

void inference_maxPoolNxN::thread_tmp_319_fu_4988_p2() {
    tmp_319_fu_4988_p2 = (tmp_317_fu_4982_p2.read() & grp_fu_1799_p2.read());
}

void inference_maxPoolNxN::thread_tmp_320_fu_5122_p4() {
    tmp_320_fu_5122_p4 = x_1_load_18_to_int_fu_5118_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_321_fu_2712_p2() {
    tmp_321_fu_2712_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_9);
}

void inference_maxPoolNxN::thread_tmp_322_fu_5139_p4() {
    tmp_322_fu_5139_p4 = out_2_3_1_to_int_fu_5136_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_323_fu_5404_p2() {
    tmp_323_fu_5404_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_9);
}

void inference_maxPoolNxN::thread_tmp_324_fu_5165_p2() {
    tmp_324_fu_5165_p2 = (notrhs54_fu_5159_p2.read() | notlhs54_fu_5153_p2.read());
}

void inference_maxPoolNxN::thread_tmp_325_fu_5183_p2() {
    tmp_325_fu_5183_p2 = (notrhs55_fu_5177_p2.read() | notlhs55_fu_5171_p2.read());
}

void inference_maxPoolNxN::thread_tmp_326_fu_5189_p2() {
    tmp_326_fu_5189_p2 = (tmp_324_fu_5165_p2.read() & tmp_325_fu_5183_p2.read());
}

void inference_maxPoolNxN::thread_tmp_328_fu_5195_p2() {
    tmp_328_fu_5195_p2 = (tmp_326_fu_5189_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_329_fu_2605_p4() {
    tmp_329_fu_2605_p4 = x_0_load_19_to_int_fu_2601_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_330_fu_3003_p2() {
    tmp_330_fu_3003_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_A);
}

void inference_maxPoolNxN::thread_tmp_331_fu_2631_p2() {
    tmp_331_fu_2631_p2 = (notrhs56_fu_2625_p2.read() | notlhs56_fu_2619_p2.read());
}

void inference_maxPoolNxN::thread_tmp_333_fu_2637_p2() {
    tmp_333_fu_2637_p2 = (tmp_331_fu_2631_p2.read() & grp_fu_1793_p2.read());
}

void inference_maxPoolNxN::thread_tmp_334_fu_2727_p4() {
    tmp_334_fu_2727_p4 = x_1_load_19_to_int_fu_2723_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_335_fu_5785_p2() {
    tmp_335_fu_5785_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_A);
}

void inference_maxPoolNxN::thread_tmp_336_fu_2744_p4() {
    tmp_336_fu_2744_p4 = out_2_4_to_int_fu_2741_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_337_fu_3014_p2() {
    tmp_337_fu_3014_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_B);
}

void inference_maxPoolNxN::thread_tmp_338_fu_2770_p2() {
    tmp_338_fu_2770_p2 = (notrhs57_fu_2764_p2.read() | notlhs57_fu_2758_p2.read());
}

void inference_maxPoolNxN::thread_tmp_339_fu_2788_p2() {
    tmp_339_fu_2788_p2 = (notrhs58_fu_2782_p2.read() | notlhs58_fu_2776_p2.read());
}

void inference_maxPoolNxN::thread_tmp_340_fu_2794_p2() {
    tmp_340_fu_2794_p2 = (tmp_338_fu_2770_p2.read() & tmp_339_fu_2788_p2.read());
}

void inference_maxPoolNxN::thread_tmp_342_fu_2800_p2() {
    tmp_342_fu_2800_p2 = (tmp_340_fu_2794_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_343_fu_5217_p4() {
    tmp_343_fu_5217_p4 = x_0_load_20_to_int_fu_5213_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_344_fu_5796_p2() {
    tmp_344_fu_5796_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_B);
}

void inference_maxPoolNxN::thread_tmp_345_fu_5234_p4() {
    tmp_345_fu_5234_p4 = out_2_4_0_1_to_int_fu_5231_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_346_fu_3305_p2() {
    tmp_346_fu_3305_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_C);
}

void inference_maxPoolNxN::thread_tmp_347_fu_5260_p2() {
    tmp_347_fu_5260_p2 = (notrhs59_fu_5254_p2.read() | notlhs59_fu_5248_p2.read());
}

void inference_maxPoolNxN::thread_tmp_348_fu_5278_p2() {
    tmp_348_fu_5278_p2 = (notrhs60_fu_5272_p2.read() | notlhs60_fu_5266_p2.read());
}

void inference_maxPoolNxN::thread_tmp_349_fu_5284_p2() {
    tmp_349_fu_5284_p2 = (tmp_347_fu_5260_p2.read() & tmp_348_fu_5278_p2.read());
}

void inference_maxPoolNxN::thread_tmp_351_fu_5290_p2() {
    tmp_351_fu_5290_p2 = (tmp_349_fu_5284_p2.read() & grp_fu_1793_p2.read());
}

void inference_maxPoolNxN::thread_tmp_352_fu_5419_p4() {
    tmp_352_fu_5419_p4 = x_1_load_20_to_int_fu_5415_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_353_fu_6177_p2() {
    tmp_353_fu_6177_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_C);
}

void inference_maxPoolNxN::thread_tmp_354_fu_5436_p4() {
    tmp_354_fu_5436_p4 = out_2_4_1_to_int_fu_5433_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_355_fu_3316_p2() {
    tmp_355_fu_3316_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_D);
}

void inference_maxPoolNxN::thread_tmp_356_fu_5462_p2() {
    tmp_356_fu_5462_p2 = (notrhs61_fu_5456_p2.read() | notlhs61_fu_5450_p2.read());
}

void inference_maxPoolNxN::thread_tmp_357_fu_5480_p2() {
    tmp_357_fu_5480_p2 = (notrhs62_fu_5474_p2.read() | notlhs62_fu_5468_p2.read());
}

void inference_maxPoolNxN::thread_tmp_358_fu_5486_p2() {
    tmp_358_fu_5486_p2 = (tmp_356_fu_5462_p2.read() & tmp_357_fu_5480_p2.read());
}

void inference_maxPoolNxN::thread_tmp_360_fu_5492_p2() {
    tmp_360_fu_5492_p2 = (tmp_358_fu_5486_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_361_fu_2655_p4() {
    tmp_361_fu_2655_p4 = x_0_load_21_to_int_fu_2651_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_362_fu_6188_p2() {
    tmp_362_fu_6188_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_D);
}

void inference_maxPoolNxN::thread_tmp_363_fu_2681_p2() {
    tmp_363_fu_2681_p2 = (notrhs63_fu_2675_p2.read() | notlhs63_fu_2669_p2.read());
}

void inference_maxPoolNxN::thread_tmp_365_fu_2687_p2() {
    tmp_365_fu_2687_p2 = (tmp_363_fu_2681_p2.read() & grp_fu_1799_p2.read());
}

void inference_maxPoolNxN::thread_tmp_366_fu_2817_p4() {
    tmp_366_fu_2817_p4 = x_1_load_21_to_int_fu_2813_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_367_fu_3607_p2() {
    tmp_367_fu_3607_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_E);
}

void inference_maxPoolNxN::thread_tmp_368_fu_2834_p4() {
    tmp_368_fu_2834_p4 = out_2_5_to_int_fu_2831_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_369_fu_6569_p2() {
    tmp_369_fu_6569_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_E);
}

void inference_maxPoolNxN::thread_tmp_370_fu_2860_p2() {
    tmp_370_fu_2860_p2 = (notrhs64_fu_2854_p2.read() | notlhs64_fu_2848_p2.read());
}

void inference_maxPoolNxN::thread_tmp_371_fu_2878_p2() {
    tmp_371_fu_2878_p2 = (notrhs65_fu_2872_p2.read() | notlhs65_fu_2866_p2.read());
}

void inference_maxPoolNxN::thread_tmp_372_fu_2884_p2() {
    tmp_372_fu_2884_p2 = (tmp_370_fu_2860_p2.read() & tmp_371_fu_2878_p2.read());
}

void inference_maxPoolNxN::thread_tmp_374_fu_2890_p2() {
    tmp_374_fu_2890_p2 = (tmp_372_fu_2884_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_375_fu_5307_p4() {
    tmp_375_fu_5307_p4 = x_0_load_22_to_int_fu_5303_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_376_fu_3618_p2() {
    tmp_376_fu_3618_p2 = (tmp_234_reg_7544.read() | ap_const_lv11_F);
}

void inference_maxPoolNxN::thread_tmp_377_fu_5324_p4() {
    tmp_377_fu_5324_p4 = out_2_5_0_1_to_int_fu_5321_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_378_fu_6580_p2() {
    tmp_378_fu_6580_p2 = (tmp_239_reg_7914.read() | ap_const_lv11_F);
}

void inference_maxPoolNxN::thread_tmp_379_fu_5350_p2() {
    tmp_379_fu_5350_p2 = (notrhs66_fu_5344_p2.read() | notlhs66_fu_5338_p2.read());
}

void inference_maxPoolNxN::thread_tmp_380_fu_5368_p2() {
    tmp_380_fu_5368_p2 = (notrhs67_fu_5362_p2.read() | notlhs67_fu_5356_p2.read());
}

void inference_maxPoolNxN::thread_tmp_381_fu_5374_p2() {
    tmp_381_fu_5374_p2 = (tmp_379_fu_5350_p2.read() & tmp_380_fu_5368_p2.read());
}

void inference_maxPoolNxN::thread_tmp_383_fu_5380_p2() {
    tmp_383_fu_5380_p2 = (tmp_381_fu_5374_p2.read() & grp_fu_1799_p2.read());
}

void inference_maxPoolNxN::thread_tmp_384_fu_5514_p4() {
    tmp_384_fu_5514_p4 = x_1_load_22_to_int_fu_5510_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_385_fu_2011_p1() {
    tmp_385_fu_2011_p1 = x_0_load_to_int_fu_1997_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_386_fu_5531_p4() {
    tmp_386_fu_5531_p4 = out_2_5_1_to_int_fu_5528_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_387_fu_2133_p1() {
    tmp_387_fu_2133_p1 = x_1_load_to_int_fu_2119_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_388_fu_5557_p2() {
    tmp_388_fu_5557_p2 = (notrhs68_fu_5551_p2.read() | notlhs68_fu_5545_p2.read());
}

void inference_maxPoolNxN::thread_tmp_389_fu_5575_p2() {
    tmp_389_fu_5575_p2 = (notrhs69_fu_5569_p2.read() | notlhs69_fu_5563_p2.read());
}

void inference_maxPoolNxN::thread_tmp_390_fu_5581_p2() {
    tmp_390_fu_5581_p2 = (tmp_388_fu_5557_p2.read() & tmp_389_fu_5575_p2.read());
}

void inference_maxPoolNxN::thread_tmp_392_fu_5587_p2() {
    tmp_392_fu_5587_p2 = (tmp_390_fu_5581_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_393_fu_2907_p4() {
    tmp_393_fu_2907_p4 = x_0_load_23_to_int_fu_2903_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_394_fu_2150_p1() {
    tmp_394_fu_2150_p1 = out_2_0_to_int_fu_2137_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_395_fu_2933_p2() {
    tmp_395_fu_2933_p2 = (notrhs70_fu_2927_p2.read() | notlhs70_fu_2921_p2.read());
}

void inference_maxPoolNxN::thread_tmp_397_fu_2939_p2() {
    tmp_397_fu_2939_p2 = (tmp_395_fu_2933_p2.read() & grp_fu_1793_p2.read());
}

void inference_maxPoolNxN::thread_tmp_398_fu_3029_p4() {
    tmp_398_fu_3029_p4 = x_1_load_23_to_int_fu_3025_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_399_fu_4250_p1() {
    tmp_399_fu_4250_p1 = x_0_load_12_to_int_fu_4236_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_400_fu_3046_p4() {
    tmp_400_fu_3046_p4 = out_2_6_to_int_fu_3043_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_401_fu_4267_p1() {
    tmp_401_fu_4267_p1 = out_2_0_0_1_to_int_fu_4254_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_402_fu_3072_p2() {
    tmp_402_fu_3072_p2 = (notrhs71_fu_3066_p2.read() | notlhs71_fu_3060_p2.read());
}

void inference_maxPoolNxN::thread_tmp_403_fu_3090_p2() {
    tmp_403_fu_3090_p2 = (notrhs72_fu_3084_p2.read() | notlhs72_fu_3078_p2.read());
}

void inference_maxPoolNxN::thread_tmp_404_fu_3096_p2() {
    tmp_404_fu_3096_p2 = (tmp_402_fu_3072_p2.read() & tmp_403_fu_3090_p2.read());
}

void inference_maxPoolNxN::thread_tmp_406_fu_3102_p2() {
    tmp_406_fu_3102_p2 = (tmp_404_fu_3096_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_407_fu_5609_p4() {
    tmp_407_fu_5609_p4 = x_0_load_24_to_int_fu_5605_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_408_fu_4645_p1() {
    tmp_408_fu_4645_p1 = x_1_load_12_to_int_fu_4631_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_409_fu_5626_p4() {
    tmp_409_fu_5626_p4 = out_2_6_0_1_to_int_fu_5623_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_410_fu_4662_p1() {
    tmp_410_fu_4662_p1 = out_2_0_1_to_int_fu_4649_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_411_fu_5652_p2() {
    tmp_411_fu_5652_p2 = (notrhs73_fu_5646_p2.read() | notlhs73_fu_5640_p2.read());
}

void inference_maxPoolNxN::thread_tmp_412_fu_5670_p2() {
    tmp_412_fu_5670_p2 = (notrhs74_fu_5664_p2.read() | notlhs74_fu_5658_p2.read());
}

void inference_maxPoolNxN::thread_tmp_413_fu_5676_p2() {
    tmp_413_fu_5676_p2 = (tmp_411_fu_5652_p2.read() & tmp_412_fu_5670_p2.read());
}

void inference_maxPoolNxN::thread_tmp_415_fu_5682_p2() {
    tmp_415_fu_5682_p2 = (tmp_413_fu_5676_p2.read() & grp_fu_1793_p2.read());
}

void inference_maxPoolNxN::thread_tmp_416_fu_5811_p4() {
    tmp_416_fu_5811_p4 = x_1_load_24_to_int_fu_5807_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_417_fu_2061_p1() {
    tmp_417_fu_2061_p1 = x_0_load_13_to_int_fu_2047_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_418_fu_5828_p4() {
    tmp_418_fu_5828_p4 = out_2_6_1_to_int_fu_5825_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_419_fu_2223_p1() {
    tmp_419_fu_2223_p1 = x_1_load_13_to_int_fu_2209_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_420_fu_5854_p2() {
    tmp_420_fu_5854_p2 = (notrhs75_fu_5848_p2.read() | notlhs75_fu_5842_p2.read());
}

void inference_maxPoolNxN::thread_tmp_421_fu_5872_p2() {
    tmp_421_fu_5872_p2 = (notrhs76_fu_5866_p2.read() | notlhs76_fu_5860_p2.read());
}

void inference_maxPoolNxN::thread_tmp_422_fu_5878_p2() {
    tmp_422_fu_5878_p2 = (tmp_420_fu_5854_p2.read() & tmp_421_fu_5872_p2.read());
}

void inference_maxPoolNxN::thread_tmp_424_fu_5884_p2() {
    tmp_424_fu_5884_p2 = (tmp_422_fu_5878_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_425_fu_2957_p4() {
    tmp_425_fu_2957_p4 = x_0_load_25_to_int_fu_2953_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_426_fu_2240_p1() {
    tmp_426_fu_2240_p1 = out_2_1_to_int_fu_2227_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_427_fu_2983_p2() {
    tmp_427_fu_2983_p2 = (notrhs77_fu_2977_p2.read() | notlhs77_fu_2971_p2.read());
}

void inference_maxPoolNxN::thread_tmp_429_fu_2989_p2() {
    tmp_429_fu_2989_p2 = (tmp_427_fu_2983_p2.read() & grp_fu_1799_p2.read());
}

void inference_maxPoolNxN::thread_tmp_430_fu_3119_p4() {
    tmp_430_fu_3119_p4 = x_1_load_25_to_int_fu_3115_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_431_fu_4340_p1() {
    tmp_431_fu_4340_p1 = x_0_load_14_to_int_fu_4326_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_432_fu_3136_p4() {
    tmp_432_fu_3136_p4 = out_2_7_to_int_fu_3133_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_433_fu_4357_p1() {
    tmp_433_fu_4357_p1 = out_2_1_0_1_to_int_fu_4344_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_434_fu_3162_p2() {
    tmp_434_fu_3162_p2 = (notrhs78_fu_3156_p2.read() | notlhs78_fu_3150_p2.read());
}

void inference_maxPoolNxN::thread_tmp_435_fu_3180_p2() {
    tmp_435_fu_3180_p2 = (notrhs79_fu_3174_p2.read() | notlhs79_fu_3168_p2.read());
}

void inference_maxPoolNxN::thread_tmp_436_fu_3186_p2() {
    tmp_436_fu_3186_p2 = (tmp_434_fu_3162_p2.read() & tmp_435_fu_3180_p2.read());
}

void inference_maxPoolNxN::thread_tmp_438_fu_3192_p2() {
    tmp_438_fu_3192_p2 = (tmp_436_fu_3186_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_439_fu_5699_p4() {
    tmp_439_fu_5699_p4 = x_0_load_26_to_int_fu_5695_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_440_fu_4740_p1() {
    tmp_440_fu_4740_p1 = x_1_load_14_to_int_fu_4726_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_441_fu_5716_p4() {
    tmp_441_fu_5716_p4 = out_2_7_0_1_to_int_fu_5713_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_442_fu_4757_p1() {
    tmp_442_fu_4757_p1 = out_2_1_1_to_int_fu_4744_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_443_fu_5742_p2() {
    tmp_443_fu_5742_p2 = (notrhs80_fu_5736_p2.read() | notlhs80_fu_5730_p2.read());
}

void inference_maxPoolNxN::thread_tmp_444_fu_5760_p2() {
    tmp_444_fu_5760_p2 = (notrhs81_fu_5754_p2.read() | notlhs81_fu_5748_p2.read());
}

void inference_maxPoolNxN::thread_tmp_445_fu_5766_p2() {
    tmp_445_fu_5766_p2 = (tmp_443_fu_5742_p2.read() & tmp_444_fu_5760_p2.read());
}

void inference_maxPoolNxN::thread_tmp_447_fu_5772_p2() {
    tmp_447_fu_5772_p2 = (tmp_445_fu_5766_p2.read() & grp_fu_1799_p2.read());
}

void inference_maxPoolNxN::thread_tmp_448_fu_5906_p4() {
    tmp_448_fu_5906_p4 = x_1_load_26_to_int_fu_5902_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_449_fu_2313_p1() {
    tmp_449_fu_2313_p1 = x_0_load_15_to_int_fu_2299_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_450_fu_5923_p4() {
    tmp_450_fu_5923_p4 = out_2_7_1_to_int_fu_5920_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_451_fu_2435_p1() {
    tmp_451_fu_2435_p1 = x_1_load_15_to_int_fu_2421_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_452_fu_5949_p2() {
    tmp_452_fu_5949_p2 = (notrhs82_fu_5943_p2.read() | notlhs82_fu_5937_p2.read());
}

void inference_maxPoolNxN::thread_tmp_453_fu_5967_p2() {
    tmp_453_fu_5967_p2 = (notrhs83_fu_5961_p2.read() | notlhs83_fu_5955_p2.read());
}

void inference_maxPoolNxN::thread_tmp_454_fu_5973_p2() {
    tmp_454_fu_5973_p2 = (tmp_452_fu_5949_p2.read() & tmp_453_fu_5967_p2.read());
}

void inference_maxPoolNxN::thread_tmp_456_fu_5979_p2() {
    tmp_456_fu_5979_p2 = (tmp_454_fu_5973_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_457_fu_3209_p4() {
    tmp_457_fu_3209_p4 = x_0_load_27_to_int_fu_3205_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_458_fu_2452_p1() {
    tmp_458_fu_2452_p1 = out_2_2_to_int_fu_2439_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_459_fu_3235_p2() {
    tmp_459_fu_3235_p2 = (notrhs84_fu_3229_p2.read() | notlhs84_fu_3223_p2.read());
}

void inference_maxPoolNxN::thread_tmp_461_fu_3241_p2() {
    tmp_461_fu_3241_p2 = (tmp_459_fu_3235_p2.read() & grp_fu_1793_p2.read());
}

void inference_maxPoolNxN::thread_tmp_462_fu_3331_p4() {
    tmp_462_fu_3331_p4 = x_1_load_27_to_int_fu_3327_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_463_fu_4835_p1() {
    tmp_463_fu_4835_p1 = x_0_load_16_to_int_fu_4821_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_464_fu_3348_p4() {
    tmp_464_fu_3348_p4 = out_2_8_to_int_fu_3345_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_465_fu_4852_p1() {
    tmp_465_fu_4852_p1 = out_2_2_0_1_to_int_fu_4839_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_466_fu_3374_p2() {
    tmp_466_fu_3374_p2 = (notrhs85_fu_3368_p2.read() | notlhs85_fu_3362_p2.read());
}

void inference_maxPoolNxN::thread_tmp_467_fu_3392_p2() {
    tmp_467_fu_3392_p2 = (notrhs86_fu_3386_p2.read() | notlhs86_fu_3380_p2.read());
}

void inference_maxPoolNxN::thread_tmp_468_fu_3398_p2() {
    tmp_468_fu_3398_p2 = (tmp_466_fu_3374_p2.read() & tmp_467_fu_3392_p2.read());
}

void inference_maxPoolNxN::thread_tmp_470_fu_3404_p2() {
    tmp_470_fu_3404_p2 = (tmp_468_fu_3398_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_471_fu_6001_p4() {
    tmp_471_fu_6001_p4 = x_0_load_28_to_int_fu_5997_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_472_fu_5037_p1() {
    tmp_472_fu_5037_p1 = x_1_load_16_to_int_fu_5023_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_473_fu_6018_p4() {
    tmp_473_fu_6018_p4 = out_2_8_0_1_to_int_fu_6015_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_474_fu_5054_p1() {
    tmp_474_fu_5054_p1 = out_2_2_1_to_int_fu_5041_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_475_fu_6044_p2() {
    tmp_475_fu_6044_p2 = (notrhs87_fu_6038_p2.read() | notlhs87_fu_6032_p2.read());
}

void inference_maxPoolNxN::thread_tmp_476_fu_6062_p2() {
    tmp_476_fu_6062_p2 = (notrhs88_fu_6056_p2.read() | notlhs88_fu_6050_p2.read());
}

void inference_maxPoolNxN::thread_tmp_477_fu_6068_p2() {
    tmp_477_fu_6068_p2 = (tmp_475_fu_6044_p2.read() & tmp_476_fu_6062_p2.read());
}

void inference_maxPoolNxN::thread_tmp_479_fu_6074_p2() {
    tmp_479_fu_6074_p2 = (tmp_477_fu_6068_p2.read() & grp_fu_1793_p2.read());
}

void inference_maxPoolNxN::thread_tmp_480_fu_6203_p4() {
    tmp_480_fu_6203_p4 = x_1_load_28_to_int_fu_6199_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_481_fu_2363_p1() {
    tmp_481_fu_2363_p1 = x_0_load_17_to_int_fu_2349_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_482_fu_6220_p4() {
    tmp_482_fu_6220_p4 = out_2_8_1_to_int_fu_6217_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_483_fu_2525_p1() {
    tmp_483_fu_2525_p1 = x_1_load_17_to_int_fu_2511_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_484_fu_6246_p2() {
    tmp_484_fu_6246_p2 = (notrhs89_fu_6240_p2.read() | notlhs89_fu_6234_p2.read());
}

void inference_maxPoolNxN::thread_tmp_485_fu_6264_p2() {
    tmp_485_fu_6264_p2 = (notrhs90_fu_6258_p2.read() | notlhs90_fu_6252_p2.read());
}

void inference_maxPoolNxN::thread_tmp_486_fu_6270_p2() {
    tmp_486_fu_6270_p2 = (tmp_484_fu_6246_p2.read() & tmp_485_fu_6264_p2.read());
}

void inference_maxPoolNxN::thread_tmp_488_fu_6276_p2() {
    tmp_488_fu_6276_p2 = (tmp_486_fu_6270_p2.read() & grp_fu_1781_p2.read());
}

void inference_maxPoolNxN::thread_tmp_489_fu_3259_p4() {
    tmp_489_fu_3259_p4 = x_0_load_29_to_int_fu_3255_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_490_fu_2542_p1() {
    tmp_490_fu_2542_p1 = out_2_3_to_int_fu_2529_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_491_fu_3285_p2() {
    tmp_491_fu_3285_p2 = (notrhs91_fu_3279_p2.read() | notlhs91_fu_3273_p2.read());
}

void inference_maxPoolNxN::thread_tmp_493_fu_3291_p2() {
    tmp_493_fu_3291_p2 = (tmp_491_fu_3285_p2.read() & grp_fu_1799_p2.read());
}

void inference_maxPoolNxN::thread_tmp_494_fu_3421_p4() {
    tmp_494_fu_3421_p4 = x_1_load_29_to_int_fu_3417_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_495_fu_4925_p1() {
    tmp_495_fu_4925_p1 = x_0_load_18_to_int_fu_4911_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_496_fu_3438_p4() {
    tmp_496_fu_3438_p4 = out_2_9_to_int_fu_3435_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_497_fu_4942_p1() {
    tmp_497_fu_4942_p1 = out_2_3_0_1_to_int_fu_4929_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_498_fu_3464_p2() {
    tmp_498_fu_3464_p2 = (notrhs92_fu_3458_p2.read() | notlhs92_fu_3452_p2.read());
}

void inference_maxPoolNxN::thread_tmp_499_fu_3482_p2() {
    tmp_499_fu_3482_p2 = (notrhs93_fu_3476_p2.read() | notlhs93_fu_3470_p2.read());
}

void inference_maxPoolNxN::thread_tmp_4_cast_fu_1867_p1() {
    tmp_4_cast_fu_1867_p1 = esl_zext<7,4>(in_r_idx_mid2_fu_1849_p3.read());
}

void inference_maxPoolNxN::thread_tmp_500_fu_3488_p2() {
    tmp_500_fu_3488_p2 = (tmp_498_fu_3464_p2.read() & tmp_499_fu_3482_p2.read());
}

void inference_maxPoolNxN::thread_tmp_502_fu_3494_p2() {
    tmp_502_fu_3494_p2 = (tmp_500_fu_3488_p2.read() & grp_fu_1787_p2.read());
}

void inference_maxPoolNxN::thread_tmp_503_fu_6091_p4() {
    tmp_503_fu_6091_p4 = x_0_load_30_to_int_fu_6087_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_504_fu_5132_p1() {
    tmp_504_fu_5132_p1 = x_1_load_18_to_int_fu_5118_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_505_fu_6108_p4() {
    tmp_505_fu_6108_p4 = out_2_9_0_1_to_int_fu_6105_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_506_fu_5149_p1() {
    tmp_506_fu_5149_p1 = out_2_3_1_to_int_fu_5136_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_507_fu_6134_p2() {
    tmp_507_fu_6134_p2 = (notrhs94_fu_6128_p2.read() | notlhs94_fu_6122_p2.read());
}

void inference_maxPoolNxN::thread_tmp_508_fu_6152_p2() {
    tmp_508_fu_6152_p2 = (notrhs95_fu_6146_p2.read() | notlhs95_fu_6140_p2.read());
}

void inference_maxPoolNxN::thread_tmp_509_fu_6158_p2() {
    tmp_509_fu_6158_p2 = (tmp_507_fu_6134_p2.read() & tmp_508_fu_6152_p2.read());
}

void inference_maxPoolNxN::thread_tmp_511_fu_6164_p2() {
    tmp_511_fu_6164_p2 = (tmp_509_fu_6158_p2.read() & grp_fu_1799_p2.read());
}

void inference_maxPoolNxN::thread_tmp_512_fu_6298_p4() {
    tmp_512_fu_6298_p4 = x_1_load_30_to_int_fu_6294_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_513_fu_2615_p1() {
    tmp_513_fu_2615_p1 = x_0_load_19_to_int_fu_2601_p1.read().range(23-1, 0);
}

void inference_maxPoolNxN::thread_tmp_514_fu_6315_p4() {
    tmp_514_fu_6315_p4 = out_2_9_1_to_int_fu_6312_p1.read().range(30, 23);
}

void inference_maxPoolNxN::thread_tmp_515_fu_2737_p1() {
    tmp_515_fu_2737_p1 = x_1_load_19_to_int_fu_2723_p1.read().range(23-1, 0);
}

}

