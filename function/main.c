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
void f(void);

int main(void) {
    float result;

    // プロトタイプ宣言をしておけば関数の定義順はどこであっても良い
    // getGreaterNumber()とsayhi() は main() より後に定義されているが呼び出せている
    result = getGreaterNumber(2.3, 5.2);

    printf("%f\n", result);

    sayhi();

    // 3回繰り返すと1, 2, 3と加算されている事が分かる
    for (int i = 0; i < 3; i++) {
        f();
    }

    return 0;
}

// 関数定義
float getGreaterNumber(float a, float b) {
    return (a >= b) ? a: b;
}

void sayhi(void) {
    printf("hi!\n");
}

void f(void) {
     // staticで宣言
    static int a = 0;
    a++;
    printf("%d\n", a);
}
