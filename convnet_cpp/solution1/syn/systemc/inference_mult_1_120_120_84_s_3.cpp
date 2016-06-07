#include "inference_mult_1_120_120_84_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void inference_mult_1_120_120_84_s::thread_C_0_address0() {
    C_0_address0 =  (sc_lv<5>) (newIndex3_fu_3745_p1.read());
}

void inference_mult_1_120_120_84_s::thread_C_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it484.read())) {
        C_0_ce0 = ap_const_logic_1;
    } else {
        C_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_C_0_d0() {
    C_0_d0 = out_2_118_reg_6888.read();
}

void inference_mult_1_120_120_84_s::thread_C_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it484.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_reg_4489_pp0_it483.read(), ap_const_lv2_0)))) {
        C_0_we0 = ap_const_logic_1;
    } else {
        C_0_we0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_C_1_address0() {
    C_1_address0 =  (sc_lv<5>) (newIndex3_fu_3745_p1.read());
}

void inference_mult_1_120_120_84_s::thread_C_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it484.read())) {
        C_1_ce0 = ap_const_logic_1;
    } else {
        C_1_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_C_1_d0() {
    C_1_d0 = out_2_118_reg_6888.read();
}

void inference_mult_1_120_120_84_s::thread_C_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it484.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_reg_4489_pp0_it483.read(), ap_const_lv2_1)))) {
        C_1_we0 = ap_const_logic_1;
    } else {
        C_1_we0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_C_2_address0() {
    C_2_address0 =  (sc_lv<5>) (newIndex3_fu_3745_p1.read());
}

void inference_mult_1_120_120_84_s::thread_C_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it484.read())) {
        C_2_ce0 = ap_const_logic_1;
    } else {
        C_2_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_C_2_d0() {
    C_2_d0 = out_2_118_reg_6888.read();
}

void inference_mult_1_120_120_84_s::thread_C_2_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it484.read()) && 
          esl_seteq<1,2,2>(ap_reg_ppstg_tmp_reg_4489_pp0_it483.read(), ap_const_lv2_2)))) {
        C_2_we0 = ap_const_logic_1;
    } else {
        C_2_we0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_C_3_address0() {
    C_3_address0 =  (sc_lv<5>) (newIndex3_fu_3745_p1.read());
}

void inference_mult_1_120_120_84_s::thread_C_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it484.read())) {
        C_3_ce0 = ap_const_logic_1;
    } else {
        C_3_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_C_3_d0() {
    C_3_d0 = out_2_118_reg_6888.read();
}

void inference_mult_1_120_120_84_s::thread_C_3_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it484.read()) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_reg_4489_pp0_it483.read(), ap_const_lv2_2) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_reg_4489_pp0_it483.read(), ap_const_lv2_1) && 
          !esl_seteq<1,2,2>(ap_reg_ppstg_tmp_reg_4489_pp0_it483.read(), ap_const_lv2_0)))) {
        C_3_we0 = ap_const_logic_1;
    } else {
        C_3_we0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_0_address0() {
    W4_0_address0 =  (sc_lv<7>) (tmp_s_fu_3726_p1.read());
}

void inference_mult_1_120_120_84_s::thread_W4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        W4_0_ce0 = ap_const_logic_1;
    } else {
        W4_0_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_100_address0() {
    W4_100_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it403.read());
}

void inference_mult_1_120_120_84_s::thread_W4_100_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it404.read())) {
        W4_100_ce0 = ap_const_logic_1;
    } else {
        W4_100_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_101_address0() {
    W4_101_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it407.read());
}

void inference_mult_1_120_120_84_s::thread_W4_101_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it408.read())) {
        W4_101_ce0 = ap_const_logic_1;
    } else {
        W4_101_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_102_address0() {
    W4_102_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it411.read());
}

void inference_mult_1_120_120_84_s::thread_W4_102_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it412.read())) {
        W4_102_ce0 = ap_const_logic_1;
    } else {
        W4_102_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_103_address0() {
    W4_103_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it415.read());
}

void inference_mult_1_120_120_84_s::thread_W4_103_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it416.read())) {
        W4_103_ce0 = ap_const_logic_1;
    } else {
        W4_103_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_104_address0() {
    W4_104_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it419.read());
}

void inference_mult_1_120_120_84_s::thread_W4_104_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it420.read())) {
        W4_104_ce0 = ap_const_logic_1;
    } else {
        W4_104_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_105_address0() {
    W4_105_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it423.read());
}

void inference_mult_1_120_120_84_s::thread_W4_105_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it424.read())) {
        W4_105_ce0 = ap_const_logic_1;
    } else {
        W4_105_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_106_address0() {
    W4_106_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it427.read());
}

void inference_mult_1_120_120_84_s::thread_W4_106_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it428.read())) {
        W4_106_ce0 = ap_const_logic_1;
    } else {
        W4_106_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_107_address0() {
    W4_107_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it431.read());
}

void inference_mult_1_120_120_84_s::thread_W4_107_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it432.read())) {
        W4_107_ce0 = ap_const_logic_1;
    } else {
        W4_107_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_108_address0() {
    W4_108_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it435.read());
}

void inference_mult_1_120_120_84_s::thread_W4_108_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it436.read())) {
        W4_108_ce0 = ap_const_logic_1;
    } else {
        W4_108_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_109_address0() {
    W4_109_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it439.read());
}

