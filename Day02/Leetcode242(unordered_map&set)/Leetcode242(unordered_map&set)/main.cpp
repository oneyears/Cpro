//
//  main.cpp
//  Leetcode242(unordered_map&set)
//
//  Created by Neworigin on 18/5/8.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <iostream>
#include <map>
#include <vector>
using namespace std;
//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        vector<int> count(26,0);
//        for(int i = 0; i < n; i++)
//            count[s[i]-'a']++;
//        for(int i = 0 ; i < n;i++){
//            count[t[i]-'a']--;
//        }
//        for(int i = 0; i < 26;i++){
//            if(count[i]!=0)
//                return false;
//        }
//        return  true;
//        
//    }
//};

int main(int argc, const char * argv[]) {
    string a = "bcd";
    cout<<a.size()<<endl;
    cout<<a[1]-'A'<<endl;
    cout<<a[1]-'a'<<endl;
    cout<<a[0]-'a'<<endl;
    return 0;
}
