//
//  main.c
//  EnumTest
//
//  Created by Neworigin on 18/5/8.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double d = 2.131231218;
    printf("%.8lf\n",d);
    printf("%.7f\n",d);
    printf("%.9lf\n",d);
    scanf("%lf",&d);
    printf("%lf\n",d);
    printf("%f\n",d);
    printf("%lf\n",d);
 /*
    enum color{
        blue,
        red,
        green,
        yellow,
        black
        
    };
    printf("%d\n",blue);
    printf("%d\n",black);
    
    enum sex{
        boy = 1,
        girl,
        men,
        women
    };
    
    printf("%d\n",boy);
    printf("%d\n",girl);
    printf("%d\n",women);
    
    printf("%d\n",women);
 */
    
    
//    enum mineral{
//    small,
//    middle,
//    big
//    }s2 = middle;
//    
//    enum mineral s = big;
//    
//    printf("%d\n",s);
//    printf("%d\n",s2);
//    
//    
//    
    
    return 0;
}
