//
//  main.cpp
//  4673
//
//  Created by 김진호 on 2022/07/17.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n,weight[50]={0,},height[50]={0,};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>weight[i]>>height[i];
    }
    for(int i=0; i<n; i++)
    {
        int k=0;
        for(int j=0; j<n; j++)
        {
            if((weight[i] < weight[j]) && (height[i] < height[j]))
            {
                k++;
            }
        }
        cout<<k+1<<" ";
    }
    
    return 0;
}
