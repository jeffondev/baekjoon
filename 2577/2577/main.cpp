//
//  main.cpp
//  2577
//
//  Created by 김진호 on 2022/01/31.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b,c,n[10]={0,},num1;
    cin >> a >> b >> c;
    string t = to_string(a * b * c);

    for(int i=0; i<t.length(); i++)
    {
        int num1 = t[i] - '0';
        n[num1]++;
    }
    for(int i=0; i<=9; i++)
    {
        cout<<n[i]<<endl;
    }
    return 0;
}

//17037300
