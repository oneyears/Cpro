//
//  main.cpp
//  MapTest
//
//  Created by Neworigin on 18/5/8.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
    map <int,int> myMap;
    
    if(myMap.find(42)==myMap.end() )
        cout<<"Can not find element 42"<<endl;
    else
        cout<<"Element 42 is in the map"<<endl;
    
    cout<<myMap[42]<<endl;
    //在C++ 的map 容器上，打印的是 0 如果是其他语言的map 可能打印的是越界（NULL？）
    //且 C++ 的map 容器只要有用过某一数值时（42），它的值就真实存在了
    if(myMap.find(42)==myMap.end() )
        cout<<"Can not find element 42"<<endl;
    else
        cout<<"Element 42 is in the map"<<endl;
    
    myMap[42]++;
    cout<<myMap[42]<<endl;
    if(myMap.find(42)==myMap.end() )
        cout<<"Can not find element 42"<<endl;
    else
        cout<<"Element 42 is in the map"<<endl;
    
    myMap[42]--;
    cout<<myMap[42]<<endl;
    if(myMap.find(42)==myMap.end() )
        cout<<"Can not find element 42"<<endl;
    else
        cout<<"Element 42 is in the map"<<endl;
    
    myMap.erase(42);
    
    if(myMap.find(42)==myMap.end() )
        cout<<"Can not find element 42"<<endl;
    else
        cout<<"Element 42 is in the map"<<endl;
    
    return 0;
}
