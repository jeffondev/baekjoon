//
//  main.cpp
//  2522
//
//  Created by 김진호 on 2022/01/09.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int n,m=1;
    cin>>n;
    for(int j=1; j<=n; j++)
    {
        for(int k=n-m; k>=1; k--)
        {
            cout<<" ";
        }
        for(int h=1; h<=j; h++)
        {
            cout<<"*";
        }
        cout<<endl;
        m++;
    }
    m=1;
    for(int j=n-1; j>=1; j--)
    {
        for(int k=1; k<=n-(n-m); k++)
        {
            cout<<" ";
        }
        for(int h=j; h>=1; h--)
        {
            cout<<"*";
        }
        cout<<endl;
        m++;
    }
    return 0;
}
