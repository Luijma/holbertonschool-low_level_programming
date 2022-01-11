#!/bin/bash
gcc *.c -c -fPIC liball.so
gcc *.o -shared -o liball.so
