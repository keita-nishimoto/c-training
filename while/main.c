//
//  main.c
//  c-training
//
//  Created by KeitaNishimoto on 2017/04/11.
//  Copyright © 2017年 KeitaNishimoto. All rights reserved.
//

#include <stdio.h>

// while
int main(void) {
    int m = 0;

    while (m < 10) {
        printf("%d\n", m);
        m++;
    }

    int n = 20;

    do {
        printf("%d\n", n);
        n++;
    } while (n < 10);

    return 0;
}
