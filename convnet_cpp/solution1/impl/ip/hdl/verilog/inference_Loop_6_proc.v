// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module inference_Loop_6_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        Filter3_address0,
        Filter3_ce0,
        Filter3_q0,
        f3_0_address0,
        f3_0_ce0,
        f3_0_we0,
        f3_0_d0,
        f3_1_address0,
        f3_1_ce0,
        f3_1_we0,
        f3_1_d0,
        f3_2_address0,
        f3_2_ce0,
        f3_2_we0,
        f3_2_d0,
        f3_3_address0,
        f3_3_ce0,
        f3_3_we0,
        f3_3_d0,
        f3_4_address0,
        f3_4_ce0,
        f3_4_we0,
        f3_4_d0
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 3'b1;
parameter    ap_ST_pp0_stg0_fsm_1 = 3'b10;
parameter    ap_ST_st5_fsm_2 = 3'b100;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_true = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv16_0 = 16'b0000000000000000;
parameter    ap_const_lv3_0 = 3'b000;
parameter    ap_const_lv14_0 = 14'b00000000000000;
parameter    ap_const_lv12_0 = 12'b000000000000;
parameter    ap_const_lv5_0 = 5'b00000;
parameter    ap_const_lv7_0 = 7'b0000000;
parameter    ap_const_lv3_3 = 3'b11;
parameter    ap_const_lv3_2 = 3'b10;
parameter    ap_const_lv3_1 = 3'b1;
parameter    ap_const_lv16_BB80 = 16'b1011101110000000;
parameter    ap_const_lv16_1 = 16'b1;
parameter    ap_const_lv14_2580 = 14'b10010110000000;
parameter    ap_const_lv7_78 = 7'b1111000;
parameter    ap_const_lv12_780 = 12'b11110000000;
parameter    ap_const_lv5_1 = 5'b1;
parameter    ap_const_lv7_1 = 7'b1;
parameter    ap_const_lv12_1 = 12'b1;
parameter    ap_const_lv14_1 = 14'b1;
parameter    ap_const_lv2_0 = 2'b00;
parameter    ap_const_lv4_0 = 4'b0000;
parameter    ap_const_lv32_2 = 32'b10;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output  [15:0] Filter3_address0;
output   Filter3_ce0;
input  [31:0] Filter3_q0;
output  [13:0] f3_0_address0;
output   f3_0_ce0;
output   f3_0_we0;
output  [31:0] f3_0_d0;
output  [13:0] f3_1_address0;
output   f3_1_ce0;
output   f3_1_we0;
output  [31:0] f3_1_d0;
output  [13:0] f3_2_address0;
output   f3_2_ce0;
output   f3_2_we0;
output  [31:0] f3_2_d0;
output  [13:0] f3_3_address0;
output   f3_3_ce0;
output   f3_3_we0;
output  [31:0] f3_3_d0;
output  [13:0] f3_4_address0;
output   f3_4_ce0;
output   f3_4_we0;
output  [31:0] f3_4_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg Filter3_ce0;
reg f3_0_ce0;
reg f3_0_we0;
reg f3_1_ce0;
reg f3_1_we0;
reg f3_2_ce0;
reg f3_2_we0;
reg f3_3_ce0;
reg f3_3_we0;
reg f3_4_ce0;
reg f3_4_we0;
reg    ap_done_reg = 1'b0;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm = 3'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_22;
reg   [15:0] indvar_flatten3_reg_177;
reg   [2:0] i7_reg_188;
reg   [13:0] indvar_flatten4_reg_199;
reg   [2:0] j7_reg_210;
reg   [11:0] indvar_flatten_reg_221;
reg   [4:0] k8_reg_232;
reg   [6:0] l3_reg_243;
wire   [0:0] exitcond_flatten4_fu_254_p2;
reg   [0:0] exitcond_flatten4_reg_596;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_1;
reg    ap_sig_bdd_90;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
reg    ap_reg_ppiten_pp0_it2 = 1'b0;
wire   [15:0] indvar_flatten_next4_fu_260_p2;
wire   [2:0] i7_mid2_fu_316_p3;
reg   [2:0] i7_mid2_reg_605;
reg   [2:0] ap_reg_ppstg_i7_mid2_reg_605_pp0_it1;
wire   [2:0] j7_mid2_fu_362_p3;
reg   [2:0] j7_mid2_reg_613;
reg   [2:0] ap_reg_ppstg_j7_mid2_reg_613_pp0_it1;
wire   [6:0] l3_mid2_fu_388_p3;
reg   [6:0] l3_mid2_reg_619;
reg   [6:0] ap_reg_ppstg_l3_mid2_reg_619_pp0_it1;
wire   [4:0] k8_mid2_fu_396_p3;
reg   [4:0] k8_mid2_reg_625;
reg   [4:0] ap_reg_ppstg_k8_mid2_reg_625_pp0_it1;
wire   [6:0] l_fu_404_p2;
wire   [11:0] indvar_flatten_next_fu_416_p3;
wire   [13:0] indvar_flatten_next3_fu_430_p3;
reg    ap_sig_bdd_136;
reg   [2:0] i7_phi_fu_192_p4;
reg   [2:0] j7_phi_fu_214_p4;
reg   [4:0] k8_phi_fu_236_p4;
wire   [63:0] tmp_769_cast_fu_527_p1;
wire   [63:0] tmp_770_cast_fu_587_p1;
wire   [0:0] exitcond_flatten_fu_272_p2;
wire   [0:0] exitcond_fu_292_p2;
wire   [0:0] not_exitcond_flatten_fu_286_p2;
wire   [0:0] exitcond_flatten1_fu_304_p2;
wire   [2:0] i_fu_266_p2;
wire   [2:0] j7_mid_fu_278_p3;
wire   [0:0] exitcond_flatten_mid_fu_310_p2;
wire   [0:0] tmp_741_fu_330_p2;
wire   [0:0] exitcond_flatten_not_fu_344_p2;
wire   [0:0] exitcond5_mid_fu_298_p2;
wire   [0:0] not_exitcond_flatten_mid_fu_350_p2;
wire   [2:0] j_fu_324_p2;
wire   [4:0] k8_mid_fu_336_p3;
wire   [0:0] exitcond5_mid1_fu_356_p2;
wire   [0:0] tmp_744_fu_376_p2;
wire   [0:0] tmp_808_fu_382_p2;
wire   [4:0] k_fu_370_p2;
wire   [11:0] indvar_flatten_op_fu_410_p2;
wire   [13:0] indvar_flatten11_op_fu_424_p2;
wire   [4:0] tmp_fu_441_p3;
wire   [5:0] tmp_5_cast_fu_438_p1;
wire   [5:0] p_shl5_cast_fu_448_p1;
wire   [5:0] tmp_739_fu_452_p2;
wire   [5:0] tmp_10_cast_fu_458_p1;
wire   [5:0] tmp_742_fu_461_p2;
wire   [9:0] tmp_807_fu_467_p3;
wire   [63:0] tmp_743_fu_475_p1;
wire   [63:0] tmp_16_fu_479_p1;
wire   [63:0] tmp_745_fu_482_p2;
wire   [9:0] tmp_809_fu_488_p1;
wire   [13:0] tmp_810_fu_500_p1;
wire   [16:0] p_shl3_cast_fu_492_p3;
wire   [16:0] p_shl4_cast_fu_504_p3;
wire   [16:0] tmp_746_fu_512_p2;
wire   [16:0] tmp_22_cast_fu_518_p1;
wire   [16:0] tmp_749_fu_521_p2;
wire   [6:0] tmp_740_fu_532_p3;
wire   [7:0] tmp_755_cast_fu_539_p1;
wire   [7:0] tmp_16_cast_fu_543_p1;
wire   [7:0] tmp_747_fu_546_p2;
wire   [10:0] tmp_811_fu_560_p3;
wire   [14:0] p_shl_cast_fu_552_p3;
wire   [14:0] p_shl2_cast_fu_568_p1;
wire   [14:0] tmp_748_fu_572_p2;
wire   [14:0] tmp_22_cast1_fu_578_p1;
wire   [14:0] tmp_750_fu_581_p2;
reg    ap_sig_cseq_ST_st5_fsm_2;
reg    ap_sig_bdd_417;
reg   [2:0] ap_NS_fsm;




