SRCS=test_main.c fib.c
OBJS=$(SRCS:.c=.o)
INCLUDES=-I.

all:test_main
test_main:$(OBJS)
	$(CC) -o $@ $^ -L/usr/local/lib -lcunit
.c.o:
	$(CC) -c $< $(INCLUDES)
clean:
	\rm -f $(OBJS) test_main core.*
