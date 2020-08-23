typedef long long fx_s4716;

#define FX_S4716_LONGLONG_MUL1(a, b) (((a) * (b)) >> 16)
#define FX_S4716_LONGLONG_MUL2(a, b) ((a >> 8) * (b >> 8))
#define FX_S4716_LONGLONG_MUL3(a, b) (((a >> 4) * (b >> 4)) >> 8)

#define FX_S4716_LONGLONG_DIV1(a, b) ((a << 16) / (b))
#define FX_S4716_LONGLONG_DIV2(a, b) (((a << 8) / (b)) << 8)
#define FX_S4716_LONGLONG_DIV3(a, b) (((a << 12) / (b)) << 4)

fx_s4716 fx_s4716_longlong_sin(fx_s4716 a);