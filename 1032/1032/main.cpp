//
//  main.cpp
//  1032
//
//  Created by 김진호 on 2022/09/11.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    string s[50],S;
    
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    
    for(int i=0; i<s[0].length(); i++) {
        bool same = true;
        for(int j=1; j<n; j++) {
            if(s[j-1][i] != s[j][i]) {
                same = false;
                break;
            }
        }
        if(same) {
            cout << s[0][i];
        }
        else {
            cout << "?";
        }
    }

    return 0;
}
