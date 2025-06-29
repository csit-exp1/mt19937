#include <stdio.h>
#include <time.h>

#include "mt19937.h"

int main(void) {
    // シード値を実行のたびに変える
    seed((uint_fast32_t)time(NULL));

    // 例 1) [0, 100) の整数乱数を10回生成
    printf("Integer [0, 100)\n");
    printf("----------------\n");
    for (int i = 0; i < 10; ++i) {
        printf("%u\n", genrand() % 100);
    }
    printf("\n");

    // 例 2) [0.0, 1.0] の浮動小数点数を10回生成
    printf("Floating point [0.0, 1.0]\n");
    printf("-------------------------\n");
    for (int i = 0; i < 10; ++i) {
        float rnd = genrand() / (float)MT19937_MAX;
        printf("%f\n", rnd);
    }

    return 0;
}
