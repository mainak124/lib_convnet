#include "inference_mult_1_84_84_10_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_10_gep_fu_584_p3() {
    A_0_0_addr_10_gep_fu_584_p3 =  (sc_lv<5>) (ap_const_lv64_A);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_11_gep_fu_616_p3() {
    A_0_0_addr_11_gep_fu_616_p3 =  (sc_lv<5>) (ap_const_lv64_B);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_12_gep_fu_648_p3() {
    A_0_0_addr_12_gep_fu_648_p3 =  (sc_lv<5>) (ap_const_lv64_C);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_13_gep_fu_680_p3() {
    A_0_0_addr_13_gep_fu_680_p3 =  (sc_lv<5>) (ap_const_lv64_D);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_14_gep_fu_712_p3() {
    A_0_0_addr_14_gep_fu_712_p3 =  (sc_lv<5>) (ap_const_lv64_E);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_15_gep_fu_744_p3() {
    A_0_0_addr_15_gep_fu_744_p3 =  (sc_lv<5>) (ap_const_lv64_F);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_16_gep_fu_776_p3() {
    A_0_0_addr_16_gep_fu_776_p3 =  (sc_lv<5>) (ap_const_lv64_10);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_17_gep_fu_808_p3() {
    A_0_0_addr_17_gep_fu_808_p3 =  (sc_lv<5>) (ap_const_lv64_11);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_18_gep_fu_840_p3() {
    A_0_0_addr_18_gep_fu_840_p3 =  (sc_lv<5>) (ap_const_lv64_12);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_19_gep_fu_872_p3() {
    A_0_0_addr_19_gep_fu_872_p3 =  (sc_lv<5>) (ap_const_lv64_13);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_1_gep_fu_296_p3() {
    A_0_0_addr_1_gep_fu_296_p3 =  (sc_lv<5>) (ap_const_lv64_1);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_20_gep_fu_904_p3() {
    A_0_0_addr_20_gep_fu_904_p3 =  (sc_lv<5>) (ap_const_lv64_14);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_2_gep_fu_328_p3() {
    A_0_0_addr_2_gep_fu_328_p3 =  (sc_lv<5>) (ap_const_lv64_2);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_3_gep_fu_360_p3() {
    A_0_0_addr_3_gep_fu_360_p3 =  (sc_lv<5>) (ap_const_lv64_3);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_4_gep_fu_392_p3() {
    A_0_0_addr_4_gep_fu_392_p3 =  (sc_lv<5>) (ap_const_lv64_4);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_5_gep_fu_424_p3() {
    A_0_0_addr_5_gep_fu_424_p3 =  (sc_lv<5>) (ap_const_lv64_5);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_6_gep_fu_456_p3() {
    A_0_0_addr_6_gep_fu_456_p3 =  (sc_lv<5>) (ap_const_lv64_6);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_7_gep_fu_488_p3() {
    A_0_0_addr_7_gep_fu_488_p3 =  (sc_lv<5>) (ap_const_lv64_7);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_8_gep_fu_520_p3() {
    A_0_0_addr_8_gep_fu_520_p3 =  (sc_lv<5>) (ap_const_lv64_8);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_9_gep_fu_552_p3() {
    A_0_0_addr_9_gep_fu_552_p3 =  (sc_lv<5>) (ap_const_lv64_9);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_addr_gep_fu_264_p3() {
    A_0_0_addr_gep_fu_264_p3 =  (sc_lv<5>) (ap_const_lv64_0);
}

void inference_mult_1_84_84_10_s::thread_A_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) {
            A_0_0_address0 = A_0_0_addr_20_reg_2815.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) {
            A_0_0_address0 = A_0_0_addr_18_reg_2775.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
            A_0_0_address0 = A_0_0_addr_16_reg_2735.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            A_0_0_address0 = A_0_0_addr_14_reg_2695.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) {
            A_0_0_address0 = A_0_0_addr_12_reg_2655.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) {
            A_0_0_address0 = A_0_0_addr_10_reg_2615.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) {
            A_0_0_address0 = A_0_0_addr_8_reg_2575.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            A_0_0_address0 = A_0_0_addr_6_reg_2535.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            A_0_0_address0 = A_0_0_addr_4_reg_2495.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            A_0_0_address0 = A_0_0_addr_2_reg_2455.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            A_0_0_address0 = A_0_0_addr_reg_2415.read();
        } else {
            A_0_0_address0 = "XXXXX";
        }
    } else {
        A_0_0_address0 = "XXXXX";
    }
}

void inference_mult_1_84_84_10_s::thread_A_0_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) {
            A_0_0_address1 = A_0_0_addr_19_reg_2795.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
            A_0_0_address1 = A_0_0_addr_17_reg_2755.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            A_0_0_address1 = A_0_0_addr_15_reg_2715.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) {
            A_0_0_address1 = A_0_0_addr_13_reg_2675.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) {
            A_0_0_address1 = A_0_0_addr_11_reg_2635.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) {
            A_0_0_address1 = A_0_0_addr_9_reg_2595.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            A_0_0_address1 = A_0_0_addr_7_reg_2555.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            A_0_0_address1 = A_0_0_addr_5_reg_2515.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            A_0_0_address1 = A_0_0_addr_3_reg_2475.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            A_0_0_address1 = A_0_0_addr_1_reg_2435.read();
        } else {
            A_0_0_address1 = "XXXXX";
        }
    } else {
        A_0_0_address1 = "XXXXX";
    }
}

void inference_mult_1_84_84_10_s::thread_A_0_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        A_0_0_ce0 = ap_const_logic_1;
    } else {
        A_0_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_A_0_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        A_0_0_ce1 = ap_const_logic_1;
    } else {
        A_0_0_ce1 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_10_gep_fu_592_p3() {
    A_1_0_addr_10_gep_fu_592_p3 =  (sc_lv<5>) (ap_const_lv64_A);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_11_gep_fu_624_p3() {
    A_1_0_addr_11_gep_fu_624_p3 =  (sc_lv<5>) (ap_const_lv64_B);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_12_gep_fu_656_p3() {
    A_1_0_addr_12_gep_fu_656_p3 =  (sc_lv<5>) (ap_const_lv64_C);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_13_gep_fu_688_p3() {
    A_1_0_addr_13_gep_fu_688_p3 =  (sc_lv<5>) (ap_const_lv64_D);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_14_gep_fu_720_p3() {
    A_1_0_addr_14_gep_fu_720_p3 =  (sc_lv<5>) (ap_const_lv64_E);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_15_gep_fu_752_p3() {
    A_1_0_addr_15_gep_fu_752_p3 =  (sc_lv<5>) (ap_const_lv64_F);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_16_gep_fu_784_p3() {
    A_1_0_addr_16_gep_fu_784_p3 =  (sc_lv<5>) (ap_const_lv64_10);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_17_gep_fu_816_p3() {
    A_1_0_addr_17_gep_fu_816_p3 =  (sc_lv<5>) (ap_const_lv64_11);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_18_gep_fu_848_p3() {
    A_1_0_addr_18_gep_fu_848_p3 =  (sc_lv<5>) (ap_const_lv64_12);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_19_gep_fu_880_p3() {
    A_1_0_addr_19_gep_fu_880_p3 =  (sc_lv<5>) (ap_const_lv64_13);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_1_gep_fu_304_p3() {
    A_1_0_addr_1_gep_fu_304_p3 =  (sc_lv<5>) (ap_const_lv64_1);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_20_gep_fu_912_p3() {
    A_1_0_addr_20_gep_fu_912_p3 =  (sc_lv<5>) (ap_const_lv64_14);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_2_gep_fu_336_p3() {
    A_1_0_addr_2_gep_fu_336_p3 =  (sc_lv<5>) (ap_const_lv64_2);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_3_gep_fu_368_p3() {
    A_1_0_addr_3_gep_fu_368_p3 =  (sc_lv<5>) (ap_const_lv64_3);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_4_gep_fu_400_p3() {
    A_1_0_addr_4_gep_fu_400_p3 =  (sc_lv<5>) (ap_const_lv64_4);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_5_gep_fu_432_p3() {
    A_1_0_addr_5_gep_fu_432_p3 =  (sc_lv<5>) (ap_const_lv64_5);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_6_gep_fu_464_p3() {
    A_1_0_addr_6_gep_fu_464_p3 =  (sc_lv<5>) (ap_const_lv64_6);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_7_gep_fu_496_p3() {
    A_1_0_addr_7_gep_fu_496_p3 =  (sc_lv<5>) (ap_const_lv64_7);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_8_gep_fu_528_p3() {
    A_1_0_addr_8_gep_fu_528_p3 =  (sc_lv<5>) (ap_const_lv64_8);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_9_gep_fu_560_p3() {
    A_1_0_addr_9_gep_fu_560_p3 =  (sc_lv<5>) (ap_const_lv64_9);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_addr_gep_fu_272_p3() {
    A_1_0_addr_gep_fu_272_p3 =  (sc_lv<5>) (ap_const_lv64_0);
}

void inference_mult_1_84_84_10_s::thread_A_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) {
            A_1_0_address0 = A_1_0_addr_20_reg_2820.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) {
            A_1_0_address0 = A_1_0_addr_18_reg_2780.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
            A_1_0_address0 = A_1_0_addr_16_reg_2740.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            A_1_0_address0 = A_1_0_addr_14_reg_2700.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) {
            A_1_0_address0 = A_1_0_addr_12_reg_2660.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) {
            A_1_0_address0 = A_1_0_addr_10_reg_2620.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) {
            A_1_0_address0 = A_1_0_addr_8_reg_2580.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            A_1_0_address0 = A_1_0_addr_6_reg_2540.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            A_1_0_address0 = A_1_0_addr_4_reg_2500.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            A_1_0_address0 = A_1_0_addr_2_reg_2460.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            A_1_0_address0 = A_1_0_addr_reg_2420.read();
        } else {
            A_1_0_address0 = "XXXXX";
        }
    } else {
        A_1_0_address0 = "XXXXX";
    }
}

void inference_mult_1_84_84_10_s::thread_A_1_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) {
            A_1_0_address1 = A_1_0_addr_19_reg_2800.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
            A_1_0_address1 = A_1_0_addr_17_reg_2760.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            A_1_0_address1 = A_1_0_addr_15_reg_2720.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) {
            A_1_0_address1 = A_1_0_addr_13_reg_2680.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) {
            A_1_0_address1 = A_1_0_addr_11_reg_2640.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) {
            A_1_0_address1 = A_1_0_addr_9_reg_2600.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            A_1_0_address1 = A_1_0_addr_7_reg_2560.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            A_1_0_address1 = A_1_0_addr_5_reg_2520.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            A_1_0_address1 = A_1_0_addr_3_reg_2480.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            A_1_0_address1 = A_1_0_addr_1_reg_2440.read();
        } else {
            A_1_0_address1 = "XXXXX";
        }
    } else {
        A_1_0_address1 = "XXXXX";
    }
}

void inference_mult_1_84_84_10_s::thread_A_1_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        A_1_0_ce0 = ap_const_logic_1;
    } else {
        A_1_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_A_1_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        A_1_0_ce1 = ap_const_logic_1;
    } else {
        A_1_0_ce1 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_10_gep_fu_600_p3() {
    A_2_0_addr_10_gep_fu_600_p3 =  (sc_lv<5>) (ap_const_lv64_A);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_11_gep_fu_632_p3() {
    A_2_0_addr_11_gep_fu_632_p3 =  (sc_lv<5>) (ap_const_lv64_B);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_12_gep_fu_664_p3() {
    A_2_0_addr_12_gep_fu_664_p3 =  (sc_lv<5>) (ap_const_lv64_C);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_13_gep_fu_696_p3() {
    A_2_0_addr_13_gep_fu_696_p3 =  (sc_lv<5>) (ap_const_lv64_D);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_14_gep_fu_728_p3() {
    A_2_0_addr_14_gep_fu_728_p3 =  (sc_lv<5>) (ap_const_lv64_E);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_15_gep_fu_760_p3() {
    A_2_0_addr_15_gep_fu_760_p3 =  (sc_lv<5>) (ap_const_lv64_F);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_16_gep_fu_792_p3() {
    A_2_0_addr_16_gep_fu_792_p3 =  (sc_lv<5>) (ap_const_lv64_10);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_17_gep_fu_824_p3() {
    A_2_0_addr_17_gep_fu_824_p3 =  (sc_lv<5>) (ap_const_lv64_11);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_18_gep_fu_856_p3() {
    A_2_0_addr_18_gep_fu_856_p3 =  (sc_lv<5>) (ap_const_lv64_12);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_19_gep_fu_888_p3() {
    A_2_0_addr_19_gep_fu_888_p3 =  (sc_lv<5>) (ap_const_lv64_13);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_1_gep_fu_312_p3() {
    A_2_0_addr_1_gep_fu_312_p3 =  (sc_lv<5>) (ap_const_lv64_1);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_20_gep_fu_920_p3() {
    A_2_0_addr_20_gep_fu_920_p3 =  (sc_lv<5>) (ap_const_lv64_14);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_2_gep_fu_344_p3() {
    A_2_0_addr_2_gep_fu_344_p3 =  (sc_lv<5>) (ap_const_lv64_2);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_3_gep_fu_376_p3() {
    A_2_0_addr_3_gep_fu_376_p3 =  (sc_lv<5>) (ap_const_lv64_3);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_4_gep_fu_408_p3() {
    A_2_0_addr_4_gep_fu_408_p3 =  (sc_lv<5>) (ap_const_lv64_4);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_5_gep_fu_440_p3() {
    A_2_0_addr_5_gep_fu_440_p3 =  (sc_lv<5>) (ap_const_lv64_5);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_6_gep_fu_472_p3() {
    A_2_0_addr_6_gep_fu_472_p3 =  (sc_lv<5>) (ap_const_lv64_6);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_7_gep_fu_504_p3() {
    A_2_0_addr_7_gep_fu_504_p3 =  (sc_lv<5>) (ap_const_lv64_7);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_8_gep_fu_536_p3() {
    A_2_0_addr_8_gep_fu_536_p3 =  (sc_lv<5>) (ap_const_lv64_8);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_9_gep_fu_568_p3() {
    A_2_0_addr_9_gep_fu_568_p3 =  (sc_lv<5>) (ap_const_lv64_9);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_addr_gep_fu_280_p3() {
    A_2_0_addr_gep_fu_280_p3 =  (sc_lv<5>) (ap_const_lv64_0);
}

void inference_mult_1_84_84_10_s::thread_A_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) {
            A_2_0_address0 = A_2_0_addr_20_reg_2825.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) {
            A_2_0_address0 = A_2_0_addr_18_reg_2785.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
            A_2_0_address0 = A_2_0_addr_16_reg_2745.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            A_2_0_address0 = A_2_0_addr_14_reg_2705.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) {
            A_2_0_address0 = A_2_0_addr_12_reg_2665.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) {
            A_2_0_address0 = A_2_0_addr_10_reg_2625.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) {
            A_2_0_address0 = A_2_0_addr_8_reg_2585.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            A_2_0_address0 = A_2_0_addr_6_reg_2545.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            A_2_0_address0 = A_2_0_addr_4_reg_2505.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            A_2_0_address0 = A_2_0_addr_2_reg_2465.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            A_2_0_address0 = A_2_0_addr_reg_2425.read();
        } else {
            A_2_0_address0 = "XXXXX";
        }
    } else {
        A_2_0_address0 = "XXXXX";
    }
}

void inference_mult_1_84_84_10_s::thread_A_2_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) {
            A_2_0_address1 = A_2_0_addr_19_reg_2805.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
            A_2_0_address1 = A_2_0_addr_17_reg_2765.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            A_2_0_address1 = A_2_0_addr_15_reg_2725.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) {
            A_2_0_address1 = A_2_0_addr_13_reg_2685.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) {
            A_2_0_address1 = A_2_0_addr_11_reg_2645.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) {
            A_2_0_address1 = A_2_0_addr_9_reg_2605.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            A_2_0_address1 = A_2_0_addr_7_reg_2565.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            A_2_0_address1 = A_2_0_addr_5_reg_2525.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            A_2_0_address1 = A_2_0_addr_3_reg_2485.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            A_2_0_address1 = A_2_0_addr_1_reg_2445.read();
        } else {
            A_2_0_address1 = "XXXXX";
        }
    } else {
        A_2_0_address1 = "XXXXX";
    }
}

void inference_mult_1_84_84_10_s::thread_A_2_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        A_2_0_ce0 = ap_const_logic_1;
    } else {
        A_2_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_A_2_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        A_2_0_ce1 = ap_const_logic_1;
    } else {
        A_2_0_ce1 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_10_gep_fu_608_p3() {
    A_3_0_addr_10_gep_fu_608_p3 =  (sc_lv<5>) (ap_const_lv64_A);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_11_gep_fu_640_p3() {
    A_3_0_addr_11_gep_fu_640_p3 =  (sc_lv<5>) (ap_const_lv64_B);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_12_gep_fu_672_p3() {
    A_3_0_addr_12_gep_fu_672_p3 =  (sc_lv<5>) (ap_const_lv64_C);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_13_gep_fu_704_p3() {
    A_3_0_addr_13_gep_fu_704_p3 =  (sc_lv<5>) (ap_const_lv64_D);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_14_gep_fu_736_p3() {
    A_3_0_addr_14_gep_fu_736_p3 =  (sc_lv<5>) (ap_const_lv64_E);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_15_gep_fu_768_p3() {
    A_3_0_addr_15_gep_fu_768_p3 =  (sc_lv<5>) (ap_const_lv64_F);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_16_gep_fu_800_p3() {
    A_3_0_addr_16_gep_fu_800_p3 =  (sc_lv<5>) (ap_const_lv64_10);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_17_gep_fu_832_p3() {
    A_3_0_addr_17_gep_fu_832_p3 =  (sc_lv<5>) (ap_const_lv64_11);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_18_gep_fu_864_p3() {
    A_3_0_addr_18_gep_fu_864_p3 =  (sc_lv<5>) (ap_const_lv64_12);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_19_gep_fu_896_p3() {
    A_3_0_addr_19_gep_fu_896_p3 =  (sc_lv<5>) (ap_const_lv64_13);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_1_gep_fu_320_p3() {
    A_3_0_addr_1_gep_fu_320_p3 =  (sc_lv<5>) (ap_const_lv64_1);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_20_gep_fu_928_p3() {
    A_3_0_addr_20_gep_fu_928_p3 =  (sc_lv<5>) (ap_const_lv64_14);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_2_gep_fu_352_p3() {
    A_3_0_addr_2_gep_fu_352_p3 =  (sc_lv<5>) (ap_const_lv64_2);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_3_gep_fu_384_p3() {
    A_3_0_addr_3_gep_fu_384_p3 =  (sc_lv<5>) (ap_const_lv64_3);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_4_gep_fu_416_p3() {
    A_3_0_addr_4_gep_fu_416_p3 =  (sc_lv<5>) (ap_const_lv64_4);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_5_gep_fu_448_p3() {
    A_3_0_addr_5_gep_fu_448_p3 =  (sc_lv<5>) (ap_const_lv64_5);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_6_gep_fu_480_p3() {
    A_3_0_addr_6_gep_fu_480_p3 =  (sc_lv<5>) (ap_const_lv64_6);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_7_gep_fu_512_p3() {
    A_3_0_addr_7_gep_fu_512_p3 =  (sc_lv<5>) (ap_const_lv64_7);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_8_gep_fu_544_p3() {
    A_3_0_addr_8_gep_fu_544_p3 =  (sc_lv<5>) (ap_const_lv64_8);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_9_gep_fu_576_p3() {
    A_3_0_addr_9_gep_fu_576_p3 =  (sc_lv<5>) (ap_const_lv64_9);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_addr_gep_fu_288_p3() {
    A_3_0_addr_gep_fu_288_p3 =  (sc_lv<5>) (ap_const_lv64_0);
}

void inference_mult_1_84_84_10_s::thread_A_3_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) {
            A_3_0_address0 = A_3_0_addr_20_reg_2830.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) {
            A_3_0_address0 = A_3_0_addr_18_reg_2790.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
            A_3_0_address0 = A_3_0_addr_16_reg_2750.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            A_3_0_address0 = A_3_0_addr_14_reg_2710.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) {
            A_3_0_address0 = A_3_0_addr_12_reg_2670.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) {
            A_3_0_address0 = A_3_0_addr_10_reg_2630.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) {
            A_3_0_address0 = A_3_0_addr_8_reg_2590.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            A_3_0_address0 = A_3_0_addr_6_reg_2550.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            A_3_0_address0 = A_3_0_addr_4_reg_2510.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            A_3_0_address0 = A_3_0_addr_2_reg_2470.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            A_3_0_address0 = A_3_0_addr_reg_2430.read();
        } else {
            A_3_0_address0 = "XXXXX";
        }
    } else {
        A_3_0_address0 = "XXXXX";
    }
}

void inference_mult_1_84_84_10_s::thread_A_3_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) {
            A_3_0_address1 = A_3_0_addr_19_reg_2810.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) {
            A_3_0_address1 = A_3_0_addr_17_reg_2770.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) {
            A_3_0_address1 = A_3_0_addr_15_reg_2730.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) {
            A_3_0_address1 = A_3_0_addr_13_reg_2690.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) {
            A_3_0_address1 = A_3_0_addr_11_reg_2650.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) {
            A_3_0_address1 = A_3_0_addr_9_reg_2610.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) {
            A_3_0_address1 = A_3_0_addr_7_reg_2570.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            A_3_0_address1 = A_3_0_addr_5_reg_2530.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            A_3_0_address1 = A_3_0_addr_3_reg_2490.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            A_3_0_address1 = A_3_0_addr_1_reg_2450.read();
        } else {
            A_3_0_address1 = "XXXXX";
        }
    } else {
        A_3_0_address1 = "XXXXX";
    }
}

void inference_mult_1_84_84_10_s::thread_A_3_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        A_3_0_ce0 = ap_const_logic_1;
    } else {
        A_3_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_A_3_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        A_3_0_ce1 = ap_const_logic_1;
    } else {
        A_3_0_ce1 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_C_0_0_address0() {
    C_0_0_address0 =  (sc_lv<2>) (newIndex2_fu_2408_p1.read());
}

void inference_mult_1_84_84_10_s::thread_C_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        C_0_0_ce0 = ap_const_logic_1;
    } else {
        C_0_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_C_0_0_d0() {
    C_0_0_d0 = reg_2361.read();
}

void inference_mult_1_84_84_10_s::thread_C_0_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_10_reg_2964_pp0_it30.read(), ap_const_lv2_0)))) {
        C_0_0_we0 = ap_const_logic_1;
    } else {
        C_0_0_we0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_C_1_0_address0() {
    C_1_0_address0 =  (sc_lv<2>) (newIndex2_fu_2408_p1.read());
}

void inference_mult_1_84_84_10_s::thread_C_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        C_1_0_ce0 = ap_const_logic_1;
    } else {
        C_1_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_C_1_0_d0() {
    C_1_0_d0 = reg_2361.read();
}

void inference_mult_1_84_84_10_s::thread_C_1_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_10_reg_2964_pp0_it30.read(), ap_const_lv2_1)))) {
        C_1_0_we0 = ap_const_logic_1;
    } else {
        C_1_0_we0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_C_2_0_address0() {
    C_2_0_address0 =  (sc_lv<1>) (newIndex2_fu_2408_p1.read());
}

void inference_mult_1_84_84_10_s::thread_C_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        C_2_0_ce0 = ap_const_logic_1;
    } else {
        C_2_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_C_2_0_d0() {
    C_2_0_d0 = reg_2361.read();
}

void inference_mult_1_84_84_10_s::thread_C_2_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_10_reg_2964_pp0_it30.read(), ap_const_lv2_2)))) {
        C_2_0_we0 = ap_const_logic_1;
    } else {
        C_2_0_we0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_C_3_0_address0() {
    C_3_0_address0 =  (sc_lv<1>) (newIndex2_fu_2408_p1.read());
}

void inference_mult_1_84_84_10_s::thread_C_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        C_3_0_ce0 = ap_const_logic_1;
    } else {
        C_3_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_C_3_0_d0() {
    C_3_0_d0 = reg_2361.read();
}

void inference_mult_1_84_84_10_s::thread_C_3_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_10_reg_2964_pp0_it30.read(), ap_const_lv2_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_10_reg_2964_pp0_it30.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_10_reg_2964_pp0_it30.read(), ap_const_lv2_0)))) {
        C_3_0_we0 = ap_const_logic_1;
    } else {
        C_3_0_we0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_0_address0() {
    W5_0_address0 =  (sc_lv<4>) (tmp_s_fu_2382_p1.read());
}

void inference_mult_1_84_84_10_s::thread_W5_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        W5_0_ce0 = ap_const_logic_1;
    } else {
        W5_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_10_address0() {
    W5_10_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        W5_10_ce0 = ap_const_logic_1;
    } else {
        W5_10_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_11_address0() {
    W5_11_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        W5_11_ce0 = ap_const_logic_1;
    } else {
        W5_11_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_12_address0() {
    W5_12_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        W5_12_ce0 = ap_const_logic_1;
    } else {
        W5_12_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_13_address0() {
    W5_13_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        W5_13_ce0 = ap_const_logic_1;
    } else {
        W5_13_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_14_address0() {
    W5_14_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        W5_14_ce0 = ap_const_logic_1;
    } else {
        W5_14_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_15_address0() {
    W5_15_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        W5_15_ce0 = ap_const_logic_1;
    } else {
        W5_15_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_16_address0() {
    W5_16_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        W5_16_ce0 = ap_const_logic_1;
    } else {
        W5_16_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_17_address0() {
    W5_17_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        W5_17_ce0 = ap_const_logic_1;
    } else {
        W5_17_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_18_address0() {
    W5_18_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        W5_18_ce0 = ap_const_logic_1;
    } else {
        W5_18_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_19_address0() {
    W5_19_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        W5_19_ce0 = ap_const_logic_1;
    } else {
        W5_19_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_1_address0() {
    W5_1_address0 =  (sc_lv<4>) (tmp_s_fu_2382_p1.read());
}

void inference_mult_1_84_84_10_s::thread_W5_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        W5_1_ce0 = ap_const_logic_1;
    } else {
        W5_1_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_20_address0() {
    W5_20_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        W5_20_ce0 = ap_const_logic_1;
    } else {
        W5_20_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_21_address0() {
    W5_21_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        W5_21_ce0 = ap_const_logic_1;
    } else {
        W5_21_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_22_address0() {
    W5_22_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        W5_22_ce0 = ap_const_logic_1;
    } else {
        W5_22_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_23_address0() {
    W5_23_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        W5_23_ce0 = ap_const_logic_1;
    } else {
        W5_23_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_24_address0() {
    W5_24_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        W5_24_ce0 = ap_const_logic_1;
    } else {
        W5_24_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_25_address0() {
    W5_25_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        W5_25_ce0 = ap_const_logic_1;
    } else {
        W5_25_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_26_address0() {
    W5_26_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        W5_26_ce0 = ap_const_logic_1;
    } else {
        W5_26_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_27_address0() {
    W5_27_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        W5_27_ce0 = ap_const_logic_1;
    } else {
        W5_27_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_28_address0() {
    W5_28_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        W5_28_ce0 = ap_const_logic_1;
    } else {
        W5_28_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_29_address0() {
    W5_29_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        W5_29_ce0 = ap_const_logic_1;
    } else {
        W5_29_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_2_address0() {
    W5_2_address0 =  (sc_lv<4>) (tmp_s_fu_2382_p1.read());
}

void inference_mult_1_84_84_10_s::thread_W5_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        W5_2_ce0 = ap_const_logic_1;
    } else {
        W5_2_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_30_address0() {
    W5_30_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        W5_30_ce0 = ap_const_logic_1;
    } else {
        W5_30_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_31_address0() {
    W5_31_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        W5_31_ce0 = ap_const_logic_1;
    } else {
        W5_31_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_32_address0() {
    W5_32_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        W5_32_ce0 = ap_const_logic_1;
    } else {
        W5_32_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_33_address0() {
    W5_33_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        W5_33_ce0 = ap_const_logic_1;
    } else {
        W5_33_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_34_address0() {
    W5_34_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        W5_34_ce0 = ap_const_logic_1;
    } else {
        W5_34_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_35_address0() {
    W5_35_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        W5_35_ce0 = ap_const_logic_1;
    } else {
        W5_35_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_36_address0() {
    W5_36_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        W5_36_ce0 = ap_const_logic_1;
    } else {
        W5_36_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_37_address0() {
    W5_37_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        W5_37_ce0 = ap_const_logic_1;
    } else {
        W5_37_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_38_address0() {
    W5_38_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        W5_38_ce0 = ap_const_logic_1;
    } else {
        W5_38_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_39_address0() {
    W5_39_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        W5_39_ce0 = ap_const_logic_1;
    } else {
        W5_39_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_3_address0() {
    W5_3_address0 =  (sc_lv<4>) (tmp_s_fu_2382_p1.read());
}

void inference_mult_1_84_84_10_s::thread_W5_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        W5_3_ce0 = ap_const_logic_1;
    } else {
        W5_3_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_40_address0() {
    W5_40_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        W5_40_ce0 = ap_const_logic_1;
    } else {
        W5_40_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_41_address0() {
    W5_41_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        W5_41_ce0 = ap_const_logic_1;
    } else {
        W5_41_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_42_address0() {
    W5_42_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        W5_42_ce0 = ap_const_logic_1;
    } else {
        W5_42_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_43_address0() {
    W5_43_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        W5_43_ce0 = ap_const_logic_1;
    } else {
        W5_43_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_44_address0() {
    W5_44_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        W5_44_ce0 = ap_const_logic_1;
    } else {
        W5_44_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_45_address0() {
    W5_45_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        W5_45_ce0 = ap_const_logic_1;
    } else {
        W5_45_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_46_address0() {
    W5_46_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        W5_46_ce0 = ap_const_logic_1;
    } else {
        W5_46_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_47_address0() {
    W5_47_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        W5_47_ce0 = ap_const_logic_1;
    } else {
        W5_47_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_48_address0() {
    W5_48_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        W5_48_ce0 = ap_const_logic_1;
    } else {
        W5_48_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_49_address0() {
    W5_49_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        W5_49_ce0 = ap_const_logic_1;
    } else {
        W5_49_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_4_address0() {
    W5_4_address0 =  (sc_lv<4>) (tmp_s_fu_2382_p1.read());
}

void inference_mult_1_84_84_10_s::thread_W5_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        W5_4_ce0 = ap_const_logic_1;
    } else {
        W5_4_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_50_address0() {
    W5_50_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        W5_50_ce0 = ap_const_logic_1;
    } else {
        W5_50_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_51_address0() {
    W5_51_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        W5_51_ce0 = ap_const_logic_1;
    } else {
        W5_51_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_52_address0() {
    W5_52_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        W5_52_ce0 = ap_const_logic_1;
    } else {
        W5_52_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_53_address0() {
    W5_53_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        W5_53_ce0 = ap_const_logic_1;
    } else {
        W5_53_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_54_address0() {
    W5_54_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        W5_54_ce0 = ap_const_logic_1;
    } else {
        W5_54_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_55_address0() {
    W5_55_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        W5_55_ce0 = ap_const_logic_1;
    } else {
        W5_55_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_56_address0() {
    W5_56_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        W5_56_ce0 = ap_const_logic_1;
    } else {
        W5_56_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_57_address0() {
    W5_57_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        W5_57_ce0 = ap_const_logic_1;
    } else {
        W5_57_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_58_address0() {
    W5_58_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        W5_58_ce0 = ap_const_logic_1;
    } else {
        W5_58_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_59_address0() {
    W5_59_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        W5_59_ce0 = ap_const_logic_1;
    } else {
        W5_59_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_5_address0() {
    W5_5_address0 =  (sc_lv<4>) (tmp_s_fu_2382_p1.read());
}

void inference_mult_1_84_84_10_s::thread_W5_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        W5_5_ce0 = ap_const_logic_1;
    } else {
        W5_5_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_60_address0() {
    W5_60_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        W5_60_ce0 = ap_const_logic_1;
    } else {
        W5_60_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_61_address0() {
    W5_61_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        W5_61_ce0 = ap_const_logic_1;
    } else {
        W5_61_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_62_address0() {
    W5_62_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        W5_62_ce0 = ap_const_logic_1;
    } else {
        W5_62_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_63_address0() {
    W5_63_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        W5_63_ce0 = ap_const_logic_1;
    } else {
        W5_63_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_64_address0() {
    W5_64_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        W5_64_ce0 = ap_const_logic_1;
    } else {
        W5_64_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_65_address0() {
    W5_65_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        W5_65_ce0 = ap_const_logic_1;
    } else {
        W5_65_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_66_address0() {
    W5_66_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        W5_66_ce0 = ap_const_logic_1;
    } else {
        W5_66_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_67_address0() {
    W5_67_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        W5_67_ce0 = ap_const_logic_1;
    } else {
        W5_67_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_68_address0() {
    W5_68_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        W5_68_ce0 = ap_const_logic_1;
    } else {
        W5_68_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_69_address0() {
    W5_69_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        W5_69_ce0 = ap_const_logic_1;
    } else {
        W5_69_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_6_address0() {
    W5_6_address0 =  (sc_lv<4>) (tmp_s_fu_2382_p1.read());
}

void inference_mult_1_84_84_10_s::thread_W5_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        W5_6_ce0 = ap_const_logic_1;
    } else {
        W5_6_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_70_address0() {
    W5_70_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        W5_70_ce0 = ap_const_logic_1;
    } else {
        W5_70_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_71_address0() {
    W5_71_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        W5_71_ce0 = ap_const_logic_1;
    } else {
        W5_71_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_72_address0() {
    W5_72_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        W5_72_ce0 = ap_const_logic_1;
    } else {
        W5_72_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_73_address0() {
    W5_73_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        W5_73_ce0 = ap_const_logic_1;
    } else {
        W5_73_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_74_address0() {
    W5_74_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        W5_74_ce0 = ap_const_logic_1;
    } else {
        W5_74_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_75_address0() {
    W5_75_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        W5_75_ce0 = ap_const_logic_1;
    } else {
        W5_75_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_76_address0() {
    W5_76_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        W5_76_ce0 = ap_const_logic_1;
    } else {
        W5_76_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_77_address0() {
    W5_77_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        W5_77_ce0 = ap_const_logic_1;
    } else {
        W5_77_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_78_address0() {
    W5_78_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        W5_78_ce0 = ap_const_logic_1;
    } else {
        W5_78_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_79_address0() {
    W5_79_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        W5_79_ce0 = ap_const_logic_1;
    } else {
        W5_79_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_7_address0() {
    W5_7_address0 =  (sc_lv<4>) (tmp_s_fu_2382_p1.read());
}

void inference_mult_1_84_84_10_s::thread_W5_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        W5_7_ce0 = ap_const_logic_1;
    } else {
        W5_7_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_80_address0() {
    W5_80_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        W5_80_ce0 = ap_const_logic_1;
    } else {
        W5_80_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_81_address0() {
    W5_81_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        W5_81_ce0 = ap_const_logic_1;
    } else {
        W5_81_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_82_address0() {
    W5_82_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        W5_82_ce0 = ap_const_logic_1;
    } else {
        W5_82_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_83_address0() {
    W5_83_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        W5_83_ce0 = ap_const_logic_1;
    } else {
        W5_83_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_8_address0() {
    W5_8_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        W5_8_ce0 = ap_const_logic_1;
    } else {
        W5_8_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_W5_9_address0() {
    W5_9_address0 =  (sc_lv<4>) (tmp_s_reg_2844.read());
}

void inference_mult_1_84_84_10_s::thread_W5_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        W5_9_ce0 = ap_const_logic_1;
    } else {
        W5_9_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_done() {
    if (((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st343_fsm_12.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st343_fsm_12.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_31() {
    ap_sig_bdd_31 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_3266() {
    ap_sig_bdd_3266 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(12, 12));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_696() {
    ap_sig_bdd_696 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_770() {
    ap_sig_bdd_770 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(4, 4));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_780() {
    ap_sig_bdd_780 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(6, 6));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_790() {
    ap_sig_bdd_790 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(8, 8));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_800() {
    ap_sig_bdd_800 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(10, 10));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_818() {
    ap_sig_bdd_818 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(3, 3));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_827() {
    ap_sig_bdd_827 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(5, 5));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_837() {
    ap_sig_bdd_837 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(7, 7));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_847() {
    ap_sig_bdd_847 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(9, 9));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_857() {
    ap_sig_bdd_857 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(11, 11));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_bdd_876() {
    ap_sig_bdd_876 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_bdd_876.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg10_fsm_11() {
    if (ap_sig_bdd_857.read()) {
        ap_sig_cseq_ST_pp0_stg10_fsm_11 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg10_fsm_11 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg1_fsm_2() {
    if (ap_sig_bdd_696.read()) {
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg1_fsm_2 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg2_fsm_3() {
    if (ap_sig_bdd_818.read()) {
        ap_sig_cseq_ST_pp0_stg2_fsm_3 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg2_fsm_3 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg3_fsm_4() {
    if (ap_sig_bdd_770.read()) {
        ap_sig_cseq_ST_pp0_stg3_fsm_4 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg3_fsm_4 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg4_fsm_5() {
    if (ap_sig_bdd_827.read()) {
        ap_sig_cseq_ST_pp0_stg4_fsm_5 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg4_fsm_5 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg5_fsm_6() {
    if (ap_sig_bdd_780.read()) {
        ap_sig_cseq_ST_pp0_stg5_fsm_6 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg5_fsm_6 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg6_fsm_7() {
    if (ap_sig_bdd_837.read()) {
        ap_sig_cseq_ST_pp0_stg6_fsm_7 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg6_fsm_7 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg7_fsm_8() {
    if (ap_sig_bdd_790.read()) {
        ap_sig_cseq_ST_pp0_stg7_fsm_8 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg7_fsm_8 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg8_fsm_9() {
    if (ap_sig_bdd_847.read()) {
        ap_sig_cseq_ST_pp0_stg8_fsm_9 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg8_fsm_9 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_pp0_stg9_fsm_10() {
    if (ap_sig_bdd_800.read()) {
        ap_sig_cseq_ST_pp0_stg9_fsm_10 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg9_fsm_10 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_31.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_ap_sig_cseq_ST_st343_fsm_12() {
    if (ap_sig_bdd_3266.read()) {
        ap_sig_cseq_ST_st343_fsm_12 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st343_fsm_12 = ap_const_logic_0;
    }
}

void inference_mult_1_84_84_10_s::thread_exitcond1_fu_2370_p2() {
    exitcond1_fu_2370_p2 = (!j_phi_fu_2024_p4.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(j_phi_fu_2024_p4.read() == ap_const_lv4_A);
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2031_ce() {
    grp_fu_2031_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2031_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2031_p0 = reg_2196.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())))) {
        grp_fu_2031_p0 = reg_2191.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        grp_fu_2031_p0 = reg_2186.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_2031_p0 = reg_2181.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        grp_fu_2031_p0 = reg_2176.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2031_p0 = tmp_3_reg_3133.read();
    } else {
        grp_fu_2031_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2031_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2031_p1 = ap_reg_ppstg_tmp_3_s_reg_3263_pp0_it3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2031_p1 = ap_reg_ppstg_tmp_3_9_reg_3258_pp0_it3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2031_p1 = ap_reg_ppstg_tmp_3_8_reg_3253_pp0_it2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2031_p1 = ap_reg_ppstg_tmp_3_7_reg_3168_pp0_it2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2031_p1 = ap_reg_ppstg_tmp_3_6_reg_3163_pp0_it2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2031_p1 = ap_reg_ppstg_tmp_3_5_reg_3158_pp0_it1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2031_p1 = ap_reg_ppstg_tmp_3_4_reg_3153_pp0_it1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2031_p1 = ap_reg_ppstg_tmp_3_3_reg_3148_pp0_it1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2031_p1 = tmp_3_2_reg_3143.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2031_p1 = tmp_3_1_reg_3138.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2031_p1 = ap_const_lv32_0;
    } else {
        grp_fu_2031_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2036_ce() {
    grp_fu_2036_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2036_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2036_p0 = reg_2221.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())))) {
        grp_fu_2036_p0 = reg_2216.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        grp_fu_2036_p0 = reg_2211.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_2036_p0 = reg_2206.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read())))) {
        grp_fu_2036_p0 = reg_2201.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2036_p0 = out_1_s_reg_4213.read();
    } else {
        grp_fu_2036_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2036_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_20_reg_3398_pp0_it7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_19_reg_3393_pp0_it7.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_18_reg_3388_pp0_it6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_17_reg_3383_pp0_it6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_16_reg_3378_pp0_it6.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_15_reg_3373_pp0_it5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_14_reg_3288_pp0_it5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_13_reg_3283_pp0_it5.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it5.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_12_reg_3278_pp0_it4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_11_reg_3273_pp0_it4.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2036_p1 = ap_reg_ppstg_tmp_3_10_reg_3268_pp0_it3.read();
    } else {
        grp_fu_2036_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2040_ce() {
    grp_fu_2040_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2040_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2040_p0 = reg_2246.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())))) {
        grp_fu_2040_p0 = reg_2241.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        grp_fu_2040_p0 = reg_2236.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it9.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it9.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_2040_p0 = reg_2231.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it9.read())))) {
        grp_fu_2040_p0 = reg_2226.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2040_p0 = out_1_20_reg_4218.read();
    } else {
        grp_fu_2040_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2040_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_31_reg_3613_pp0_it11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_30_reg_3528_pp0_it11.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_29_reg_3523_pp0_it10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_28_reg_3518_pp0_it10.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_27_reg_3513_pp0_it9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_26_reg_3508_pp0_it9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_25_reg_3503_pp0_it9.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_24_reg_3498_pp0_it8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it9.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_23_reg_3493_pp0_it8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_22_reg_3408_pp0_it8.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2040_p1 = ap_reg_ppstg_tmp_3_21_reg_3403_pp0_it7.read();
    } else {
        grp_fu_2040_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2044_ce() {
    grp_fu_2044_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2044_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2044_p0 = reg_2271.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())))) {
        grp_fu_2044_p0 = reg_2266.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        grp_fu_2044_p0 = reg_2261.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_2044_p0 = reg_2256.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read())))) {
        grp_fu_2044_p0 = reg_2251.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2044_p0 = out_1_31_reg_4223.read();
    } else {
        grp_fu_2044_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2044_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_42_reg_3748_pp0_it15.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_41_reg_3743_pp0_it14.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_40_reg_3738_pp0_it14.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_39_reg_3733_pp0_it14.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_38_reg_3648_pp0_it13.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it14.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_37_reg_3643_pp0_it13.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_36_reg_3638_pp0_it13.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_35_reg_3633_pp0_it12.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it13.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_34_reg_3628_pp0_it12.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_33_reg_3623_pp0_it12.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2044_p1 = ap_reg_ppstg_tmp_3_32_reg_3618_pp0_it11.read();
    } else {
        grp_fu_2044_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2048_ce() {
    grp_fu_2048_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2048_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it20.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2048_p0 = reg_2296.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())))) {
        grp_fu_2048_p0 = reg_2291.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        grp_fu_2048_p0 = reg_2286.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_2048_p0 = reg_2281.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read())))) {
        grp_fu_2048_p0 = reg_2276.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2048_p0 = out_1_42_reg_4228.read();
    } else {
        grp_fu_2048_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2048_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_53_reg_3883_pp0_it19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_52_reg_3878_pp0_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it19.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_51_reg_3873_pp0_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_50_reg_3868_pp0_it18.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_49_reg_3863_pp0_it17.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it18.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_48_reg_3858_pp0_it17.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_47_reg_3853_pp0_it16.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_46_reg_3768_pp0_it16.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it17.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_45_reg_3763_pp0_it16.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_44_reg_3758_pp0_it15.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2048_p1 = ap_reg_ppstg_tmp_3_43_reg_3753_pp0_it15.read();
    } else {
        grp_fu_2048_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2052_ce() {
    grp_fu_2052_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2052_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it23.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it24.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2052_p0 = reg_2321.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it22.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it23.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())))) {
        grp_fu_2052_p0 = reg_2316.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it22.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it22.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        grp_fu_2052_p0 = reg_2311.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it21.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it21.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_2052_p0 = reg_2306.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it20.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it21.read())))) {
        grp_fu_2052_p0 = reg_2301.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it20.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2052_p0 = out_1_53_reg_4233.read();
    } else {
        grp_fu_2052_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2052_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_64_reg_4078_pp0_it23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it23.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_63_reg_4073_pp0_it23.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it23.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_62_reg_4008_pp0_it22.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it22.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_61_reg_4003_pp0_it21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it22.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_60_reg_3998_pp0_it21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it22.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_59_reg_3993_pp0_it21.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it21.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_58_reg_3988_pp0_it20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it21.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_57_reg_3983_pp0_it20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it21.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_56_reg_3978_pp0_it20.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it20.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_55_reg_3973_pp0_it19.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it20.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2052_p1 = ap_reg_ppstg_tmp_3_54_reg_3888_pp0_it19.read();
    } else {
        grp_fu_2052_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2056_ce() {
    grp_fu_2056_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2056_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it27.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it28.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2056_p0 = reg_2346.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it26.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it27.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())))) {
        grp_fu_2056_p0 = reg_2341.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it26.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it26.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        grp_fu_2056_p0 = reg_2336.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it25.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it25.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_2056_p0 = reg_2331.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it24.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it25.read())))) {
        grp_fu_2056_p0 = reg_2326.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it24.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2056_p0 = out_1_64_reg_4238.read();
    } else {
        grp_fu_2056_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2056_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_75_reg_4173_pp0_it27.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it27.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_74_reg_4168_pp0_it27.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it27.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_73_reg_4163_pp0_it27.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it26.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_72_reg_4158_pp0_it26.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it26.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_71_reg_4153_pp0_it26.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it26.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_70_reg_4108_pp0_it26.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it25.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_69_reg_4103_pp0_it25.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it25.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_68_reg_4098_pp0_it25.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it25.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_67_reg_4093_pp0_it25.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it24.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_66_reg_4088_pp0_it24.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it24.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2056_p1 = ap_reg_ppstg_tmp_3_65_reg_4083_pp0_it24.read();
    } else {
        grp_fu_2056_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2060_ce() {
    grp_fu_2060_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2060_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())))) {
        grp_fu_2060_p0 = reg_2361.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it29.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it29.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())))) {
        grp_fu_2060_p0 = reg_2356.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it28.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it29.read())))) {
        grp_fu_2060_p0 = reg_2351.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it28.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2060_p0 = out_1_75_reg_4243.read();
    } else {
        grp_fu_2060_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2060_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2060_p1 = ap_reg_ppstg_tmp_3_82_reg_4208_pp0_it30.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it30.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2060_p1 = ap_reg_ppstg_tmp_3_81_reg_4203_pp0_it29.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it29.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2060_p1 = ap_reg_ppstg_tmp_3_80_reg_4198_pp0_it29.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it29.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2060_p1 = ap_reg_ppstg_tmp_3_79_reg_4193_pp0_it29.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it29.read()))) {
        grp_fu_2060_p1 = ap_reg_ppstg_tmp_3_78_reg_4188_pp0_it28.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it28.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2060_p1 = ap_reg_ppstg_tmp_3_77_reg_4183_pp0_it28.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it28.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2060_p1 = ap_reg_ppstg_tmp_3_76_reg_4178_pp0_it28.read();
    } else {
        grp_fu_2060_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2064_ce() {
    grp_fu_2064_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2064_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2064_p0 = A_0_0_load_20_reg_4113.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2064_p0 = reg_2136.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        grp_fu_2064_p0 = reg_2096.read();
    } else {
        grp_fu_2064_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2064_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2064_p1 = W5_80_load_reg_4118.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2064_p1 = W5_72_load_reg_4013.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2064_p1 = W5_64_load_reg_3893.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2064_p1 = W5_56_load_reg_3773.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2064_p1 = W5_48_load_reg_3653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2064_p1 = W5_40_load_reg_3533.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2064_p1 = W5_32_load_reg_3413.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2064_p1 = W5_24_load_reg_3293.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2064_p1 = W5_16_load_reg_3173.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2064_p1 = W5_8_load_reg_3053.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2064_p1 = W5_0_load_reg_2973.read();
    } else {
        grp_fu_2064_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2068_ce() {
    grp_fu_2068_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2068_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2068_p0 = A_1_0_load_20_reg_4123.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2068_p0 = reg_2141.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        grp_fu_2068_p0 = reg_2101.read();
    } else {
        grp_fu_2068_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2068_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2068_p1 = W5_81_load_reg_4128.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2068_p1 = W5_73_load_reg_4018.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2068_p1 = W5_65_load_reg_3898.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2068_p1 = W5_57_load_reg_3778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2068_p1 = W5_49_load_reg_3658.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2068_p1 = W5_41_load_reg_3538.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2068_p1 = W5_33_load_reg_3418.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2068_p1 = W5_25_load_reg_3298.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2068_p1 = W5_17_load_reg_3178.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2068_p1 = W5_9_load_reg_3058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2068_p1 = W5_1_load_reg_2978.read();
    } else {
        grp_fu_2068_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2072_ce() {
    grp_fu_2072_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2072_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2072_p0 = A_2_0_load_20_reg_4133.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2072_p0 = reg_2146.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        grp_fu_2072_p0 = reg_2106.read();
    } else {
        grp_fu_2072_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2072_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2072_p1 = W5_82_load_reg_4138.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2072_p1 = W5_74_load_reg_4023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2072_p1 = W5_66_load_reg_3903.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2072_p1 = W5_58_load_reg_3783.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2072_p1 = W5_50_load_reg_3663.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2072_p1 = W5_42_load_reg_3543.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2072_p1 = W5_34_load_reg_3423.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2072_p1 = W5_26_load_reg_3303.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2072_p1 = W5_18_load_reg_3183.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2072_p1 = W5_10_load_reg_3063.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2072_p1 = W5_2_load_reg_2983.read();
    } else {
        grp_fu_2072_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2076_ce() {
    grp_fu_2076_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2076_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2076_p0 = A_3_0_load_20_reg_4143.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2076_p0 = reg_2151.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        grp_fu_2076_p0 = reg_2111.read();
    } else {
        grp_fu_2076_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2076_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        grp_fu_2076_p1 = W5_83_load_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2076_p1 = W5_75_load_reg_4028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2076_p1 = W5_67_load_reg_3908.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2076_p1 = W5_59_load_reg_3788.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2076_p1 = W5_51_load_reg_3668.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2076_p1 = W5_43_load_reg_3548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2076_p1 = W5_35_load_reg_3428.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2076_p1 = W5_27_load_reg_3308.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2076_p1 = W5_19_load_reg_3188.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2076_p1 = W5_11_load_reg_3068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2076_p1 = W5_3_load_reg_2988.read();
    } else {
        grp_fu_2076_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2080_ce() {
    grp_fu_2080_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2080_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2080_p0 = reg_2156.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        grp_fu_2080_p0 = reg_2116.read();
    } else {
        grp_fu_2080_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2080_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2080_p1 = W5_76_load_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2080_p1 = W5_68_load_reg_3913.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2080_p1 = W5_60_load_reg_3793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2080_p1 = W5_52_load_reg_3673.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2080_p1 = W5_44_load_reg_3553.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2080_p1 = W5_36_load_reg_3433.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2080_p1 = W5_28_load_reg_3313.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2080_p1 = W5_20_load_reg_3193.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2080_p1 = W5_12_load_reg_3073.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2080_p1 = W5_4_load_reg_2993.read();
    } else {
        grp_fu_2080_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2084_ce() {
    grp_fu_2084_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2084_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2084_p0 = reg_2161.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        grp_fu_2084_p0 = reg_2121.read();
    } else {
        grp_fu_2084_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2084_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2084_p1 = W5_77_load_reg_4038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2084_p1 = W5_69_load_reg_3918.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2084_p1 = W5_61_load_reg_3798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2084_p1 = W5_53_load_reg_3678.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2084_p1 = W5_45_load_reg_3558.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2084_p1 = W5_37_load_reg_3438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2084_p1 = W5_29_load_reg_3318.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2084_p1 = W5_21_load_reg_3198.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2084_p1 = W5_13_load_reg_3078.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2084_p1 = W5_5_load_reg_2998.read();
    } else {
        grp_fu_2084_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2088_ce() {
    grp_fu_2088_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2088_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2088_p0 = reg_2166.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        grp_fu_2088_p0 = reg_2126.read();
    } else {
        grp_fu_2088_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2088_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2088_p1 = W5_78_load_reg_4043.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2088_p1 = W5_70_load_reg_3923.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2088_p1 = W5_62_load_reg_3803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2088_p1 = W5_54_load_reg_3683.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2088_p1 = W5_46_load_reg_3563.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2088_p1 = W5_38_load_reg_3443.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2088_p1 = W5_30_load_reg_3323.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2088_p1 = W5_22_load_reg_3203.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2088_p1 = W5_14_load_reg_3083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2088_p1 = W5_6_load_reg_3003.read();
    } else {
        grp_fu_2088_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2092_ce() {
    grp_fu_2092_ce = ap_const_logic_1;
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2092_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())))) {
        grp_fu_2092_p0 = reg_2171.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read())))) {
        grp_fu_2092_p0 = reg_2131.read();
    } else {
        grp_fu_2092_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_grp_fu_2092_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        grp_fu_2092_p1 = W5_79_load_reg_4048.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg10_fsm_11.read()))) {
        grp_fu_2092_p1 = W5_71_load_reg_3928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg9_fsm_10.read()))) {
        grp_fu_2092_p1 = W5_63_load_reg_3808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg8_fsm_9.read()))) {
        grp_fu_2092_p1 = W5_55_load_reg_3688.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg7_fsm_8.read()))) {
        grp_fu_2092_p1 = W5_47_load_reg_3568.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg6_fsm_7.read()))) {
        grp_fu_2092_p1 = W5_39_load_reg_3448.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg5_fsm_6.read()))) {
        grp_fu_2092_p1 = W5_31_load_reg_3328.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg4_fsm_5.read()))) {
        grp_fu_2092_p1 = W5_23_load_reg_3208.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg3_fsm_4.read()))) {
        grp_fu_2092_p1 = W5_15_load_reg_3088.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read()))) {
        grp_fu_2092_p1 = W5_7_load_reg_3008.read();
    } else {
        grp_fu_2092_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void inference_mult_1_84_84_10_s::thread_j_1_fu_2376_p2() {
    j_1_fu_2376_p2 = (!j_phi_fu_2024_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j_phi_fu_2024_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void inference_mult_1_84_84_10_s::thread_j_phi_fu_2024_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond1_reg_2835.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()))) {
        j_phi_fu_2024_p4 = j_1_reg_2839.read();
    } else {
        j_phi_fu_2024_p4 = j_reg_2020.read();
    }
}

void inference_mult_1_84_84_10_s::thread_newIndex2_fu_2408_p1() {
    newIndex2_fu_2408_p1 = esl_zext<64,2>(ap_reg_ppstg_newIndex_reg_2968_pp0_it30.read());
}

void inference_mult_1_84_84_10_s::thread_tmp_10_fu_2394_p1() {
    tmp_10_fu_2394_p1 = j_phi_fu_2024_p4.read().range(2-1, 0);
}

void inference_mult_1_84_84_10_s::thread_tmp_s_fu_2382_p1() {
    tmp_s_fu_2382_p1 = esl_zext<64,4>(j_phi_fu_2024_p4.read());
}

}

