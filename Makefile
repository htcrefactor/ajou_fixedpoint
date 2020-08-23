SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

CC := gcc
CFLAGS = -Wall -g -Iheaders -lm

ajou_fx : $(OBJS)
	$(CC) -o $@ $^

clean: 
	-rm $(OBJS)
	-rm ajou_fx

dep:
	gccmakedep $(SRCS)