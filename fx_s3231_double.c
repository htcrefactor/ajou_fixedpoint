#include "fx_s3231_double.h"
#include <math.h>

fx_s3231 fx_3231_double_sin(fx_s3231 a)
{
    return doubleToFx(sin(fxToDouble(a)*3.141592653/180));
}

fx_s3231 fx_3231_double_sqrt(fx_s3231 a)
{
    return doubleToFx(sqrt(fxToDouble(a)));
}

fx_s3231 fx_3231_double_power(fx_s3231 a, fx_s3231 b)
{
    return doubleToFx(pow(fxToDouble(a), fxToDouble(b)));
}
