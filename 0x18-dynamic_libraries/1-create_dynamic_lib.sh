#!/bin/bash
gcc *.c -c -fPIC liball.so
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
