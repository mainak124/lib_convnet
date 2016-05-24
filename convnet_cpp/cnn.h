

typedef float DTYPE_T;

#define IN_H 224
#define IN_W 224
#define IN_C 3

#define F1_H 11
#define F1_W 11
#define F1_C 3
#define F1_N 96
#define F1_Z 0
#define F1_S 4
#define O1_H (((IN_H-F1_H+(2*F1_Z))/F1_S)+1)
#define O1_W (((IN_W-F1_W+(2*F1_Z))/F1_S)+1)
#define O1_C F1_N
#define P1_F 3
#define P1_S 2
#define P1_H ((O1_H-P1_F)/P1_S)
#define P1_W ((O1_W-P1_F)/P1_S)
#define P1_C O1_C

#define F2_H 5
#define F2_W 5
#define F2_C P1_C
#define F2_N 16
#define F2_S 1
#define F2_Z 0
#define O2_H (((P1_H-F2_H+(2*F2_Z))/F2_S)+1)
#define O2_W (((P1_W-F2_W+(2*F2_Z))/F2_S)+1)
#define O2_C F2_N
#define P2_F 2
#define P2_S 2
#define P2_H ((O2_H-P2_F)/P2_S)
#define P2_W ((O2_W-P2_F)/P2_S)
#define P2_C O2_C

#define F3_H 5
#define F3_W 5
#define F3_C P2_C
#define F3_N 16
#define F3_S 1
#define F3_Z 0
#define O3_H (((P2_H-F3_H+(2*F3_Z))/F3_S)+1)
#define O3_W (((P2_W-F3_W+(2*F3_Z))/F3_S)+1)
#define O3_C F3_N
#define P3_F 2
#define P3_S 2
#define P3_H ((O3_H-P3_F)/P3_S)
#define P3_W ((O3_W-P3_F)/P3_S)
#define P3_C O3_C

#define F4_H 5
#define F4_W 5
#define F4_C P3_C
#define F4_N 16
#define F4_S 1
#define F4_Z 0
#define O4_H (((P3_H-F4_H+(2*F4_Z))/F4_S)+1)
#define O4_W (((P3_W-F4_W+(2*F4_Z))/F4_S)+1)
#define O4_C F4_N
#define P4_F 2
#define P4_S 2
#define P4_H ((O4_H-P4_F)/P4_S)
#define P4_W ((O4_W-P4_F)/P4_S)
#define P4_C O4_C

#define F5_H 5
#define F5_W 5
#define F5_C P4_C
#define F5_N 16
#define F5_S 1
#define F5_Z 0
#define O5_H (((P4_H-F5_H+(2*F5_Z))/F5_S)+1)
#define O5_W (((P4_W-F5_W+(2*F5_Z))/F5_S)+1)
#define O5_C F4_N
#define P5_F 2
#define P5_S 2
#define P5_H ((O5_H-P5_F)/P5_S)
#define P5_W ((O5_W-P5_F)/P5_S)
#define P5_C O5_C

void inference(
		const DTYPE_T inputImage[IN_H][IN_W][IN_C],
		const DTYPE_T Filter1[F1_H][F1_W][F1_C][F1_N],
		const DTYPE_T bias1[O1_H][O1_W][O1_C],
		const DTYPE_T Filter2[F2_H][F2_W][F2_C][F2_N],
		const DTYPE_T bias2[O2_H][O2_W][O2_C],
		const DTYPE_T Filter3[F3_H][F3_W][F3_C][F3_N],
		const DTYPE_T bias3[O3_H][O3_W][O3_C],
		const DTYPE_T Filter4[F4_H][F4_W][F4_C][F4_N],
		const DTYPE_T bias4[O4_H][O4_W][O4_C],
		const DTYPE_T Filter5[F5_H][F5_W][F5_C][F5_N],
		const DTYPE_T bias5[O5_H][O5_W][O5_C],
		DTYPE_T poolOutput5[P5_H][P5_W][P5_C]
);


