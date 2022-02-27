//
//  main.cpp
//  1712
//
//  Created by 김진호 on 2022/02/27.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int b,c;
    long long a,cnt=0;
    cin>>a>>b>>c;
    if(b>c || c-b == 0)
    {
        cout<<"-1";
        return 0;
    }
    cout<<a/(c-b)+1;
    return 0;
}
