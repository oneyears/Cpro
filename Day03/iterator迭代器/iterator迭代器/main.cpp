//
//  main.cpp
//  iterator迭代器
//
//  Created by Neworigin on 18/5/9.
//  Copyright © 2018年 Neworigin. All rights reserved.
//

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>intVector;
    intVector.push_back(10);
    intVector.push_back(20);
    intVector.push_back(30);
    intVector.push_back(40);
    intVector.push_back(50);
    intVector.push_back(60);
    
    vector<int>::iterator p1 = intVector.begin();
    for (; p1 != intVector.end(); p1++)
    {
        cout << *p1 <<" " <<&p1<<endl;
    }
    cout <<endl<< "the last" << *p1 << endl;
    //此时p1 指针指向的是end（）区域为 空 ，输出的值是 0
    //  vector iterator is not dereferencable
    cout <<endl<< &p1 <<endl;
    //p1是指针，他有他的地址，所以他本身的地址是固定的
    cout  << *(--p1) << "  "<<&p1<<endl;
    //60 由于p1 往回减一，所欲对于的值是60，但是地址仍然不变
    cout << *(p1 - 3) <<" "<<&p1<< endl;
    //第6个再减3 得第三个，输出 30
    cout << p1[-2] << " "<<&p1<<endl;
    //p1[0]表示最后一个数 60，其p1[-3] 表示的是从60往后减3 得30
    //但是注意 p1[1.2. 3++]都是 0为空，以为此时的指针是指向末尾的，只能往后查找
    
    //p1[-3]是查找，指针实际没有移动，其指针值扔为60
    cout << *p1 << "  " << &p1<< endl;
    
    cout<<endl;
    //*p可以直接赋值
    *p1 = 1234;
    cout << *p1 << " " << &p1 << endl;
    //此时p1 指向的是末尾，
    for (; p1 != intVector.end(); p1++)
    {
       cout << *p1 << " " << &p1 << endl;
    }
    cout << endl << endl;
    for (p1=intVector.begin(); p1 != intVector.end(); p1++)
    {
       cout << *p1 << " " << &p1 << endl;
    }
//    cin.get();
    return 0;
}