//
//  main.cpp
//  10156
//
//  Created by 김진호 on 2022/01/02.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int k, n, m, s;
    cin>> k >> n >> m;
    s = k * n;
    if(s<=m)
    {
        cout<<"0";
    }
    else
    {
        cout<<s-m;
    }
    return 0;
}
