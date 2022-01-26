//
//  main.cpp
//  14681
//
//  Created by 김진호 on 2022/01/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    cin>>a>>b;
    if(a>0)
    {
        if(b>0)
        {
            cout<<'1';
        }
        else
        {
            cout<<'4';
        }
    }
    if(a<0)
    {
        if(b>0)
        {
            cout<<'2';
        }
        else
        {
            cout<<'3';
        }
    }
    return 0;
}
