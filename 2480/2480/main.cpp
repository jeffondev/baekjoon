//
//  main.cpp
//  2480
//
//  Created by 김진호 on 2022/01/02.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    
    int num=0,count=0,a[7]={};
    a[n1]++;
    a[n2]++;
    a[n3]++;
    for(int i=1;i<=6;i++)
    {
        if(count <= a[i])
        {
            num=i;
            count=a[i];
        }
    }
    if(count == 3)
    {
        cout<<10000+num*1000;
    }
    else if(count == 2)
    {
        cout <<1000+num*100;
    }
    else
    {
        cout<<num*100;
    }
    return 0;
}
