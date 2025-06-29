# mt19937 (simplified)

[![License](https://img.shields.io/badge/License-BSD_3--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

簡易化した疑似乱数生成器 mt19937 の実装を与えます．

ここで公開しているプログラムは，北海道大学工学部情報理工学コース専門科目「情報理工学実験I 最適化」において使用することを想定しています．
オリジナルの mt19937 の実装に対し，本プログラムは単純に以下の 3つ の機能のみを提供します．

* シード値を設定する関数 `void seed(uint_fast32_t)`
* 32bit 符号なし整数型の疑似乱数を生成する関数 `uint_fast32_t genrand(void)`
* 関数 `uint_fast32_t genrand(void)` が出力し得る最大値 `MT19937_MAX`

## 使い方

1. 2つのファイル `mt19937.c` および `mt19937.h` を実験で使用しているディレクトリにコピーしてください．
2. ヘッダファイル `mt19937.h` を自身のプログラム中で `include` してください．

    ```c
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>

    #include "mt19937.h"

    ...
    ```

3. 自身のプログラムをコンパイルする際に，`mt19937.c` も共にコンパイルし，リンクしてください．たとえば演習において実装中のプログラムファイルを `tspsolve.c` としたとき，以下のようなコマンドにより，コンパイルとリンクを同時に行うことができます．

    ```sh
    gcc -o tspsolve tspsolve.c mt1993.c -lm -I.
    ```

## サンプルコード

`sample.c` にサンプルコードを示します．
このサンプルコードでは，`[0, 100)` の範囲で整数型の擬似乱数，`[0.0, 1.0]` の範囲で浮動小数点数型の疑似乱数をそれぞれ 10回 ずつ生成し，画面に表示します．

You can build and execute `sample.c` with the following commands:
使い方に示した通り，以下コマンドでサンプルコードをココンパイル実行することができます．

```sh
gcc -o sample sample.c mt19937.c
./sample
```

## Acknowledgment

__mt19937__ is originally coded by Takuji Nishimura and Makoto Matsumoto.
The original code is provided [here](http://www.math.sci.hiroshima-u.ac.jp/m-mat/MT/mt.html).
The software is licenced under BSD 3-clause license.
