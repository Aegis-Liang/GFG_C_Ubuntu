# sample
HelloWorld: HelloWorld.o
	gcc -o HelloWorld HelloWorld.o
  
HelloWorld.o: HelloWorld.c
	gcc -c -o HelloWorld.o HelloWorld.c
	
# don't know why sqrtf() function is OK but floor() and ceil() is not, 
# add this manually code 
# math_functions: math_functions.c
#  gcc math_functions.c -o math_functions -lm


# all
# gcc math_functions.c -o math_functions -lm
CFLAGS = -g -Wall -Werror
LDFLAGS = -lpthread

src = $(wildcard *.c)
target = $(patsubst %.c, %, ${src})

.PHONY: all clean

# %.o:%.c
# 	$(CC) ${CFLAGS} -c -o $@ $^ -lm
# %:%.o
# 	$(CC) ${LDFLAGS} -o $@ $^ -lm

%:%.c
	$(CC) ${CFLAGS} ${LDFLAGS} $^ -o $@ -lm

all: ${target}

clean:
	rm -f ${target}

