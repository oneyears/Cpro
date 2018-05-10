//
//  main.cpp
//  MapTest
//
//  Created by Neworigin on 18/5/9.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> mymap;
//    if(!mymap.empty())
//        cout<<"非空map"<<endl;
//    else{
//        cout<<"空map"<<endl;
//    }
    map<int ,string> ID_NAME ={
        {2015,"jim"},
        {2016,"TOM"},
        {2017,"Bob"},
        {2018,"ls"}
    };
    
   
    ID_NAME[2014] = "Tom";
    
    mymap.insert(pair<char,int>('a',100));
    mymap.insert(pair<char,int>('b',200));
    
    pair<map<char,int>::iterator,bool> ret;
    
    ret = mymap.insert(pair<char,int>('c',100));
    if(ret.second == false) {
        cout<<"element 'z'aleady existed ";
        cout<<"with a value of"<<ret.first->second<<endl;
    }else{
        cout<<"插入成功"<<endl;
    }
    
    map<char,int> ::iterator it = mymap.begin();
    mymap.insert(it,pair<char,int>('d',400));
    
    map<char,int>anotermap;
    anotermap.insert(mymap.begin(),mymap.find('c'));
    
    
    //取值
    
    cout<<ID_NAME[2016].c_str()<<endl;
    //or
     cout<<ID_NAME[2016]<<endl;
    ID_NAME.at(2016)="JACK";
    cout<<ID_NAME[2016]<<endl;
    
    
    //容量查询
    if(!mymap.empty())
        cout<<"非空map"<<endl;
    else{
        cout<<"空map"<<endl;
    }
    cout<<ID_NAME.size()<<endl;
    cout<<mymap.size()<<endl;
    
    //存在为1，不存在为 0
    cout<<ID_NAME.count(2016)<<endl;
    
    //迭代器
    map<int,int> ::iterator it;
    map<int,int> mmap;
    const map<int,int> const_mmap;
    
    it = mmap.begin();
    mmap.cbegin();
    
    const_mmap.begin();
    const_mmap.cbegin();
    
    //返回的迭代器可以进行加减操作，如果map为空，begin = end
    
    //删除
    iterator<, <#class _Tp#>
    
    
    
    //    // 插入单个值
//    mymap.insert(pair<char, int>('a', 100));
//    mymap.insert(pair<char, int>('z', 200));
//    
//    //返回插入位置以及是否插入成功
//    pair<map<char, int>::iterator, bool> ret;
//    ret = mymap.insert(pair<char, int>('z', 500));
//    if (ret.second == false) {
//        cout << "element 'z' already existed";
//        cout << " with a value of " << ret.first->second << '\n';
//    }
//    
//    //指定位置插入
//    map<char, int>::iterator it = mymap.begin();
//    mymap.insert(it, pair<char, int>('b', 300));  //效率更高
//    mymap.insert(it, pair<char, int>('c', 400));  //效率非最高
//    
//    //范围多值插入
//    map<char, int> anothermap;
//    anothermap.insert(mymap.begin(), mymap.find('c'));
//    
//    // 列表形式插入
//    anothermap.insert({ { 'd', 100 }, {'e', 200} });
//    
    return 0;
}