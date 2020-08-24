#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>

typedef long long fx_s4716;

#define F_POWER_2_16 65536.0
#define F_POWER_2_8 256.0

#define FX_S4716_TO_DOUBLE(a) (a) / (F_POWER_2_16)
#define DOUBLE_TO_FX_S4716(a) ((a) * (F_POWER_2_16))

#define FX_S4716_DOUBLE_ADD(a, b) ((a) + (b))
#define FX_S4716_DOUBLE_SUB(a, b) ((a) - (b))
#define FX_S4716_DOUBLE_MUL(a, b) (DOUBLE_TO_FX_S4716((FX_S4716_TO_DOUBLE(a)) * (FX_S4716_TO_DOUBLE(b))))
#define FX_S4716_DOUBLE_DIV(a, b) (DOUBLE_TO_FX_S4716((FX_S4716_TO_DOUBLE(a)) / (FX_S4716_TO_DOUBLE(b))))

#define FX_S4716_PI (DOUBLE_TO_FX_S4716(M_PI))
#define FX_S4716_INV_PI (DOUBLE_TO_FX_S4716(1 / (M_PI)))
#define FX_S4716_DOUBLE_SQRT(a) (DOUBLE_TO_FX_S4716(sqrt(FX_S4716_TO_DOUBLE(a))))
#define FX_S4716_DOUBLE_POW(a) ((pow(FX_S4716_TO_DOUBLE(a), 2.0)) / (F_POWER_2_16))
#define FX_S4716_DOUBLE_SINE(a) (DOUBLE_TO_FX_S4716(sin(FX_S4716_TO_DOUBLE(a) * 3.141592653 / 180)))
