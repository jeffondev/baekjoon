//
//  main.cpp
//  8393
//
//  Created by 김진호 on 2022/01/27.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cnt+=i;
    }
    cout<<cnt;
    return 0;
}
