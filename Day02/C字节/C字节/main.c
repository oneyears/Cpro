//
//  main.c
//  C字节
//
//  Created by Neworigin on 18/5/8.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 1;
    float f = 1.1;
    char  c = 'a';
    double d = 3.14;
    long l = 100;
    long long ll = 111111;
    short s = 2;
    printf("%d %d %d %d %d %d %d\n",sizeof(a),sizeof(f),sizeof(c),sizeof(d),sizeof(l),sizeof(ll),sizeof(s));
    return 0;
}

