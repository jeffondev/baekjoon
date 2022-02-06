//
//  main.cpp
//  3052
//
//  Created by 김진호 on 2022/02/06.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int a[1001]={0,},num;
    for(int i=0; i<10; i++)
    {
        cin>>num;
        a[num%42]++;
        num=0;
    }
    for(int i=0; i<1001; i++)
    {
        if(a[i]>0)
        {
            num++;
        }
    }
    cout<<num;
    return 0;
}
