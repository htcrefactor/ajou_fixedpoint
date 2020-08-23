#define __FX_S1516_DOUBLE_H

typedef int fx_s1516;

#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#define P2_16 65536
#define fP2_16 65536.0
#define e M_E
#define FX_S1516_PI M_PI
#define FX_S1516_INVERSE_PI 1 / M_PI

extern fx_s1516 double_to_fx_s1516(double a);
extern double fx_s1516_to_double(fx_s1516 a);
// extern double baselog(double a, double base);
extern fx_s1516 fx_s1516_double_add(double a, double b);
extern fx_s1516 fx_s1516_double_sub(double a, double b);
extern fx_s1516 fx_s1516_double_mul(double a, double b);
extern fx_s1516 fx_s1516_double_div(double a, double b);
extern fx_s1516 fx_s1516_double_sqrt(double a);
extern fx_s1516 fx_s1516_double_pow(double a, double b);
extern fx_s1516 fx_s1516_double_log(double a, double b);
extern double degree_to_radian(double a);
extern fx_s1516 fx_s1516_double_sin(double a);
