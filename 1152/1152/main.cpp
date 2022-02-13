//
//  main.cpp
//  1152
//
//  Created by 김진호 on 2022/02/13.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    int cnt = 1;
    getline(cin, s);
    if(s == " ")
    {
        cout << 0;
        return 0;
    }
    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        
        if((i == 0) && (c == ' '))
        {
            continue;
        }
        if((i == s.length()-1) && (c == ' '))
        {
            continue;
        }
        
        if(c == ' ')
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
