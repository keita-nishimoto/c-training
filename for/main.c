//
//  main.c
//  c-training
//
//  Created by KeitaNishimoto on 2017/04/11.
//  Copyright © 2017年 KeitaNishimoto. All rights reserved.
//

#include <stdio.h>

// for
int main(void) {
    int i;
    for (i = 0; i < 10; i++) {

        // 3の時処理をスキップする
        if (i == 3) {
            continue;
        }

        // 8の時にループを抜ける
        if (i == 8) {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}
