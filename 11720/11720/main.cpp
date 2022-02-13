//
//  main.cpp
//  11720
//
//  Created by 김진호 on 2022/02/09.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n,t=0;
    string num;
    cin>>n>>num;
    for(int i=0; i<num.length(); i++)
    {
        int num1 = num[i] - '0';
        t += num1;
    }
    cout<<t;
    return 0;
}
