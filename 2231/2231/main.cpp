//
//  main.cpp
//  2231
//
//  Created by 김진호 on 2022/05/08.
//

#include <iostream>
using namespace std;

int calc (int a){
    int sum = a;
    string s = to_string(a);
    for(int i=0; i<s.length(); i++)
    {
        int num = s[i] - '0';
        sum += num;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    string s = to_string(n);
    for(int i=(n - s.length() * 9); i<n; i++)
    {
        int r = calc(i);
        if(r == n)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<'0';
    return 0;
}
