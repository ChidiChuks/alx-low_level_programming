#!/bin/bash
gcc -Wall -fPIC -shared -o libgm.so 101-md5_gm.c -ldl
export LD_PRELOAD=$PWD/libgm.so
