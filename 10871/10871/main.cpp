//
//  main.cpp
//  10871
//
//  Created by 김진호 on 2022/01/27.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,x,a;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a<x)
        {
            cout<<a<<" ";
        }
    }
    return 0;
}
