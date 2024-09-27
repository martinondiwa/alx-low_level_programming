#!/bin/bash
# Download the dynamic library to /tmp directory

wget -P /tmp https://github.com/martinondiwa/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so

# Export the dynamic library to be preloaded
export LD_PRELOAD=/tmp/nrandom.so

