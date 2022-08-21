//
//  main.cpp
//  25304
//
//  Created by 김진호 on 2022/08/21.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int money,n;
    cin>>money>>n;
    for(int i=0; i<n; i++)
    {
        int price,num;
        cin>>price>>num;
        money = money - price * num;
    }
    if(money == 0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
