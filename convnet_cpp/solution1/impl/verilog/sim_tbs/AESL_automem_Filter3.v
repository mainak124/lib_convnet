// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

`timescale 1 ns / 1 ps

module AESL_automem_Filter3 (
    clk,
    rst,
    ce0,
    we0,
    address0,
    din0,
    dout0,
    ce1,
    we1,
    address1,
    din1,
    dout1,
    ready,
    done
);

//------------------------Parameter----------------------
localparam
    TV_IN  = "c.inference.autotvin_Filter3.dat", 
    TV_OUT = "impl_rtl.inference.autotvout_Filter3.dat"; 
//------------------------Local signal-------------------
parameter DATA_WIDTH = 32'd 32;
parameter ADDR_WIDTH = 32'd 16;
parameter DEPTH = 32'd 48000;

// Input and Output
input clk;
input rst;
input ce0, ce1;
input we0, we1;
input [ADDR_WIDTH - 1 : 0] address0, address1;
input [DATA_WIDTH - 1 : 0] din0, din1;
output reg [DATA_WIDTH - 1 : 0] dout0, dout1;
input ready;
input done;

// Inner signals
reg [DATA_WIDTH - 1 : 0] mem [0 : DEPTH - 1];
initial begin : initialize_mem
  integer i;
  for (i = 0; i < DEPTH; i = i + 1) begin
      mem[i] = 0;
  end
end
reg writed_flag;
//------------------------Task and function--------------
task read_token;
	input integer fp;
	output reg [127 :0] token;
	reg [7:0] c;
	reg intoken;
	reg done;
	begin
	    token = "";
	    intoken = 0;
	    done = 0;
	    while (!done) begin
		c = $fgetc(fp);
		if (c == 8'hff) begin	// EOF
		    done = 1;
		end
		else if (c == " " || c == "\011" || c == "\012" || c == "\015") begin   // blank
		    if (intoken) begin
			done = 1;
		    end
		end
		else begin			// valid character
		    intoken = 1;
		    token = (token << 8) | c;
		end
	    end
	end
endtask

//------------------------Read array-------------------

// Read data form file to array
initial begin : read_file_process
  integer fp;
  integer err;
  integer ret;
  reg [127 : 0] token;
  reg [ 8*5 : 1] str;
  reg [ DATA_WIDTH - 1 : 0 ] mem_tmp;
  integer transaction_idx;
  integer i;
  transaction_idx = 0;

  wait(rst === 0);
  fp = $fopen(TV_IN,"r");
  if(fp == 0) begin       // Failed to open file
	    $display("Failed to open file \"%s\"!", TV_IN);
	    $finish;
  end
  read_token(fp, token);
  if (token != "[[[runtime]]]") begin             // Illegal format
      $display("ERROR: Simulation using HLS TB failed.");
	    $finish;
  end
  read_token(fp, token);
  while (token != "[[[/runtime]]]") begin
	    if (token != "[[transaction]]") begin
          $display("ERROR: Simulation using HLS TB failed.");
		    $finish;
	    end
	    read_token(fp, token);              // skip transaction number
      # 0.2;
	    while(ready !== 1) begin
	        @(posedge clk);
          # 0.2;
      end
	    for(i = 0; i < DEPTH; i = i + 1) begin
		    read_token(fp, token);
		    ret = $sscanf(token, "0x%x", mem_tmp);
		    mem[i] = mem_tmp;
		    if (ret != 1) begin
		        $display("Failed to parse token!");
		        $finish;
		    end
	    end
      @(posedge clk);
	    read_token(fp, token);
	    if(token != "[[/transaction]]") begin
          $display("ERROR: Simulation using HLS TB failed.");
		    $finish;
	    end
	    read_token(fp, token);
      transaction_idx = transaction_idx + 1;
  end
  $fclose(fp);
end

// Read data from array to RTL
always @ (posedge clk or rst) begin
  if(rst === 1) begin
	    dout0 = 0;
	    dout1 = 0;
  end
  else begin
	    if(ce0)
		    dout0 <= mem[address0];
	    if(ce1)
		    dout1 <= mem[address1];
	end
end

//------------------------Write array-------------------

// Write data from RTL to array
always @ (posedge clk) begin
	if(ce0 & we0)
	    mem[address0] = din0;
	if(ce1 & we1)
	    mem[address1] = din1;
end

// Write data from array to file
initial begin : write_file_proc
	integer fp;
	integer transaction_num;
  reg [ 8*5 : 1] str;
	integer i;
	transaction_num = 0;
  writed_flag = 1;
  wait(rst === 0);
	while(1) begin
      @(posedge clk);
      # 0.1;
	    while(done !== 1) begin
	        @(posedge clk);
          # 0.1;
      end
	    fp = $fopen(TV_OUT, "a");
	    if(fp == 0) begin       // Failed to open file
		    $display("Failed to open file \"%s\"!", TV_OUT);
		    $finish;
	    end
	    $fdisplay(fp, "[[transaction]] %d", transaction_num);
	    for (i = 0; i < DEPTH; i = i + 1) begin
		    $fdisplay(fp,"0x%x",mem[i]);
	    end
	    $fdisplay(fp, "[[/transaction]]");
	    transaction_num = transaction_num + 1;
	    $fclose(fp);
      writed_flag = 1;
	end
end

endmodule
