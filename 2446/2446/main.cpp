//
//  main.cpp
//  2446
//
//  Created by 김진호 on 2022/01/09.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,cnt;
    cin>>n;
    cnt = 2*n-1;
    for(int i=0; i<cnt; i++)
    {
        int space;
        if(i<n)
        {
            space = i;
        }
        else
        {
            space = cnt-i-1;
        }
        for(int j=0; j<space; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<cnt-2*space; j++)
        {
            cout<<"*";
        }
        for(int j=0; j<space; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
