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
    return 0;
}

fixed_t fx_mul(fixed_t fa, fixed_t fb)
{
    return 0;
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
    return 0;
}

fixed_t fx_sqrt(fixed_t fa)
{
    return 0;
}








