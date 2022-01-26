//
//  main.cpp
//  2753
//
//  Created by 김진호 on 2022/01/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a;
    cin>>a;
    if(a%400==0)
    {
        cout<<'1';
    }
    else if (a%100==0)
    {
        cout<<'0';
    }
    else if (a%4==0)
    {
        cout<<'1';
    }
    else
    {
        cout<<'0';
    }
    return 0;
}
