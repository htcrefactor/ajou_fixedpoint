#include <stdio.h>
#include <math.h>
#define P2_2to32 4294967296.0
// #define PI 3.141592653
#define fx_s3132_to_double(a) (a / P2_2to32)
#define double_to_fx_s3132(a) (long long)(a * P2_2to32)
#define fx_s3132_add(a, b) ((a) + (b))
#define fx_s3132_sub(a, b) ((a) - (b))
#define fx_s3132_mul(a, b) double_to_fx_s3132(fx_s3132_to_double(a) * fx_s3132_to_double(b))
#define fx_s3132_mul2(a, b) (double)a *(double)b / P2_2to32
#define fx_s3132_div(a, b) double_to_fx_s3132(fx_s3132_to_double(a) / fx_s3132_to_double(b))
#define fx_s3132_sin(a) double_to_fx_s3132(sin(fx_s3132_to_double(a)))
#define fx_s3132_sqrt(a) double_to_fx_s3132(sqrt(fx_s3132_to_double(a)))
#define fx_s3132_power(a, b) double_to_fx_s3132(pow(fx_s3132_to_double(a), fx_s3132_to_double(b)))
#define fx_s3132_log10(a) double_to_fx_s3132(log10(fx_s3132_to_double(a)))
#define fx_s3132_ln(a) double_to_fx_s3132(log(fx_s3132_to_double(a)))
#define fx_s3132_PI() (double_to_fx_s3132(3.141592653))
#define fx_s3132_PI_Reverse() (double_to_fx_s3132((1 / 3.141592653)))

typedef long long fx_s3132;

fx_s3132 fx_s3132_sin2(fx_s3132 a);
fx_s3132 fx_s3132_sqrt2(fx_s3132 a);
fx_s3132 fx_s3132_power2(fx_s3132 a, fx_s3132 b);

fx_s3132 fx_s3132_piReverse2();
fx_s3132 fx_s3132_pi2();
