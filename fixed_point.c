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
    ret = fx_s1516_double_add(fx_s1516_to_double(fa), fx_s1516_to_double(fb));
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
    ret = fa + fb;
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
    ret = fx_s1516_double_sub(fx_s1516_to_double(fa), fx_s1516_to_double(fb));
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
    ret = fa - fb;
#endif // _FX_CALCULATION_TYPE

    return ret;
}

fixed_t fx_mul1(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;

#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    ret = FX_S1615_MUL(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_double_mul(fx_s1516_to_double(fa), fx_s1516_to_double(fb));
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

fixed_t fx_mul2(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;

#if _FX_SYSTEM == _FX_S1615
    ret = FX_1615_LONGLONG_MUL2(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_longlong_mul2(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    ret = FX_S2308_L_MUL3(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_longlong_mul2(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx32_mul1(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_LONGLONG_MUL2(fa, fb);
#endif //_FX_SYSTEM


    return ret;
}

fixed_t fx_mul3(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;


#if _FX_SYSTEM == _FX_S1615
    ret = FX_1615_LONGLONG_MUL3(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_longlong_mul4(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    ret = FX_S2308_L_MUL4(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_longlong_mul3(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx32_mul2(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_LONGLONG_MUL3(fa, fb);
#endif //_FX_SYSTEM


    return ret;
}




fixed_t fx_div1(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;

#if _FX_CALCULATION_TYPE == _FX_DOUBLE
#if _FX_SYSTEM == _FX_S1615
    ret = FX_S1615_DIV(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_double_div(fx_s1516_to_double(fa), fx_s1516_to_double(fb));
#elif _FX_SYSTEM == _FX_S2308
    ret = FX_S2308_DIV(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_double_div(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx_s3132_div(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_DOUBLE_DIV(fa, fb);
#endif //_FX_SYSTEM

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG
#if _FX_SYSTEM == _FX_S1615
    ret = FX_1615_LONGLONG_DIV01(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_longlong_div0(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    ret = FX_S2308_L_DIV1(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_longlong_div1(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx32_div(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_LONGLONG_DIV1(fa, fb);
#endif //_FX_SYSTEM
#endif // _FX_CALCULATION_TYPE

    return ret;
}

fixed_t fx_div2(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;

#if _FX_SYSTEM == _FX_S1615
    ret = FX_1615_LONGLONG_DIV02(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_longlong_div1(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    ret = FX_S2308_L_DIV2(fa, fb);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_longlong_div2(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx32_div1(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_LONGLONG_DIV2(fa, fb);
#endif //_FX_SYSTEM


    return ret;
}

fixed_t fx_div3(fixed_t fa, fixed_t fb)
{
    fixed_t ret = 0;

#if _FX_SYSTEM == _FX_S1615
    ret = FX_1615_LONGLONG_DIV03(fa, fb);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_longlong_div2(fa, fb);
#elif _FX_SYSTEM == _FX_S2308
    //no implementation
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_longlong_div3(fa, fb);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx32_div2(fa, fb);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_LONGLONG_DIV3(fa, fb);
#endif //_FX_SYSTEM

    return ret;
}


fixed_t fx_sin(fixed_t fa)
{
    fixed_t ret = 0;

#if _FX_CALCULATION_TYPE == _FX_DOUBLE

#if _FX_SYSTEM == _FX_S1615
    ret = sine_fx_s1615_int(fa);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_double_sin(fx_s1516_to_double(fa));
#elif _FX_SYSTEM == _FX_S2308
    ret = fx_s2308_double_sine(fa);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_double_sin(fa);
#elif _FX_SYSTEM == _FX_S3132
    ret = fx_s3132_sin2(fa);
#elif _FX_SYSTEM == _FX_S4716
    ret = FX_S4716_DOUBLE_SINE(fa);
#endif //_FX_SYSTEM

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG

#if _FX_SYSTEM == _FX_S1615
    ret = sine_fx_s1615_longlong(fa);
#elif _FX_SYSTEM == _FX_S1516
    ret = fx_s1516_longlong_sin(fa);
#elif _FX_SYSTEM == _FX_S2308
    ret = fx_s2308_sind(fa);
#elif _FX_SYSTEM == _FX_S3231
    ret = fx_3231_longlong_sin(fa);
#elif _FX_SYSTEM == _FX_S3132
    // no implements
#elif _FX_SYSTEM == _FX_S4716
    ret = fx_s4716_longlong_sin(FX_S4716_TO_DOUBLE(fa));
#endif //_FX_SYSTEM

#endif // _FX_CALCULATION_TYPE

    return ret;
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
    ret = FX_S4716_DOUBLE_SQRT(fa);
#endif //_FX_SYSTEM

#elif _FX_CALCULATION_TYPE == _FX_LONGLONG
//no implementation

#endif // _FX_CALCULATION_TYPE
    return ret;
}


fixed_t double_to_fx(double a){
    fixed_t ret = 0;
    #if _FX_SYSTEM == _FX_S1615
        ret = FX_S1615_DOUBLE_TO_INT(a);
    #elif _FX_SYSTEM == _FX_S1516
        ret = double_to_fx_s1516(a);
    #elif _FX_SYSTEM == _FX_S2308
        ret = DOUBLE_TO_FX_S2308(a);
    #elif _FX_SYSTEM == _FX_S3231
        ret = doubleToFx(a);
    #elif _FX_SYSTEM == _FX_S3132
        ret = double_to_fx_s3132(a);
    #elif _FX_SYSTEM == _FX_S4716
        ret = DOUBLE_TO_FX_S4716(a);
    #endif //_FX_SYSTEM
    
    return ret;
}

double fx_to_double(fixed_t fa){
    double ret = 0;
    #if _FX_SYSTEM == _FX_S1615
        ret = FX_S1615_INT_TO_DOUBLE(fa);
    #elif _FX_SYSTEM == _FX_S1516
        ret = fx_s1516_to_double(fa);
    #elif _FX_SYSTEM == _FX_S2308
        ret = FX_S2308_TO_DOUBLE(fa);
    #elif _FX_SYSTEM == _FX_S3231
        ret = fxToDouble(fa);
    #elif _FX_SYSTEM == _FX_S3132
        ret = fx_s3132_to_double(fa);
    #elif _FX_SYSTEM == _FX_S4716
        ret = FX_S4716_TO_DOUBLE(fa);
    #endif //_FX_SYSTEM
    
    return ret;
}

int main(void)
{
    double a,b;
    scanf("%lf %lf", &a ,&b);
    fixed_t fa, fb;
    fa = double_to_fx(a);
    fb = double_to_fx(b);
    
    printf("Add result : %lf\n",  fx_to_double(fx_add(fa, fb)));
    printf("Sub result : %lf\n",   fx_to_double(fx_sub(fa, fb)));
    printf("Mul result : %lf\n",   fx_to_double(fx_mul1(fa,  fb)));
    printf("Div result : %lf\n",   fx_to_double(fx_div1(fa, fb)));
    printf("Sin result : %lf\n",  fx_to_double(fx_sin(fa)));


#if _FX_CALCULATION_TYPE == _FX_LONGLONG
    printf("Mul2 result : %lf\n",   fx_to_double(fx_mul2(fa,  fb)));
    printf("Div2 result : %lf\n",   fx_to_double(fx_div2(fa, fb)));
    printf("Mul3 result : %lf\n",   fx_to_double(fx_mul3(fa,  fb)));
    printf("Div3 result : %lf\n",   fx_to_double(fx_div3(fa, fb)));

#elif _FX_CALCULATION_TYPE == _FX_DOUBLE
    printf("Pow result : %lf\n",  fx_to_double(fx_pow(fa,fb)));
    printf("Sqrt result : %lf\n",   fx_to_double(fx_sqrt(fa)));

#endif

    return 0;
}






