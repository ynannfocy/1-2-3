CC = gcc
FLAGS = -Wall -Werror -Wextra

all: matrix

matrix:
  @${CC} ${FLAGS} main.c matrix.c -o matrix

valgrind:
  @valgrind --leak-check=full --tool=memcheck ./matrix

clean:
  @rm -rf *.out matrix

run:
  @./matrix


