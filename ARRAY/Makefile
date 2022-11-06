CC = gcc
FLAGS = -Wall -Werror -Wextra

all: array

array:
  @${CC} ${FLAGS} main.c array.c -o array

clean:
  @rm -rf *.out array

run:
  @/array

rebuild: clean array