void inference_mult_1_120_120_84_s::thread_W4_109_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it440.read())) {
        W4_109_ce0 = ap_const_logic_1;
    } else {
        W4_109_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_10_address0() {
    W4_10_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it39.read());
}

void inference_mult_1_120_120_84_s::thread_W4_10_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it40.read())) {
        W4_10_ce0 = ap_const_logic_1;
    } else {
        W4_10_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_110_address0() {
    W4_110_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it443.read());
}

void inference_mult_1_120_120_84_s::thread_W4_110_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it444.read())) {
        W4_110_ce0 = ap_const_logic_1;
    } else {
        W4_110_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_111_address0() {
    W4_111_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it447.read());
}

void inference_mult_1_120_120_84_s::thread_W4_111_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it448.read())) {
        W4_111_ce0 = ap_const_logic_1;
    } else {
        W4_111_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_112_address0() {
    W4_112_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it451.read());
}

void inference_mult_1_120_120_84_s::thread_W4_112_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it452.read())) {
        W4_112_ce0 = ap_const_logic_1;
    } else {
        W4_112_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_113_address0() {
    W4_113_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it455.read());
}

void inference_mult_1_120_120_84_s::thread_W4_113_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it456.read())) {
        W4_113_ce0 = ap_const_logic_1;
    } else {
        W4_113_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_114_address0() {
    W4_114_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it459.read());
}

void inference_mult_1_120_120_84_s::thread_W4_114_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it460.read())) {
        W4_114_ce0 = ap_const_logic_1;
    } else {
        W4_114_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_115_address0() {
    W4_115_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it463.read());
}

void inference_mult_1_120_120_84_s::thread_W4_115_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it464.read())) {
        W4_115_ce0 = ap_const_logic_1;
    } else {
        W4_115_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_116_address0() {
    W4_116_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it467.read());
}

void inference_mult_1_120_120_84_s::thread_W4_116_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it468.read())) {
        W4_116_ce0 = ap_const_logic_1;
    } else {
        W4_116_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_117_address0() {
    W4_117_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it467.read());
}

void inference_mult_1_120_120_84_s::thread_W4_117_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it468.read())) {
        W4_117_ce0 = ap_const_logic_1;
    } else {
        W4_117_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_118_address0() {
    W4_118_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it467.read());
}

void inference_mult_1_120_120_84_s::thread_W4_118_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it468.read())) {
        W4_118_ce0 = ap_const_logic_1;
    } else {
        W4_118_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_11_address0() {
    W4_11_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it43.read());
}

void inference_mult_1_120_120_84_s::thread_W4_11_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it44.read())) {
        W4_11_ce0 = ap_const_logic_1;
    } else {
        W4_11_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_12_address0() {
    W4_12_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it47.read());
}

void inference_mult_1_120_120_84_s::thread_W4_12_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it48.read())) {
        W4_12_ce0 = ap_const_logic_1;
    } else {
        W4_12_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_13_address0() {
    W4_13_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it51.read());
}

void inference_mult_1_120_120_84_s::thread_W4_13_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it52.read())) {
        W4_13_ce0 = ap_const_logic_1;
    } else {
        W4_13_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_14_address0() {
    W4_14_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it55.read());
}

void inference_mult_1_120_120_84_s::thread_W4_14_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it56.read())) {
        W4_14_ce0 = ap_const_logic_1;
    } else {
        W4_14_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_15_address0() {
    W4_15_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it59.read());
}

void inference_mult_1_120_120_84_s::thread_W4_15_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it60.read())) {
        W4_15_ce0 = ap_const_logic_1;
    } else {
        W4_15_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_16_address0() {
    W4_16_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it63.read());
}

void inference_mult_1_120_120_84_s::thread_W4_16_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it64.read())) {
        W4_16_ce0 = ap_const_logic_1;
    } else {
        W4_16_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_17_address0() {
    W4_17_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it67.read());
}

void inference_mult_1_120_120_84_s::thread_W4_17_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it68.read())) {
        W4_17_ce0 = ap_const_logic_1;
    } else {
        W4_17_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_18_address0() {
    W4_18_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it71.read());
}

void inference_mult_1_120_120_84_s::thread_W4_18_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it72.read())) {
        W4_18_ce0 = ap_const_logic_1;
    } else {
        W4_18_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_19_address0() {
    W4_19_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it75.read());
}

void inference_mult_1_120_120_84_s::thread_W4_19_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it76.read())) {
        W4_19_ce0 = ap_const_logic_1;
    } else {
        W4_19_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_1_address0() {
    W4_1_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it3.read());
}

void inference_mult_1_120_120_84_s::thread_W4_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it4.read())) {
        W4_1_ce0 = ap_const_logic_1;
    } else {
        W4_1_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_20_address0() {
    W4_20_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it79.read());
}

void inference_mult_1_120_120_84_s::thread_W4_20_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it80.read())) {
        W4_20_ce0 = ap_const_logic_1;
    } else {
        W4_20_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_21_address0() {
    W4_21_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it83.read());
}

void inference_mult_1_120_120_84_s::thread_W4_21_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it84.read())) {
        W4_21_ce0 = ap_const_logic_1;
    } else {
        W4_21_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_22_address0() {
    W4_22_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it87.read());
}

void inference_mult_1_120_120_84_s::thread_W4_22_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it88.read())) {
        W4_22_ce0 = ap_const_logic_1;
    } else {
        W4_22_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_23_address0() {
    W4_23_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it91.read());
}

