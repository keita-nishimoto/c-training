//
//  main.c
//  c-training
//
//  Created by KeitaNishimoto on 2017/04/11.
//  Copyright © 2017年 KeitaNishimoto. All rights reserved.
//

#include <stdio.h>

// if文
int main(void) {
    int score = 55;

    if (score >= 60) {
        printf("OK!\n");
    } else if(score >= 50) {
        printf("so so...\n");
    } else {
        printf("NG!\n");
    }

    return 0;
}
