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

    // C言語では 文字列 = charの配列（※ 終端は「\0」）
    // char str[] = {'a', 'b', 'c', '\0'}; のようにも書ける
    char str[] = "abc";

    // 出力する際は普通に下記のような形でOK
    printf("%s\n", str);

    return 0;
}
