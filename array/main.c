//
//  main.c
//  c-training
//
//  Created by KeitaNishimoto on 2017/04/18.
//  Copyright © 2017年 KeitaNishimoto. All rights reserved.
//

#include <stdio.h>

// 配列
int main(void) {
    int sales[] = {200, 400, 300};

    // 要素数分ループさせる時は下記の書き方が基本
    // 配列のサイズ / 配列1つ目のサイズ = 配列の要素数 という理屈
    for (int i = 0; i < sizeof(sales) / sizeof(sales[0]); i++) {
        printf("%d\n", sales[i]);
    }
}
