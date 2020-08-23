SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

CC := gcc
CFLAGS = -Wall -g -Iheaders -lm

ajou_fx : $(OBJS)
	$(CC) -o $@ $^

clean: 
	-rm $(OBJS)
	-rm mytest exam2 exam3

dep:
	gccmakedep $(SRCS)