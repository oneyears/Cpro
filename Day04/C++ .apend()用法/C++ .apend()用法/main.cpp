//
//  main.cpp
//  C++ .apend()用法
//
//  Created by Neworigin on 18/5/10.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //字符串合并
   /*
    string s ="hello";
    const char *c = "out here ";
    s.append(c);
    cout<<s<<endl;
   */
    
//    append函数是向string的后面追加字符或字符串。
//    1).向string的后面加C-string
//    string s = “hello “; const char *c = “out here “;
//    s.append(c); // 把c类型字符串s连接到当前字符串结尾
//    s = “hello out here”;
    /*
    string s ="hello ";
    const char *c = "out1 here ";
    s.append(c,3);//前三个字符（注意不是4个）
    cout<<s<<endl;
    */
    
//    2).向string的后面加C-string的一部分
//    string s=”hello “；const char *c = “out here “;
//    s.append(c,3); // 把c类型字符串s的前n个字符连接到当前字符串结尾
//    s = “hello out”;
   
    /*========================
    string s ="hello ";
    string s1 = "wide ";
    string s2 = "world ";
    
    s.append(s1);
    cout<<s<<endl;
    s += s2;
    cout<<s<<endl;
    */
    
//    3).向string的后面加string
//    string s1 = “hello “; string s2 = “wide “; string s3 = “world “;
//    s1.append(s2); s1 += s3; //把字符串s连接到当前字符串的结尾
//    s1 = “hello wide “; s1 = “hello wide world “;
    /*==============================
    string s1 = "hello ",s2 = "wide1 world ";
    s1.append(s2, 5,5);//包括空格也算进去了,记得是从5开始的5个字符
    cout<<s1<<endl;
    // 第2种写法
    string str1 = "hello ",str2 = "wide world12 1";
    str1.append(str2.begin(),str2.end());//从第5个开始到结束
    cout<< str1<<endl;
//    4).向string的后面加string的一部分
//    string s1 = “hello “, s2 = “wide world “;
//    s1.append(s2, 5, 5); ////把字符串s2中从5开始的5个字符连接到当前字符串的结尾
//    s1 = “hello world”;
//    string str1 = “hello “, str2 = “wide world “;
//    str1.append(str2.begin()+5, str2.end()); //把s2的迭代器begin()+5和end()之间的部分连接到当前字符串的结尾
//    str1 = “hello world”;
    */
    
    string s1 = "hello ";
    s1.append(4, '!');//在当前字符串的结尾添加4个字符
    cout<<s1<<endl;
    
    
//    5).向string后面加多个字符
//    string s1 = “hello “; 
//    s1.append(4,’!’); //在当前字符串结尾添加4个字符! 
//    s1 = “hello !!!!”;
}
