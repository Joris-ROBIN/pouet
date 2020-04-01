CC=gcc
CFLAGS=-c -Wall
LDFLAGS=-o
file=main.c,pair.c,mirror.c
name=main.o

all : $(name)

%.o : %.c 
    $(CC) $(CFLAGS) $^

$(name) : $(file)
    $(CC) $(LDFLAGS) $@ $^

clean :
    rm -rf *.o
