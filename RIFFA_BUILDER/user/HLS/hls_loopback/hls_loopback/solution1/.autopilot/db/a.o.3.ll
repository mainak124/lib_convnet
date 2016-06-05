; ModuleID = 'C:/Users/Vikasini/Desktop/EmbeddedImageProccessing/RIFFA_BUILDER/user/HLS/hls_loopback/hls_loopback/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@Loopback_str = internal unnamed_addr constant [9 x i8] c"Loopback\00" ; [#uses=1 type=[9 x i8]*]
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=17 type=[1 x i8]*]
@p_str = private unnamed_addr constant [5 x i8] c"axis\00", align 1 ; [#uses=4 type=[5 x i8]*]

; [#uses=3]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_Write.axis.volatile.i32P(i32*, i32) {
entry:
  store i32 %1, i32* %0
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=4]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecDataflowPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=2]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_Read.axis.volatile.i32P(i32*) {
entry:
  %empty = load i32* %0                           ; [#uses=1 type=i32]
  ret i32 %empty
}

; [#uses=0]
declare i16 @_ssdm_op_HSub(...)

; [#uses=0]
declare i16 @_ssdm_op_HMul(...)

; [#uses=0]
declare i16 @_ssdm_op_HDiv(...)

; [#uses=0]
declare i16 @_ssdm_op_HAdd(...)

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind

; [#uses=0]
define void @Loopback(i32* %IN, i32* %OUT) nounwind uwtable {
codeRepl:
  call void (...)* @_ssdm_op_SpecDataflowPipeline(i32 -1, [1 x i8]* @p_str1) nounwind, !dbg !7 ; [debug line = 6:1]
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %IN) nounwind, !map !18
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %OUT) nounwind, !map !24
  call void (...)* @_ssdm_op_SpecTopModule([9 x i8]* @Loopback_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32* %IN, [5 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i32* %OUT, [5 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void @llvm.dbg.value(metadata !{i32* %IN}, i64 0, metadata !28), !dbg !32 ; [debug line = 2:21] [debug variable = IN]
  call void @llvm.dbg.value(metadata !{i32* %OUT}, i64 0, metadata !33), !dbg !34 ; [debug line = 2:37] [debug variable = OUT]
  call fastcc void @Loopback_Loop_1_proc(i32* %IN, i32* %OUT)
  ret void, !dbg !35                              ; [debug line = 14:1]
}

; [#uses=1]
define internal fastcc void @Loopback_Loop_1_proc(i32* %IN, i32* %OUT) nounwind {
newFuncRoot:
  call void (...)* @_ssdm_op_SpecInterface(i32* %OUT, [5 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecInterface(i32* %IN, [5 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  br label %0

Loopback_.exit2.exitStub:                         ; preds = %0
  ret void

; <label>:0                                       ; preds = %1, %newFuncRoot
  %i_0_i_i = phi i17 [ 0, %newFuncRoot ], [ %i, %1 ] ; [#uses=2 type=i17]
  %exitcond_i_i = icmp eq i17 %i_0_i_i, -65536, !dbg !36 ; [#uses=1 type=i1] [debug line = 8:12]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 65536, i64 65536, i64 65536) nounwind ; [#uses=0 type=i32]
  %i = add i17 %i_0_i_i, 1, !dbg !38              ; [#uses=1 type=i17] [debug line = 8:21]
  br i1 %exitcond_i_i, label %Loopback_.exit2.exitStub, label %1, !dbg !36 ; [debug line = 8:12]

; <label>:1                                       ; preds = %0
  %IN_read = call i32 @_ssdm_op_Read.axis.volatile.i32P(i32* %IN) nounwind, !dbg !39 ; [#uses=1 type=i32] [debug line = 10:1]
  call void @_ssdm_op_Write.axis.volatile.i32P(i32* %OUT, i32 %IN_read) nounwind, !dbg !39 ; [debug line = 10:1]
  call void @llvm.dbg.value(metadata !{i17 %i}, i64 0, metadata !41) nounwind, !dbg !38 ; [debug line = 8:21] [debug variable = i]
  br label %0, !dbg !38                           ; [debug line = 8:21]
}

!hls.encrypted.func = !{}
!llvm.map.gv = !{!0}

!0 = metadata !{metadata !1, [1 x i32]* @llvm_global_ctors_0}
!1 = metadata !{metadata !2}
!2 = metadata !{i32 0, i32 31, metadata !3}
!3 = metadata !{metadata !4}
!4 = metadata !{metadata !"llvm.global_ctors.0", metadata !5, metadata !"", i32 0, i32 31}
!5 = metadata !{metadata !6}
!6 = metadata !{i32 0, i32 0, i32 1}
!7 = metadata !{i32 6, i32 1, metadata !8, null}
!8 = metadata !{i32 786443, metadata !9, i32 2, i32 47, metadata !10, i32 0} ; [ DW_TAG_lexical_block ]
!9 = metadata !{i32 786478, i32 0, metadata !10, metadata !"Loopback", metadata !"Loopback", metadata !"_Z8LoopbackPiS_", metadata !10, i32 2, metadata !11, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !16, i32 2} ; [ DW_TAG_subprogram ]
!10 = metadata !{i32 786473, metadata !"hls_loopback/Loopback.cpp", metadata !"c:/Users/Vikasini/Desktop/EmbeddedImageProccessing/RIFFA_BUILDER/user/HLS/hls_loopback", null} ; [ DW_TAG_file_type ]
!11 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !12, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!12 = metadata !{null, metadata !13, metadata !13}
!13 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !14} ; [ DW_TAG_pointer_type ]
!14 = metadata !{i32 786454, null, metadata !"DTYPE", metadata !10, i32 7, i64 0, i64 0, i64 0, i32 0, metadata !15} ; [ DW_TAG_typedef ]
!15 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!16 = metadata !{metadata !17}
!17 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!18 = metadata !{metadata !19}
!19 = metadata !{i32 0, i32 31, metadata !20}
!20 = metadata !{metadata !21}
!21 = metadata !{metadata !"IN", metadata !22, metadata !"int", i32 0, i32 31}
!22 = metadata !{metadata !23}
!23 = metadata !{i32 0, i32 65535, i32 1}
!24 = metadata !{metadata !25}
!25 = metadata !{i32 0, i32 31, metadata !26}
!26 = metadata !{metadata !27}
!27 = metadata !{metadata !"OUT", metadata !22, metadata !"int", i32 0, i32 31}
!28 = metadata !{i32 786689, metadata !9, metadata !"IN", null, i32 2, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!29 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 0, i64 0, i32 0, i32 0, metadata !14, metadata !30, i32 0, i32 0} ; [ DW_TAG_array_type ]
!30 = metadata !{metadata !31}
!31 = metadata !{i32 786465, i64 0, i64 65535}    ; [ DW_TAG_subrange_type ]
!32 = metadata !{i32 2, i32 21, metadata !9, null}
!33 = metadata !{i32 786689, metadata !9, metadata !"OUT", null, i32 2, metadata !29, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!34 = metadata !{i32 2, i32 37, metadata !9, null}
!35 = metadata !{i32 14, i32 1, metadata !8, null}
!36 = metadata !{i32 8, i32 12, metadata !37, null}
!37 = metadata !{i32 786443, metadata !8, i32 8, i32 1, metadata !10, i32 1} ; [ DW_TAG_lexical_block ]
!38 = metadata !{i32 8, i32 21, metadata !37, null}
!39 = metadata !{i32 10, i32 1, metadata !40, null}
!40 = metadata !{i32 786443, metadata !37, i32 8, i32 26, metadata !10, i32 2} ; [ DW_TAG_lexical_block ]
!41 = metadata !{i32 786688, metadata !37, metadata !"i", metadata !10, i32 8, metadata !15, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
