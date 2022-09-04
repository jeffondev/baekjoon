//
//  main.cpp
//  1992
//
//  Created by 김진호 on 2022/09/04.
//

#include <iostream>
#include <string>
using namespace std;

string board[64][64];

string comp (int x, int y, int n)
{
    if(n == 1) return board[x][y];
    
    string s = "";
    int n2 = n/2;
    s = s + comp(x,     y,      n2);
    s = s + comp(x,     y+n2,   n2);
    s = s + comp(x+n2,  y,      n2);
    s = s + comp(x+n2,  y+n2,   n2);
    
    // 비교
    if(s=="0000"){ return "0"; }
    else if(s=="1111"){ return "1"; }
    else return "(" + s + ")";
        
}

int main(int argc, const char * argv[]) {
   
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        for(int j=0; j<n; j++)
        {
            board[i][j] = s[j];
        }
    }
    
    cout<< comp(0, 0, n);
    
    return 0;
}
