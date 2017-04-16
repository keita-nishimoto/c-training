//
//  main.c
//  c-training
//
//  Created by KeitaNishimoto on 2017/04/11.
//  Copyright © 2017年 KeitaNishimoto. All rights reserved.
//

#include <stdio.h>

// 関数定義
float getGreaterNumber(float a, float b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {
    float result;
    result = getGreaterNumber(2.3, 5.2);

    printf("%f\n", result);
    return 0;
}
