//
//  main.cpp
//  10815
//
//  Created by 김진호 on 2022/10/09.
//

#include <iostream>
using namespace std;

int pl[10000001]={false,};
bool mi[10000001]={false,};


int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int m,n;
//    bool pl[10000001]={0,},mi[10000001]={0,};
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int num;
        cin>>num;
        if(num<0)
        {
            num = abs(num);
            mi[num] = true;
        }
        else
        {
            pl[num] = true;
        }
    }
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        if(num<0)
        {
            num = abs(num);
            cout<<mi[num]<<' ';
        }
        else
        {
            cout<<pl[num]<<' ';
        }
    }
    return 0;

}
