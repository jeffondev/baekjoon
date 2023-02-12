//
//  main.cpp
//  18185
//
//  Created by 김진호 on 2023/01/31.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n,a,cnt=0,sum=0,pl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a == 0)
        {
            cnt=0;
        }
        else
        {
            if(cnt == 0){
                pl=3;
            }
            else{
                pl=2;
            }
            
            for(int j=0; j<a; j++)
            {
                sum+=pl;
            }
            
            cnt=1;
        }
    }
    cout<<sum;
    return 0;
}
// 1100 0111        5 + 7
// 1110 0100 0001   7 + 3 + 3
