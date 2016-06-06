set C_TypeInfoList {{ 
"Loopback" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"IN": [[], {"array": ["0", [65536]]}] }, {"OUT": [[], {"array": ["0", [65536]]}] }],[],""], 
"0": [ "DTYPE", {"typedef": [[[], {"scalar": "int"}],""]}]
}}
set moduleName Loopback
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName {Loopback}
set C_modelType { void 0 }
set C_modelArgList { 
	{ IN_r int 32 regular {axi_s 0 volatile  { IN_r data } }  }
	{ OUT_r int 32 regular {axi_s 1 volatile  { OUT_r data } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "IN_r", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "IN","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 65535,"step" : 1}]}]}]} , 
 	{ "Name" : "OUT_r", "interface" : "axis", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "OUT","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 65535,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ IN_r_TDATA sc_in sc_lv 32 signal 0 } 
	{ OUT_r_TDATA sc_out sc_lv 32 signal 1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ IN_r_TVALID sc_in sc_logic 1 invld 0 } 
	{ IN_r_TREADY sc_out sc_logic 1 inacc 0 } 
	{ OUT_r_TVALID sc_out sc_logic 1 outvld 1 } 
	{ OUT_r_TREADY sc_in sc_logic 1 outacc 1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
}
set NewPortList {[ 
	{ "name": "IN_r_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "IN_r", "role": "TDATA" }} , 
 	{ "name": "OUT_r_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUT_r", "role": "TDATA" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "IN_r_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "IN_r", "role": "TVALID" }} , 
 	{ "name": "IN_r_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "IN_r", "role": "TREADY" }} , 
 	{ "name": "OUT_r_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "OUT_r", "role": "TVALID" }} , 
 	{ "name": "OUT_r_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "OUT_r", "role": "TREADY" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }}  ]}
set Spec2ImplPortList { 
	IN_r { axis {  { IN_r_TDATA in_data 0 32 }  { IN_r_TVALID in_vld 0 1 }  { IN_r_TREADY in_acc 1 1 } } }
	OUT_r { axis {  { OUT_r_TDATA out_data 1 32 }  { OUT_r_TVALID out_vld 1 1 }  { OUT_r_TREADY out_acc 0 1 } } }
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
