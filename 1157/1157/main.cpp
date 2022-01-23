//
//  main.cpp
//  1157
//
//  Created by 김진호 on 2022/01/23.
//

#include <iostream>
using namespace std;
#include <string>
int mytoupper(int c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        c = c - 'a' + 'A';
    }
    return c;
}

int main() {
    int a[91]={0,},max=0;
    string str;
    char sp = 'A';
    cin>>str;
    
    for(int i = 0; i < str.size(); i++)
    {
        str[i] = mytoupper(str[i]);
    }
    
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<str.length(); j++)
        {
            if(sp == str[j])
            {
                a[sp]++;
                continue;
            }
//            else
//            {
//                num++;
//            }
        }
        sp++;
//        if(num==str.length())
//        {
//            sp++;
//        }
    }
    for(int i=65; i<91; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    char maxCh = 0;
    for(int i=65; i<91; i++)
    {
        if(max==a[i])
        {
            if(maxCh == 0){
                maxCh = i;
            }
            else {
                cout << "?";
                return 0;
            }
        }
    }
    cout << maxCh;
    return 0;
}

