#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -g *.c && ar rcs liball.a *.o