always @ (posedge ap_clk) begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_done_reg
    if (ap_rst == 1'b1) begin
        ap_done_reg <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_continue)) begin
            ap_done_reg <= ap_const_logic_0;
        end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_2)) begin
            ap_done_reg <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it0
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(exitcond_flatten4_fu_254_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_136)) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_254_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_136) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(exitcond_flatten4_fu_254_p2 == ap_const_lv1_0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it2
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
    end else begin
        ap_reg_ppiten_pp0_it2 <= ap_reg_ppiten_pp0_it1;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten4_reg_596 == ap_const_lv1_0))) begin
        i7_reg_188 <= i7_mid2_reg_605;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_136)) begin
        i7_reg_188 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (exitcond_flatten4_fu_254_p2 == ap_const_lv1_0))) begin
        indvar_flatten3_reg_177 <= indvar_flatten_next4_fu_260_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_136)) begin
        indvar_flatten3_reg_177 <= ap_const_lv16_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (exitcond_flatten4_fu_254_p2 == ap_const_lv1_0))) begin
        indvar_flatten4_reg_199 <= indvar_flatten_next3_fu_430_p3;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_136)) begin
        indvar_flatten4_reg_199 <= ap_const_lv14_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (exitcond_flatten4_fu_254_p2 == ap_const_lv1_0))) begin
        indvar_flatten_reg_221 <= indvar_flatten_next_fu_416_p3;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_136)) begin
        indvar_flatten_reg_221 <= ap_const_lv12_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten4_reg_596 == ap_const_lv1_0))) begin
        j7_reg_210 <= j7_mid2_reg_613;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_136)) begin
        j7_reg_210 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten4_reg_596 == ap_const_lv1_0))) begin
        k8_reg_232 <= k8_mid2_reg_625;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_136)) begin
        k8_reg_232 <= ap_const_lv5_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (exitcond_flatten4_fu_254_p2 == ap_const_lv1_0))) begin
        l3_reg_243 <= l_fu_404_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_136)) begin
        l3_reg_243 <= ap_const_lv7_0;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1)) begin
        ap_reg_ppstg_i7_mid2_reg_605_pp0_it1 <= i7_mid2_reg_605;
        ap_reg_ppstg_j7_mid2_reg_613_pp0_it1 <= j7_mid2_reg_613;
        ap_reg_ppstg_k8_mid2_reg_625_pp0_it1 <= k8_mid2_reg_625;
        ap_reg_ppstg_l3_mid2_reg_619_pp0_it1 <= l3_mid2_reg_619;
        exitcond_flatten4_reg_596 <= exitcond_flatten4_fu_254_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & (exitcond_flatten4_fu_254_p2 == ap_const_lv1_0))) begin
        i7_mid2_reg_605 <= i7_mid2_fu_316_p3;
        j7_mid2_reg_613 <= j7_mid2_fu_362_p3;
        k8_mid2_reg_625 <= k8_mid2_fu_396_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_flatten4_fu_254_p2 == ap_const_lv1_0))) begin
        l3_mid2_reg_619 <= l3_mid2_fu_388_p3;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
        Filter3_ce0 = ap_const_logic_1;
    end else begin
        Filter3_ce0 = ap_const_logic_0;
    end
