#include <stdio.h>
#include <math.h>
#include "fx_s3132_double.h"

fx_s3132 fx_s3132_sin2(fx_s3132 a)
{
    return double_to_fx_s3132(sin(fx_s3132_to_double(a)*3.141592653/180));
}

fx_s3132 fx_s3132_sqrt2(fx_s3132 a)
{
    return double_to_fx_s3132(sqrt(fx_s3132_to_double(a)));
}

fx_s3132 fx_s3132_power2(fx_s3132 a, fx_s3132 b)
{
    return double_to_fx_s3132(pow(fx_s3132_to_double(a), fx_s3132_to_double(b)));
}

fx_s3132 fx_s3132_pi2()
{
    return double_to_fx_s3132(fx_s3132_to_double(3.141592653));
}

fx_s3132 fx_s3132_piReverse2()
{
    return double_to_fx_s3132((fx_s3132_to_double(1 / 3.141592653)));
}
