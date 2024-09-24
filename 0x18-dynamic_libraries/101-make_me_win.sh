#!/bin/bash
wget -P /tmp https://github.com/anuelt2/alx-low_level_programming/blob/main/0x18-dynamic_libraries/tmp/myprintf.so
export LD_PRELOAD=/tmp/myprintf.so:$LD_LIBRARY_PATH
