#include "fx_s4716_double.h"

double fx_to_double(fx_s4716 a)
{
    double f2d = FX_TO_DOUBLE(a);
    return f2d;
}
fx_s4716 double_to_fx(double a)
{
    fx_s4716 d2f = DOUBLE_TO_FX(a);
    return d2f;
}
double fx_add(double a, double b)
{
    fx_s4716 add = double_to_fx(FX_S4716_DOUBLE_ADD(a, b));
    return fx_to_double(add);
}
double fx_sub(double a, double b)
{
    fx_s4716 sub = double_to_fx(FX_S4716_DOUBLE_SUB(a, b));
    return fx_to_double(sub);
}
double fx_s4716_double_mul(double a, double b)
{
    double mul = FX_S4716_DOUBLE_MUL(a, b);
    return double_to_fx(mul);
}
double fx_s4716_double_div(double a, double b)
{
    double div = FX_S4716_DOUBLE_DIV(a, b);
    return fx_to_double(div);
}
double fx_pi()
{
    return fx_to_double(FX_PI);
}
double fx_inv_pi()
{
    return fx_to_double(FX_INV_PI);
}
double fx_sqrt(double a)
{
    double square = FX_S4716_DOUBLE_SQRT(a);
    return square;
}
double fx_pow(double a)
{
    double power = fx_to_double(FX_S4716_DOUBLE_POW(a));
    return power;
}
double fx_sine(fx_s4716 a)
{
    double sine = double_to_fx(FX_S4716_DOUBLE_SINE(a));
    return fx_to_double(sine);
}
