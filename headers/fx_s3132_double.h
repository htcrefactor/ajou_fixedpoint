#include <stdio.h>
#include <math.h>
#define P2_2to32 4294967296.0
#define PI 3.141592653
#define fx_to_double(a) (a / P2_2to32)
#define double_to_fx(a) (long long)(a * P2_2to32)
#define fx_add(a, b) ((a) + (b))
#define fx_sub(a, b) ((a) - (b))
#define fx_mul(a, b) double_to_fx(fx_to_double(a) * fx_to_double(b))
#define fx_mul2(a, b) (double)a *(double)b / P2_2to32
#define fx_div(a, b) double_to_fx(fx_to_double(a) / fx_to_double(b))
#define fx_sin(a) double_to_fx(sin(fx_to_double(a)))
#define fx_sqrt(a) double_to_fx(sqrt(fx_to_double(a)))
#define fx_power(a, b) double_to_fx(pow(fx_to_double(a), fx_to_double(b)))
#define fx_log10(a) double_to_fx(log10(fx_to_double(a)))
#define fx_ln(a) double_to_fx(log(fx_to_double(a)))
#define fx_PI() (double_to_fx(PI))
#define fx_PI_Reverse() (double_to_fx((1 / PI)))

typedef long long fx_s3132;

fx_s3132 sin2(fx_s3132 a);
fx_s3132 sqrt2(fx_s3132 a);
fx_s3132 power2(fx_s3132 a, fx_s3132 b);

fx_s3132 piReverse2();
fx_s3132 pi2();
