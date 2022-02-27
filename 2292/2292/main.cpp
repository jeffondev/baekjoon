//
//  main.cpp
//  2292
//
//  Created by 김진호 on 2022/02/27.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,c=1,t=0,i=1;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    while (true)
    {
        if(n<=c)
        {
            cout<<i;
            break;
        }
        t+=6;
        c+=t;
        i++;
    }
    return 0;
}
