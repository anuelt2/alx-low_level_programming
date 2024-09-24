#!/bin/bash
wget -P https://github.com/anuelt2/alx-low_level_programming/blob/main/0x18-dynamic_libraries/myprintf.so
export LD_PRELOAD=./myprintf.so:$LD_LIBRARY_PATH
