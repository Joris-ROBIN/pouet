CC=gcc
CFLAGS=-c -Wall
LDFLAGS=-o
file=test.c pair.c
name=main.o

all : $(name)

%.o : %.c 
    $(CC) $(CFLAGS) $^

$(name) : $(file)
    $(CC) $(LDFLAGS) $@ $^

clean :
    rm -rf *.o
