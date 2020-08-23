// fx_s1516_double.c file
#include "fx_s1516_double.h"

fx_s1516 double_to_fx(double a)
{
    return (int)(((a)*P2_16));
}

double fx_to_double(fx_s1516 a)
{
    return ((double)(a) / P2_16);
}

double fx_s1516_double_add(double a, double b)
{
    return double_to_fx((a) + (b));
}

double fx_s1516_double_sub(double a, double b)
{
    return double_to_fx((a) - (b));
}

double fx_s1516_double_mul(double a, double b)
{
    return double_to_fx((a) * (b)*P2_16);
}

double fx_s1516_double_div(double a, double b)
{
    return double_to_fx((a) / (b) / P2_16);
}

double degree_to_radian(double a)
{
    return ((a)*fx_s1516_PI / 180);
}

double fx_s1516_double_sin(double a)
{
    return double_to_fx(sin(a * P2_16) / (P2_16));
}

double fx_s1516_double_sqrt(double a)
{
    return double_to_fx(sqrt(a) / sqrt(P2_16));
}

double fx_s1516_double_pow(double a, double b)
{
    return double_to_fx(pow(a, (double)b) * pow(P2_16, (double)b - 1));
}

double fx_s1516_double_log(double a, double b)
{
    return double_to_fx(baselog(a * P2_16, b) / (P2_16));
}

double baselog(double a, double base)
{
    return log(a) / log(base);
}
