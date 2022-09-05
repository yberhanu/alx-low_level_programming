#!/bin/bash
wget -P /tmp/ https://raw.github.com/yberhanu/alx-low_level_programming/master/0x18-dynamic_libraries/librand.so
export LD_PRELOAD =/tmp/librand.so
