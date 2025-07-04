/*
  A C-program for MT19937, originally coded by Takuji Nishimura and Makoto
  Matsumoto. This is a simplified version for the lecture `CSIT Exp1` by
  Yasumasa Tamura.

  Copyright (c) 2013, 2016 Mutsuo Saito, Makoto Matsumoto and Hiroshima
  University. Copyright (c) 2024 Yasumasa Tamura. All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are
  met:

      * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above
        copyright notice, this list of conditions and the following
        disclaimer in the documentation and/or other materials provided
        with the distribution.
      * Neither the name of the Hiroshima University nor the names of
        its contributors may be used to endorse or promote products
        derived from this software without specific prior written
        permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef CSIT_EXP1_MT19937
#define CSIT_EXP1_MT19937

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/// The maximum value the function `genrand` may return.
extern uint_fast32_t MT19937_MAX;

/// Initializes mt19937 with a given seed
/**
 * \param[in] seed seed value
 */
void seed(uint_fast32_t seed);

/// Generates a random number
/**
 * @return a random integer
 */
uint_fast32_t genrand(void);

#ifdef __cplusplus
}
#endif

#endif /* CSIT_EXP1_MT19937 */
