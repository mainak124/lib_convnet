#include "inference_conv2d.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void inference_conv2d::thread_x_2_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_15_address0 = x_2_15_addr_4_reg_12990.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_15_address0 = x_2_15_addr_2_reg_12965.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_15_address0 = x_2_15_addr_reg_12140.read();
        } else {
            x_2_15_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_15_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_15_address1 = x_2_15_addr_3_reg_12190.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_15_address1 = x_2_15_addr_1_reg_12165.read();
        } else {
            x_2_15_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_15_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_15_ce0 = ap_const_logic_1;
    } else {
        x_2_15_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_15_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_15_ce1 = ap_const_logic_1;
    } else {
        x_2_15_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_1_addr_1_gep_fu_1212_p3() {
    x_2_1_addr_1_gep_fu_1212_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_2_1_addr_2_gep_fu_3052_p3() {
    x_2_1_addr_2_gep_fu_3052_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_2_1_addr_3_gep_fu_1252_p3() {
    x_2_1_addr_3_gep_fu_1252_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_2_1_addr_4_gep_fu_3092_p3() {
    x_2_1_addr_4_gep_fu_3092_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_2_1_addr_gep_fu_1172_p3() {
    x_2_1_addr_gep_fu_1172_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_1_address0 = x_2_1_addr_4_reg_12290.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_1_address0 = x_2_1_addr_2_reg_12265.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_1_address0 = x_2_1_addr_reg_11090.read();
        } else {
            x_2_1_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_1_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_1_address1 = x_2_1_addr_3_reg_11140.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_1_address1 = x_2_1_addr_1_reg_11115.read();
        } else {
            x_2_1_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_1_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_1_ce0 = ap_const_logic_1;
    } else {
        x_2_1_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_1_ce1 = ap_const_logic_1;
    } else {
        x_2_1_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_2_addr_1_gep_fu_1332_p3() {
    x_2_2_addr_1_gep_fu_1332_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_2_2_addr_2_gep_fu_3132_p3() {
    x_2_2_addr_2_gep_fu_3132_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_2_2_addr_3_gep_fu_1372_p3() {
    x_2_2_addr_3_gep_fu_1372_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_2_2_addr_4_gep_fu_3172_p3() {
    x_2_2_addr_4_gep_fu_3172_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_2_2_addr_gep_fu_1292_p3() {
    x_2_2_addr_gep_fu_1292_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_2_address0 = x_2_2_addr_4_reg_12340.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_2_address0 = x_2_2_addr_2_reg_12315.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_2_address0 = x_2_2_addr_reg_11165.read();
        } else {
            x_2_2_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_2_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_2_address1 = x_2_2_addr_3_reg_11215.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_2_address1 = x_2_2_addr_1_reg_11190.read();
        } else {
            x_2_2_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_2_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_2_ce0 = ap_const_logic_1;
    } else {
        x_2_2_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_2_ce1 = ap_const_logic_1;
    } else {
        x_2_2_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_3_addr_1_gep_fu_1452_p3() {
    x_2_3_addr_1_gep_fu_1452_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_2_3_addr_2_gep_fu_3212_p3() {
    x_2_3_addr_2_gep_fu_3212_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_2_3_addr_3_gep_fu_1492_p3() {
    x_2_3_addr_3_gep_fu_1492_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_2_3_addr_4_gep_fu_3252_p3() {
    x_2_3_addr_4_gep_fu_3252_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_2_3_addr_gep_fu_1412_p3() {
    x_2_3_addr_gep_fu_1412_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_3_address0 = x_2_3_addr_4_reg_12390.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_3_address0 = x_2_3_addr_2_reg_12365.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_3_address0 = x_2_3_addr_reg_11240.read();
        } else {
            x_2_3_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_3_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_3_address1 = x_2_3_addr_3_reg_11290.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_3_address1 = x_2_3_addr_1_reg_11265.read();
        } else {
            x_2_3_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_3_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_3_ce0 = ap_const_logic_1;
    } else {
        x_2_3_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_3_ce1 = ap_const_logic_1;
    } else {
        x_2_3_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_4_addr_1_gep_fu_1572_p3() {
    x_2_4_addr_1_gep_fu_1572_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_2_4_addr_2_gep_fu_3292_p3() {
    x_2_4_addr_2_gep_fu_3292_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_2_4_addr_3_gep_fu_1612_p3() {
    x_2_4_addr_3_gep_fu_1612_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_2_4_addr_4_gep_fu_3332_p3() {
    x_2_4_addr_4_gep_fu_3332_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_2_4_addr_gep_fu_1532_p3() {
    x_2_4_addr_gep_fu_1532_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_4_address0 = x_2_4_addr_4_reg_12440.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_4_address0 = x_2_4_addr_2_reg_12415.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_4_address0 = x_2_4_addr_reg_11315.read();
        } else {
            x_2_4_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_4_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_4_address1 = x_2_4_addr_3_reg_11365.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_4_address1 = x_2_4_addr_1_reg_11340.read();
        } else {
            x_2_4_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_4_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_4_ce0 = ap_const_logic_1;
    } else {
        x_2_4_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_4_ce1 = ap_const_logic_1;
    } else {
        x_2_4_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_5_addr_1_gep_fu_1692_p3() {
    x_2_5_addr_1_gep_fu_1692_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_2_5_addr_2_gep_fu_3372_p3() {
    x_2_5_addr_2_gep_fu_3372_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_2_5_addr_3_gep_fu_1732_p3() {
    x_2_5_addr_3_gep_fu_1732_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_2_5_addr_4_gep_fu_3412_p3() {
    x_2_5_addr_4_gep_fu_3412_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_2_5_addr_gep_fu_1652_p3() {
    x_2_5_addr_gep_fu_1652_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_5_address0 = x_2_5_addr_4_reg_12490.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_5_address0 = x_2_5_addr_2_reg_12465.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_5_address0 = x_2_5_addr_reg_11390.read();
        } else {
            x_2_5_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_5_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_5_address1 = x_2_5_addr_3_reg_11440.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_5_address1 = x_2_5_addr_1_reg_11415.read();
        } else {
            x_2_5_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_5_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_5_ce0 = ap_const_logic_1;
    } else {
        x_2_5_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_5_ce1 = ap_const_logic_1;
    } else {
        x_2_5_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_6_addr_1_gep_fu_1812_p3() {
    x_2_6_addr_1_gep_fu_1812_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_2_6_addr_2_gep_fu_3452_p3() {
    x_2_6_addr_2_gep_fu_3452_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_2_6_addr_3_gep_fu_1852_p3() {
    x_2_6_addr_3_gep_fu_1852_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_2_6_addr_4_gep_fu_3492_p3() {
    x_2_6_addr_4_gep_fu_3492_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_2_6_addr_gep_fu_1772_p3() {
    x_2_6_addr_gep_fu_1772_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_6_address0 = x_2_6_addr_4_reg_12540.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_6_address0 = x_2_6_addr_2_reg_12515.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_6_address0 = x_2_6_addr_reg_11465.read();
        } else {
            x_2_6_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_6_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_6_address1 = x_2_6_addr_3_reg_11515.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_6_address1 = x_2_6_addr_1_reg_11490.read();
        } else {
            x_2_6_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_6_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_6_ce0 = ap_const_logic_1;
    } else {
        x_2_6_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_6_ce1 = ap_const_logic_1;
    } else {
        x_2_6_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_7_addr_1_gep_fu_1932_p3() {
    x_2_7_addr_1_gep_fu_1932_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_2_7_addr_2_gep_fu_3532_p3() {
    x_2_7_addr_2_gep_fu_3532_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_2_7_addr_3_gep_fu_1972_p3() {
    x_2_7_addr_3_gep_fu_1972_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_2_7_addr_4_gep_fu_3572_p3() {
    x_2_7_addr_4_gep_fu_3572_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_2_7_addr_gep_fu_1892_p3() {
    x_2_7_addr_gep_fu_1892_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_2_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_7_address0 = x_2_7_addr_4_reg_12590.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_7_address0 = x_2_7_addr_2_reg_12565.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_7_address0 = x_2_7_addr_reg_11540.read();
        } else {
            x_2_7_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_7_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_7_address1 = x_2_7_addr_3_reg_11590.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_7_address1 = x_2_7_addr_1_reg_11565.read();
        } else {
            x_2_7_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_7_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_7_ce0 = ap_const_logic_1;
    } else {
        x_2_7_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_7_ce1 = ap_const_logic_1;
    } else {
        x_2_7_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_8_addr_1_gep_fu_2052_p3() {
    x_2_8_addr_1_gep_fu_2052_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_2_8_addr_2_gep_fu_3612_p3() {
    x_2_8_addr_2_gep_fu_3612_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_2_8_addr_3_gep_fu_2092_p3() {
    x_2_8_addr_3_gep_fu_2092_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_2_8_addr_4_gep_fu_3652_p3() {
    x_2_8_addr_4_gep_fu_3652_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_2_8_addr_gep_fu_2012_p3() {
    x_2_8_addr_gep_fu_2012_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_2_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_8_address0 = x_2_8_addr_4_reg_12640.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_8_address0 = x_2_8_addr_2_reg_12615.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_8_address0 = x_2_8_addr_reg_11615.read();
        } else {
            x_2_8_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_8_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_8_address1 = x_2_8_addr_3_reg_11665.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_8_address1 = x_2_8_addr_1_reg_11640.read();
        } else {
            x_2_8_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_8_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_8_ce0 = ap_const_logic_1;
    } else {
        x_2_8_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_8_ce1 = ap_const_logic_1;
    } else {
        x_2_8_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_9_addr_1_gep_fu_2172_p3() {
    x_2_9_addr_1_gep_fu_2172_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_2_9_addr_2_gep_fu_3692_p3() {
    x_2_9_addr_2_gep_fu_3692_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_2_9_addr_3_gep_fu_2212_p3() {
    x_2_9_addr_3_gep_fu_2212_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_2_9_addr_4_gep_fu_3732_p3() {
    x_2_9_addr_4_gep_fu_3732_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_2_9_addr_gep_fu_2132_p3() {
    x_2_9_addr_gep_fu_2132_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_2_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_2_9_address0 = x_2_9_addr_4_reg_12690.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_9_address0 = x_2_9_addr_2_reg_12665.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_9_address0 = x_2_9_addr_reg_11690.read();
        } else {
            x_2_9_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_9_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_2_9_address1 = x_2_9_addr_3_reg_11740.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_2_9_address1 = x_2_9_addr_1_reg_11715.read();
        } else {
            x_2_9_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_2_9_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_2_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_2_9_ce0 = ap_const_logic_1;
    } else {
        x_2_9_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_2_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_2_9_ce1 = ap_const_logic_1;
    } else {
        x_2_9_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_0_addr_1_gep_fu_1100_p3() {
    x_3_0_addr_1_gep_fu_1100_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_0_addr_2_gep_fu_2980_p3() {
    x_3_0_addr_2_gep_fu_2980_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_0_addr_3_gep_fu_1140_p3() {
    x_3_0_addr_3_gep_fu_1140_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_0_addr_4_gep_fu_3020_p3() {
    x_3_0_addr_4_gep_fu_3020_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_0_addr_gep_fu_1060_p3() {
    x_3_0_addr_gep_fu_1060_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_0_address0 = x_3_0_addr_4_reg_12245.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_0_address0 = x_3_0_addr_2_reg_12220.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_0_address0 = x_3_0_addr_reg_11020.read();
        } else {
            x_3_0_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_0_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_0_address1 = x_3_0_addr_3_reg_11070.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_0_address1 = x_3_0_addr_1_reg_11045.read();
        } else {
            x_3_0_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_0_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_0_ce0 = ap_const_logic_1;
    } else {
        x_3_0_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_0_ce1 = ap_const_logic_1;
    } else {
        x_3_0_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_10_addr_1_gep_fu_2300_p3() {
    x_3_10_addr_1_gep_fu_2300_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_10_addr_2_gep_fu_3780_p3() {
    x_3_10_addr_2_gep_fu_3780_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_10_addr_3_gep_fu_2340_p3() {
    x_3_10_addr_3_gep_fu_2340_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_10_addr_4_gep_fu_3820_p3() {
    x_3_10_addr_4_gep_fu_3820_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_10_addr_gep_fu_2260_p3() {
    x_3_10_addr_gep_fu_2260_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_10_address0 = x_3_10_addr_4_reg_12745.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_10_address0 = x_3_10_addr_2_reg_12720.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_10_address0 = x_3_10_addr_reg_11770.read();
        } else {
            x_3_10_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_10_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_10_address1 = x_3_10_addr_3_reg_11820.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_10_address1 = x_3_10_addr_1_reg_11795.read();
        } else {
            x_3_10_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_10_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_10_ce0 = ap_const_logic_1;
    } else {
        x_3_10_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_10_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_10_ce1 = ap_const_logic_1;
    } else {
        x_3_10_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_11_addr_1_gep_fu_2420_p3() {
    x_3_11_addr_1_gep_fu_2420_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_11_addr_2_gep_fu_3860_p3() {
    x_3_11_addr_2_gep_fu_3860_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_11_addr_3_gep_fu_2460_p3() {
    x_3_11_addr_3_gep_fu_2460_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_11_addr_4_gep_fu_3900_p3() {
    x_3_11_addr_4_gep_fu_3900_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_11_addr_gep_fu_2380_p3() {
    x_3_11_addr_gep_fu_2380_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_11_address0 = x_3_11_addr_4_reg_12795.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_11_address0 = x_3_11_addr_2_reg_12770.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_11_address0 = x_3_11_addr_reg_11845.read();
        } else {
            x_3_11_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_11_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_11_address1 = x_3_11_addr_3_reg_11895.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_11_address1 = x_3_11_addr_1_reg_11870.read();
        } else {
            x_3_11_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_11_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_11_ce0 = ap_const_logic_1;
    } else {
        x_3_11_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_11_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_11_ce1 = ap_const_logic_1;
    } else {
        x_3_11_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_12_addr_1_gep_fu_2540_p3() {
    x_3_12_addr_1_gep_fu_2540_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_12_addr_2_gep_fu_3940_p3() {
    x_3_12_addr_2_gep_fu_3940_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_12_addr_3_gep_fu_2580_p3() {
    x_3_12_addr_3_gep_fu_2580_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_12_addr_4_gep_fu_3980_p3() {
    x_3_12_addr_4_gep_fu_3980_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_12_addr_gep_fu_2500_p3() {
    x_3_12_addr_gep_fu_2500_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_12_address0 = x_3_12_addr_4_reg_12845.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_12_address0 = x_3_12_addr_2_reg_12820.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_12_address0 = x_3_12_addr_reg_11920.read();
        } else {
            x_3_12_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_12_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_12_address1 = x_3_12_addr_3_reg_11970.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_12_address1 = x_3_12_addr_1_reg_11945.read();
        } else {
            x_3_12_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_12_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_12_ce0 = ap_const_logic_1;
    } else {
        x_3_12_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_12_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_12_ce1 = ap_const_logic_1;
    } else {
        x_3_12_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_13_addr_1_gep_fu_2660_p3() {
    x_3_13_addr_1_gep_fu_2660_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_13_addr_2_gep_fu_4020_p3() {
    x_3_13_addr_2_gep_fu_4020_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_13_addr_3_gep_fu_2700_p3() {
    x_3_13_addr_3_gep_fu_2700_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_13_addr_4_gep_fu_4060_p3() {
    x_3_13_addr_4_gep_fu_4060_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_13_addr_gep_fu_2620_p3() {
    x_3_13_addr_gep_fu_2620_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_13_address0 = x_3_13_addr_4_reg_12895.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_13_address0 = x_3_13_addr_2_reg_12870.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_13_address0 = x_3_13_addr_reg_11995.read();
        } else {
            x_3_13_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_13_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_13_address1 = x_3_13_addr_3_reg_12045.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_13_address1 = x_3_13_addr_1_reg_12020.read();
        } else {
            x_3_13_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_13_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_13_ce0 = ap_const_logic_1;
    } else {
        x_3_13_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_13_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_13_ce1 = ap_const_logic_1;
    } else {
        x_3_13_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_14_addr_1_gep_fu_2780_p3() {
    x_3_14_addr_1_gep_fu_2780_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_14_addr_2_gep_fu_4100_p3() {
    x_3_14_addr_2_gep_fu_4100_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_14_addr_3_gep_fu_2820_p3() {
    x_3_14_addr_3_gep_fu_2820_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_14_addr_4_gep_fu_4140_p3() {
    x_3_14_addr_4_gep_fu_4140_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_14_addr_gep_fu_2740_p3() {
    x_3_14_addr_gep_fu_2740_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_14_address0 = x_3_14_addr_4_reg_12945.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_14_address0 = x_3_14_addr_2_reg_12920.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_14_address0 = x_3_14_addr_reg_12070.read();
        } else {
            x_3_14_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_14_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_14_address1 = x_3_14_addr_3_reg_12120.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_14_address1 = x_3_14_addr_1_reg_12095.read();
        } else {
            x_3_14_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_14_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_14_ce0 = ap_const_logic_1;
    } else {
        x_3_14_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_14_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_14_ce1 = ap_const_logic_1;
    } else {
        x_3_14_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_15_addr_1_gep_fu_2900_p3() {
    x_3_15_addr_1_gep_fu_2900_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_15_addr_2_gep_fu_4180_p3() {
    x_3_15_addr_2_gep_fu_4180_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_15_addr_3_gep_fu_2940_p3() {
    x_3_15_addr_3_gep_fu_2940_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_15_addr_4_gep_fu_4220_p3() {
    x_3_15_addr_4_gep_fu_4220_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_15_addr_gep_fu_2860_p3() {
    x_3_15_addr_gep_fu_2860_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_15_address0 = x_3_15_addr_4_reg_12995.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_15_address0 = x_3_15_addr_2_reg_12970.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_15_address0 = x_3_15_addr_reg_12145.read();
        } else {
            x_3_15_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_15_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_15_address1 = x_3_15_addr_3_reg_12195.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_15_address1 = x_3_15_addr_1_reg_12170.read();
        } else {
            x_3_15_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_15_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_15_ce0 = ap_const_logic_1;
    } else {
        x_3_15_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_15_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_15_ce1 = ap_const_logic_1;
    } else {
        x_3_15_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_1_addr_1_gep_fu_1220_p3() {
    x_3_1_addr_1_gep_fu_1220_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_1_addr_2_gep_fu_3060_p3() {
    x_3_1_addr_2_gep_fu_3060_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_1_addr_3_gep_fu_1260_p3() {
    x_3_1_addr_3_gep_fu_1260_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_1_addr_4_gep_fu_3100_p3() {
    x_3_1_addr_4_gep_fu_3100_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_1_addr_gep_fu_1180_p3() {
    x_3_1_addr_gep_fu_1180_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_1_address0 = x_3_1_addr_4_reg_12295.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_1_address0 = x_3_1_addr_2_reg_12270.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_1_address0 = x_3_1_addr_reg_11095.read();
        } else {
            x_3_1_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_1_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_1_address1 = x_3_1_addr_3_reg_11145.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_1_address1 = x_3_1_addr_1_reg_11120.read();
        } else {
            x_3_1_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_1_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_1_ce0 = ap_const_logic_1;
    } else {
        x_3_1_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_1_ce1 = ap_const_logic_1;
    } else {
        x_3_1_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_2_addr_1_gep_fu_1340_p3() {
    x_3_2_addr_1_gep_fu_1340_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_2_addr_2_gep_fu_3140_p3() {
    x_3_2_addr_2_gep_fu_3140_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_2_addr_3_gep_fu_1380_p3() {
    x_3_2_addr_3_gep_fu_1380_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_2_addr_4_gep_fu_3180_p3() {
    x_3_2_addr_4_gep_fu_3180_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_2_addr_gep_fu_1300_p3() {
    x_3_2_addr_gep_fu_1300_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_2_address0 = x_3_2_addr_4_reg_12345.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_2_address0 = x_3_2_addr_2_reg_12320.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_2_address0 = x_3_2_addr_reg_11170.read();
        } else {
            x_3_2_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_2_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_2_address1 = x_3_2_addr_3_reg_11220.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_2_address1 = x_3_2_addr_1_reg_11195.read();
        } else {
            x_3_2_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_2_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_2_ce0 = ap_const_logic_1;
    } else {
        x_3_2_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_2_ce1 = ap_const_logic_1;
    } else {
        x_3_2_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_3_addr_1_gep_fu_1460_p3() {
    x_3_3_addr_1_gep_fu_1460_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_3_addr_2_gep_fu_3220_p3() {
    x_3_3_addr_2_gep_fu_3220_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_3_addr_3_gep_fu_1500_p3() {
    x_3_3_addr_3_gep_fu_1500_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_3_addr_4_gep_fu_3260_p3() {
    x_3_3_addr_4_gep_fu_3260_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_3_addr_gep_fu_1420_p3() {
    x_3_3_addr_gep_fu_1420_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_3_address0 = x_3_3_addr_4_reg_12395.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_3_address0 = x_3_3_addr_2_reg_12370.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_3_address0 = x_3_3_addr_reg_11245.read();
        } else {
            x_3_3_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_3_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_3_address1 = x_3_3_addr_3_reg_11295.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_3_address1 = x_3_3_addr_1_reg_11270.read();
        } else {
            x_3_3_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_3_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_3_ce0 = ap_const_logic_1;
    } else {
        x_3_3_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_3_ce1 = ap_const_logic_1;
    } else {
        x_3_3_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_4_addr_1_gep_fu_1580_p3() {
    x_3_4_addr_1_gep_fu_1580_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_4_addr_2_gep_fu_3300_p3() {
    x_3_4_addr_2_gep_fu_3300_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_4_addr_3_gep_fu_1620_p3() {
    x_3_4_addr_3_gep_fu_1620_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_4_addr_4_gep_fu_3340_p3() {
    x_3_4_addr_4_gep_fu_3340_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_4_addr_gep_fu_1540_p3() {
    x_3_4_addr_gep_fu_1540_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_4_address0 = x_3_4_addr_4_reg_12445.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_4_address0 = x_3_4_addr_2_reg_12420.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_4_address0 = x_3_4_addr_reg_11320.read();
        } else {
            x_3_4_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_4_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_4_address1 = x_3_4_addr_3_reg_11370.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_4_address1 = x_3_4_addr_1_reg_11345.read();
        } else {
            x_3_4_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_4_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_4_ce0 = ap_const_logic_1;
    } else {
        x_3_4_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_4_ce1 = ap_const_logic_1;
    } else {
        x_3_4_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_5_addr_1_gep_fu_1700_p3() {
    x_3_5_addr_1_gep_fu_1700_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_5_addr_2_gep_fu_3380_p3() {
    x_3_5_addr_2_gep_fu_3380_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_5_addr_3_gep_fu_1740_p3() {
    x_3_5_addr_3_gep_fu_1740_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_5_addr_4_gep_fu_3420_p3() {
    x_3_5_addr_4_gep_fu_3420_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_5_addr_gep_fu_1660_p3() {
    x_3_5_addr_gep_fu_1660_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_5_address0 = x_3_5_addr_4_reg_12495.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_5_address0 = x_3_5_addr_2_reg_12470.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_5_address0 = x_3_5_addr_reg_11395.read();
        } else {
            x_3_5_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_5_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_5_address1 = x_3_5_addr_3_reg_11445.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_5_address1 = x_3_5_addr_1_reg_11420.read();
        } else {
            x_3_5_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_5_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_5_ce0 = ap_const_logic_1;
    } else {
        x_3_5_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_5_ce1 = ap_const_logic_1;
    } else {
        x_3_5_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_6_addr_1_gep_fu_1820_p3() {
    x_3_6_addr_1_gep_fu_1820_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_6_addr_2_gep_fu_3460_p3() {
    x_3_6_addr_2_gep_fu_3460_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_6_addr_3_gep_fu_1860_p3() {
    x_3_6_addr_3_gep_fu_1860_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_6_addr_4_gep_fu_3500_p3() {
    x_3_6_addr_4_gep_fu_3500_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_6_addr_gep_fu_1780_p3() {
    x_3_6_addr_gep_fu_1780_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_6_address0 = x_3_6_addr_4_reg_12545.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_6_address0 = x_3_6_addr_2_reg_12520.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_6_address0 = x_3_6_addr_reg_11470.read();
        } else {
            x_3_6_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_6_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_6_address1 = x_3_6_addr_3_reg_11520.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_6_address1 = x_3_6_addr_1_reg_11495.read();
        } else {
            x_3_6_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_6_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_6_ce0 = ap_const_logic_1;
    } else {
        x_3_6_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_6_ce1 = ap_const_logic_1;
    } else {
        x_3_6_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_7_addr_1_gep_fu_1940_p3() {
    x_3_7_addr_1_gep_fu_1940_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_7_addr_2_gep_fu_3540_p3() {
    x_3_7_addr_2_gep_fu_3540_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_7_addr_3_gep_fu_1980_p3() {
    x_3_7_addr_3_gep_fu_1980_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_7_addr_4_gep_fu_3580_p3() {
    x_3_7_addr_4_gep_fu_3580_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_7_addr_gep_fu_1900_p3() {
    x_3_7_addr_gep_fu_1900_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_7_address0 = x_3_7_addr_4_reg_12595.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_7_address0 = x_3_7_addr_2_reg_12570.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_7_address0 = x_3_7_addr_reg_11545.read();
        } else {
            x_3_7_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_7_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_7_address1 = x_3_7_addr_3_reg_11595.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_7_address1 = x_3_7_addr_1_reg_11570.read();
        } else {
            x_3_7_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_7_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_7_ce0 = ap_const_logic_1;
    } else {
        x_3_7_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_7_ce1 = ap_const_logic_1;
    } else {
        x_3_7_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_8_addr_1_gep_fu_2060_p3() {
    x_3_8_addr_1_gep_fu_2060_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_8_addr_2_gep_fu_3620_p3() {
    x_3_8_addr_2_gep_fu_3620_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_8_addr_3_gep_fu_2100_p3() {
    x_3_8_addr_3_gep_fu_2100_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_8_addr_4_gep_fu_3660_p3() {
    x_3_8_addr_4_gep_fu_3660_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_8_addr_gep_fu_2020_p3() {
    x_3_8_addr_gep_fu_2020_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_8_address0 = x_3_8_addr_4_reg_12645.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_8_address0 = x_3_8_addr_2_reg_12620.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_8_address0 = x_3_8_addr_reg_11620.read();
        } else {
            x_3_8_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_8_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_8_address1 = x_3_8_addr_3_reg_11670.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_8_address1 = x_3_8_addr_1_reg_11645.read();
        } else {
            x_3_8_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_8_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_8_ce0 = ap_const_logic_1;
    } else {
        x_3_8_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_8_ce1 = ap_const_logic_1;
    } else {
        x_3_8_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_9_addr_1_gep_fu_2180_p3() {
    x_3_9_addr_1_gep_fu_2180_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_3_9_addr_2_gep_fu_3700_p3() {
    x_3_9_addr_2_gep_fu_3700_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_3_9_addr_3_gep_fu_2220_p3() {
    x_3_9_addr_3_gep_fu_2220_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_3_9_addr_4_gep_fu_3740_p3() {
    x_3_9_addr_4_gep_fu_3740_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_3_9_addr_gep_fu_2140_p3() {
    x_3_9_addr_gep_fu_2140_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_3_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_3_9_address0 = x_3_9_addr_4_reg_12695.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_9_address0 = x_3_9_addr_2_reg_12670.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_9_address0 = x_3_9_addr_reg_11695.read();
        } else {
            x_3_9_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_9_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_3_9_address1 = x_3_9_addr_3_reg_11745.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_3_9_address1 = x_3_9_addr_1_reg_11720.read();
        } else {
            x_3_9_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_3_9_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_3_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_3_9_ce0 = ap_const_logic_1;
    } else {
        x_3_9_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_3_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_3_9_ce1 = ap_const_logic_1;
    } else {
        x_3_9_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_0_addr_1_gep_fu_1108_p3() {
    x_4_0_addr_1_gep_fu_1108_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_0_addr_2_gep_fu_2988_p3() {
    x_4_0_addr_2_gep_fu_2988_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_0_addr_3_gep_fu_1148_p3() {
    x_4_0_addr_3_gep_fu_1148_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_0_addr_4_gep_fu_3028_p3() {
    x_4_0_addr_4_gep_fu_3028_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_0_addr_gep_fu_1068_p3() {
    x_4_0_addr_gep_fu_1068_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_0_address0 = x_4_0_addr_4_reg_12250.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_0_address0 = x_4_0_addr_2_reg_12225.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_0_address0 = x_4_0_addr_reg_11025.read();
        } else {
            x_4_0_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_0_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_0_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_0_address1 = x_4_0_addr_3_reg_11075.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_0_address1 = x_4_0_addr_1_reg_11050.read();
        } else {
            x_4_0_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_0_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_0_ce0 = ap_const_logic_1;
    } else {
        x_4_0_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_0_ce1 = ap_const_logic_1;
    } else {
        x_4_0_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_10_addr_1_gep_fu_2308_p3() {
    x_4_10_addr_1_gep_fu_2308_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_10_addr_2_gep_fu_3788_p3() {
    x_4_10_addr_2_gep_fu_3788_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_10_addr_3_gep_fu_2348_p3() {
    x_4_10_addr_3_gep_fu_2348_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_10_addr_4_gep_fu_3828_p3() {
    x_4_10_addr_4_gep_fu_3828_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_10_addr_gep_fu_2268_p3() {
    x_4_10_addr_gep_fu_2268_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_10_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_10_address0 = x_4_10_addr_4_reg_12750.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_10_address0 = x_4_10_addr_2_reg_12725.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_10_address0 = x_4_10_addr_reg_11775.read();
        } else {
            x_4_10_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_10_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_10_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_10_address1 = x_4_10_addr_3_reg_11825.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_10_address1 = x_4_10_addr_1_reg_11800.read();
        } else {
            x_4_10_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_10_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_10_ce0 = ap_const_logic_1;
    } else {
        x_4_10_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_10_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_10_ce1 = ap_const_logic_1;
    } else {
        x_4_10_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_11_addr_1_gep_fu_2428_p3() {
    x_4_11_addr_1_gep_fu_2428_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_11_addr_2_gep_fu_3868_p3() {
    x_4_11_addr_2_gep_fu_3868_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_11_addr_3_gep_fu_2468_p3() {
    x_4_11_addr_3_gep_fu_2468_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_11_addr_4_gep_fu_3908_p3() {
    x_4_11_addr_4_gep_fu_3908_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_11_addr_gep_fu_2388_p3() {
    x_4_11_addr_gep_fu_2388_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_11_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_11_address0 = x_4_11_addr_4_reg_12800.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_11_address0 = x_4_11_addr_2_reg_12775.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_11_address0 = x_4_11_addr_reg_11850.read();
        } else {
            x_4_11_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_11_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_11_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_11_address1 = x_4_11_addr_3_reg_11900.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_11_address1 = x_4_11_addr_1_reg_11875.read();
        } else {
            x_4_11_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_11_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_11_ce0 = ap_const_logic_1;
    } else {
        x_4_11_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_11_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_11_ce1 = ap_const_logic_1;
    } else {
        x_4_11_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_12_addr_1_gep_fu_2548_p3() {
    x_4_12_addr_1_gep_fu_2548_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_12_addr_2_gep_fu_3948_p3() {
    x_4_12_addr_2_gep_fu_3948_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_12_addr_3_gep_fu_2588_p3() {
    x_4_12_addr_3_gep_fu_2588_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_12_addr_4_gep_fu_3988_p3() {
    x_4_12_addr_4_gep_fu_3988_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_12_addr_gep_fu_2508_p3() {
    x_4_12_addr_gep_fu_2508_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_12_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_12_address0 = x_4_12_addr_4_reg_12850.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_12_address0 = x_4_12_addr_2_reg_12825.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_12_address0 = x_4_12_addr_reg_11925.read();
        } else {
            x_4_12_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_12_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_12_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_12_address1 = x_4_12_addr_3_reg_11975.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_12_address1 = x_4_12_addr_1_reg_11950.read();
        } else {
            x_4_12_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_12_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_12_ce0 = ap_const_logic_1;
    } else {
        x_4_12_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_12_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_12_ce1 = ap_const_logic_1;
    } else {
        x_4_12_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_13_addr_1_gep_fu_2668_p3() {
    x_4_13_addr_1_gep_fu_2668_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_13_addr_2_gep_fu_4028_p3() {
    x_4_13_addr_2_gep_fu_4028_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_13_addr_3_gep_fu_2708_p3() {
    x_4_13_addr_3_gep_fu_2708_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_13_addr_4_gep_fu_4068_p3() {
    x_4_13_addr_4_gep_fu_4068_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_13_addr_gep_fu_2628_p3() {
    x_4_13_addr_gep_fu_2628_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_13_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_13_address0 = x_4_13_addr_4_reg_12900.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_13_address0 = x_4_13_addr_2_reg_12875.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_13_address0 = x_4_13_addr_reg_12000.read();
        } else {
            x_4_13_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_13_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_13_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_13_address1 = x_4_13_addr_3_reg_12050.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_13_address1 = x_4_13_addr_1_reg_12025.read();
        } else {
            x_4_13_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_13_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_13_ce0 = ap_const_logic_1;
    } else {
        x_4_13_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_13_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_13_ce1 = ap_const_logic_1;
    } else {
        x_4_13_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_14_addr_1_gep_fu_2788_p3() {
    x_4_14_addr_1_gep_fu_2788_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_14_addr_2_gep_fu_4108_p3() {
    x_4_14_addr_2_gep_fu_4108_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_14_addr_3_gep_fu_2828_p3() {
    x_4_14_addr_3_gep_fu_2828_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_14_addr_4_gep_fu_4148_p3() {
    x_4_14_addr_4_gep_fu_4148_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_14_addr_gep_fu_2748_p3() {
    x_4_14_addr_gep_fu_2748_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_14_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_14_address0 = x_4_14_addr_4_reg_12950.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_14_address0 = x_4_14_addr_2_reg_12925.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_14_address0 = x_4_14_addr_reg_12075.read();
        } else {
            x_4_14_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_14_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_14_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_14_address1 = x_4_14_addr_3_reg_12125.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_14_address1 = x_4_14_addr_1_reg_12100.read();
        } else {
            x_4_14_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_14_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_14_ce0 = ap_const_logic_1;
    } else {
        x_4_14_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_14_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_14_ce1 = ap_const_logic_1;
    } else {
        x_4_14_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_15_addr_1_gep_fu_2908_p3() {
    x_4_15_addr_1_gep_fu_2908_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_15_addr_2_gep_fu_4188_p3() {
    x_4_15_addr_2_gep_fu_4188_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_15_addr_3_gep_fu_2948_p3() {
    x_4_15_addr_3_gep_fu_2948_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_15_addr_4_gep_fu_4228_p3() {
    x_4_15_addr_4_gep_fu_4228_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_15_addr_gep_fu_2868_p3() {
    x_4_15_addr_gep_fu_2868_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_15_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_15_address0 = x_4_15_addr_4_reg_13000.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_15_address0 = x_4_15_addr_2_reg_12975.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_15_address0 = x_4_15_addr_reg_12150.read();
        } else {
            x_4_15_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_15_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_15_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_15_address1 = x_4_15_addr_3_reg_12200.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_15_address1 = x_4_15_addr_1_reg_12175.read();
        } else {
            x_4_15_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_15_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_15_ce0 = ap_const_logic_1;
    } else {
        x_4_15_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_15_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_15_ce1 = ap_const_logic_1;
    } else {
        x_4_15_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_1_addr_1_gep_fu_1228_p3() {
    x_4_1_addr_1_gep_fu_1228_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_1_addr_2_gep_fu_3068_p3() {
    x_4_1_addr_2_gep_fu_3068_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_1_addr_3_gep_fu_1268_p3() {
    x_4_1_addr_3_gep_fu_1268_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_1_addr_4_gep_fu_3108_p3() {
    x_4_1_addr_4_gep_fu_3108_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_1_addr_gep_fu_1188_p3() {
    x_4_1_addr_gep_fu_1188_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_1_address0 = x_4_1_addr_4_reg_12300.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_1_address0 = x_4_1_addr_2_reg_12275.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_1_address0 = x_4_1_addr_reg_11100.read();
        } else {
            x_4_1_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_1_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_1_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_1_address1 = x_4_1_addr_3_reg_11150.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_1_address1 = x_4_1_addr_1_reg_11125.read();
        } else {
            x_4_1_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_1_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_1_ce0 = ap_const_logic_1;
    } else {
        x_4_1_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_1_ce1 = ap_const_logic_1;
    } else {
        x_4_1_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_2_addr_1_gep_fu_1348_p3() {
    x_4_2_addr_1_gep_fu_1348_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_2_addr_2_gep_fu_3148_p3() {
    x_4_2_addr_2_gep_fu_3148_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_2_addr_3_gep_fu_1388_p3() {
    x_4_2_addr_3_gep_fu_1388_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_2_addr_4_gep_fu_3188_p3() {
    x_4_2_addr_4_gep_fu_3188_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_2_addr_gep_fu_1308_p3() {
    x_4_2_addr_gep_fu_1308_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_2_address0 = x_4_2_addr_4_reg_12350.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_2_address0 = x_4_2_addr_2_reg_12325.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_2_address0 = x_4_2_addr_reg_11175.read();
        } else {
            x_4_2_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_2_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_2_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_2_address1 = x_4_2_addr_3_reg_11225.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_2_address1 = x_4_2_addr_1_reg_11200.read();
        } else {
            x_4_2_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_2_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_2_ce0 = ap_const_logic_1;
    } else {
        x_4_2_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_2_ce1 = ap_const_logic_1;
    } else {
        x_4_2_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_3_addr_1_gep_fu_1468_p3() {
    x_4_3_addr_1_gep_fu_1468_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_3_addr_2_gep_fu_3228_p3() {
    x_4_3_addr_2_gep_fu_3228_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_3_addr_3_gep_fu_1508_p3() {
    x_4_3_addr_3_gep_fu_1508_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_3_addr_4_gep_fu_3268_p3() {
    x_4_3_addr_4_gep_fu_3268_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_3_addr_gep_fu_1428_p3() {
    x_4_3_addr_gep_fu_1428_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_3_address0 = x_4_3_addr_4_reg_12400.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_3_address0 = x_4_3_addr_2_reg_12375.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_3_address0 = x_4_3_addr_reg_11250.read();
        } else {
            x_4_3_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_3_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_3_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_3_address1 = x_4_3_addr_3_reg_11300.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_3_address1 = x_4_3_addr_1_reg_11275.read();
        } else {
            x_4_3_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_3_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_3_ce0 = ap_const_logic_1;
    } else {
        x_4_3_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_3_ce1 = ap_const_logic_1;
    } else {
        x_4_3_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_4_addr_1_gep_fu_1588_p3() {
    x_4_4_addr_1_gep_fu_1588_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_4_addr_2_gep_fu_3308_p3() {
    x_4_4_addr_2_gep_fu_3308_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_4_addr_3_gep_fu_1628_p3() {
    x_4_4_addr_3_gep_fu_1628_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_4_addr_4_gep_fu_3348_p3() {
    x_4_4_addr_4_gep_fu_3348_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_4_addr_gep_fu_1548_p3() {
    x_4_4_addr_gep_fu_1548_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_4_address0 = x_4_4_addr_4_reg_12450.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_4_address0 = x_4_4_addr_2_reg_12425.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_4_address0 = x_4_4_addr_reg_11325.read();
        } else {
            x_4_4_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_4_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_4_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_4_address1 = x_4_4_addr_3_reg_11375.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_4_address1 = x_4_4_addr_1_reg_11350.read();
        } else {
            x_4_4_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_4_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_4_ce0 = ap_const_logic_1;
    } else {
        x_4_4_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_4_ce1 = ap_const_logic_1;
    } else {
        x_4_4_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_5_addr_1_gep_fu_1708_p3() {
    x_4_5_addr_1_gep_fu_1708_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_5_addr_2_gep_fu_3388_p3() {
    x_4_5_addr_2_gep_fu_3388_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_5_addr_3_gep_fu_1748_p3() {
    x_4_5_addr_3_gep_fu_1748_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_5_addr_4_gep_fu_3428_p3() {
    x_4_5_addr_4_gep_fu_3428_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_5_addr_gep_fu_1668_p3() {
    x_4_5_addr_gep_fu_1668_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_5_address0 = x_4_5_addr_4_reg_12500.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_5_address0 = x_4_5_addr_2_reg_12475.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_5_address0 = x_4_5_addr_reg_11400.read();
        } else {
            x_4_5_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_5_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_5_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_5_address1 = x_4_5_addr_3_reg_11450.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_5_address1 = x_4_5_addr_1_reg_11425.read();
        } else {
            x_4_5_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_5_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_5_ce0 = ap_const_logic_1;
    } else {
        x_4_5_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_5_ce1 = ap_const_logic_1;
    } else {
        x_4_5_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_6_addr_1_gep_fu_1828_p3() {
    x_4_6_addr_1_gep_fu_1828_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_6_addr_2_gep_fu_3468_p3() {
    x_4_6_addr_2_gep_fu_3468_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_6_addr_3_gep_fu_1868_p3() {
    x_4_6_addr_3_gep_fu_1868_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_6_addr_4_gep_fu_3508_p3() {
    x_4_6_addr_4_gep_fu_3508_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_6_addr_gep_fu_1788_p3() {
    x_4_6_addr_gep_fu_1788_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_6_address0 = x_4_6_addr_4_reg_12550.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_6_address0 = x_4_6_addr_2_reg_12525.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_6_address0 = x_4_6_addr_reg_11475.read();
        } else {
            x_4_6_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_6_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_6_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_6_address1 = x_4_6_addr_3_reg_11525.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_6_address1 = x_4_6_addr_1_reg_11500.read();
        } else {
            x_4_6_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_6_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_6_ce0 = ap_const_logic_1;
    } else {
        x_4_6_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_6_ce1 = ap_const_logic_1;
    } else {
        x_4_6_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_7_addr_1_gep_fu_1948_p3() {
    x_4_7_addr_1_gep_fu_1948_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_7_addr_2_gep_fu_3548_p3() {
    x_4_7_addr_2_gep_fu_3548_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_7_addr_3_gep_fu_1988_p3() {
    x_4_7_addr_3_gep_fu_1988_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_7_addr_4_gep_fu_3588_p3() {
    x_4_7_addr_4_gep_fu_3588_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_7_addr_gep_fu_1908_p3() {
    x_4_7_addr_gep_fu_1908_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_7_address0 = x_4_7_addr_4_reg_12600.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_7_address0 = x_4_7_addr_2_reg_12575.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_7_address0 = x_4_7_addr_reg_11550.read();
        } else {
            x_4_7_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_7_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_7_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_7_address1 = x_4_7_addr_3_reg_11600.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_7_address1 = x_4_7_addr_1_reg_11575.read();
        } else {
            x_4_7_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_7_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_7_ce0 = ap_const_logic_1;
    } else {
        x_4_7_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_7_ce1 = ap_const_logic_1;
    } else {
        x_4_7_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_8_addr_1_gep_fu_2068_p3() {
    x_4_8_addr_1_gep_fu_2068_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_8_addr_2_gep_fu_3628_p3() {
    x_4_8_addr_2_gep_fu_3628_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_8_addr_3_gep_fu_2108_p3() {
    x_4_8_addr_3_gep_fu_2108_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_8_addr_4_gep_fu_3668_p3() {
    x_4_8_addr_4_gep_fu_3668_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_8_addr_gep_fu_2028_p3() {
    x_4_8_addr_gep_fu_2028_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_8_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_8_address0 = x_4_8_addr_4_reg_12650.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_8_address0 = x_4_8_addr_2_reg_12625.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_8_address0 = x_4_8_addr_reg_11625.read();
        } else {
            x_4_8_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_8_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_8_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_8_address1 = x_4_8_addr_3_reg_11675.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_8_address1 = x_4_8_addr_1_reg_11650.read();
        } else {
            x_4_8_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_8_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_8_ce0 = ap_const_logic_1;
    } else {
        x_4_8_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_8_ce1 = ap_const_logic_1;
    } else {
        x_4_8_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_9_addr_1_gep_fu_2188_p3() {
    x_4_9_addr_1_gep_fu_2188_p3 =  (sc_lv<3>) (ap_const_lv64_1);
}

void inference_conv2d::thread_x_4_9_addr_2_gep_fu_3708_p3() {
    x_4_9_addr_2_gep_fu_3708_p3 =  (sc_lv<3>) (ap_const_lv64_2);
}

void inference_conv2d::thread_x_4_9_addr_3_gep_fu_2228_p3() {
    x_4_9_addr_3_gep_fu_2228_p3 =  (sc_lv<3>) (ap_const_lv64_3);
}

void inference_conv2d::thread_x_4_9_addr_4_gep_fu_3748_p3() {
    x_4_9_addr_4_gep_fu_3748_p3 =  (sc_lv<3>) (ap_const_lv64_4);
}

void inference_conv2d::thread_x_4_9_addr_gep_fu_2148_p3() {
    x_4_9_addr_gep_fu_2148_p3 =  (sc_lv<3>) (ap_const_lv64_0);
}

void inference_conv2d::thread_x_4_9_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())) {
            x_4_9_address0 = x_4_9_addr_4_reg_12700.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_9_address0 = x_4_9_addr_2_reg_12675.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_9_address0 = x_4_9_addr_reg_11700.read();
        } else {
            x_4_9_address0 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_9_address0 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_9_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) {
            x_4_9_address1 = x_4_9_addr_3_reg_11750.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read())) {
            x_4_9_address1 = x_4_9_addr_1_reg_11725.read();
        } else {
            x_4_9_address1 =  (sc_lv<3>) ("XXX");
        }
    } else {
        x_4_9_address1 =  (sc_lv<3>) ("XXX");
    }
}

void inference_conv2d::thread_x_4_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg2_fsm_3.read())))) {
        x_4_9_ce0 = ap_const_logic_1;
    } else {
        x_4_9_ce0 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_4_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg1_fsm_2.read())))) {
        x_4_9_ce1 = ap_const_logic_1;
    } else {
        x_4_9_ce1 = ap_const_logic_0;
    }
}

void inference_conv2d::thread_x_assign_1_fu_10994_p3() {
    x_assign_1_fu_10994_p3 = (!tmp_719_fu_10988_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_719_fu_10988_p2.read()[0].to_bool())? x_assign_reg_23309.read(): ap_const_lv32_0);
}

void inference_conv2d::thread_x_assign_to_int_fu_10953_p1() {
    x_assign_to_int_fu_10953_p1 = x_assign_reg_23309.read();
}

}

