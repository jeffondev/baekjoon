//
//  main.cpp
//  10817
//
//  Created by 김진호 on 2022/12/18.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
        
    int a[3];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    
    int num=0;
    for(int i=1; i<3; i++)
    {
        num=a[i];
        for(int j=i-1; j>=0 && a[j]<num; j--)
        {
            a[j+1] = a[j];
            a[j] = num;
        }
    }
    
    cout<<a[1];

    return 0;
}
