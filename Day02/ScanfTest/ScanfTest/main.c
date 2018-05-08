//
//  main.c
//  ScanfTest
//
//  Created by Neworigin on 18/5/8.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a = 1;
    float f = 1.2;
    printf("%d %f\n",a,f);
    scanf("%d%f",&a,&f);
    printf("%d %f\n",a,f);
    return 0;
}
