//
//  main.cpp
//  1546
//
//  Created by 김진호 on 2022/02/06.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n,max=0;
    double sum=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        sum += (double)a[i]*100/(double)max;
    }
    cout<<sum/n;
    return 0;
}
