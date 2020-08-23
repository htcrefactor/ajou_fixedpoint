#pragma once
typedef int fx_s2308;
#define FX_S2308_TO_DOUBLE(a) ((double)(a / (256.0)))
#define FX_S2308_TO_FLOAT(a) ((float)(a / (256.0)))
#define FX_S2308_TO_INT(a) ((int)(a / (256.0)))
#define FX_S2308_TO_SHORT(a) ((short)(a / (256.0)))
#define DOUBLE_TO_FX_S2308(a) (((int)(a * (256.0))))
#define FX_S2308_ADD(a, b) ((a) + (b))
#define FX_S2308_SUB(a, b) ((a) - (b))
#define FX_S2308_MUL(a, b) DOUBLE_TO_FX_S2308(FX_S2308_TO_DOUBLE(a) * FX_S2308_TO_DOUBLE(b))
#define FX_S2308_DIV(a, b) DOUBLE_TO_FX_S2308(FX_S2308_TO_DOUBLE(a) / FX_S2308_TO_DOUBLE(b))
// #define PI 3.141592
#define FX_S2308_PI (DOUBLE_TO_FX_S2308(3.141592))
#define FX_S2308_INV_PI (DOUBLE_TO_FX_S2308(1 / 3.141592))

fx_s2308 fx_s2308_double_sine(fx_s2308 a);
fx_s2308 fx_s2308_double_sqrt(fx_s2308 a);
fx_s2308 fx_s2308_double_pow(fx_s2308 a, double n);
