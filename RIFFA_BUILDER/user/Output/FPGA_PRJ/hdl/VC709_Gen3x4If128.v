// ----------------------------------------------------------------------
// Copyright (c) 2016, The Regents of the University of California All
// rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// 
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
// 
//     * Redistributions in binary form must reproduce the above
//       copyright notice, this list of conditions and the following
//       disclaimer in the documentation and/or other materials provided
//       with the distribution.
// 
//     * Neither the name of The Regents of the University of California
//       nor the names of its contributors may be used to endorse or
//       promote products derived from this software without specific
//       prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL REGENTS OF THE
// UNIVERSITY OF CALIFORNIA BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
// OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
// TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
// USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
// ----------------------------------------------------------------------
//----------------------------------------------------------------------------
// Filename:            VC709_Gen3x4If128.v
// Version:             1.00.a
// Verilog Standard:    Verilog-2001
// Description:         Top level module for RIFFA 2.2 reference design for the
//                      the Xilinx VC709 Development Board.
// Author:              Auto Generated
//-----------------------------------------------------------------------------
`include "functions.vh"
`include "riffa.vh"
`include "ultrascale.vh"
`timescale 1ps / 1ps
module VC709_Gen3x4If128
    #(// Number of RIFFA Channels

//
//RIFFA auto generated code begin
      parameter C_NUM_CHNL =13,
