//
//  main.cpp
//  2581
//
//  Created by 김진호 on 2022/03/06.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,m,i,j,sum=0,min=10001;
    cin>>n>>m;
   
    for(i=n; i<=m; i++)
    {
        if(i==0 || i == 1) continue;
        
        for(j=2; j<=i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        
        if(i == j)
        {
            if(min==10001)
            {
                min=i;
            }
            sum+=i;
        }
    }
    if(sum==0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<sum<<endl<<min;
    }
    return 0;
}
