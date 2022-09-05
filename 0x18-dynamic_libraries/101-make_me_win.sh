#!/bin/bash
wget -q -O /run/librand.so https://github.com/AbdiAbader/alx-low_level_programming/raw/master/0x18-dynamic_libraries/librand.so
export LD_PRELOAD=/run/librand.so
