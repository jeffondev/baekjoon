//
//  main.cpp
//  2501
//
//  Created by 김진호 on 2022/01/11.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int q,k,a=0,n[10001]={0,};
    cin>>q>>k;
    for(int i=1; i<=q; i++)
    {
        if(q%i==0)
        {
            a++;
            n[a]=i;
        }
    }
    cout<<n[k];
    return 0;
}
