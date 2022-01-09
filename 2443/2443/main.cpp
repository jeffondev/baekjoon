//
//  main.cpp
//  2443
//
//  Created by 김진호 on 2022/01/09.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,m=1;
    cin>>n;
    for(int k=0; k<n; k++)
    {
        for(int j=0; j<=k; j++)
        {
            cout<<" ";
        }
        for(int i=0; i<2*n-m; i++)
        {
            cout<<"*";
        }
        for(int j=0; j<=k; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        m+=2;
    }
    return 0;
}
