//
//  main.cpp
//  Leetcode451Sort Characters
//
//  Created by Neworigin on 18/5/10.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mci;
        
        vector<string> vs(s.size(),"");//创建s.size()大小的容器，且其值都初始为空
        
        for(auto ch:s)//auto 类似于数据类型对应于 后面的数据类型  ,这里可以表示为 char
            mci[ch]++;
        
        for(auto& it:mci){   //这里的取地址符可有可无，auto 此时为mci容器类型（迭代器）
            int n = it.second;//将map容器的数量给int n
            char c = it.first;//将map容器的char 值 给 c
            
            vs[n].append(n,c);
            //将 c这字符 复制两次合并到vs尾部上，如果是相同的数，也直接添加到尾部，
            //因为题目要求也是这样，因此这里算法十分巧妙
           
        }
        string res;
        //通过vs 不为空，来讲res依次逆序来添加字符串到新的字符串里，再返回
        for(int i = s.size(); i > 0; i--) {
            if(!vs[i].empty()){
                
                res.append(vs[i]);
            }
            
        }
        return res;
    }
};

int main(int argc, const char * argv[]) {
    string s = "tree";
    unordered_map<char,int> mci;
   	
    vector<string> vs(s.size()+1,"");
 
    for(auto ch:s)
        mci[ch]++;
    
    for(auto& it:mci){
        int n = it.second;
        char c = it.first;
        
        vs[n].append(n,c);
    }
    string res;
    for(int i = s.size(); i > 0; i--) {
        if(!vs[i].empty()){
            cout<<vs[i]<<endl;
            res.append(vs[i]);
        }
        
    }
    cout<<res<<endl;
   
    
    
    return 0;
}
