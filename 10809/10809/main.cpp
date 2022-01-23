//
//  main.cpp
//  10809
//
//  Created by 김진호 on 2022/01/23.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int num=0;
    char sp = 'a';
    string s;
    cin>>s;
    for(int j=0; j<26; j++)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(sp == s[i])
            {
                cout<<i<<" ";
                break;
            }
            else
            {
                num++;
            }
        }
        if(num == s.length())
        {
            cout<<"-1"<< " ";
        }
        sp++;
        num=0;
    }
    return 0;
}