//RIFFA auto generated code end
      // Number of PCIe Lanes
      parameter C_NUM_LANES =  4,
      // Settings from Vivado IP Generator
      parameter C_PCI_DATA_WIDTH = 128,
      parameter C_MAX_PAYLOAD_BYTES = 256,
      parameter C_LOG_NUM_TAGS = 5
      ) 
    (output [(C_NUM_LANES - 1) : 0] PCI_EXP_TXP,
     output [(C_NUM_LANES - 1) : 0] PCI_EXP_TXN,
     input [(C_NUM_LANES - 1) : 0]  PCI_EXP_RXP,
     input [(C_NUM_LANES - 1) : 0]  PCI_EXP_RXN,

     output [7:0]                   LED,
     input                          PCIE_REFCLK_P,
     input                          PCIE_REFCLK_N,
     input                          PCIE_RESET_N
     );

    // Clocks, etc
    wire                            user_lnk_up;
    wire                            user_clk;
    wire                            user_reset;
    wire                            pcie_refclk;
    wire                            pcie_reset_n;

    // Interface: RQ (TXC)
    wire                            s_axis_rq_tlast;
    wire [C_PCI_DATA_WIDTH-1:0]     s_axis_rq_tdata;
    wire [`SIG_RQ_TUSER_W-1:0]      s_axis_rq_tuser;
    wire [(C_PCI_DATA_WIDTH/32)-1:0] s_axis_rq_tkeep;
    wire                             s_axis_rq_tready;
    wire                             s_axis_rq_tvalid;
    // Interface: RC (RXC)
    wire [C_PCI_DATA_WIDTH-1:0]      m_axis_rc_tdata;
    wire [`SIG_RC_TUSER_W-1:0]       m_axis_rc_tuser;
    wire                             m_axis_rc_tlast;
    wire [(C_PCI_DATA_WIDTH/32)-1:0] m_axis_rc_tkeep;
    wire                             m_axis_rc_tvalid;
    wire                             m_axis_rc_tready;
    // Interface: CQ (RXR)
    wire [C_PCI_DATA_WIDTH-1:0]      m_axis_cq_tdata;
    wire [`SIG_CQ_TUSER_W-1:0]       m_axis_cq_tuser;
    wire                             m_axis_cq_tlast;
    wire [(C_PCI_DATA_WIDTH/32)-1:0] m_axis_cq_tkeep;
    wire                             m_axis_cq_tvalid;
    wire                             m_axis_cq_tready;
    // Interface: CC (TXC)
    wire [C_PCI_DATA_WIDTH-1:0]      s_axis_cc_tdata;
    wire [`SIG_CC_TUSER_W-1:0]       s_axis_cc_tuser;
    wire                             s_axis_cc_tlast;
    wire [(C_PCI_DATA_WIDTH/32)-1:0] s_axis_cc_tkeep;
    wire                             s_axis_cc_tvalid;
    wire                             s_axis_cc_tready;

    // Configuration (CFG) Interface                                           
    wire [3:0]                       pcie_rq_seq_num;
    wire                             pcie_rq_seq_num_vld;
    wire [5:0]                       pcie_rq_tag;
    wire                             pcie_rq_tag_vld;
    wire                             pcie_cq_np_req;
    wire [5:0]                       pcie_cq_np_req_count;

    wire                             cfg_phy_link_down;
    wire [3:0]                       cfg_negotiated_width; // CONFIG_LINK_WIDTH
    wire [2:0]                       cfg_current_speed; // CONFIG_LINK_RATE
    wire [2:0]                       cfg_max_payload; // CONFIG_MAX_PAYLOAD
    wire [2:0]                       cfg_max_read_req; // CONFIG_MAX_READ_REQUEST
    wire [7:0]                       cfg_function_status; // [2] = CONFIG_BUS_MASTER_ENABLE
    wire [5:0]                       cfg_function_power_state; // Ignorable but not removable
    wire [11:0]                      cfg_vf_status; // Ignorable but not removable
    wire [17:0]                      cfg_vf_power_state; // Ignorable but not removable
    wire [1:0]                       cfg_link_power_state; // Ignorable but not removable

    // Error Reporting Interface
    wire                             cfg_err_cor_out;
    wire                             cfg_err_nonfatal_out;
    wire                             cfg_err_fatal_out;

    wire                             cfg_ltr_enable;
    wire [5:0]                       cfg_ltssm_state;// TODO: Connect to LED's
    wire [1:0]                       cfg_rcb_status;
    wire [1:0]                       cfg_dpa_substate_change;
    wire [1:0]                       cfg_obff_enable;
    wire                             cfg_pl_status_change;

    wire [1:0]                       cfg_tph_requester_enable;
    wire [5:0]                       cfg_tph_st_mode;
    wire [5:0]                       cfg_vf_tph_requester_enable;
    wire [17:0]                      cfg_vf_tph_st_mode;
    wire [7:0]                       cfg_fc_ph;
    wire [11:0]                      cfg_fc_pd;
    wire [7:0]                       cfg_fc_nph;
    wire [11:0]                      cfg_fc_npd;
    wire [7:0]                       cfg_fc_cplh;
    wire [11:0]                      cfg_fc_cpld;
    wire [2:0]                       cfg_fc_sel;

    // Interrupt Interface Signals
    wire [3:0]                       cfg_interrupt_int;
    wire [1:0]                       cfg_interrupt_pending;
    wire                             cfg_interrupt_sent;
    wire [1:0]                       cfg_interrupt_msi_enable;
    wire [5:0]                       cfg_interrupt_msi_vf_enable;
    wire [5:0]                       cfg_interrupt_msi_mmenable;
    wire                             cfg_interrupt_msi_mask_update;
    wire [31:0]                      cfg_interrupt_msi_data;
    wire [3:0]                       cfg_interrupt_msi_select;
    wire [31:0]                      cfg_interrupt_msi_int;
    wire [63:0]                      cfg_interrupt_msi_pending_status;
    wire                             cfg_interrupt_msi_sent;
    wire                             cfg_interrupt_msi_fail;
    wire [2:0]                       cfg_interrupt_msi_attr;
    wire                             cfg_interrupt_msi_tph_present;
    wire [1:0]                       cfg_interrupt_msi_tph_type;
    wire [8:0]                       cfg_interrupt_msi_tph_st_tag;
    wire [2:0]                       cfg_interrupt_msi_function_number;

    wire                             rst_out;
    wire [C_NUM_CHNL-1:0]            chnl_rx_clk; 
    wire [C_NUM_CHNL-1:0]            chnl_rx; 
    wire [C_NUM_CHNL-1:0]            chnl_rx_ack; 
    wire [C_NUM_CHNL-1:0]            chnl_rx_last; 
    wire [(C_NUM_CHNL*`SIG_CHNL_LENGTH_W)-1:0] chnl_rx_len; 
    wire [(C_NUM_CHNL*`SIG_CHNL_OFFSET_W)-1:0] chnl_rx_off; 
    wire [(C_NUM_CHNL*C_PCI_DATA_WIDTH)-1:0]   chnl_rx_data; 
    wire [C_NUM_CHNL-1:0]                      chnl_rx_data_valid; 
    wire [C_NUM_CHNL-1:0]                      chnl_rx_data_ren;

    wire [C_NUM_CHNL-1:0]                      chnl_tx_clk; 
    wire [C_NUM_CHNL-1:0]                      chnl_tx; 
    wire [C_NUM_CHNL-1:0]                      chnl_tx_ack;
    wire [C_NUM_CHNL-1:0]                      chnl_tx_last; 
    wire [(C_NUM_CHNL*`SIG_CHNL_LENGTH_W)-1:0] chnl_tx_len; 
    wire [(C_NUM_CHNL*`SIG_CHNL_OFFSET_W)-1:0] chnl_tx_off; 
    wire [(C_NUM_CHNL*C_PCI_DATA_WIDTH)-1:0]   chnl_tx_data; 
    wire [C_NUM_CHNL-1:0]                      chnl_tx_data_valid; 
    wire [C_NUM_CHNL-1:0]                      chnl_tx_data_ren;

    genvar                                     chnl;

    IBUF 
        #()  
    pci_reset_n_ibuf 
        (.O(pcie_reset_n), 
         .I(PCIE_RESET_N));

    IBUFDS_GTE2 
        #()
    refclk_ibuf 
        (.O(pcie_refclk), 
         .ODIV2(), 
         .I(PCIE_REFCLK_P), 
         .CEB(1'b0), 
         .IB(PCIE_REFCLK_N));

    OBUF 
        #() 
    led_0_obuf 
        (.O(LED[0]),
         .I(cfg_ltssm_state[0]));
    OBUF 
        #() 
    led_1_obuf 
        (.O(LED[1]),
         .I(cfg_ltssm_state[1]));
    OBUF 
        #() 
    led_2_obuf 
        (.O(LED[2]),
         .I(cfg_ltssm_state[2]));
    OBUF 
        #() 
    led_3_obuf 
        (.O(LED[3]),
         .I(cfg_ltssm_state[3]));
    OBUF 
        #() 
    led_4_obuf 
        (.O(LED[4]),
         .I(cfg_ltssm_state[4]));
    OBUF 
        #() 
    led_5_obuf 
        (.O(LED[5]),
         .I(cfg_ltssm_state[5]));
    OBUF 
        #() 
    led_6_obuf 
        (.O(LED[6]),
         .I(pcie_reset_n));
    OBUF 
        #() 
    led_7_obuf 
        (.O(LED[7]),
         .I(rst_out));

    // Core Top Level Wrapper
    PCIeGen3x4If128  
        #()
    pcie3_7x_0_i 
        (//---------------------------------------------------------------------
         //  PCI Express (pci_exp) Interface                                    
         //---------------------------------------------------------------------
         .pci_exp_txn                                    ( PCI_EXP_TXN ),
         .pci_exp_txp                                    ( PCI_EXP_TXP ),
         .pci_exp_rxn                                    ( PCI_EXP_RXN ),
         .pci_exp_rxp                                    ( PCI_EXP_RXP ),

         //---------------------------------------------------------------------
         //  AXI Interface                                                      
         //---------------------------------------------------------------------
         .user_clk                                       ( user_clk ),
         .user_reset                                     ( user_reset ),
         .user_lnk_up                                    ( user_lnk_up ),
         .user_app_rdy                                   ( ),

         .s_axis_rq_tlast                                ( s_axis_rq_tlast ),
         .s_axis_rq_tdata                                ( s_axis_rq_tdata ),
         .s_axis_rq_tuser                                ( s_axis_rq_tuser ),
         .s_axis_rq_tkeep                                ( s_axis_rq_tkeep ),
         .s_axis_rq_tready                               ( s_axis_rq_tready ),
         .s_axis_rq_tvalid                               ( s_axis_rq_tvalid ),

         .m_axis_rc_tdata                                ( m_axis_rc_tdata ),
         .m_axis_rc_tuser                                ( m_axis_rc_tuser ),
         .m_axis_rc_tlast                                ( m_axis_rc_tlast ),
         .m_axis_rc_tkeep                                ( m_axis_rc_tkeep ),
         .m_axis_rc_tvalid                               ( m_axis_rc_tvalid ),
         .m_axis_rc_tready                               ( {22{m_axis_rc_tready}} ),

         .m_axis_cq_tdata                                ( m_axis_cq_tdata ),
         .m_axis_cq_tuser                                ( m_axis_cq_tuser ),
         .m_axis_cq_tlast                                ( m_axis_cq_tlast ),
         .m_axis_cq_tkeep                                ( m_axis_cq_tkeep ),
         .m_axis_cq_tvalid                               ( m_axis_cq_tvalid ),
         .m_axis_cq_tready                               ( {22{m_axis_cq_tready}} ),

         .s_axis_cc_tdata                                ( s_axis_cc_tdata ),
         .s_axis_cc_tuser                                ( s_axis_cc_tuser ),
         .s_axis_cc_tlast                                ( s_axis_cc_tlast ),
         .s_axis_cc_tkeep                                ( s_axis_cc_tkeep ),
         .s_axis_cc_tvalid                               ( s_axis_cc_tvalid ),
         .s_axis_cc_tready                               ( s_axis_cc_tready ),

         //---------------------------------------------------------------------
         //  Configuration (CFG) Interface                                      
         //---------------------------------------------------------------------
         .pcie_rq_seq_num                                ( pcie_rq_seq_num ),
         .pcie_rq_seq_num_vld                            ( pcie_rq_seq_num_vld ),
         .pcie_rq_tag                                    ( pcie_rq_tag ),
         .pcie_rq_tag_vld                                ( pcie_rq_tag_vld ),
         .pcie_cq_np_req                                 ( pcie_cq_np_req ),
         .pcie_cq_np_req_count                           ( pcie_cq_np_req_count ),
         .cfg_phy_link_down                              ( cfg_phy_link_down ),
         .cfg_phy_link_status                            ( cfg_phy_link_status),
         .cfg_negotiated_width                           ( cfg_negotiated_width ),
         .cfg_current_speed                              ( cfg_current_speed ),
         .cfg_max_payload                                ( cfg_max_payload ),
         .cfg_max_read_req                               ( cfg_max_read_req ),
         .cfg_function_status                            ( cfg_function_status ),
         .cfg_function_power_state                       ( cfg_function_power_state ),
         .cfg_vf_status                                  ( cfg_vf_status ),
         .cfg_vf_power_state                             ( cfg_vf_power_state ),
         .cfg_link_power_state                           ( cfg_link_power_state ),
         // Error Reporting Interface
         .cfg_err_cor_out                                ( cfg_err_cor_out ),
         .cfg_err_nonfatal_out                           ( cfg_err_nonfatal_out ),
         .cfg_err_fatal_out                              ( cfg_err_fatal_out ),
         .cfg_ltr_enable                                 ( cfg_ltr_enable ),
         .cfg_ltssm_state                                ( cfg_ltssm_state ),
         .cfg_rcb_status                                 ( cfg_rcb_status ),
         .cfg_dpa_substate_change                        ( cfg_dpa_substate_change ),
         .cfg_obff_enable                                ( cfg_obff_enable ),
         .cfg_pl_status_change                           ( cfg_pl_status_change ),
         .cfg_tph_requester_enable                       ( cfg_tph_requester_enable ),
         .cfg_tph_st_mode                                ( cfg_tph_st_mode ),
         .cfg_vf_tph_requester_enable                    ( cfg_vf_tph_requester_enable ),
         .cfg_vf_tph_st_mode                             ( cfg_vf_tph_st_mode ),
         .cfg_fc_ph                                      ( cfg_fc_ph ),
         .cfg_fc_pd                                      ( cfg_fc_pd ),
         .cfg_fc_nph                                     ( cfg_fc_nph ),
         .cfg_fc_npd                                     ( cfg_fc_npd ),
         .cfg_fc_cplh                                    ( cfg_fc_cplh ),
         .cfg_fc_cpld                                    ( cfg_fc_cpld ),
         .cfg_fc_sel                                     ( cfg_fc_sel ),
         //---------------------------------------------------------------------
         // EP Only                                                             
         //---------------------------------------------------------------------
         // Interrupt Interface Signals
         .cfg_interrupt_int                              ( cfg_interrupt_int ),
         .cfg_interrupt_pending                          ( cfg_interrupt_pending ),
         .cfg_interrupt_sent                             ( cfg_interrupt_sent ),
         .cfg_interrupt_msi_enable                       ( cfg_interrupt_msi_enable ),
         .cfg_interrupt_msi_vf_enable                    ( cfg_interrupt_msi_vf_enable ),
         .cfg_interrupt_msi_mmenable                     ( cfg_interrupt_msi_mmenable ),
         .cfg_interrupt_msi_mask_update                  ( cfg_interrupt_msi_mask_update ),
         .cfg_interrupt_msi_data                         ( cfg_interrupt_msi_data ),
         .cfg_interrupt_msi_select                       ( cfg_interrupt_msi_select ),
         .cfg_interrupt_msi_int                          ( cfg_interrupt_msi_int ),
         .cfg_interrupt_msi_pending_status               ( cfg_interrupt_msi_pending_status ),
         .cfg_interrupt_msi_sent                         ( cfg_interrupt_msi_sent ),
         .cfg_interrupt_msi_fail                         ( cfg_interrupt_msi_fail ),
         .cfg_interrupt_msi_attr                         ( cfg_interrupt_msi_attr ),
         .cfg_interrupt_msi_tph_present                  ( cfg_interrupt_msi_tph_present ),
         .cfg_interrupt_msi_tph_type                     ( cfg_interrupt_msi_tph_type ),
         .cfg_interrupt_msi_tph_st_tag                   ( cfg_interrupt_msi_tph_st_tag ),
         .cfg_interrupt_msi_function_number              ( cfg_interrupt_msi_function_number ),

         //---------------------------------------------------------------------
         //  System(SYS) Interface                                              
         //---------------------------------------------------------------------
         .sys_clk                                        (pcie_refclk),
         .sys_reset                                      (~pcie_reset_n));

    riffa_wrapper_vc709
        #(/*AUTOINSTPARAM*/
          // Parameters
          .C_LOG_NUM_TAGS               (C_LOG_NUM_TAGS),
          .C_NUM_CHNL                   (C_NUM_CHNL),
          .C_PCI_DATA_WIDTH             (C_PCI_DATA_WIDTH),
          .C_MAX_PAYLOAD_BYTES          (C_MAX_PAYLOAD_BYTES))
    riffa
        (// Outputs
         .M_AXIS_CQ_TREADY              (m_axis_cq_tready),
         .M_AXIS_RC_TREADY              (m_axis_rc_tready),
         .S_AXIS_CC_TVALID              (s_axis_cc_tvalid),
         .S_AXIS_CC_TLAST               (s_axis_cc_tlast),
         .S_AXIS_CC_TDATA               (s_axis_cc_tdata[C_PCI_DATA_WIDTH-1:0]),
         .S_AXIS_CC_TKEEP               (s_axis_cc_tkeep[(C_PCI_DATA_WIDTH/32)-1:0]),
         .S_AXIS_CC_TUSER               (s_axis_cc_tuser[`SIG_CC_TUSER_W-1:0]),
         .S_AXIS_RQ_TVALID              (s_axis_rq_tvalid),
         .S_AXIS_RQ_TLAST               (s_axis_rq_tlast),
         .S_AXIS_RQ_TDATA               (s_axis_rq_tdata[C_PCI_DATA_WIDTH-1:0]),
         .S_AXIS_RQ_TKEEP               (s_axis_rq_tkeep[(C_PCI_DATA_WIDTH/32)-1:0]),
         .S_AXIS_RQ_TUSER               (s_axis_rq_tuser[`SIG_RQ_TUSER_W-1:0]),
         .USER_CLK                      (user_clk),
         .USER_RESET                    (user_reset),
         .CFG_INTERRUPT_INT             (cfg_interrupt_int[3:0]),
         .CFG_INTERRUPT_PENDING         (cfg_interrupt_pending[1:0]),
         .CFG_INTERRUPT_MSI_SELECT      (cfg_interrupt_msi_select[3:0]),
         .CFG_INTERRUPT_MSI_INT         (cfg_interrupt_msi_int[31:0]),
         .CFG_INTERRUPT_MSI_PENDING_STATUS(cfg_interrupt_msi_pending_status[63:0]),
         .CFG_INTERRUPT_MSI_ATTR        (cfg_interrupt_msi_attr[2:0]),
         .CFG_INTERRUPT_MSI_TPH_PRESENT (cfg_interrupt_msi_tph_present),
         .CFG_INTERRUPT_MSI_TPH_TYPE    (cfg_interrupt_msi_tph_type[1:0]),
         .CFG_INTERRUPT_MSI_TPH_ST_TAG  (cfg_interrupt_msi_tph_st_tag[8:0]),
         .CFG_INTERRUPT_MSI_FUNCTION_NUMBER(cfg_interrupt_msi_function_number[2:0]),
         .CFG_FC_SEL                    (cfg_fc_sel[2:0]),
         .PCIE_CQ_NP_REQ                (pcie_cq_np_req),
         .RST_OUT                       (rst_out),
         .CHNL_RX                       (chnl_rx[C_NUM_CHNL-1:0]),
         .CHNL_RX_LAST                  (chnl_rx_last[C_NUM_CHNL-1:0]),
         .CHNL_RX_LEN                   (chnl_rx_len[(C_NUM_CHNL*`SIG_CHNL_LENGTH_W)-1:0]),
         .CHNL_RX_OFF                   (chnl_rx_off[(C_NUM_CHNL*`SIG_CHNL_OFFSET_W)-1:0]),
         .CHNL_RX_DATA                  (chnl_rx_data[(C_NUM_CHNL*C_PCI_DATA_WIDTH)-1:0]),
         .CHNL_RX_DATA_VALID            (chnl_rx_data_valid[C_NUM_CHNL-1:0]),
         .CHNL_TX_ACK                   (chnl_tx_ack[C_NUM_CHNL-1:0]),
         .CHNL_TX_DATA_REN              (chnl_tx_data_ren[C_NUM_CHNL-1:0]),
         // Inputs
         .M_AXIS_CQ_TVALID              (m_axis_cq_tvalid),
         .M_AXIS_CQ_TLAST               (m_axis_cq_tlast),
         .M_AXIS_CQ_TDATA               (m_axis_cq_tdata[C_PCI_DATA_WIDTH-1:0]),
         .M_AXIS_CQ_TKEEP               (m_axis_cq_tkeep[(C_PCI_DATA_WIDTH/32)-1:0]),
         .M_AXIS_CQ_TUSER               (m_axis_cq_tuser[`SIG_CQ_TUSER_W-1:0]),
         .M_AXIS_RC_TVALID              (m_axis_rc_tvalid),
         .M_AXIS_RC_TLAST               (m_axis_rc_tlast),
         .M_AXIS_RC_TDATA               (m_axis_rc_tdata[C_PCI_DATA_WIDTH-1:0]),
         .M_AXIS_RC_TKEEP               (m_axis_rc_tkeep[(C_PCI_DATA_WIDTH/32)-1:0]),
         .M_AXIS_RC_TUSER               (m_axis_rc_tuser[`SIG_RC_TUSER_W-1:0]),
         .S_AXIS_CC_TREADY              (s_axis_cc_tready),
         .S_AXIS_RQ_TREADY              (s_axis_rq_tready),
         .CFG_INTERRUPT_MSI_ENABLE      (cfg_interrupt_msi_enable[1:0]),
         .CFG_INTERRUPT_MSI_MASK_UPDATE (cfg_interrupt_msi_mask_update),
         .CFG_INTERRUPT_MSI_DATA        (cfg_interrupt_msi_data[31:0]),
         .CFG_INTERRUPT_MSI_SENT        (cfg_interrupt_msi_sent),
         .CFG_INTERRUPT_MSI_FAIL        (cfg_interrupt_msi_fail),
         .CFG_FC_CPLH                   (cfg_fc_cplh[7:0]),
         .CFG_FC_CPLD                   (cfg_fc_cpld[11:0]),
         .CFG_NEGOTIATED_WIDTH          (cfg_negotiated_width[3:0]),
         .CFG_CURRENT_SPEED             (cfg_current_speed[2:0]),
         .CFG_MAX_PAYLOAD               (cfg_max_payload[2:0]),
         .CFG_MAX_READ_REQ              (cfg_max_read_req[2:0]),
         .CFG_FUNCTION_STATUS           (cfg_function_status[7:0]),
         .CFG_RCB_STATUS                (cfg_rcb_status[1:0]),
         .CHNL_RX_CLK                   (chnl_rx_clk[C_NUM_CHNL-1:0]),
         .CHNL_RX_ACK                   (chnl_rx_ack[C_NUM_CHNL-1:0]),
         .CHNL_RX_DATA_REN              (chnl_rx_data_ren[C_NUM_CHNL-1:0]),
         .CHNL_TX_CLK                   (chnl_tx_clk[C_NUM_CHNL-1:0]),
         .CHNL_TX                       (chnl_tx[C_NUM_CHNL-1:0]),
         .CHNL_TX_LAST                  (chnl_tx_last[C_NUM_CHNL-1:0]),
         .CHNL_TX_LEN                   (chnl_tx_len[(C_NUM_CHNL*`SIG_CHNL_LENGTH_W)-1:0]),
         .CHNL_TX_OFF                   (chnl_tx_off[(C_NUM_CHNL*`SIG_CHNL_OFFSET_W)-1:0]),
         .CHNL_TX_DATA                  (chnl_tx_data[(C_NUM_CHNL*C_PCI_DATA_WIDTH)-1:0]),
         .CHNL_TX_DATA_VALID            (chnl_tx_data_valid[C_NUM_CHNL-1:0]));


