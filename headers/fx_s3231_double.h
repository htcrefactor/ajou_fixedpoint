#define P2_31 2147483648.0
#define doubleToFx(a) ((a) * (P2_31))
#define fxToDouble(a) ((a) / (P2_31))
#define FX_S3231_PI doubleToFx(3.141592653)
#define FX_E doubleToFx(2.718281828)
typedef long long fx_s3231;

#define fx_3231_double_add(a, b) ((a) + (b))
#define fx_3231_double_sub(a, b) ((a) - (b))
#define fx_3231_double_mul(a, b) (doubleToFx(fxToDouble(a) * fxToDouble(b)))
#define fx_3231_double_div(a, b) (doubleToFx(fxToDouble(a) / fxToDouble(b)))

extern long long fx_3231_double_sin(fx_s3231 a);
extern long long fx_3231_double_sqrt(fx_s3231 a);
extern long long fx_3231_double_power(fx_s3231 a, fx_s3231 b);
