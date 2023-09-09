#!/bin/bash
gcc _wall _pendantic _Werror _Wextra _c *.c
ar _rc liball.a *.o
ranlib liball.a
