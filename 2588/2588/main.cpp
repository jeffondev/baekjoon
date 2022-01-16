//
//  main.cpp
//  2588
//
//  Created by 김진호 on 2022/01/16.
//

#include <iostream>
using namespace std;
#include <string>


int main(int argc, const char * argv[]) {
    int num1,a,c=0,f=1;
    string num2;
    cin>>num1>>num2;
    for(int i=2;i>=0;i--)
    {
        
        int b = num2[i]-'0';
        a=num1*b;
        c+=a*f;
        cout<<a<<endl;
        f=f*10;
    }
    cout<<c;
    return 0;
}
