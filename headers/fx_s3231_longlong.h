#define fx_3231_longlong_mul1(a, b) (((a) * (b)) >> 31)
#define fx_3231_longlong_mul2(a, b) (((a >> 8) * (b >> 8)) >> 15)
#define fx_3231_longlong_mul3(a, b) ((a >> 16) * (b >> 15))

#define fx_3231_longlong_div1(a, b) (((a << 8) / (b >> 8)) << 15)
#define fx_3231_longlong_div2(a, b) (((a << 10) / (b >> 10)) << 11)
#define fx_3231_longlong_div3(a, b) ((a << 16) / (b >> 15))

extern long long fx_3231_longlong_sin();
