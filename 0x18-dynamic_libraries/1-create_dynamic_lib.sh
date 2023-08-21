#!/bin/bash
gcc -Wall -Werror -Wextra -pendatic -fPIC -c *.c
gcc -shared -o liball.so *.o
