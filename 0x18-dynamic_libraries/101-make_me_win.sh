#!/bin/bash
wget -P .. https://github.com/Z24B/alx-low_level_programming/blob/2f08cc87585ac4256d440d2dd96df18829e2140d/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD="$PWD/../jackpot.so"
