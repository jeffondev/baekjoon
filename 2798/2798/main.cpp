//
//  main.cpp
//  2798
//
//  Created by 김진호 on 2022/05/08.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    int sum=0, max=0;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                sum = a[i] + a[j] + a[k];
                if(sum > m)
                {
                    continue;
                }
                else
                {
                    if(sum == m)
                    {
                        cout<<m;
                        return 0;
                    }
                    else if(sum > max)
                    {
                        max = sum;
                    }
                }
                sum=0;
            }

        }
    }
    cout<<max;
    return 0;
}
