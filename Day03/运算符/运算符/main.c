//
//  main.c
//  运算符
//
//  Created by Neworigin on 18/5/9.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   /*
    float b = 4.2;
    int c= 4;
    printf("%d\n",c%3);
   */
    
    
   /*
    int i = 1;
    int j = ++i;
    
    printf("%d\n",i++);
    printf("%d\n",j++);
    printf("%d\n",++j);
    printf("%d\n",i++);
    printf("%d\n",++j);
    printf("%d\n",j++);
    //++在前就先自加1再赋值传值，++在后就先赋值、传值，然后再自加1
    */
    
    /*
    int i = 1;
    int j = 2;
    if(--i && --j){//--j没有执行
        printf("1:i=%d j=%d\n",i,j);
    }
    else
        printf("2:i=%d j=%d\n",i,j);
    
    if(--j && i--){
        printf("3:i=%d j=%d\n",i,j);
    }
    else
        printf("4:i=%d j=%d\n",i,j);
    
    int a = 1;
    int b = a++;
    
    printf("b=%d,a=%d\n",b,a);
    
    if(b||a--)//a-- 没有执行
    printf("b=%d,a=%d\n",b,a);
    
//    if(b--||a--)//b--为真（先判断然后自减1） a-- 还是没有执行
//        printf("b=%d,a=%d\n",b,a);
    
    if(--b||a--)//--b为假（先减1 然后判断），所以 a-- 执行了
    printf("b=%d,a=%d\n",b,a);
    
    return 0;
    */
    
    
    /*
    
    //三目运算符 表达式1？表达式二：表达式三
    int a = 5;
    int b = 10;
    int max = a > b ? --a : --b;
    printf("max = %d，a = %d,b = %d\n",max,a,b);
    b = 4;
    max = a > ++b ? --a : b++;
    printf("max = %d，a = %d,b = %d\n",max,a,b);
    //++b先运行，然后判断（优先级）
    
     */
    
    
    //类型转换
    //隐式类型转换，由编译器自己完成，显示类型转换需要手动强转
    float pi = 3.14;
    int a = pi;
    printf("a = %d\n",a);
    printf("a+pi = %f\n",a+pi);//隐式转换，输出为6.140000 先整形转换成了浮点型float
    int t1 =1;
    char t = 'a';
    printf("%d \n",t1+t);//98 隐式转换  t 先转换成了整形，然后再计算得出结果98
    printf("%c \n",t1+t);//b   同上，但是格式控制符位字符符，输出单个字符  b
    printf("%d \n",(char)t1+t); //显式转换， 将t1整形数据类型强制转换成更低级的char类型
    printf("%c \n",(char)t1+t); // b
    //显示转换
    float b = 3.123;
    int c = (int)b;
    printf("c = %d\n",c);
    
    const int n = 11;
    int arr[n];
    printf("请输入11个数：\n");
    //73 32 76 111 118 101 32 89 111 117 33
    for(int i = 0; i < n;i++)
        scanf("%d",&arr[i]);
    
    
    for(int i = 0; i < n;i++)
        printf("%c",arr[i]);
    printf("\n");
    
    
    
    /*
    //t7 test
    char a = '1', b='2';
    
    printf("%c,",b++);
    printf("%d,",b);
    printf("%c,",b);
    printf("qqq%c\n",b-a);//无法显示
    printf("%d\n",b-a);
    
    
    */
    /*
    //t9 test
    int a =2;
    int b = 1;
    b = a&& (-1);
    if(b)
        printf("b不为0");
    else{
        printf("b为0");
    }
    
    */
    
    /*
    //t10
    int k = 3;
    printf("%d ",k*=10+10);
    int x = 6;
    x-=x*x;//-30
    x+=x;//x = x + x = -60
    printf("%d ",x);
    */
    
    /*
    //t17
    
    int hight = 5;
    int width = 3;
    
    printf("area = %d,circumference = %d \n", hight*width,(hight+width)*2);
    
    float hight2 = 6.8;
    float width2 = 2.3;
    
    printf("area = %f,circumference = %f \n", hight2*width2,(hight2+width2)*2);
     */
    /*
    //t18
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    printf("sum = %d,ave = %.2f\n",a+b+c,(a+b+c)/3.0);
    */
}
