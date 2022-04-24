//
//  main.cpp
//  9093
//
//  Created by 김진호 on 2022/04/24.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

void reverseWord (string str){
    stack<char> stk;
    
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' ')
        {
            while (!stk.empty())
            {
                cout<<stk.top();
                stk.pop();
            }
            cout<<" ";
        }
        else
        {
            stk.push(str[i]);
        }
    }
    if(!stk.empty())
    {
        while (!stk.empty())
        {
            cout<<stk.top();
            stk.pop();
        }
    }
    cout<<endl;
}
int main(int argc, const char * argv[]) {
    int n;
    string str;

    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        getline(cin, str);
        reverseWord(str);
    }
    return 0;
}
