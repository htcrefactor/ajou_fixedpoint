SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

FX_SYSTEM := 0
FX_CALCULATION_TYPE := 0

CC := gcc
CFLAGS = -Iheaders -lm -D_FX_SYSTEM=$(FX_SYSTEM) -D_FX_CALCULATION_TYPE=$(FX_CALCULATION_TYPE)

# ajou_fx : $(OBJS)
#	$(CC) -o $@ $^

ajou_fx : $(SRCS)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	-rm ajou_fx

dep:
	gccmakedep $(SRCS)

# SRCS2 := fx_s1516_double.c fx_s1516_longlong.c fx_s1615_double.c fx_s1615_longlong.c fx_s2308_double.c fx_s2308_longlong.c fx_s3132_double.c fx_s3132_longlong.c fx_s3231_double.c fx_s3231_longlong.c fx_s4716_double.c fx_s4716_longlong.c