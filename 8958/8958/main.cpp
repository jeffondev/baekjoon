//
//  main.cpp
//  8958
//
//  Created by 김진호 on 2022/02/06.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    string a;
    char o='O';
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        int t=0;
        int num=1;
        
        for(int j=0; j<a.length(); j++)
        {
            if(a[j]==o)
            {
                t+=num;
                num++;
            }
            else
            {
                num=1;
            }
        }
        cout<<t<<endl;
    }
    return 0;
}

