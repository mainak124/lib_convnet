typedef float DTYPE_T;

#define IN_H 28
#define IN_W 28
#define IN_C 1

#define F1_H 5
#define F1_W 5
#define F1_C 1
#define F1_N 6
#define F1_S 1
#define F1_Z 2
#define F1_G 1
#define O1_H (((IN_H-F1_H+(2*F1_Z))/F1_S)+1)
#define O1_W (((IN_W-F1_W+(2*F1_Z))/F1_S)+1)
#define O1_C F1_N
#define L1_K 1
#define L1_N 5
#define L1_A 0.0001
#define L1_B 0.75
#define P1_F 2
#define P1_S 2
#define P1_H ((O1_H-P1_F)/P1_S)+1
#define P1_W ((O1_W-P1_F)/P1_S)+1
#define P1_C O1_C

#define F2_H 5
#define F2_W 5
#define F2_C P1_C
#define F2_N 16
#define F2_S 1
#define F2_Z 0
#define F2_G 2
#define O2_H (((P1_H-F2_H+(2*F2_Z))/F2_S)+1)
#define O2_W (((P1_W-F2_W+(2*F2_Z))/F2_S)+1)
#define O2_C F2_N
#define L2_K 1
#define L2_N 5
#define L2_A 0.0001
#define L2_B 0.75
#define P2_F 2
#define P2_S 2
#define P2_H ((O2_H-P2_F)/P2_S)+1
#define P2_W ((O2_W-P2_F)/P2_S)+1
#define P2_C O2_C

#define F3_H 5
#define F3_W 5
#define F3_C P2_C
#define F3_N 120
#define F3_S 1
#define F3_Z 0
#define F3_G 1
#define O3_H (((P2_H-F3_H+(2*F3_Z))/F3_S)+1)
#define O3_W (((P2_W-F3_W+(2*F3_Z))/F3_S)+1)
#define O3_C F3_N
#define L3_K 1
#define L3_N 5
#define L3_A 0.0001
#define L3_B 0.75
#define P3_F 1
#define P3_S 1
#define P3_H ((O3_H-P3_F)/P3_S)+1
#define P3_W ((O3_W-P3_F)/P3_S)+1
#define P3_C O3_C

#define FC_IN_H 1
#define FC_IN_W 120
#define FC_WT_H 120
#define FC_WT_W 84
#define FC_B_H  1
#define FC_B_W  84
#define FC_OUT_H 1
#define FC_OUT_W 84

#define SM_IN_H 1
#define SM_IN_W 84
#define SM_WT_H 84
#define SM_WT_W 10
#define SM_B_H  1
#define SM_B_W  10
#define SM_OUT_H 1
#define SM_OUT_W 10

// #define F4_H 3
// #define F4_W 3
// #define F4_C P3_C
// #define F4_N 384
// #define F4_S 1
// #define F4_Z 1
// #define F4_G 2
// #define O4_H (((P3_H-F4_H+(2*F4_Z))/F4_S)+1)
// #define O4_W (((P3_W-F4_W+(2*F4_Z))/F4_S)+1)
// #define O4_C F4_N
// #define L4_K 1
// #define L4_N 5
// #define L4_A 0.0001
// #define L4_B 0.75
// #define P4_F 1
// #define P4_S 1
// #define P4_H ((O4_H-P4_F)/P4_S)+1
// #define P4_W ((O4_W-P4_F)/P4_S)+1
// #define P4_C O4_C

// #define F5_H 3
// #define F5_W 3
// #define F5_C P4_C
// #define F5_N 256
// #define F5_S 1
// #define F5_Z 1
// #define F5_G 2
// #define O5_H (((P4_H-F5_H+(2*F5_Z))/F5_S)+1)
// #define O5_W (((P4_W-F5_W+(2*F5_Z))/F5_S)+1)
// #define O5_C F5_N
// #define L5_K 1
// #define L5_N 5
// #define L5_A 0.0001
// #define L5_B 0.75
// #define P5_F 3
// #define P5_S 2
// #define P5_H ((O5_H-P5_F)/P5_S)+1
// #define P5_W ((O5_W-P5_F)/P5_S)+1
// #define P5_C O5_C

void inference(
		const DTYPE_T inputImage[IN_H][IN_W][IN_C],
		const DTYPE_T Filter1[F1_H][F1_W][F1_C][F1_N],
		const DTYPE_T bias1[O1_C],
		const DTYPE_T Filter2[F2_H][F2_W][F2_C][F2_N],
		const DTYPE_T bias2[O2_C],
		const DTYPE_T Filter3[F3_H][F3_W][F3_C][F3_N],
		const DTYPE_T bias3[O3_C],
		const DTYPE_T fcWeight[FC_WT_H][FC_WT_W],
		const DTYPE_T fcBias[FC_B_H][FC_B_W],
		const DTYPE_T smWeight[SM_WT_H][SM_WT_W],
		const DTYPE_T smBias[SM_B_H][SM_B_W],
		int& outDigit
);


