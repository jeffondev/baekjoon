//
//  main.cpp
//  17413
//
//  Created by 김진호 on 2022/05/22.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

void printText(string s)
{
    stack<char> stk;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            while (!stk.empty()) {
                cout<<stk.top();
                stk.pop();
            }
            cout<<' ';
        }
        else
        {
            stk.push(s[i]);
        }
    }
    while (!stk.empty()) {
        cout<<stk.top();
        stk.pop();
    }
}
void printTag(string s)
{
    cout<<s;
}

int main(int argc, const char * argv[]) {
    string s,t;
    bool inTag = false;
    
    getline(cin, s);
    for(int i=0; i<s.length(); i++)
    {
        
        if(s[i] == '<')
        {
            printText(t);
            t="";
            inTag = true;
            t+=s[i];
        }
        else if(s[i] == '>')
        {
            inTag =false;
            t+=s[i];
            printTag(t);
            t="";
        }
        else
        {
            t+=s[i];
        }
    }
    printText(t);
    return 0;
}
