#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

typedef long long fx_s4716;

#define F_POWER_2_16 65536.0
#define F_POWER_2_8 256.0

#define FX_TO_DOUBLE(a) (a) / (F_POWER_2_16)
#define DOUBLE_TO_FX(a) ((a) * (F_POWER_2_16))

#define FX_S4716_DOUBLE_ADD(a, b) ((a) + (b))
#define FX_S4716_DOUBLE_SUB(a, b) ((a) - (b))
#define FX_S4716_DOUBLE_MUL(a, b) (DOUBLE_TO_FX((FX_TO_DOUBLE(a)) * (FX_TO_DOUBLE(b))))
#define FX_S4716_DOUBLE_DIV(a, b) (DOUBLE_TO_FX((FX_TO_DOUBLE(a)) / (FX_TO_DOUBLE(b))))

#define FX_PI (DOUBLE_TO_FX(M_PI))
#define FX_INV_PI (DOUBLE_TO_FX(1 / (M_PI)))
#define FX_S4716_DOUBLE_SQRT(a) ((sqrt(DOUBLE_TO_FX(a))) / (F_POWER_2_8))
#define FX_S4716_DOUBLE_POW(a) ((pow(DOUBLE_TO_FX(a), 2.0)) / (F_POWER_2_16))
#define FX_S4716_DOUBLE_SINE(a) (sin(a))
