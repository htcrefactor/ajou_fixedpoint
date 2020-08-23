//fx_1516_longlong.h file
#define __FX_S1516_LONGLONG_H

#include <stdio.h>

#define P2_16 65536
#define fP2_16 65536.0

typedef int fx_s1516;
typedef long fixed32;
typedef long long fixed64;

extern fx_s1516 longlong_to_fx(long long a);
extern long long fx_to_longlong(fx_s1516 a);
extern fx_s1516 fx_s1516_longlong_mul0(fx_s1516 a, fx_s1516 b);
extern fx_s1516 fx_s1516_longlong_mul1(fx_s1516 a, fx_s1516 b);
extern fx_s1516 fx_s1516_longlong_mul2(fx_s1516 a, fx_s1516 b);
extern fx_s1516 fx_s1516_longlong_mul3(fx_s1516 a, fx_s1516 b);
extern fx_s1516 fx_s1516_longlong_mul4(fx_s1516 a, fx_s1516 b);
extern fx_s1516 fx_s1516_longlong_div0(fx_s1516 a, fx_s1516 b);
extern fx_s1516 fx_s1516_longlong_div1(fx_s1516 a, fx_s1516 b);
extern fx_s1516 fx_s1516_longlong_div2(fx_s1516 a, fx_s1516 b);
extern fx_s1516 fx_s1516_longlong_sin(fx_s1516 fa);
extern fx_s1516 fx_s1516_longlong_sqrt(fx_s1516 fa);
