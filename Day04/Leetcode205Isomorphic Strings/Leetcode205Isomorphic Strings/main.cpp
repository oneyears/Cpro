//
//  main.cpp
//  Leetcode205Isomorphic Strings
//
//  Created by Neworigin on 18/5/10.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<int, char> mic;
        map<char, int> mci;
        
        
        if(s.size() != t.size())
            return false;
        for(int i = 0; i < s.size(); i++) {
            if(mic[s[i]] == 0 && mci[t[i]] == 0) {
                mic[s[i]] = t[i];
                mci[t[i]] = s[i];
                continue;
            }
            if(mic[s[i]] != t[i])
                return false;
            
        }
        return true;
 
        
        
    }
};

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
    return 0;
}
