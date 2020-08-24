// fx_s1516_double.c file
#include "fx_s1516_double.h"

fx_s1516 double_to_fx_s1516(double a)
{
    return (int)(((a)*P2_16));
}

double fx_s1516_to_double(fx_s1516 a)
{
    return ((double)(a) / P2_16);
}

fx_s1516 fx_s1516_double_add(double a, double b)
{
    return double_to_fx_s1516((a) + (b));
}

fx_s1516 fx_s1516_double_sub(double a, double b)
{
    return double_to_fx_s1516((a) - (b));
}

fx_s1516 fx_s1516_double_mul(double a, double b)
{
    return double_to_fx_s1516((a) * (b));
}

fx_s1516 fx_s1516_double_div(double a, double b)
{
    return double_to_fx_s1516((a) / (b) );
}

double degree_to_radian(double a)
{
    return ((a) * FX_S1516_PI / 180);
}

fx_s1516 fx_s1516_double_sin(double a)
{
    return double_to_fx_s1516(sin(degree_to_radian(a)));
}

fx_s1516 fx_s1516_double_sqrt(double a)
{
    return double_to_fx_s1516(sqrt(a) );
}

fx_s1516 fx_s1516_double_pow(double a, double b)
{
    return double_to_fx_s1516(pow(a, (double)b) * pow(P2_16, (double)b - 1));
}

static double baselog(double a, double base)
{
    return log(a) / log(base);
}

fx_s1516 fx_s1516_double_log(double a, double b)
{
    return double_to_fx_s1516(baselog(a * P2_16, b) / (P2_16));
}


