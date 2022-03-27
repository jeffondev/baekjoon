//
//  main.cpp
//  2447
//
//  Created by 김진호 on 2022/03/27.
//

#include <iostream>
using namespace std;

char star(int i, int j, int n){

    
    if(n/3==0)
    {
        return '*';
    }
    else if(i/(n/3)%3==1 && j/(n/3)%3==1)
    {
        return ' ';
    }
    else
    {
        return star(i, j, n/3);
    }
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<star(i, j, n);
        }
        cout<<endl;
    }
    return 0;
}
