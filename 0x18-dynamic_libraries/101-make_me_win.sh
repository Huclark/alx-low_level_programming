#!/bin/bash 
wget -P .. https://raw.githubusercontent.com/Huclark/alx-low_level_programming/master/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD="$PWD/../libinj.so"
