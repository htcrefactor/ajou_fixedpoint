#include "headers/fx_s1516_double.h"
#include "headers/fx_s1615_double.h"
#include "headers/fx_s2308_double.h"
#include "headers/fx_s3132_double.h"
#include "headers/fx_s3231_double.h"
#include "headers/fx_s4716_double.h"

#include "headers/fx_s1516_longlong.h"
#include "headers/fx_s1615_longlong.h"
#include "headers/fx_s2308_longlong.h"
#include "headers/fx_s3132_longlong.h"
#include "headers/fx_s3231_longlong.h"
#include "headers/fx_s4716_longlong.h"


#define _FX_S1615 1
#define _FX_S1516 2

#define _FX_S3231 3
#define _FX_S3132 4

#define _FX_S4716 5 
#define _FX_S2308 6

#define _FX_DOUBLE 1
#define _FX_LONGLONG 2
/*
_FX_S1615
_FX_S1516

_FX_S3231
_FX_S3132

_FX_S4716
_FX_S2308

_FX_DOUBLE
_FX_LONGLONG

*/


#ifndef _FX_SYSTEM
#   define _FX_SYSTEM 1
#endif

#ifndef _FX_CALCULATION_TYPE
#   define _FX_CALCULATION_TYPE 1
#endif

#if _FX_SYSTEM == _FX_S1615
typedef fx_s1615 fixed_t;
#elif _FX_SYSTEM == _FX_S1516
typedef fx_s1516 fixed_t;
#elif _FX_SYSTEM == _FX_S2308
typedef fx_s2308 fixed_t;
#elif _FX_SYSTEM == _FX_S3231
typedef fx_s3231 fixed_t;
#elif _FX_SYSTEM == _FX_S3132
typedef fx_s3132 fixed_t;
#elif _FX_SYSTEM == _FX_S4716
typedef fx_s4716 fixed_t;
#endif // _FX_SYSTEM == ??

fixed_t fx_add(fixed_t fa, fixed_t fb);
fixed_t fx_sub(fixed_t fa, fixed_t fb);
fixed_t fx_mul1(fixed_t fa, fixed_t fb);
fixed_t fx_mul2(fixed_t fa, fixed_t fb);
fixed_t fx_mul3(fixed_t fa, fixed_t fb);
fixed_t fx_div1(fixed_t fa, fixed_t fb);
fixed_t fx_div2(fixed_t fa, fixed_t fb);
fixed_t fx_div3(fixed_t fa, fixed_t fb);
fixed_t fx_sin(fixed_t fa);
fixed_t fx_pow(fixed_t fa, fixed_t fb);
fixed_t fx_sqrt(fixed_t fa);
fixed_t double_to_fx(double a);
double fx_to_double(fixed_t fa);