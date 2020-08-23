#include "fixed_point.h"

typedef enum fx_system {
    S1516 = 0,
    S1615 = 1,
    S2308 = 2,
    S3132 = 3,
    S3231 = 4,
    S4716 = 5,
} fx_system_t;

typedef enum fx_calculation_type {
    FX_DOUBLE = 0,
    FX_LONGLONG = 1,
} fx_calculation_type_t;


fixed_t fx_add(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;
#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    ret = FX_S1615_ADD(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_double_add(double_to_fx_s1516(fa), double_to_fx_s1516(fb));
#elif _FX_SYSTEM == _FX_S2308
    ret = FX_S2308_ADD(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_double_add(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx_s3132_add(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_DOUBLE_ADD(fa, fb);
#endif //_FX_SYSTEM

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG
    ret = fa + fb
#endif // _FX_CALCULATION_TYPE
    return ret;
}

fixed_t fx_sub(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;
#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    ret = FX_S1615_SUB(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_double_sub(double_to_fx_s1516(fa), double_to_fx_s1516(fb));
#elif _FX_SYSTEM == _FX_S2308
    ret = FX_S2308_SUB(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_double_sub(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx_s3132_sub(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_DOUBLE_SUB(fa, fb);
#endif //_FX_SYSTEM

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG
    ret = fa - fb
#endif // _FX_CALCULATION_TYPE
    return ret;
}

fixed_t fx_mul(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;
#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    ret = FX_S1615_ADD(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_double_add(fx_s1516_to_double(fa), fx_s1516_to_double(fb));
#elif _FX_SYSTEM == _FX_S2308
    ret = FX_S2308_MUL(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_double_mul(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx_s3132_mul(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_DOUBLE_MUL(fa, fb);
#endif //_FX_SYSTEM

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG

#if _FX_SYSTEM == _FX_S1615
    ret = FX_1615_LONGLONG_MUL1(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_longlong_mul0(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    ret = FX_S2308_L_MUL(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_longlong_mul1(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx32_mul(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_LONGLONG_MUL1(fa, fb);
#endif //_FX_SYSTEM

#endif // _FX_CALCULATION_TYPE
    return ret;
}
fixed_t fx_div(fixed_t fa, fixed_t fb)
{
    return 0;
}

fixed_t fx_sin(fixed_t fa)
{
    return 0;
}

fixed_t fx_pow(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;
#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    ret = power_fx_s1615_int(fa, FX_S1615_INT_TO_DOUBLE(fb));
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_double_pow(fx_s1516_to_double(fa), fx_s1516_to_double(fb));
#elif _FX_SYSTEM == _FX_S2308
    ret = fx_s2308_double_pow(fa, FX_S2308_TO_DOUBLE(fb));
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_double_power(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx_s3132_power2(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    //no implementation
#endif //_FX_SYSTEM

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG
//no implementation

#endif // _FX_CALCULATION_TYPE
    return ret;
}


fixed_t fx_sqrt(fixed_t fa)
{
    fixed_t ret = 0;
#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    ret = sqrt_fx_s1615_int(fa);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_double_sqrt(fx_s1516_to_double(fa));
#elif _FX_SYSTEM == _FX_S2308
    ret = fx_s2308_double_sqrt(fa);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_double_sqrt(fa);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx_s3132_sqrt2(fa);
#elif _FX_SYSTEM == _FX_S4716
    FX_S4716_DOUBLE_SQRT(FX_S4716_TO_DOUBLE(fa));
#endif //_FX_SYSTEM

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG
//no implementation

#endif // _FX_CALCULATION_TYPE
    return ret;
}








