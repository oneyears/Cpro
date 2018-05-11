//
//  main.c
//  Day04CTest
//
//  Created by Neworigin on 18/5/10.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    //取10个随机数
  /*  int a[10];
    srand(time(NULL));
    for(int i = 0 ; i < 10 ; i++) {
        a[i] = rand() % 100;
        printf("%d ",a[i]);
    }
    printf("\n");
    int max = -999,sum = 0;
    int min = 999;
    for(int i = 0; i < 10; i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min){
            min = a[i];
        }
    }
    sum = max + min;
    printf("%d ",sum);
   */
    
    
    
        
  /*
    // switch 操作
    int  n;
    scanf("%d",&n);
    switch (n) {
        case 1:
            printf("话费查询\n");
            break;
        case 2:
            printf("话费充值\n");
            break;
        case 3:
            printf("流量查询\n");
            break;
        case 4:
            printf("人工服务\n");
            break;
        default:
            printf("请重新输入\n");
            break;
    }
  */
    
    /*
    //do while
    
    int n  = 1;
    do{
        n++;
    }while (n < 10);  //先执行语句，最后判断条件
    printf("%d\n",n);
    */
    /*
    int i  = 0;
    int x = -1;
    do{
        x  = x * x;
        printf("%d ",i);
    }while (!x);
    while (!1) {
        printf("q");
    }
    */
   /*
    int i = 1;
    int j = i++;
    if((i > j++)
       &&
       (i++ == j))
        i += j;
    printf("%d ",i);
    
    //需要注意的是 i++ 虽然优先级更高，但是其数据并没有更新，而是需要等其表达式
    //运算完成在进行自加  ，而--i 则是在表达式运行之前加进行自减
   */
    
    /*
    int a = 3, b = 1;
    if(a > b)
        printf("%d ",a);
    else{
        printf("%d ",b);
    }
    */
    
    /*
   
    enum day{
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    }arr;
    arr = 2;
    switch (arr) {
        case Sunday:
            printf("今天星期日\n");
            break;
        case Monday:
            printf("今天星期一\n");
            break;
        case Tuesday:
            printf("今天星期二\n");
            break;
        case Wednesday:
            printf("今天星期三\n");
            break;
        case Thursday:
            printf("今天星期四\n");
            break;
        case Friday:
            printf("今天星期五\n");
            break;
        case Saturday:
            printf("今天星期六\n");
            break;
        default:
            printf("输入值有问题...\n");
            break;
    }
*/
    int a;
    scanf("%d",&a);
    if(a++>5)
        printf("%d",a);
    else
        printf("%d",a--);
    /*
    int sum = 0;
    for(int i = 1 ; i <=100; i = i + 2)
        sum += i;
        return 0;
     */
    /*
    int n = 1000;
    while (n) {
        if(n % 5 == 0 && n % 3 == 0)
            printf("%d\n",n);
        n--;
    }
     */
    /*
    //t14
    
    int n = 12345;
    int sum;
    int count= 0;
    while (n) {
        sum += n%10;
        n = n/ 10;
        count++;
    }
    printf("%d  %d ",sum,count);
    
    int a , b, c;
    scanf("%d%d%d",&a,&b,&c);
    if(a > b && a > c){
        printf("%d",a);
    }else if (b > c)
        printf("%d",b);
    else{
        printf("%d",c);
    }
    */
    //t16
    
    /*
    //t17
    int n = 3,m =2;
    int a[n][m];
    int sum,max;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m; j++){
            if( a[i][j] > max)
                max = a[i][j];
        }
        sum += max;
    }
    
    */
    /*
    int even = 0,odd = 0;
    for(int i = 1; i <= 100;i++){
        if(i % 2 == 0){
            even += i;
        }else{
            odd += i;
        }
        
    }
    printf("%d %d",even,odd);
    */
    
    /*
    int i = 9999;
    while (i > 1000) {
        int r = i % 100;
        int l = i / 100;
        if((r+l)*(r+l) == 3025){
                printf("%d \n",i);
        }

        i--;
    }
    */
    /*
    int a[10];
    srand(time(NULL));
    for(int i = 0 ; i < 10 ; i++) {
        a[i] = rand() % 100;
        printf("%d ",a[i]);
    }
    printf("\n");
    int max = -999,sum = 0;
    int min = 999;
    for(int i = 0; i < 10; i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min){
            min = a[i];
        }
        sum += a[i];
    }
    printf("%d\n",(sum - max - min)/8);
    */
    /*
    int n;
    int a[n];
    int p,m;
    for(int i = 0 ; i < n; i++){
        scanf("%d",a[i]);
        if(a>0){
            p++;
        }else if(a<0){
            m--;
        }else{
            printf("0不是正数，也不是负数\n");
        }
    }
    printf("%d %d\n",p,m);
    
     */
    
    /*
    // t13; 整数逆序打印,和位数
    int n;
    scanf("%d",&n);
    int count =0 ;
    int re = 0;
    while(n) {
        re = re*10+n%10;
        n /= 10;
        count++;
        
    }
    
    printf("%d %d\n",re,count);
        
    */
    
    /*
    int arr[10] = {3,5,7,2,1,8,6,10,9,4};
    int count = 0,min = 99;
    for(int i = 0; i < 10; i++){
        if(arr[i] < min){
            min = arr[i];
            count = i;
        }
    }
    printf("%d %d\n",min,count);
    */
}
