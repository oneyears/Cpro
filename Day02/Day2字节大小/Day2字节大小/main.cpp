//
//  main.cpp
//  Day2字节大小
//
//  Created by Neworigin on 18/5/8.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int a = 2;
    float f = 3.1;
    short s = 1;
    long l = 100;
    double d = 3.14;
    char c = 'a';
    cout<<sizeof(a)<<" "<< sizeof(f)<<" "<< sizeof(s)<<" "<< sizeof(l)<<" "<< sizeof(d)<<" "<< sizeof(c)<<" "<<endl;
    return 0;
}
