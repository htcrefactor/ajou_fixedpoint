#define FX32_90 0x00005A00
#define FX32_180 0x0000B400
#define FX32_360 0x00016800

#define FX_S2308_L_MUL(a, b) (int)(((long long)(a) * (b)) >> 8)
#define FX_S2308_L_MUL2(a, b) (int)(((long long)(a >> 4) * (b >> 4)))
#define FX_S2308_L_MUL3(a, b) (int)(((a) * (b)) >> 8)
#define FX_S2308_L_MUL4(a, b) (int)(((a >> 4) * (b >> 4)))

#define FX_S2308_L_DIV1(a, b) (int)(((long long)(a) / (b)) << 8)
#define FX_S2308_L_DIV2(a, b) (int)((a << 8) / (b))

typedef int fx_s2308;
typedef long fixed32;

fx_s2308 fx_s2308_sind(fx_s2308 fa);
