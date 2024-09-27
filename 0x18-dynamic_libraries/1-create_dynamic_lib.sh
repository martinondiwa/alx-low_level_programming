#!/bin/bash

# Compile all C files with warnings 
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c

# Create a shared library from the object files
gcc -shared -o liball.so *.o

# Set the library path for the current session
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