void inference_mult_1_120_120_84_s::thread_W4_23_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it92.read())) {
        W4_23_ce0 = ap_const_logic_1;
    } else {
        W4_23_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_24_address0() {
    W4_24_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it95.read());
}

void inference_mult_1_120_120_84_s::thread_W4_24_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it96.read())) {
        W4_24_ce0 = ap_const_logic_1;
    } else {
        W4_24_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_25_address0() {
    W4_25_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it99.read());
}

void inference_mult_1_120_120_84_s::thread_W4_25_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it100.read())) {
        W4_25_ce0 = ap_const_logic_1;
    } else {
        W4_25_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_26_address0() {
    W4_26_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it103.read());
}

void inference_mult_1_120_120_84_s::thread_W4_26_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it104.read())) {
        W4_26_ce0 = ap_const_logic_1;
    } else {
        W4_26_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_27_address0() {
    W4_27_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it107.read());
}

void inference_mult_1_120_120_84_s::thread_W4_27_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it108.read())) {
        W4_27_ce0 = ap_const_logic_1;
    } else {
        W4_27_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_28_address0() {
    W4_28_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it111.read());
}

void inference_mult_1_120_120_84_s::thread_W4_28_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it112.read())) {
        W4_28_ce0 = ap_const_logic_1;
    } else {
        W4_28_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_29_address0() {
    W4_29_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it115.read());
}

void inference_mult_1_120_120_84_s::thread_W4_29_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it116.read())) {
        W4_29_ce0 = ap_const_logic_1;
    } else {
        W4_29_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_2_address0() {
    W4_2_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it7.read());
}

void inference_mult_1_120_120_84_s::thread_W4_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it8.read())) {
        W4_2_ce0 = ap_const_logic_1;
    } else {
        W4_2_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_30_address0() {
    W4_30_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it119.read());
}

void inference_mult_1_120_120_84_s::thread_W4_30_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it120.read())) {
        W4_30_ce0 = ap_const_logic_1;
    } else {
        W4_30_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_31_address0() {
    W4_31_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it123.read());
}

void inference_mult_1_120_120_84_s::thread_W4_31_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it124.read())) {
        W4_31_ce0 = ap_const_logic_1;
    } else {
        W4_31_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_32_address0() {
    W4_32_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it127.read());
}

void inference_mult_1_120_120_84_s::thread_W4_32_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it128.read())) {
        W4_32_ce0 = ap_const_logic_1;
    } else {
        W4_32_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_33_address0() {
    W4_33_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it131.read());
}

void inference_mult_1_120_120_84_s::thread_W4_33_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it132.read())) {
        W4_33_ce0 = ap_const_logic_1;
    } else {
        W4_33_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_34_address0() {
    W4_34_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it135.read());
}

void inference_mult_1_120_120_84_s::thread_W4_34_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it136.read())) {
        W4_34_ce0 = ap_const_logic_1;
    } else {
        W4_34_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_35_address0() {
    W4_35_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it139.read());
}

void inference_mult_1_120_120_84_s::thread_W4_35_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it140.read())) {
        W4_35_ce0 = ap_const_logic_1;
    } else {
        W4_35_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_36_address0() {
    W4_36_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it143.read());
}

void inference_mult_1_120_120_84_s::thread_W4_36_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it144.read())) {
        W4_36_ce0 = ap_const_logic_1;
    } else {
        W4_36_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_37_address0() {
    W4_37_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it147.read());
}

void inference_mult_1_120_120_84_s::thread_W4_37_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it148.read())) {
        W4_37_ce0 = ap_const_logic_1;
    } else {
        W4_37_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_38_address0() {
    W4_38_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it151.read());
}

void inference_mult_1_120_120_84_s::thread_W4_38_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it152.read())) {
        W4_38_ce0 = ap_const_logic_1;
    } else {
        W4_38_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_39_address0() {
    W4_39_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it155.read());
}

void inference_mult_1_120_120_84_s::thread_W4_39_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it156.read())) {
        W4_39_ce0 = ap_const_logic_1;
    } else {
        W4_39_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_3_address0() {
    W4_3_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it11.read());
}

void inference_mult_1_120_120_84_s::thread_W4_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read())) {
        W4_3_ce0 = ap_const_logic_1;
    } else {
        W4_3_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_40_address0() {
    W4_40_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it159.read());
}

void inference_mult_1_120_120_84_s::thread_W4_40_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it160.read())) {
        W4_40_ce0 = ap_const_logic_1;
    } else {
        W4_40_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_41_address0() {
    W4_41_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it163.read());
}

void inference_mult_1_120_120_84_s::thread_W4_41_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it164.read())) {
        W4_41_ce0 = ap_const_logic_1;
    } else {
        W4_41_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_42_address0() {
    W4_42_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it167.read());
}

void inference_mult_1_120_120_84_s::thread_W4_42_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it168.read())) {
        W4_42_ce0 = ap_const_logic_1;
    } else {
        W4_42_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_43_address0() {
    W4_43_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it171.read());
}

void inference_mult_1_120_120_84_s::thread_W4_43_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it172.read())) {
        W4_43_ce0 = ap_const_logic_1;
    } else {
        W4_43_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_44_address0() {
    W4_44_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it175.read());
}

void inference_mult_1_120_120_84_s::thread_W4_44_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it176.read())) {
        W4_44_ce0 = ap_const_logic_1;
    } else {
        W4_44_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_45_address0() {
    W4_45_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it179.read());
}

