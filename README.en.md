# mt19937 (simplified)

[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

This repository provides a c-program for (simplified) mt19937, a pseudo random generator.

As a complementary material for the lecture "CSIT Exp1 - Optimization", the program only provides two functions: `void seed(uint_fast32_t)` and `uint_fast32_t genrand(void)`.
This design choice is for simplicity.

## Usage

1. Copy `mt19937.c` and `mt19937.h` into your project directory.
2. Include `mt19937.h` from your main file (= `tspsolve.c` in the lecture note).

    ```c
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>

    #include "mt19937.h"

    ...
    ```

3. Compile with `mt19937.c`.

    ```sh
    gcc -o tspsolve tspsolve.c mt1993.c -lm -I.
    ```

## Sample code

`sample.c` shows how to use mt19937 in a simple program.
The program prints 10 interger random numbers within a range of `[0, 100]`, and 10 floating point random numbers within a range of `[0.0, 1.0]`.

You can build and execute `sample.c` with the following commands:

```sh
gcc -o mt19937 sample.c mt19937.c
./mt19937
```

## Acknowledgment

__mt19937__ is originally coded by Takuji Nishimura and Makoto Matsumoto.
The original code is provided [here](http://www.math.sci.hiroshima-u.ac.jp/m-mat/MT/mt.html).
The software is licenced under BSD 3-clause license.
