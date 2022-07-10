//
//  main.cpp
//  11659
//
//  Created by 김진호 on 2022/07/10.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num,c;
    cin>>num>>c;
    int n[num+1];
    for(int i=1; i<=num; i++)
    {
        cin>>n[i];
        n[i] = n[i-1] + n[i];
    }
    
    int s,e;
    for(int i=0; i<c; i++)
    {
        cin>>s>>e;
        cout<<n[e]-n[s-1]<<'\n';
    }
    return 0;
}
