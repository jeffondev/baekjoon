//
//  main.cpp
//  9012
//
//  Created by 김진호 on 2022/04/24.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

void check(string s)
{
    stack<int> stk;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(')
        {
            stk.push(1);
        }
        else
        {
            if(stk.empty())
            {
                cout<<"NO"<<endl;
                return;
            }
            else
            {
                stk.pop();
            }
        }
    }
    if(stk.empty())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main(int argc, const char * argv[]) {
    int n;
    string g;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>g;
        check(g);
    }
    return 0;
}
