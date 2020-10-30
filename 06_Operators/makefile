# sample
HelloWorld: HelloWorld.o
	gcc -o HelloWorld HelloWorld.o
  
HelloWorld.o: HelloWorld.c
	gcc -c -o HelloWorld.o HelloWorld.c


# all
CFLAGS = -g # -Wall # -Werror
LDFLAGS = -lpthread

src = $(wildcard *.c)
target = $(patsubst %.c, %, ${src})

.PHONY: all clean

%.o:%.c
	$(CC) ${CFLAGS} -c -o $@ $^
%:%.o
	$(CC) ${LDFLAGS} -o $@ $^ -lm

all: ${target}

clean:
	rm -f ${target}

