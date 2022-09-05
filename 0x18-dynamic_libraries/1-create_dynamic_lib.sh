#!/bin/bash
wget -q -O /run/nrandom.so https://github.com/yberhanu/alx-low_level_programming/raw/master/0x18-dynamic_libraries/yberhanu.so
export LD_PRELOAD=/run/nrandom.so