void inference_mult_1_120_120_84_s::thread_W4_45_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it180.read())) {
        W4_45_ce0 = ap_const_logic_1;
    } else {
        W4_45_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_46_address0() {
    W4_46_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it183.read());
}

void inference_mult_1_120_120_84_s::thread_W4_46_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it184.read())) {
        W4_46_ce0 = ap_const_logic_1;
    } else {
        W4_46_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_47_address0() {
    W4_47_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it187.read());
}

void inference_mult_1_120_120_84_s::thread_W4_47_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it188.read())) {
        W4_47_ce0 = ap_const_logic_1;
    } else {
        W4_47_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_48_address0() {
    W4_48_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it191.read());
}

void inference_mult_1_120_120_84_s::thread_W4_48_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it192.read())) {
        W4_48_ce0 = ap_const_logic_1;
    } else {
        W4_48_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_49_address0() {
    W4_49_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it195.read());
}

void inference_mult_1_120_120_84_s::thread_W4_49_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it196.read())) {
        W4_49_ce0 = ap_const_logic_1;
    } else {
        W4_49_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_4_address0() {
    W4_4_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it15.read());
}

void inference_mult_1_120_120_84_s::thread_W4_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it16.read())) {
        W4_4_ce0 = ap_const_logic_1;
    } else {
        W4_4_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_50_address0() {
    W4_50_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it199.read());
}

void inference_mult_1_120_120_84_s::thread_W4_50_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it200.read())) {
        W4_50_ce0 = ap_const_logic_1;
    } else {
        W4_50_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_51_address0() {
    W4_51_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it203.read());
}

void inference_mult_1_120_120_84_s::thread_W4_51_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it204.read())) {
        W4_51_ce0 = ap_const_logic_1;
    } else {
        W4_51_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_52_address0() {
    W4_52_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it207.read());
}

void inference_mult_1_120_120_84_s::thread_W4_52_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it208.read())) {
        W4_52_ce0 = ap_const_logic_1;
    } else {
        W4_52_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_53_address0() {
    W4_53_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it211.read());
}

void inference_mult_1_120_120_84_s::thread_W4_53_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it212.read())) {
        W4_53_ce0 = ap_const_logic_1;
    } else {
        W4_53_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_54_address0() {
    W4_54_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it215.read());
}

void inference_mult_1_120_120_84_s::thread_W4_54_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it216.read())) {
        W4_54_ce0 = ap_const_logic_1;
    } else {
        W4_54_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_55_address0() {
    W4_55_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it219.read());
}

void inference_mult_1_120_120_84_s::thread_W4_55_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it220.read())) {
        W4_55_ce0 = ap_const_logic_1;
    } else {
        W4_55_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_56_address0() {
    W4_56_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it223.read());
}

void inference_mult_1_120_120_84_s::thread_W4_56_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it224.read())) {
        W4_56_ce0 = ap_const_logic_1;
    } else {
        W4_56_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_57_address0() {
    W4_57_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it227.read());
}

void inference_mult_1_120_120_84_s::thread_W4_57_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it228.read())) {
        W4_57_ce0 = ap_const_logic_1;
    } else {
        W4_57_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_58_address0() {
    W4_58_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it231.read());
}

void inference_mult_1_120_120_84_s::thread_W4_58_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it232.read())) {
        W4_58_ce0 = ap_const_logic_1;
    } else {
        W4_58_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_59_address0() {
    W4_59_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it235.read());
}

void inference_mult_1_120_120_84_s::thread_W4_59_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it236.read())) {
        W4_59_ce0 = ap_const_logic_1;
    } else {
        W4_59_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_5_address0() {
    W4_5_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it19.read());
}

void inference_mult_1_120_120_84_s::thread_W4_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it20.read())) {
        W4_5_ce0 = ap_const_logic_1;
    } else {
        W4_5_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_60_address0() {
    W4_60_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it239.read());
}

void inference_mult_1_120_120_84_s::thread_W4_60_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it240.read())) {
        W4_60_ce0 = ap_const_logic_1;
    } else {
        W4_60_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_61_address0() {
    W4_61_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it243.read());
}

void inference_mult_1_120_120_84_s::thread_W4_61_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it244.read())) {
        W4_61_ce0 = ap_const_logic_1;
    } else {
        W4_61_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_62_address0() {
    W4_62_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it247.read());
}

void inference_mult_1_120_120_84_s::thread_W4_62_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it248.read())) {
        W4_62_ce0 = ap_const_logic_1;
    } else {
        W4_62_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_63_address0() {
    W4_63_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it251.read());
}

void inference_mult_1_120_120_84_s::thread_W4_63_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it252.read())) {
        W4_63_ce0 = ap_const_logic_1;
    } else {
        W4_63_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_64_address0() {
    W4_64_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it255.read());
}

void inference_mult_1_120_120_84_s::thread_W4_64_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it256.read())) {
        W4_64_ce0 = ap_const_logic_1;
    } else {
        W4_64_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_65_address0() {
    W4_65_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it259.read());
}

void inference_mult_1_120_120_84_s::thread_W4_65_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it260.read())) {
        W4_65_ce0 = ap_const_logic_1;
    } else {
        W4_65_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_66_address0() {
    W4_66_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it263.read());
}

void inference_mult_1_120_120_84_s::thread_W4_66_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it264.read())) {
        W4_66_ce0 = ap_const_logic_1;
    } else {
        W4_66_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_67_address0() {
    W4_67_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it267.read());
}

