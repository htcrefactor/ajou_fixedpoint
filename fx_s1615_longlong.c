#include "fx_s1615_double.h"
#include "fx_s1615_longlong.h"

#define FX32_90 0x002D0000
#define FX32_180 0x00590000
#define FX32_360 0x00B40000

const static fx_s1615 fx_1615_SinTable[91] = {0, 571, 1143, 1714, 2285, 2855,
                                              3425, 3993, 4560, 5126, 5690, 6252, 6812, 7371, 7927, 8480, 9032,
                                              9580, 10125, 10668, 11207, 11743, 12275, 12803, 13327, 13848,
                                              14364, 14876, 15383, 15886, 16384, 16876, 17364, 17846, 18323,
                                              18794, 19260, 19720, 20173, 20621, 21062, 21497, 21926, 22347,
                                              22762, 23170, 23571, 23964, 24351, 24730, 25101, 25465, 25821,
                                              26169, 26509, 26841, 27165, 27481, 27788, 28087, 28377, 28659,
                                              28932, 29196, 29451, 29697, 29935, 30163, 30381, 30591, 30791,
                                              30982, 31164, 31336, 31498, 31651, 31794, 31928, 32051, 32165,
                                              32270, 32364, 32449, 32523, 32588, 32643, 32688, 32723, 32748,
                                              32763, 32768};

fx_s1615 sine_fx_s1615_longlong(fx_s1615 angle)
{
    int sign = 1;
    fx_s1615 ret0, diff;
    int idx;

    if (angle < 0)
    {
        sign = -1;
        angle *= -1;
    }

    angle = angle % FX32_360;
    if (angle >= FX32_180)
    {
        sign *= -1;
        angle -= FX32_180;
    }

    if (angle > FX32_90)
    {
        angle = FX32_180 - angle;
    }
    idx = angle >> 15;

    ret0 = fx_1615_SinTable[idx];
    diff = fx_1615_SinTable[idx + 1] - ret0;
    return (sign * (ret0 + ((diff * (angle & 0x7FFF)) >> 15)));
}
