CC := gcc

SRCS = $(wildcard *.c)
PROGS = $(SRCS:%.c=%)

compile:$(PROGS)

$(PROGS):%:%.c
	$(CC) $(CFLAGS) $(LFLAGS) $< -o $@

clean:
	find . -not -name "*.c" -not -name "Makefile" -delete
	ls -l