end

always @ (ap_done_reg or ap_sig_cseq_ST_st5_fsm_2) begin
    if (((ap_const_logic_1 == ap_done_reg) | (ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_2))) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0) begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st5_fsm_2) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_2)) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_90) begin
    if (ap_sig_bdd_90) begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_22) begin
    if (ap_sig_bdd_22) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_417) begin
    if (ap_sig_bdd_417) begin
        ap_sig_cseq_ST_st5_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st5_fsm_2 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2) begin
    if ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2)) begin
        f3_0_ce0 = ap_const_logic_1;
    end else begin
        f3_0_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2 or ap_reg_ppstg_j7_mid2_reg_613_pp0_it1) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_reg_ppstg_j7_mid2_reg_613_pp0_it1 == ap_const_lv3_0))) begin
        f3_0_we0 = ap_const_logic_1;
    end else begin
        f3_0_we0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2) begin
    if ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2)) begin
        f3_1_ce0 = ap_const_logic_1;
    end else begin
        f3_1_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2 or ap_reg_ppstg_j7_mid2_reg_613_pp0_it1) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_reg_ppstg_j7_mid2_reg_613_pp0_it1 == ap_const_lv3_1))) begin
        f3_1_we0 = ap_const_logic_1;
    end else begin
        f3_1_we0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2) begin
    if ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2)) begin
        f3_2_ce0 = ap_const_logic_1;
    end else begin
        f3_2_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2 or ap_reg_ppstg_j7_mid2_reg_613_pp0_it1) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_reg_ppstg_j7_mid2_reg_613_pp0_it1 == ap_const_lv3_2))) begin
        f3_2_we0 = ap_const_logic_1;
    end else begin
        f3_2_we0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2) begin
    if ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2)) begin
        f3_3_ce0 = ap_const_logic_1;
    end else begin
        f3_3_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2 or ap_reg_ppstg_j7_mid2_reg_613_pp0_it1) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & (ap_reg_ppstg_j7_mid2_reg_613_pp0_it1 == ap_const_lv3_3))) begin
        f3_3_we0 = ap_const_logic_1;
    end else begin
        f3_3_we0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2) begin
    if ((ap_const_logic_1 == ap_reg_ppiten_pp0_it2)) begin
        f3_4_ce0 = ap_const_logic_1;
    end else begin
        f3_4_ce0 = ap_const_logic_0;
    end