void inference_mult_1_120_120_84_s::thread_W4_67_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it268.read())) {
        W4_67_ce0 = ap_const_logic_1;
    } else {
        W4_67_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_68_address0() {
    W4_68_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it271.read());
}

void inference_mult_1_120_120_84_s::thread_W4_68_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it272.read())) {
        W4_68_ce0 = ap_const_logic_1;
    } else {
        W4_68_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_69_address0() {
    W4_69_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it275.read());
}

void inference_mult_1_120_120_84_s::thread_W4_69_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it276.read())) {
        W4_69_ce0 = ap_const_logic_1;
    } else {
        W4_69_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_6_address0() {
    W4_6_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it23.read());
}

void inference_mult_1_120_120_84_s::thread_W4_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it24.read())) {
        W4_6_ce0 = ap_const_logic_1;
    } else {
        W4_6_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_70_address0() {
    W4_70_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it279.read());
}

void inference_mult_1_120_120_84_s::thread_W4_70_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it280.read())) {
        W4_70_ce0 = ap_const_logic_1;
    } else {
        W4_70_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_71_address0() {
    W4_71_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it283.read());
}

void inference_mult_1_120_120_84_s::thread_W4_71_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it284.read())) {
        W4_71_ce0 = ap_const_logic_1;
    } else {
        W4_71_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_72_address0() {
    W4_72_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it287.read());
}

void inference_mult_1_120_120_84_s::thread_W4_72_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it288.read())) {
        W4_72_ce0 = ap_const_logic_1;
    } else {
        W4_72_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_73_address0() {
    W4_73_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it291.read());
}

void inference_mult_1_120_120_84_s::thread_W4_73_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it292.read())) {
        W4_73_ce0 = ap_const_logic_1;
    } else {
        W4_73_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_74_address0() {
    W4_74_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it295.read());
}

void inference_mult_1_120_120_84_s::thread_W4_74_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it296.read())) {
        W4_74_ce0 = ap_const_logic_1;
    } else {
        W4_74_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_75_address0() {
    W4_75_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it299.read());
}

void inference_mult_1_120_120_84_s::thread_W4_75_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it300.read())) {
        W4_75_ce0 = ap_const_logic_1;
    } else {
        W4_75_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_76_address0() {
    W4_76_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it303.read());
}

void inference_mult_1_120_120_84_s::thread_W4_76_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it304.read())) {
        W4_76_ce0 = ap_const_logic_1;
    } else {
        W4_76_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_77_address0() {
    W4_77_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it307.read());
}

void inference_mult_1_120_120_84_s::thread_W4_77_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it308.read())) {
        W4_77_ce0 = ap_const_logic_1;
    } else {
        W4_77_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_78_address0() {
    W4_78_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it311.read());
}

void inference_mult_1_120_120_84_s::thread_W4_78_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it312.read())) {
        W4_78_ce0 = ap_const_logic_1;
    } else {
        W4_78_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_79_address0() {
    W4_79_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it315.read());
}

void inference_mult_1_120_120_84_s::thread_W4_79_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it316.read())) {
        W4_79_ce0 = ap_const_logic_1;
    } else {
        W4_79_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_7_address0() {
    W4_7_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it27.read());
}

void inference_mult_1_120_120_84_s::thread_W4_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it28.read())) {
        W4_7_ce0 = ap_const_logic_1;
    } else {
        W4_7_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_80_address0() {
    W4_80_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it319.read());
}

void inference_mult_1_120_120_84_s::thread_W4_80_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it320.read())) {
        W4_80_ce0 = ap_const_logic_1;
    } else {
        W4_80_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_81_address0() {
    W4_81_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it323.read());
}

void inference_mult_1_120_120_84_s::thread_W4_81_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it324.read())) {
        W4_81_ce0 = ap_const_logic_1;
    } else {
        W4_81_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_82_address0() {
    W4_82_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it327.read());
}

void inference_mult_1_120_120_84_s::thread_W4_82_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it328.read())) {
        W4_82_ce0 = ap_const_logic_1;
    } else {
        W4_82_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_83_address0() {
    W4_83_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it331.read());
}

void inference_mult_1_120_120_84_s::thread_W4_83_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it332.read())) {
        W4_83_ce0 = ap_const_logic_1;
    } else {
        W4_83_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_84_address0() {
    W4_84_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it335.read());
}

void inference_mult_1_120_120_84_s::thread_W4_84_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it336.read())) {
        W4_84_ce0 = ap_const_logic_1;
    } else {
        W4_84_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_85_address0() {
    W4_85_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it339.read());
}

void inference_mult_1_120_120_84_s::thread_W4_85_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it340.read())) {
        W4_85_ce0 = ap_const_logic_1;
    } else {
        W4_85_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_86_address0() {
    W4_86_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it343.read());
}

void inference_mult_1_120_120_84_s::thread_W4_86_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it344.read())) {
        W4_86_ce0 = ap_const_logic_1;
    } else {
        W4_86_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_87_address0() {
    W4_87_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it347.read());
}

void inference_mult_1_120_120_84_s::thread_W4_87_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it348.read())) {
        W4_87_ce0 = ap_const_logic_1;
    } else {
        W4_87_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_88_address0() {
    W4_88_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it351.read());
}

void inference_mult_1_120_120_84_s::thread_W4_88_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it352.read())) {
        W4_88_ce0 = ap_const_logic_1;
    } else {
        W4_88_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_89_address0() {
    W4_89_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it355.read());
}

