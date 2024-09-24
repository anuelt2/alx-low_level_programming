#!/bin/bash
gcc -shared -o myprintf.so -fPIC jackpot.c
export LD_PRELOAD=./myprintf.so:$LD_LIBRARY_PATH
