//
//  main.cpp
//  2562
//
//  Created by 김진호 on 2022/01/31.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a[9],max=0,num;
    for(int i=0;i<9;i++)
    {
        cin>>a[i];
        if(max<a[i])
        {
            max=a[i];
            num=i;
        }
    }
    cout<<max<<endl<<num+1;
    return 0;
}