void inference_mult_1_120_120_84_s::thread_W4_89_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it356.read())) {
        W4_89_ce0 = ap_const_logic_1;
    } else {
        W4_89_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_8_address0() {
    W4_8_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it31.read());
}

void inference_mult_1_120_120_84_s::thread_W4_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it32.read())) {
        W4_8_ce0 = ap_const_logic_1;
    } else {
        W4_8_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_90_address0() {
    W4_90_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it359.read());
}

void inference_mult_1_120_120_84_s::thread_W4_90_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it360.read())) {
        W4_90_ce0 = ap_const_logic_1;
    } else {
        W4_90_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_91_address0() {
    W4_91_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it363.read());
}

void inference_mult_1_120_120_84_s::thread_W4_91_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it364.read())) {
        W4_91_ce0 = ap_const_logic_1;
    } else {
        W4_91_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_92_address0() {
    W4_92_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it367.read());
}

void inference_mult_1_120_120_84_s::thread_W4_92_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it368.read())) {
        W4_92_ce0 = ap_const_logic_1;
    } else {
        W4_92_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_93_address0() {
    W4_93_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it371.read());
}

void inference_mult_1_120_120_84_s::thread_W4_93_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it372.read())) {
        W4_93_ce0 = ap_const_logic_1;
    } else {
        W4_93_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_94_address0() {
    W4_94_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it375.read());
}

void inference_mult_1_120_120_84_s::thread_W4_94_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it376.read())) {
        W4_94_ce0 = ap_const_logic_1;
    } else {
        W4_94_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_95_address0() {
    W4_95_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it379.read());
}

void inference_mult_1_120_120_84_s::thread_W4_95_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it380.read())) {
        W4_95_ce0 = ap_const_logic_1;
    } else {
        W4_95_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_96_address0() {
    W4_96_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it383.read());
}

void inference_mult_1_120_120_84_s::thread_W4_96_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it384.read())) {
        W4_96_ce0 = ap_const_logic_1;
    } else {
        W4_96_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_97_address0() {
    W4_97_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it387.read());
}

void inference_mult_1_120_120_84_s::thread_W4_97_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it388.read())) {
        W4_97_ce0 = ap_const_logic_1;
    } else {
        W4_97_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_98_address0() {
    W4_98_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it391.read());
}

void inference_mult_1_120_120_84_s::thread_W4_98_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it392.read())) {
        W4_98_ce0 = ap_const_logic_1;
    } else {
        W4_98_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_99_address0() {
    W4_99_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it395.read());
}

void inference_mult_1_120_120_84_s::thread_W4_99_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it396.read())) {
        W4_99_ce0 = ap_const_logic_1;
    } else {
        W4_99_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_9_address0() {
    W4_9_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it35.read());
}

void inference_mult_1_120_120_84_s::thread_W4_9_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it36.read())) {
        W4_9_ce0 = ap_const_logic_1;
    } else {
        W4_9_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_W4_address0() {
    W4_address0 =  (sc_lv<7>) (ap_reg_ppstg_tmp_s_reg_4361_pp0_it399.read());
}

void inference_mult_1_120_120_84_s::thread_W4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it400.read())) {
        W4_ce0 = ap_const_logic_1;
    } else {
        W4_ce0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_ap_done() {
    if (((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st487_fsm_2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st487_fsm_2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_ap_sig_bdd_1266() {
    ap_sig_bdd_1266 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void inference_mult_1_120_120_84_s::thread_ap_sig_bdd_21() {
    ap_sig_bdd_21 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void inference_mult_1_120_120_84_s::thread_ap_sig_bdd_7234() {
    ap_sig_bdd_7234 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void inference_mult_1_120_120_84_s::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_bdd_1266.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_21.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_ap_sig_cseq_ST_st487_fsm_2() {
    if (ap_sig_bdd_7234.read()) {
        ap_sig_cseq_ST_st487_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st487_fsm_2 = ap_const_logic_0;
    }
}

void inference_mult_1_120_120_84_s::thread_exitcond1_fu_3714_p2() {
    exitcond1_fu_3714_p2 = (!j_reg_2742.read().is_01() || !ap_const_lv7_54.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_2742.read() == ap_const_lv7_54);
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2753_ce() {
    grp_fu_2753_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2758_ce() {
    grp_fu_2758_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2762_ce() {
    grp_fu_2762_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2766_ce() {
    grp_fu_2766_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2770_ce() {
    grp_fu_2770_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2774_ce() {
    grp_fu_2774_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2778_ce() {
    grp_fu_2778_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2782_ce() {
    grp_fu_2782_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2786_ce() {
    grp_fu_2786_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2790_ce() {
    grp_fu_2790_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2794_ce() {
    grp_fu_2794_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2798_ce() {
    grp_fu_2798_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2802_ce() {
    grp_fu_2802_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2806_ce() {
    grp_fu_2806_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2810_ce() {
    grp_fu_2810_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2814_ce() {
    grp_fu_2814_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2818_ce() {
    grp_fu_2818_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2822_ce() {
    grp_fu_2822_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2826_ce() {
    grp_fu_2826_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2830_ce() {
    grp_fu_2830_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2834_ce() {
    grp_fu_2834_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2838_ce() {
    grp_fu_2838_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2842_ce() {
    grp_fu_2842_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2846_ce() {
    grp_fu_2846_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2850_ce() {
    grp_fu_2850_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2854_ce() {
    grp_fu_2854_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2858_ce() {
    grp_fu_2858_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2862_ce() {
    grp_fu_2862_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2866_ce() {
    grp_fu_2866_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2870_ce() {
    grp_fu_2870_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2874_ce() {
    grp_fu_2874_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2878_ce() {
    grp_fu_2878_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2882_ce() {
    grp_fu_2882_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2886_ce() {
    grp_fu_2886_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2890_ce() {
    grp_fu_2890_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2894_ce() {
    grp_fu_2894_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2898_ce() {
    grp_fu_2898_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2902_ce() {
    grp_fu_2902_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2906_ce() {
    grp_fu_2906_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2910_ce() {
    grp_fu_2910_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2914_ce() {
    grp_fu_2914_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2918_ce() {
    grp_fu_2918_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2922_ce() {
    grp_fu_2922_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2926_ce() {
    grp_fu_2926_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2930_ce() {
    grp_fu_2930_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2934_ce() {
    grp_fu_2934_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2938_ce() {
    grp_fu_2938_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2942_ce() {
    grp_fu_2942_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2946_ce() {
    grp_fu_2946_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2950_ce() {
    grp_fu_2950_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2954_ce() {
    grp_fu_2954_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2958_ce() {
    grp_fu_2958_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2962_ce() {
    grp_fu_2962_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2966_ce() {
    grp_fu_2966_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2970_ce() {
    grp_fu_2970_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2974_ce() {
    grp_fu_2974_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2978_ce() {
    grp_fu_2978_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2982_ce() {
    grp_fu_2982_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2986_ce() {
    grp_fu_2986_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2990_ce() {
    grp_fu_2990_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2994_ce() {
    grp_fu_2994_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_2998_ce() {
    grp_fu_2998_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3002_ce() {
    grp_fu_3002_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3006_ce() {
    grp_fu_3006_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3010_ce() {
    grp_fu_3010_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3014_ce() {
    grp_fu_3014_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3018_ce() {
    grp_fu_3018_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3022_ce() {
    grp_fu_3022_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3026_ce() {
    grp_fu_3026_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3030_ce() {
    grp_fu_3030_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3034_ce() {
    grp_fu_3034_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3038_ce() {
    grp_fu_3038_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3042_ce() {
    grp_fu_3042_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3046_ce() {
    grp_fu_3046_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3050_ce() {
    grp_fu_3050_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3054_ce() {
    grp_fu_3054_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3058_ce() {
    grp_fu_3058_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3062_ce() {
    grp_fu_3062_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3066_ce() {
    grp_fu_3066_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3070_ce() {
    grp_fu_3070_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3074_ce() {
    grp_fu_3074_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3078_ce() {
    grp_fu_3078_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3082_ce() {
    grp_fu_3082_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3086_ce() {
    grp_fu_3086_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3090_ce() {
    grp_fu_3090_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3094_ce() {
    grp_fu_3094_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3098_ce() {
    grp_fu_3098_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3102_ce() {
    grp_fu_3102_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3106_ce() {
    grp_fu_3106_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3110_ce() {
    grp_fu_3110_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3114_ce() {
    grp_fu_3114_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3118_ce() {
    grp_fu_3118_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3122_ce() {
    grp_fu_3122_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3126_ce() {
    grp_fu_3126_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3130_ce() {
    grp_fu_3130_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3134_ce() {
    grp_fu_3134_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3138_ce() {
    grp_fu_3138_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3142_ce() {
    grp_fu_3142_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3146_ce() {
    grp_fu_3146_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3150_ce() {
    grp_fu_3150_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3154_ce() {
    grp_fu_3154_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3158_ce() {
    grp_fu_3158_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3162_ce() {
    grp_fu_3162_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3166_ce() {
    grp_fu_3166_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3170_ce() {
    grp_fu_3170_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3174_ce() {
    grp_fu_3174_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3178_ce() {
    grp_fu_3178_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3182_ce() {
    grp_fu_3182_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3186_ce() {
    grp_fu_3186_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3190_ce() {
    grp_fu_3190_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3194_ce() {
    grp_fu_3194_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3198_ce() {
    grp_fu_3198_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3202_ce() {
    grp_fu_3202_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3206_ce() {
    grp_fu_3206_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3210_ce() {
    grp_fu_3210_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3214_ce() {
    grp_fu_3214_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3218_ce() {
    grp_fu_3218_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3222_ce() {
    grp_fu_3222_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3226_ce() {
    grp_fu_3226_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3230_ce() {
    grp_fu_3230_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3234_ce() {
    grp_fu_3234_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3238_ce() {
    grp_fu_3238_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3242_ce() {
    grp_fu_3242_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3246_ce() {
    grp_fu_3246_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3250_ce() {
    grp_fu_3250_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3254_ce() {
    grp_fu_3254_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3258_ce() {
    grp_fu_3258_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3262_ce() {
    grp_fu_3262_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3266_ce() {
    grp_fu_3266_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3270_ce() {
    grp_fu_3270_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3274_ce() {
    grp_fu_3274_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3278_ce() {
    grp_fu_3278_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3282_ce() {
    grp_fu_3282_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3286_ce() {
    grp_fu_3286_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3290_ce() {
    grp_fu_3290_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3294_ce() {
    grp_fu_3294_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3298_ce() {
    grp_fu_3298_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3302_ce() {
    grp_fu_3302_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3306_ce() {
    grp_fu_3306_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3310_ce() {
    grp_fu_3310_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3314_ce() {
    grp_fu_3314_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3318_ce() {
    grp_fu_3318_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3322_ce() {
    grp_fu_3322_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3326_ce() {
    grp_fu_3326_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3330_ce() {
    grp_fu_3330_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3334_ce() {
    grp_fu_3334_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3338_ce() {
    grp_fu_3338_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3342_ce() {
    grp_fu_3342_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3346_ce() {
    grp_fu_3346_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3350_ce() {
    grp_fu_3350_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3354_ce() {
    grp_fu_3354_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3358_ce() {
    grp_fu_3358_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3362_ce() {
    grp_fu_3362_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3366_ce() {
    grp_fu_3366_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3370_ce() {
    grp_fu_3370_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3374_ce() {
    grp_fu_3374_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3378_ce() {
    grp_fu_3378_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3382_ce() {
    grp_fu_3382_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3386_ce() {
    grp_fu_3386_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3390_ce() {
    grp_fu_3390_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3394_ce() {
    grp_fu_3394_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3398_ce() {
    grp_fu_3398_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3402_ce() {
    grp_fu_3402_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3406_ce() {
    grp_fu_3406_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3410_ce() {
    grp_fu_3410_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3414_ce() {
    grp_fu_3414_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3418_ce() {
    grp_fu_3418_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3422_ce() {
    grp_fu_3422_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3426_ce() {
    grp_fu_3426_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3430_ce() {
    grp_fu_3430_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3434_ce() {
    grp_fu_3434_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3438_ce() {
    grp_fu_3438_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3442_ce() {
    grp_fu_3442_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3446_ce() {
    grp_fu_3446_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3450_ce() {
    grp_fu_3450_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3454_ce() {
    grp_fu_3454_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3458_ce() {
    grp_fu_3458_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3462_ce() {
    grp_fu_3462_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3466_ce() {
    grp_fu_3466_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3470_ce() {
    grp_fu_3470_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3474_ce() {
    grp_fu_3474_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3478_ce() {
    grp_fu_3478_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3482_ce() {
    grp_fu_3482_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3486_ce() {
    grp_fu_3486_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3490_ce() {
    grp_fu_3490_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3494_ce() {
    grp_fu_3494_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3498_ce() {
    grp_fu_3498_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3502_ce() {
    grp_fu_3502_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3506_ce() {
    grp_fu_3506_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3510_ce() {
    grp_fu_3510_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3514_ce() {
    grp_fu_3514_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3518_ce() {
    grp_fu_3518_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3522_ce() {
    grp_fu_3522_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3526_ce() {
    grp_fu_3526_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3530_ce() {
    grp_fu_3530_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3534_ce() {
    grp_fu_3534_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3538_ce() {
    grp_fu_3538_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3542_ce() {
    grp_fu_3542_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3546_ce() {
    grp_fu_3546_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3550_ce() {
    grp_fu_3550_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3554_ce() {
    grp_fu_3554_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3558_ce() {
    grp_fu_3558_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3562_ce() {
    grp_fu_3562_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3566_ce() {
    grp_fu_3566_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3570_ce() {
    grp_fu_3570_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3574_ce() {
    grp_fu_3574_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3578_ce() {
    grp_fu_3578_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3582_ce() {
    grp_fu_3582_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3586_ce() {
    grp_fu_3586_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3590_ce() {
    grp_fu_3590_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3594_ce() {
    grp_fu_3594_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3598_ce() {
    grp_fu_3598_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3602_ce() {
    grp_fu_3602_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3606_ce() {
    grp_fu_3606_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3610_ce() {
    grp_fu_3610_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3614_ce() {
    grp_fu_3614_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3618_ce() {
    grp_fu_3618_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3622_ce() {
    grp_fu_3622_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3626_ce() {
    grp_fu_3626_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3630_ce() {
    grp_fu_3630_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3634_ce() {
    grp_fu_3634_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3638_ce() {
    grp_fu_3638_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3642_ce() {
    grp_fu_3642_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3646_ce() {
    grp_fu_3646_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3650_ce() {
    grp_fu_3650_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3654_ce() {
    grp_fu_3654_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3658_ce() {
    grp_fu_3658_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3662_ce() {
    grp_fu_3662_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3666_ce() {
    grp_fu_3666_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3670_ce() {
    grp_fu_3670_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3674_ce() {
    grp_fu_3674_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3678_ce() {
    grp_fu_3678_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3682_ce() {
    grp_fu_3682_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3686_ce() {
    grp_fu_3686_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3690_ce() {
    grp_fu_3690_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3694_ce() {
    grp_fu_3694_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3698_ce() {
    grp_fu_3698_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3702_ce() {
    grp_fu_3702_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3706_ce() {
    grp_fu_3706_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_grp_fu_3710_ce() {
    grp_fu_3710_ce = ap_const_logic_1;
}

void inference_mult_1_120_120_84_s::thread_j_2_fu_3720_p2() {
    j_2_fu_3720_p2 = (!j_reg_2742.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(j_reg_2742.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void inference_mult_1_120_120_84_s::thread_newIndex3_fu_3745_p1() {
    newIndex3_fu_3745_p1 = esl_zext<64,5>(ap_reg_ppstg_newIndex_reg_4493_pp0_it483.read());
}

void inference_mult_1_120_120_84_s::thread_tmp_fu_3731_p1() {
    tmp_fu_3731_p1 = j_reg_2742.read().range(2-1, 0);
}

void inference_mult_1_120_120_84_s::thread_tmp_s_fu_3726_p1() {
    tmp_s_fu_3726_p1 = esl_zext<64,7>(j_reg_2742.read());
}

}