//
//RIFFA auto generated code begin

    wire MAIN_CLK;
    wire MAIN_RSTN;
    wire MAIN_RST;


    localparam MAIN_CLK_DIV= 2;

    reg [7:0] main_clk_cnt;
    reg main_clk;
    always @ (posedge user_clk)
    begin
        if (main_clk_cnt == (MAIN_CLK_DIV - 1))
        begin
            main_clk <= 1'b1;
            main_clk_cnt <= 'b0;
        end else if (main_clk_cnt == (MAIN_CLK_DIV / 2 - 1))
        begin
            main_clk <= 1'b0;
            main_clk_cnt <= main_clk_cnt + 1'b1;
        end else
            main_clk_cnt <= main_clk_cnt + 1'b1;
    end

    BUFG mclk_buf (.I(main_clk), .O(MAIN_CLK));
    assign MAIN_RSTN = ! rst_out;
    assign MAIN_RST = rst_out;

    //
    //CHNL 0 : GPIO
    localparam C_GPIO_WIDTH = 1253;
        wire [C_GPIO_WIDTH - 1:0] gpo;
        wire [C_GPIO_WIDTH - 1:0] gpi;

    riffa_gpio #(
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_GPIO_OUT_WIDTH    (C_GPIO_WIDTH),
        .C_GPIO_IN_WIDTH     (C_GPIO_WIDTH))
    gpio (
        .CLK                 (MAIN_CLK),
        .RESETN              (MAIN_RSTN),
        .GPO                 (gpo),
        .GPI                 (gpi),
        .CHNL_RX_CLK         (chnl_rx_clk[0]),
        .CHNL_RX             (chnl_rx[0]),
        .CHNL_RX_ACK         (chnl_rx_ack[0]),
        .CHNL_RX_LAST        (chnl_rx_last[0]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W-1:0]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W-1:0]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH-1:0]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[0]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[0]),
        .CHNL_TX_CLK         (chnl_tx_clk[0]),
        .CHNL_TX             (chnl_tx[0]),
        .CHNL_TX_ACK         (chnl_tx_ack[0]),
        .CHNL_TX_LAST        (chnl_tx_last[0]),
        .CHNL_TX_LEN         (chnl_tx_len[`SIG_CHNL_LENGTH_W-1:0]),
        .CHNL_TX_OFF         (chnl_tx_off[`SIG_CHNL_OFFSET_W-1:0]),
        .CHNL_TX_DATA        (chnl_tx_data[C_PCI_DATA_WIDTH-1:0]),
        .CHNL_TX_DATA_VALID  (chnl_tx_data_valid[0]),
        .CHNL_TX_DATA_REN    (chnl_tx_data_ren[0]));

    //
    //CHNL 1: RIFFA tester
    localparam C_TESTER_CHNL = 1;

    chnl_tester #(
        .C_PCI_DATA_WIDTH  (C_PCI_DATA_WIDTH))
    tester (
        .CLK               (user_clk),
        .RST               (rst_out),
        .CHNL_RX_CLK       (chnl_rx_clk[C_TESTER_CHNL]),
        .CHNL_RX           (chnl_rx[C_TESTER_CHNL]),
        .CHNL_RX_ACK       (chnl_rx_ack[C_TESTER_CHNL]),
        .CHNL_RX_LAST      (chnl_rx_last[C_TESTER_CHNL]),
        .CHNL_RX_LEN       (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_TESTER_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF       (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_TESTER_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA      (chnl_rx_data[C_PCI_DATA_WIDTH*C_TESTER_CHNL +:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID(chnl_rx_data_valid[C_TESTER_CHNL]),
        .CHNL_RX_DATA_REN  (chnl_rx_data_ren[C_TESTER_CHNL]),
        .CHNL_TX_CLK       (chnl_tx_clk[C_TESTER_CHNL]),
        .CHNL_TX           (chnl_tx[C_TESTER_CHNL]),
        .CHNL_TX_ACK       (chnl_tx_ack[C_TESTER_CHNL]),
        .CHNL_TX_LAST      (chnl_tx_last[C_TESTER_CHNL]),
        .CHNL_TX_LEN       (chnl_tx_len[`SIG_CHNL_LENGTH_W*C_TESTER_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_TX_OFF       (chnl_tx_off[`SIG_CHNL_OFFSET_W*C_TESTER_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_TX_DATA      (chnl_tx_data[C_PCI_DATA_WIDTH*C_TESTER_CHNL +:C_PCI_DATA_WIDTH]),
        .CHNL_TX_DATA_VALID(chnl_tx_data_valid[C_TESTER_CHNL]),
        .CHNL_TX_DATA_REN  (chnl_tx_data_ren[C_TESTER_CHNL]));
    
    //
    //RIFFA-BRAM
    
    //
    //RIFFA-AXIS

    //
    //CHNL 2 RX

    wire [31:0] m0_inputImage_tdata;
    wire m0_inputImage_tvalid;
    wire m0_inputImage_tready;
    wire m0_inputImage_tlast;
    wire [31:0] m0_inputImage_start_ticks;
    wire [31:0] m0_inputImage_end_ticks;
    wire [31:0] m0_inputImage_data_bytes;

    localparam C_M0_INPUTIMAGE_CHNL = 2;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am2 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_inputImage_tvalid),
        .M_AXIS_TLAST        (m0_inputImage_tlast),
        .M_AXIS_TREADY       (m0_inputImage_tready),
        .M_AXIS_TDATA        (m0_inputImage_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_INPUTIMAGE_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_INPUTIMAGE_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_INPUTIMAGE_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_INPUTIMAGE_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_INPUTIMAGE_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_INPUTIMAGE_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_INPUTIMAGE_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_INPUTIMAGE_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_INPUTIMAGE_CHNL]),
        .START_TICKS         (m0_inputImage_start_ticks),
        .END_TICKS           (m0_inputImage_end_ticks),
        .DATA_BYTES          (m0_inputImage_data_bytes));

    //
    //CHNL 3 RX

    wire [31:0] m0_Filter1_tdata;
    wire m0_Filter1_tvalid;
    wire m0_Filter1_tready;
    wire m0_Filter1_tlast;
    wire [31:0] m0_Filter1_start_ticks;
    wire [31:0] m0_Filter1_end_ticks;
    wire [31:0] m0_Filter1_data_bytes;

    localparam C_M0_FILTER1_CHNL = 3;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am3 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_Filter1_tvalid),
        .M_AXIS_TLAST        (m0_Filter1_tlast),
        .M_AXIS_TREADY       (m0_Filter1_tready),
        .M_AXIS_TDATA        (m0_Filter1_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_FILTER1_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_FILTER1_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_FILTER1_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_FILTER1_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_FILTER1_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_FILTER1_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_FILTER1_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_FILTER1_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_FILTER1_CHNL]),
        .START_TICKS         (m0_Filter1_start_ticks),
        .END_TICKS           (m0_Filter1_end_ticks),
        .DATA_BYTES          (m0_Filter1_data_bytes));

    //
    //CHNL 4 RX

    wire [31:0] m0_bias1_tdata;
    wire m0_bias1_tvalid;
    wire m0_bias1_tready;
    wire m0_bias1_tlast;
    wire [31:0] m0_bias1_start_ticks;
    wire [31:0] m0_bias1_end_ticks;
    wire [31:0] m0_bias1_data_bytes;

    localparam C_M0_BIAS1_CHNL = 4;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am4 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_bias1_tvalid),
        .M_AXIS_TLAST        (m0_bias1_tlast),
        .M_AXIS_TREADY       (m0_bias1_tready),
        .M_AXIS_TDATA        (m0_bias1_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_BIAS1_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_BIAS1_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_BIAS1_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_BIAS1_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_BIAS1_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_BIAS1_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_BIAS1_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_BIAS1_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_BIAS1_CHNL]),
        .START_TICKS         (m0_bias1_start_ticks),
        .END_TICKS           (m0_bias1_end_ticks),
        .DATA_BYTES          (m0_bias1_data_bytes));

    //
    //CHNL 5 RX

    wire [31:0] m0_Filter2_tdata;
    wire m0_Filter2_tvalid;
    wire m0_Filter2_tready;
    wire m0_Filter2_tlast;
    wire [31:0] m0_Filter2_start_ticks;
    wire [31:0] m0_Filter2_end_ticks;
    wire [31:0] m0_Filter2_data_bytes;

    localparam C_M0_FILTER2_CHNL = 5;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am5 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_Filter2_tvalid),
        .M_AXIS_TLAST        (m0_Filter2_tlast),
        .M_AXIS_TREADY       (m0_Filter2_tready),
        .M_AXIS_TDATA        (m0_Filter2_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_FILTER2_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_FILTER2_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_FILTER2_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_FILTER2_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_FILTER2_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_FILTER2_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_FILTER2_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_FILTER2_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_FILTER2_CHNL]),
        .START_TICKS         (m0_Filter2_start_ticks),
        .END_TICKS           (m0_Filter2_end_ticks),
        .DATA_BYTES          (m0_Filter2_data_bytes));

    //
    //CHNL 6 RX

    wire [31:0] m0_bias2_tdata;
    wire m0_bias2_tvalid;
    wire m0_bias2_tready;
    wire m0_bias2_tlast;
    wire [31:0] m0_bias2_start_ticks;
    wire [31:0] m0_bias2_end_ticks;
    wire [31:0] m0_bias2_data_bytes;

    localparam C_M0_BIAS2_CHNL = 6;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am6 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_bias2_tvalid),
        .M_AXIS_TLAST        (m0_bias2_tlast),
        .M_AXIS_TREADY       (m0_bias2_tready),
        .M_AXIS_TDATA        (m0_bias2_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_BIAS2_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_BIAS2_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_BIAS2_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_BIAS2_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_BIAS2_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_BIAS2_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_BIAS2_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_BIAS2_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_BIAS2_CHNL]),
        .START_TICKS         (m0_bias2_start_ticks),
        .END_TICKS           (m0_bias2_end_ticks),
        .DATA_BYTES          (m0_bias2_data_bytes));

    //
    //CHNL 7 RX

    wire [31:0] m0_Filter3_tdata;
    wire m0_Filter3_tvalid;
    wire m0_Filter3_tready;
    wire m0_Filter3_tlast;
    wire [31:0] m0_Filter3_start_ticks;
    wire [31:0] m0_Filter3_end_ticks;
    wire [31:0] m0_Filter3_data_bytes;

    localparam C_M0_FILTER3_CHNL = 7;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am7 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_Filter3_tvalid),
        .M_AXIS_TLAST        (m0_Filter3_tlast),
        .M_AXIS_TREADY       (m0_Filter3_tready),
        .M_AXIS_TDATA        (m0_Filter3_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_FILTER3_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_FILTER3_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_FILTER3_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_FILTER3_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_FILTER3_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_FILTER3_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_FILTER3_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_FILTER3_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_FILTER3_CHNL]),
        .START_TICKS         (m0_Filter3_start_ticks),
        .END_TICKS           (m0_Filter3_end_ticks),
        .DATA_BYTES          (m0_Filter3_data_bytes));

    //
    //CHNL 8 RX

    wire [31:0] m0_bias3_tdata;
    wire m0_bias3_tvalid;
    wire m0_bias3_tready;
    wire m0_bias3_tlast;
    wire [31:0] m0_bias3_start_ticks;
    wire [31:0] m0_bias3_end_ticks;
    wire [31:0] m0_bias3_data_bytes;

    localparam C_M0_BIAS3_CHNL = 8;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am8 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_bias3_tvalid),
        .M_AXIS_TLAST        (m0_bias3_tlast),
        .M_AXIS_TREADY       (m0_bias3_tready),
        .M_AXIS_TDATA        (m0_bias3_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_BIAS3_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_BIAS3_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_BIAS3_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_BIAS3_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_BIAS3_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_BIAS3_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_BIAS3_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_BIAS3_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_BIAS3_CHNL]),
        .START_TICKS         (m0_bias3_start_ticks),
        .END_TICKS           (m0_bias3_end_ticks),
        .DATA_BYTES          (m0_bias3_data_bytes));

    //
    //CHNL 9 RX

    wire [31:0] m0_fcWeight_tdata;
    wire m0_fcWeight_tvalid;
    wire m0_fcWeight_tready;
    wire m0_fcWeight_tlast;
    wire [31:0] m0_fcWeight_start_ticks;
    wire [31:0] m0_fcWeight_end_ticks;
    wire [31:0] m0_fcWeight_data_bytes;

    localparam C_M0_FCWEIGHT_CHNL = 9;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am9 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_fcWeight_tvalid),
        .M_AXIS_TLAST        (m0_fcWeight_tlast),
        .M_AXIS_TREADY       (m0_fcWeight_tready),
        .M_AXIS_TDATA        (m0_fcWeight_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_FCWEIGHT_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_FCWEIGHT_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_FCWEIGHT_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_FCWEIGHT_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_FCWEIGHT_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_FCWEIGHT_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_FCWEIGHT_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_FCWEIGHT_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_FCWEIGHT_CHNL]),
        .START_TICKS         (m0_fcWeight_start_ticks),
        .END_TICKS           (m0_fcWeight_end_ticks),
        .DATA_BYTES          (m0_fcWeight_data_bytes));

    //
    //CHNL 10 RX

    wire [31:0] m0_fcBias_tdata;
    wire m0_fcBias_tvalid;
    wire m0_fcBias_tready;
    wire m0_fcBias_tlast;
    wire [31:0] m0_fcBias_start_ticks;
    wire [31:0] m0_fcBias_end_ticks;
    wire [31:0] m0_fcBias_data_bytes;

    localparam C_M0_FCBIAS_CHNL = 10;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am10 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_fcBias_tvalid),
        .M_AXIS_TLAST        (m0_fcBias_tlast),
        .M_AXIS_TREADY       (m0_fcBias_tready),
        .M_AXIS_TDATA        (m0_fcBias_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_FCBIAS_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_FCBIAS_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_FCBIAS_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_FCBIAS_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_FCBIAS_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_FCBIAS_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_FCBIAS_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_FCBIAS_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_FCBIAS_CHNL]),
        .START_TICKS         (m0_fcBias_start_ticks),
        .END_TICKS           (m0_fcBias_end_ticks),
        .DATA_BYTES          (m0_fcBias_data_bytes));

    //
    //CHNL 11 RX

    wire [31:0] m0_smWeight_tdata;
    wire m0_smWeight_tvalid;
    wire m0_smWeight_tready;
    wire m0_smWeight_tlast;
    wire [31:0] m0_smWeight_start_ticks;
    wire [31:0] m0_smWeight_end_ticks;
    wire [31:0] m0_smWeight_data_bytes;

    localparam C_M0_SMWEIGHT_CHNL = 11;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am11 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_smWeight_tvalid),
        .M_AXIS_TLAST        (m0_smWeight_tlast),
        .M_AXIS_TREADY       (m0_smWeight_tready),
        .M_AXIS_TDATA        (m0_smWeight_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_SMWEIGHT_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_SMWEIGHT_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_SMWEIGHT_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_SMWEIGHT_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_SMWEIGHT_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_SMWEIGHT_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_SMWEIGHT_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_SMWEIGHT_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_SMWEIGHT_CHNL]),
        .START_TICKS         (m0_smWeight_start_ticks),
        .END_TICKS           (m0_smWeight_end_ticks),
        .DATA_BYTES          (m0_smWeight_data_bytes));

    //
    //CHNL 12 RX

    wire [31:0] m0_smBias_tdata;
    wire m0_smBias_tvalid;
    wire m0_smBias_tready;
    wire m0_smBias_tlast;
    wire [31:0] m0_smBias_start_ticks;
    wire [31:0] m0_smBias_end_ticks;
    wire [31:0] m0_smBias_data_bytes;

    localparam C_M0_SMBIAS_CHNL = 12;
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH   (32),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    am12 (
        .M_AXIS_RSTN         (MAIN_RSTN),
        .M_AXIS_CLK          (MAIN_CLK),
        .M_AXIS_TVALID       (m0_smBias_tvalid),
        .M_AXIS_TLAST        (m0_smBias_tlast),
        .M_AXIS_TREADY       (m0_smBias_tready),
        .M_AXIS_TDATA        (m0_smBias_tdata),
        .CHNL_RX_CLK         (chnl_rx_clk[C_M0_SMBIAS_CHNL]),
        .CHNL_RX             (chnl_rx[C_M0_SMBIAS_CHNL]),
        .CHNL_RX_ACK         (chnl_rx_ack[C_M0_SMBIAS_CHNL]),
        .CHNL_RX_LAST        (chnl_rx_last[C_M0_SMBIAS_CHNL]),
        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_M0_SMBIAS_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_M0_SMBIAS_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*C_M0_SMBIAS_CHNL+:C_PCI_DATA_WIDTH]),
        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[C_M0_SMBIAS_CHNL]),
        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[C_M0_SMBIAS_CHNL]),
        .START_TICKS         (m0_smBias_start_ticks),
        .END_TICKS           (m0_smBias_end_ticks),
        .DATA_BYTES          (m0_smBias_data_bytes));

    //
    //CHNL 2 TX

    wire [31:0] m0_outDigit_tdata;
    wire m0_outDigit_tvalid;
    wire m0_outDigit_tready;
    wire m0_outDigit_tlast;
    wire [31:0] m0_outDigit_start_ticks;
    wire [31:0] m0_outDigit_end_ticks;
    wire [31:0] m0_outDigit_data_bytes;
    wire [31:0] m0_outDigit_len;

    localparam C_M0_OUTDIGIT_CHNL=2;

    riffa_axis_s #(
        .C_AXIS_DATA_WIDTH(32) ,
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),
        .C_COUNTER           (1),
        .C_COUNTER_WIDTH     (32),
        .C_COUNTER_DIV       (0))
    as2 (
        .S_AXIS_RSTN         (MAIN_RSTN),
        .S_AXIS_CLK          (MAIN_CLK),
        .S_AXIS_TVALID       (m0_outDigit_tvalid),
        .S_AXIS_TLAST        (m0_outDigit_tlast),
        .S_AXIS_TREADY       (m0_outDigit_tready),
        .S_AXIS_TDATA        (m0_outDigit_tdata),
        .S_AXIS_LEN          (m0_outDigit_len),
        .CHNL_TX_CLK         (chnl_tx_clk[C_M0_OUTDIGIT_CHNL]),
        .CHNL_TX             (chnl_tx[C_M0_OUTDIGIT_CHNL]),
        .CHNL_TX_ACK         (chnl_tx_ack[C_M0_OUTDIGIT_CHNL]),
        .CHNL_TX_LAST        (chnl_tx_last[C_M0_OUTDIGIT_CHNL]),
        .CHNL_TX_LEN         (chnl_tx_len[`SIG_CHNL_LENGTH_W*C_M0_OUTDIGIT_CHNL +:`SIG_CHNL_LENGTH_W]),
        .CHNL_TX_OFF         (chnl_tx_off[`SIG_CHNL_OFFSET_W*C_M0_OUTDIGIT_CHNL +:`SIG_CHNL_OFFSET_W]),
        .CHNL_TX_DATA        (chnl_tx_data[C_PCI_DATA_WIDTH*C_M0_OUTDIGIT_CHNL +:C_PCI_DATA_WIDTH]),
        .CHNL_TX_DATA_VALID  (chnl_tx_data_valid[C_M0_OUTDIGIT_CHNL]),
        .CHNL_TX_DATA_REN    (chnl_tx_data_ren[C_M0_OUTDIGIT_CHNL]),
        .START_TICKS         (m0_outDigit_start_ticks),
        .END_TICKS           (m0_outDigit_end_ticks),
        .DATA_BYTES          (m0_outDigit_data_bytes));
    
    //
    //Unused TX CHNLs
    assign chnl_tx_clk[3] = MAIN_CLK;
    assign chnl_tx[3] = 1'b0;
    assign chnl_tx_last[3] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*3+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*3+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*3+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[3] = 1'b0;
    assign chnl_tx_clk[4] = MAIN_CLK;
    assign chnl_tx[4] = 1'b0;
    assign chnl_tx_last[4] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*4+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*4+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*4+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[4] = 1'b0;
    assign chnl_tx_clk[5] = MAIN_CLK;
    assign chnl_tx[5] = 1'b0;
    assign chnl_tx_last[5] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*5+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*5+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*5+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[5] = 1'b0;
    assign chnl_tx_clk[6] = MAIN_CLK;
    assign chnl_tx[6] = 1'b0;
    assign chnl_tx_last[6] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*6+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*6+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*6+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[6] = 1'b0;
    assign chnl_tx_clk[7] = MAIN_CLK;
    assign chnl_tx[7] = 1'b0;
    assign chnl_tx_last[7] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*7+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*7+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*7+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[7] = 1'b0;
    assign chnl_tx_clk[8] = MAIN_CLK;
    assign chnl_tx[8] = 1'b0;
    assign chnl_tx_last[8] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*8+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*8+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*8+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[8] = 1'b0;
    assign chnl_tx_clk[9] = MAIN_CLK;
    assign chnl_tx[9] = 1'b0;
    assign chnl_tx_last[9] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*9+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*9+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*9+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[9] = 1'b0;
    assign chnl_tx_clk[10] = MAIN_CLK;
    assign chnl_tx[10] = 1'b0;
    assign chnl_tx_last[10] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*10+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*10+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*10+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[10] = 1'b0;
    assign chnl_tx_clk[11] = MAIN_CLK;
    assign chnl_tx[11] = 1'b0;
    assign chnl_tx_last[11] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*11+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*11+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*11+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[11] = 1'b0;
    assign chnl_tx_clk[12] = MAIN_CLK;
    assign chnl_tx[12] = 1'b0;
    assign chnl_tx_last[12] = 1'b0;
    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*12+:`SIG_CHNL_LENGTH_W] = 'b0;
    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*12+:`SIG_CHNL_OFFSET_W] = 'b0;
    assign chnl_tx_data[C_PCI_DATA_WIDTH*12+:C_PCI_DATA_WIDTH] = 'b0;
    assign chnl_tx_data_valid[12] = 1'b0;
    
    //
    //BlockRAMs
    
    //
    //Clock, Reset and Scalar signals
    wire m0_ap_clk;
    wire m0_ap_rst_n;
    wire m0_ap_done;
    wire m0_ap_start;
    wire m0_ap_idle;
    wire m0_ap_ready;
    wire [31:0] m0_start_ticks;
    wire [31:0] m0_done_ticks;
    
    //
    //GPIO connections
    assign gpi[0+:32] = m0_inputImage_start_ticks;
    assign gpi[32+:32] = m0_inputImage_end_ticks;
    assign gpi[64+:32] = m0_inputImage_data_bytes;
    assign gpi[96+:32] = m0_Filter1_start_ticks;
    assign gpi[128+:32] = m0_Filter1_end_ticks;
    assign gpi[160+:32] = m0_Filter1_data_bytes;
    assign gpi[192+:32] = m0_bias1_start_ticks;
    assign gpi[224+:32] = m0_bias1_end_ticks;
    assign gpi[256+:32] = m0_bias1_data_bytes;
    assign gpi[288+:32] = m0_Filter2_start_ticks;
    assign gpi[320+:32] = m0_Filter2_end_ticks;
    assign gpi[352+:32] = m0_Filter2_data_bytes;
    assign gpi[384+:32] = m0_bias2_start_ticks;
    assign gpi[416+:32] = m0_bias2_end_ticks;
    assign gpi[448+:32] = m0_bias2_data_bytes;
    assign gpi[480+:32] = m0_Filter3_start_ticks;
    assign gpi[512+:32] = m0_Filter3_end_ticks;
    assign gpi[544+:32] = m0_Filter3_data_bytes;
    assign gpi[576+:32] = m0_bias3_start_ticks;
    assign gpi[608+:32] = m0_bias3_end_ticks;
    assign gpi[640+:32] = m0_bias3_data_bytes;
    assign gpi[672+:32] = m0_fcWeight_start_ticks;
    assign gpi[704+:32] = m0_fcWeight_end_ticks;
    assign gpi[736+:32] = m0_fcWeight_data_bytes;
    assign gpi[768+:32] = m0_fcBias_start_ticks;
    assign gpi[800+:32] = m0_fcBias_end_ticks;
    assign gpi[832+:32] = m0_fcBias_data_bytes;
    assign gpi[864+:32] = m0_smWeight_start_ticks;
    assign gpi[896+:32] = m0_smWeight_end_ticks;
    assign gpi[928+:32] = m0_smWeight_data_bytes;
    assign gpi[960+:32] = m0_smBias_start_ticks;
    assign gpi[992+:32] = m0_smBias_end_ticks;
    assign gpi[1024+:32] = m0_smBias_data_bytes;
    assign m0_outDigit_len = (gpo[1087:1056])? gpo[1087:1056] : 1;
    assign gpi[1087:1056] = gpo[1087:1056];
    assign gpi[1088+:32] = m0_outDigit_start_ticks;
    assign gpi[1120+:32] = m0_outDigit_end_ticks;
    assign gpi[1152+:32] = m0_outDigit_data_bytes;
    assign m0_ap_clk = MAIN_CLK;
    assign m0_ap_rst_n = MAIN_RSTN & ~gpo[1184];
    assign gpi[1184] = gpo[1184];

    reg m0_ap_done_holder;

    always @ (posedge MAIN_CLK or posedge MAIN_RST)
    begin
        if (MAIN_RST)
            m0_ap_done_holder <= 1'b0;
        else begin
            if (! m0_ap_start)
                m0_ap_done_holder <= 1'b0;
            else if (m0_ap_done)
                m0_ap_done_holder <= 1'b1;
        end
    end

    assign gpi[1185] = m0_ap_done_holder;
    assign m0_ap_start = gpo[1186];
    assign gpi[1186] = gpo[1186];
    assign gpi[1187] = m0_ap_idle;
    assign gpi[1188] = m0_ap_ready;
    assign gpi[1189+:32] = m0_start_ticks;
    assign gpi[1221+:32] = m0_done_ticks;

    pfm_counter #(
        .CHANNEL_NUM(2),
        .WIDTH(32),
        .DIV(0))
    pfm_counters (
        .rst (MAIN_RST),
        .clk (MAIN_CLK),
        .trig ({m0_ap_start, m0_ap_done}),
        .mark ({m0_start_ticks, m0_done_ticks}));

    inference m0_inference(
        .inputImage_TDATA    (m0_inputImage_tdata),
        .inputImage_TVALID   (m0_inputImage_tvalid),
        .inputImage_TREADY   (m0_inputImage_tready),
        .Filter1_TDATA       (m0_Filter1_tdata),
        .Filter1_TVALID      (m0_Filter1_tvalid),
        .Filter1_TREADY      (m0_Filter1_tready),
        .bias1_TDATA         (m0_bias1_tdata),
        .bias1_TVALID        (m0_bias1_tvalid),
        .bias1_TREADY        (m0_bias1_tready),
        .Filter2_TDATA       (m0_Filter2_tdata),
        .Filter2_TVALID      (m0_Filter2_tvalid),
        .Filter2_TREADY      (m0_Filter2_tready),
        .bias2_TDATA         (m0_bias2_tdata),
        .bias2_TVALID        (m0_bias2_tvalid),
        .bias2_TREADY        (m0_bias2_tready),
        .Filter3_TDATA       (m0_Filter3_tdata),
        .Filter3_TVALID      (m0_Filter3_tvalid),
        .Filter3_TREADY      (m0_Filter3_tready),
        .bias3_TDATA         (m0_bias3_tdata),
        .bias3_TVALID        (m0_bias3_tvalid),
        .bias3_TREADY        (m0_bias3_tready),
        .fcWeight_TDATA      (m0_fcWeight_tdata),
        .fcWeight_TVALID     (m0_fcWeight_tvalid),
        .fcWeight_TREADY     (m0_fcWeight_tready),
        .fcBias_TDATA        (m0_fcBias_tdata),
        .fcBias_TVALID       (m0_fcBias_tvalid),
        .fcBias_TREADY       (m0_fcBias_tready),
        .smWeight_TDATA      (m0_smWeight_tdata),
        .smWeight_TVALID     (m0_smWeight_tvalid),
        .smWeight_TREADY     (m0_smWeight_tready),
        .smBias_TDATA        (m0_smBias_tdata),
        .smBias_TVALID       (m0_smBias_tvalid),
        .smBias_TREADY       (m0_smBias_tready),
        .outDigit_TDATA      (m0_outDigit_tdata),
        .outDigit_TVALID     (m0_outDigit_tvalid),
        .outDigit_TREADY     (m0_outDigit_tready),
        .ap_clk              (m0_ap_clk),
        .ap_rst_n            (m0_ap_rst_n),
        .ap_done             (m0_ap_done),
        .ap_start            (m0_ap_start),
        .ap_idle             (m0_ap_idle),
        .ap_ready            (m0_ap_ready));

    assign m0_outDigit_tlast = 1'b0;

//RIFFA auto generated code end
endmodule
// Local Variables:
// verilog-library-directories:("." "../../../engine/" "ultrascale/rx/" "ultrascale/tx/" "classic/rx/" "classic/tx/" "../../../riffa/")
// End:

