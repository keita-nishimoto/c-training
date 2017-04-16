//
//  main.c
//  c-training
//
//  Created by KeitaNishimoto on 2017/04/11.
//  Copyright © 2017年 KeitaNishimoto. All rights reserved.
//

#include <stdio.h>

// プロトタイプ宣言
float getGreaterNumber(float a, float b);
void sayhi(void);

int main(void) {
    float result;
    result = getGreaterNumber(2.3, 5.2);

    printf("%f\n", result);

    sayhi();

    return 0;
}

// 関数定義
float getGreaterNumber(float a, float b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

void sayhi(void) {
    printf("hi!\n");
}
