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


#define _FX_SYSTEM _FX_S1615
#define _FX_CALCULATION_TYPE _FX_DOUBLE

#if _FX_SYSTEM == _FX_DOUBLE

#if _FX_CALCULATION_TYPE == _FX_S1615
typedef fx_s1615 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S1516
typedef fx_s1516 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S2308
typedef fx_s2308 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S3231
typedef fx_s3231 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S3132
typedef fx_s3132 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S4716
typedef fx_s4716 fixed_t;
#endif
// _FX_SYSTEM == _FX_DOUBLE

#elif _FX_SYSTEM == _FX_LONGLONG

#if _FX_CALCULATION_TYPE == _FX_S1615
typedef fx_s1615 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S1516
typedef fx_s1516 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S2308
typedef fx_s2308 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S3231
typedef fx_s3231 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S3132
typedef fx_s3132 fixed_t;
#elif _FX_CALCULATION_TYPE == _FX_S4716
typedef fx_s4716 fixed_t;
#endif

// _FX_SYSTEM == _FX_LONGLONG
#endif 


fixed_t add(fixed_T fa, fixed_t fb);
fixed_t sub(fixed_T fa, fixed_t fb);
fixed_t mul(fixed_T fa, fixed_t fb);
fixed_t div(fixed_T fa, fixed_t fb);
fixed_t sin(fixed_T fa);
fixed_t pow(fixed_T fa, fixed_t fb);
fixed_t sqrt(fixed_T fa);
