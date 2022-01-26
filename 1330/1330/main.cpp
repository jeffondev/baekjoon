//
//  main.cpp
//  1330
//
//  Created by 김진호 on 2022/01/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<">";
    }
    else if (a<b)
    {
        cout<<"<";
    }
    else
    {
        cout<<"==";
    }
    return 0;
}
