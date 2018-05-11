//
//  main.cpp
//  Day04Test
//
//  Created by Neworigin on 18/5/10.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string str = "dog cat cat dog";
    string pattern = "abba";
    istringstream stc(str);
    string s;
    vector<string> vs;
    while (stc >>s) {
        vs.push_back(s);
    }
    
    vector<string> :: iterator it;
    for(it = vs.begin(); it != vs.end(); it++) {
        cout<< *it<<endl;
    }
    
    
    map<string,char> s2c;
    map<char,string> c2s;
    // s2c s2c[string] = char 类型
    // c2s c2s[char] = string
    //vs[0】表示 dog cat[1] 表示 cat...
    // s2c[vs[i]] 表示存的 [dog]为索引，新的值为0
    // c2s[pattern[i]] 表示存的 [a] 为索引 其字符串为空“”
    // 一开始比为 0 和空 ，所以需要存值，将 s2c[dog]的值对应其字符 a
    // 将c2s[a] 对应的值为字符串'dog'
    //此时可以直接对下一个进行判断了
    //如果发现对应的key值存在，则判断其相对应的值是否相等即可
    //s2c[vs[i](cat)](b) = pattern[3](b) ,相同，所以不会return false
    // 当所以i遍历完，都不会出错，则达成要求了
    for(int i = 0; i < vs.size(); i ++){
        if(s2c[vs[i]] == 0 && c2s[pattern[i]] == ""){
            s2c[vs[i]] = pattern[i];
            c2s[pattern[i]] = vs[i];
            continue;
        }
        if(s2c[vs[i]] != pattern[i])
        return false;
    }
    
    printf("true\n");
//    string str = "asasdas qweq asdv qwf";
//    istringstream s2c(str);
//    vector<string> vec;
//    string s ;
//    while(s2c >> s) {
//        vec.push_back(s);
//    }
//    
//    vector<string>:: iterator it2;
//    for(it2 = vec.begin(); it2 != vec.end();it2++)
//        cout<<*it2<<endl;
    
    
    
    
    return 0;
}
