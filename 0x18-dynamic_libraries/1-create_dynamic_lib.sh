#!/bin/bash

gcc -shared -o liball.so *.c
export LD_LIBRARY_PATH=./liball.so:$LD_LIBRARY_PATH
