//
//  main.c
//  c-training
//
//  Created by KeitaNishimoto on 2017/04/11.
//  Copyright © 2017年 KeitaNishimoto. All rights reserved.
//

#include <stdio.h>

// 演算の基本
int main(void) {
    int x;

    // 1
    x = 10 % 3;
    printf("%d\n", x);

    // 4
    x += 3;
    printf("%d\n", x);

    // 5
    x++;

    printf("%d\n", x);
    return 0;
}