end

always @ (ap_reg_ppiten_pp0_it2 or ap_reg_ppstg_j7_mid2_reg_613_pp0_it1) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & ~(ap_reg_ppstg_j7_mid2_reg_613_pp0_it1 == ap_const_lv3_3) & ~(ap_reg_ppstg_j7_mid2_reg_613_pp0_it1 == ap_const_lv3_2) & ~(ap_reg_ppstg_j7_mid2_reg_613_pp0_it1 == ap_const_lv3_1) & ~(ap_reg_ppstg_j7_mid2_reg_613_pp0_it1 == ap_const_lv3_0))) begin
        f3_4_we0 = ap_const_logic_1;
    end else begin
        f3_4_we0 = ap_const_logic_0;
    end
end

always @ (i7_reg_188 or exitcond_flatten4_reg_596 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or i7_mid2_reg_605) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten4_reg_596 == ap_const_lv1_0))) begin
        i7_phi_fu_192_p4 = i7_mid2_reg_605;
    end else begin
        i7_phi_fu_192_p4 = i7_reg_188;
    end
end

always @ (j7_reg_210 or exitcond_flatten4_reg_596 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or j7_mid2_reg_613) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten4_reg_596 == ap_const_lv1_0))) begin
        j7_phi_fu_214_p4 = j7_mid2_reg_613;
    end else begin
        j7_phi_fu_214_p4 = j7_reg_210;
    end
end

always @ (k8_reg_232 or exitcond_flatten4_reg_596 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_reg_ppiten_pp0_it1 or k8_mid2_reg_625) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & (exitcond_flatten4_reg_596 == ap_const_lv1_0))) begin
        k8_phi_fu_236_p4 = k8_mid2_reg_625;
    end else begin
        k8_phi_fu_236_p4 = k8_reg_232;
    end
