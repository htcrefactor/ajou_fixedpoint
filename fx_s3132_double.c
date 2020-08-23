#include <stdio.h>
#include <math.h>
#include "fx_s3132_double.h"

fx_3132 sin2(fx_3132 a)
{
    return double_to_fx(sin(fx_to_double(a)));
};
fx_3132 sqrt2(fx_3132 a)
{
    return double_to_fx(sqrt(fx_to_double(a)));
};
fx_3132 power2(fx_3132 a, fx_3132 b)
{
    return double_to_fx(pow(fx_to_double(a), fx_to_double(b)));
};

fx_3132 pi2()
{
    return double_to_fx(fx_to_double(PI));
};
fx_3132 piReverse2()
{
    return double_to_fx((fx_to_double(1 / PI)));
};
