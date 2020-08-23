#pragma once
typedef int fx_s2308;
#define FX_TO_DOUBLE(a) ((double)(a / (256.0)))
#define FX_TO_FLOAT(a) ((float)(a / (256.0)))
#define FX_TO_INT(a) ((int)(a / (256.0)))
#define FX_TO_SHORT(a) ((short)(a / (256.0)))
#define DOUBLE_TO_FX(a) (((int)(a * (256.0))))
#define FX_ADD(a, b) ((a) + (b))
#define FX_SUB(a, b) ((a) - (b))
#define FX_MUL(a, b) DOUBLE_TO_FX(FX_TO_DOUBLE(a) * FX_TO_DOUBLE(b))
#define FX_DIV(a, b) DOUBLE_TO_FX(FX_TO_DOUBLE(a) / FX_TO_DOUBLE(b))
// #define PI 3.141592
#define FX_S2308_PI (DOUBLE_TO_FX(3.141592))
#define FX_S2308_INV_PI (DOUBLE_TO_FX(1 / 3.141592))

fx_s2308 fx_s2308_double_sine(fx_s2308 a);
fx_s2308 fx_s2308_double_sqrt(fx_s2308 a);
fx_s2308 fx_s2308_double_pow(fx_s2308 a, double n);
