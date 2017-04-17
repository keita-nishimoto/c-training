//
//  main.c
//  c-training
//
//  Created by KeitaNishimoto on 2017/04/18.
//  Copyright © 2017年 KeitaNishimoto. All rights reserved.
//

// ポインタ: アドレスを格納する為の変数
// メモリ（記憶領域）
// & : アドレス演算子
// * : 間接演算子
// 変数をそのまま渡す = 値渡し
// アドレスを渡す = 参照渡し

#include <stdio.h>

void swap(int *pa, int *pb);

// 参照渡しの簡単な例
int main(void) {
    int a = 5;
    int b = 10;

    // 関数に値ではなく参照を渡す事によってメモリの節約になる
    // ただしオリジナルの値も書き換わっている事に注意
    swap(&a, &b);

    // オリジナルの値を書き換える性質を利用すれば下記のような事も可能
    // 入れ替わっているので "a:10, b:5" と出力されるハズ
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

// aとbの値を入れ替える 引数ではアドレスを受取る
void swap(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
