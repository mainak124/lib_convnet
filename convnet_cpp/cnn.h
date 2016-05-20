

typedef float DTYPE_T;

#define IN_H 32
#define IN_W 32
#define IN_C 1

#define F1_H 5
#define F1_W 5
#define F1_C 1
#define F1_N 6
#define F1_Z 0
#define F1_S 1
#define O1_H ((IN_H-F1_H+(2*F1_Z)+1)/F1_S)
#define O1_W ((IN_W-F1_W+(2*F1_Z)+1)/F1_S)
#define O1_C F1_N
#define P1_F 2
#define P1_H (O1_H/P1_F)
#define P1_W (O1_W/P1_F)
#define P1_C O1_C

#define F2_H 5
#define F2_W 5
#define F2_C P1_C
#define F2_N 16
#define F2_S 1
#define F2_Z 0
#define O2_H ((P1_H-F2_H+(2*F2_Z)+1)/F2_S)
#define O2_W ((P1_W-F2_W+(2*F2_Z)+1)/F2_S)
#define O2_C F2_N
#define P2_F 2
#define P2_H (O2_H/P2_F)
#define P2_W (O2_W/P2_F)
#define P2_C O2_C


void inference(
		DTYPE_T inputImage[IN_H][IN_W][IN_C],
		DTYPE_T Filter1[F1_H][F1_W][F1_C][F1_N],
		DTYPE_T bias1[O1_H][O1_W][O1_C],
		DTYPE_T Filter2[F2_H][F2_W][F2_C][F2_N],
		DTYPE_T bias2[O2_H][O2_W][O2_C],
		DTYPE_T poolOutput2[P2_H][P2_W][P2_C]
);


