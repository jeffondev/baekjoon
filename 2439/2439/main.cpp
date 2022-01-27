//
//  main.cpp
//  2439
//
//  Created by 김진호 on 2022/01/27.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

