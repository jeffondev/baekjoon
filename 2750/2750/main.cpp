//
//  main.cpp
//  2750
//
//  Created by 김진호 on 2022/06/26.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,input[1001]={0,};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input[i];
    }
    int min=1001,idx;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(min>input[j])
            {
                min = input[j];
                idx = j;
            }
        }
        cout<<min<<endl;
        input[idx] = 1001;
        min=1001;
    }
    
    return 0;
}
