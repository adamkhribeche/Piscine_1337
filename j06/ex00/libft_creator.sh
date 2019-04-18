#!/bin/sh

gcc -Wall -Werror -Wextra -c ft*.c
ar rc libft.a ft*.o
ranlib libft.a
rm -f ft*.o
