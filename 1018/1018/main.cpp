//
//  main.cpp
//  1018
//
//  Created by 김진호 on 2022/08/14.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int black[8][8],white[8][8],m,n;
    bool c[50][50];
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        string s;
        cin>>s;
        for(int j=0; j<n; j++)
        {
            c[i][j] = s[j] == 'W';
        }
    }
    int mn=100000,count=0;
    for(int i=0; i<n-7; i++)
    {
        for(int f=0; f<m-7; f++)
        {
            for(int w=0; w<2; w++)
            {
                bool wb = (w == 0);
                count = 0;
                
                for(int j=f; j<f+8; j++)
                {
                    for(int k=i; k<i+8; k++)
                    {
                        if (c[j][k] != wb)
                        {
                            count++;
                        }
                        wb = !wb;
                    }
                    wb = !wb;
                }
                mn = min(mn, count);
            }
           
        }
    }
    cout<<mn;
    return 0;
}