end
always @ (ap_CS_fsm or exitcond_flatten4_fu_254_p2 or ap_reg_ppiten_pp0_it0 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it2 or ap_sig_bdd_136) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~ap_sig_bdd_136) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_pp0_stg0_fsm_1 : 
        begin
            if ((~((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(exitcond_flatten4_fu_254_p2 == ap_const_lv1_0) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(exitcond_flatten4_fu_254_p2 == ap_const_lv1_0) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
                ap_NS_fsm = ap_ST_st5_fsm_2;
            end else begin
                ap_NS_fsm = ap_ST_st5_fsm_2;
            end
        end
        ap_ST_st5_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end


assign Filter3_address0 = tmp_769_cast_fu_527_p1;


always @ (ap_start or ap_done_reg) begin
    ap_sig_bdd_136 = ((ap_start == ap_const_logic_0) | (ap_done_reg == ap_const_logic_1));
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_22 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_417 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_90 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end

assign exitcond5_mid1_fu_356_p2 = (exitcond5_mid_fu_298_p2 & not_exitcond_flatten_mid_fu_350_p2);

assign exitcond5_mid_fu_298_p2 = (exitcond_fu_292_p2 & not_exitcond_flatten_fu_286_p2);

assign exitcond_flatten1_fu_304_p2 = (indvar_flatten_reg_221 == ap_const_lv12_780? 1'b1: 1'b0);

assign exitcond_flatten4_fu_254_p2 = (indvar_flatten3_reg_177 == ap_const_lv16_BB80? 1'b1: 1'b0);

assign exitcond_flatten_fu_272_p2 = (indvar_flatten4_reg_199 == ap_const_lv14_2580? 1'b1: 1'b0);

assign exitcond_flatten_mid_fu_310_p2 = (exitcond_flatten1_fu_304_p2 & not_exitcond_flatten_fu_286_p2);

assign exitcond_flatten_not_fu_344_p2 = (exitcond_flatten1_fu_304_p2 ^ ap_const_lv1_1);

assign exitcond_fu_292_p2 = (l3_reg_243 == ap_const_lv7_78? 1'b1: 1'b0);

assign f3_0_address0 = tmp_770_cast_fu_587_p1;

assign f3_0_d0 = Filter3_q0;

assign f3_1_address0 = tmp_770_cast_fu_587_p1;

assign f3_1_d0 = Filter3_q0;

assign f3_2_address0 = tmp_770_cast_fu_587_p1;

assign f3_2_d0 = Filter3_q0;

assign f3_3_address0 = tmp_770_cast_fu_587_p1;

assign f3_3_d0 = Filter3_q0;

assign f3_4_address0 = tmp_770_cast_fu_587_p1;

assign f3_4_d0 = Filter3_q0;

assign i7_mid2_fu_316_p3 = ((exitcond_flatten_fu_272_p2[0:0] === 1'b1) ? i_fu_266_p2 : i7_phi_fu_192_p4);

assign i_fu_266_p2 = (ap_const_lv3_1 + i7_phi_fu_192_p4);

assign indvar_flatten11_op_fu_424_p2 = (indvar_flatten4_reg_199 + ap_const_lv14_1);

assign indvar_flatten_next3_fu_430_p3 = ((exitcond_flatten_fu_272_p2[0:0] === 1'b1) ? ap_const_lv14_1 : indvar_flatten11_op_fu_424_p2);

assign indvar_flatten_next4_fu_260_p2 = (indvar_flatten3_reg_177 + ap_const_lv16_1);

assign indvar_flatten_next_fu_416_p3 = ((tmp_741_fu_330_p2[0:0] === 1'b1) ? ap_const_lv12_1 : indvar_flatten_op_fu_410_p2);

assign indvar_flatten_op_fu_410_p2 = (indvar_flatten_reg_221 + ap_const_lv12_1);

assign j7_mid2_fu_362_p3 = ((exitcond_flatten_mid_fu_310_p2[0:0] === 1'b1) ? j_fu_324_p2 : j7_mid_fu_278_p3);

assign j7_mid_fu_278_p3 = ((exitcond_flatten_fu_272_p2[0:0] === 1'b1) ? ap_const_lv3_0 : j7_phi_fu_214_p4);

assign j_fu_324_p2 = (ap_const_lv3_1 + j7_mid_fu_278_p3);

assign k8_mid2_fu_396_p3 = ((exitcond5_mid1_fu_356_p2[0:0] === 1'b1) ? k_fu_370_p2 : k8_mid_fu_336_p3);

assign k8_mid_fu_336_p3 = ((tmp_741_fu_330_p2[0:0] === 1'b1) ? ap_const_lv5_0 : k8_phi_fu_236_p4);

assign k_fu_370_p2 = (ap_const_lv5_1 + k8_mid_fu_336_p3);

assign l3_mid2_fu_388_p3 = ((tmp_808_fu_382_p2[0:0] === 1'b1) ? ap_const_lv7_0 : l3_reg_243);

assign l_fu_404_p2 = (l3_mid2_fu_388_p3 + ap_const_lv7_1);

assign not_exitcond_flatten_fu_286_p2 = (exitcond_flatten_fu_272_p2 ^ ap_const_lv1_1);

assign not_exitcond_flatten_mid_fu_350_p2 = (exitcond_flatten_fu_272_p2 | exitcond_flatten_not_fu_344_p2);

assign p_shl2_cast_fu_568_p1 = tmp_811_fu_560_p3;

assign p_shl3_cast_fu_492_p3 = {{tmp_809_fu_488_p1}, {ap_const_lv7_0}};

assign p_shl4_cast_fu_504_p3 = {{tmp_810_fu_500_p1}, {ap_const_lv3_0}};

assign p_shl5_cast_fu_448_p1 = tmp_fu_441_p3;

assign p_shl_cast_fu_552_p3 = {{tmp_747_fu_546_p2}, {ap_const_lv7_0}};

assign tmp_10_cast_fu_458_p1 = j7_mid2_reg_613;

assign tmp_16_cast_fu_543_p1 = ap_reg_ppstg_k8_mid2_reg_625_pp0_it1;

assign tmp_16_fu_479_p1 = k8_mid2_reg_625;

assign tmp_22_cast1_fu_578_p1 = ap_reg_ppstg_l3_mid2_reg_619_pp0_it1;

assign tmp_22_cast_fu_518_p1 = l3_mid2_reg_619;

assign tmp_5_cast_fu_438_p1 = i7_mid2_reg_605;

assign tmp_739_fu_452_p2 = (tmp_5_cast_fu_438_p1 + p_shl5_cast_fu_448_p1);

assign tmp_740_fu_532_p3 = {{ap_reg_ppstg_i7_mid2_reg_605_pp0_it1}, {ap_const_lv4_0}};

assign tmp_741_fu_330_p2 = (exitcond_flatten_mid_fu_310_p2 | exitcond_flatten_fu_272_p2);

assign tmp_742_fu_461_p2 = (tmp_739_fu_452_p2 + tmp_10_cast_fu_458_p1);

assign tmp_743_fu_475_p1 = tmp_807_fu_467_p3;

assign tmp_744_fu_376_p2 = (exitcond5_mid1_fu_356_p2 | exitcond_flatten_mid_fu_310_p2);

assign tmp_745_fu_482_p2 = (tmp_743_fu_475_p1 + tmp_16_fu_479_p1);

assign tmp_746_fu_512_p2 = (p_shl3_cast_fu_492_p3 - p_shl4_cast_fu_504_p3);

assign tmp_747_fu_546_p2 = (tmp_755_cast_fu_539_p1 + tmp_16_cast_fu_543_p1);

assign tmp_748_fu_572_p2 = (p_shl_cast_fu_552_p3 - p_shl2_cast_fu_568_p1);

assign tmp_749_fu_521_p2 = (tmp_746_fu_512_p2 + tmp_22_cast_fu_518_p1);

assign tmp_750_fu_581_p2 = (tmp_748_fu_572_p2 + tmp_22_cast1_fu_578_p1);

assign tmp_755_cast_fu_539_p1 = tmp_740_fu_532_p3;

assign tmp_769_cast_fu_527_p1 = tmp_749_fu_521_p2;

assign tmp_770_cast_fu_587_p1 = tmp_750_fu_581_p2;

assign tmp_807_fu_467_p3 = {{tmp_742_fu_461_p2}, {ap_const_lv4_0}};

assign tmp_808_fu_382_p2 = (tmp_744_fu_376_p2 | exitcond_flatten_fu_272_p2);

assign tmp_809_fu_488_p1 = tmp_745_fu_482_p2[9:0];

assign tmp_810_fu_500_p1 = tmp_745_fu_482_p2[13:0];

assign tmp_811_fu_560_p3 = {{tmp_747_fu_546_p2}, {ap_const_lv3_0}};

assign tmp_fu_441_p3 = {{i7_mid2_reg_605}, {ap_const_lv2_0}};


endmodule //inference_Loop_6_proc

