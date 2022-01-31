//
//  main.cpp
//  10952
//
//  Created by 김진호 on 2022/01/31.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    while (true)
    {
        cin>>a>>b;
        if(a==0 && b==0)
        {
            break;
        }
        cout<<a+b<<endl;
    }
    return 0;
}
