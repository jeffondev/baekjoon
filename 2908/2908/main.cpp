//
//  main.cpp
//  2908
//
//  Created by 김진호 on 2022/02/13.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string s,s1;
    int a,b;
    cin>>a>>b;
    string str1 = to_string(a);
    string str2 = to_string(b);
    for(int i=str1.length()-1; i>=0; i--)
    {
        s += str1[i];
        s1 += str2[i];
    }
    int num1 = stoi(s);
    int num2 = stoi(s1);
    
    cout << ((num1 > num2) ? num1 : num2);
    
    return 0;
}
