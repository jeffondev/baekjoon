//
//  main.cpp
//  11022
//
//  Created by 김진호 on 2022/01/27.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        cout<<"Case #"<<i<<": "<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
    return 0;
}

