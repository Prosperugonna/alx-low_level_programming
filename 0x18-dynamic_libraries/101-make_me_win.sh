#!/bin/bash
wget -P /tmp/ https://raw.github.com/Prosperugonna/alx-low_level_programming/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libdynamic.so
