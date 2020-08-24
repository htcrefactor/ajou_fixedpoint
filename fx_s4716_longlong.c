#include <math.h>
#include "fx_s4716_longlong.h"

const fx_s4716 sinTable[92] =
    {
        0, 1143, 2287, 3429, 4571, 5711, 6850, 7986, 9120, 10252, 11380, 12504, 13625, 14742, 15854, 16961, 18064, 19160, 20251, 21336, 22414, 23486, 24550, 25606, 26655, 27696, 28729, 29752,
        30767, 31772, 32768, 33753, 34728, 35693, 36647, 37589, 38521, 39440, 40347, 41243, 42125, 42995, 43852, 44695, 45525, 46340, 47142, 47929, 48702, 49460, 50203, 50931, 51643, 52339,
        53019, 53683, 54331, 54963, 55577, 56175, 56755, 57319, 57864, 58393, 58903, 59395, 59870, 60326, 60763, 61183, 61583, 61965, 62328, 62672, 62997, 63302, 63589, 63856, 64103, 64331,
        64540, 64729, 64898, 65047, 65176, 65286, 65376, 65446, 65496, 65526, 65536, 65526};

long long fx_s4716_to_longlong(fx_s4716 a)
{
    return a >> 16;
}

fx_s4716 longlong_to_fx_s4716(long long a)
{
    return a << 16;
}

fx_s4716 fx_s4716_longlong_mul1(fx_s4716 a, fx_s4716 b)
{
    long long result = FX_S4716_LONGLONG_MUL1(a, b);
    return longlong_to_fx_s4716(result);
}

fx_s4716 fx_s4716_longlong_mul2(fx_s4716 a, fx_s4716 b)
{
    long long result = FX_S4716_LONGLONG_MUL2(a, b);
    return longlong_to_fx_s4716(result);
}

fx_s4716 fx_s4716_longlong_mul3(fx_s4716 a, fx_s4716 b)
{
    long long result = FX_S4716_LONGLONG_MUL3(a, b);
    return longlong_to_fx_s4716(result);
}
fx_s4716 fx_s4716_longlong_div1(fx_s4716 a, fx_s4716 b)
{
    long long result = FX_S4716_LONGLONG_DIV1(a, b);
    return fx_s4716_to_longlong(result);
}
fx_s4716 fx_s4716_longlong_div2(fx_s4716 a, fx_s4716 b)
{
    long long result = FX_S4716_LONGLONG_DIV2(a, b);
    return fx_s4716_to_longlong(result);
}
fx_s4716 fx_s4716_longlong_div3(fx_s4716 a, fx_s4716 b)
{
    long long result = FX_S4716_LONGLONG_DIV3(a, b);
    return fx_s4716_to_longlong(result);
}
fx_s4716 fx_s4716_longlong_sin(fx_s4716 a) // 인자가 실제론 double...
{
    long long quotient, remain, result;
    remain = a % 180;
    if (remain > 90)
        remain = 180 - remain;
    quotient = a / 180;

    result = (sinTable[remain]) * (pow(-1.0, quotient));
    return result;
}
