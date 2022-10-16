//
//  main.cpp
//  1904
//
//  Created by 김진호 on 2022/10/16.
//

#include <iostream>
using namespace std;

long long cache[1000001];
int main(int argc, const char * argv[]) {
    
    int a;
    cin>>a;
    cache[1] = 1;
    cache[2] = 2;
    for(int i=3; i<=a; i++)
    {
        cache[i] = cache[i-2] + cache[i-1];
        cache[i] = cache[i] % 15746;
    }

    cout<<(cache[a]);
    return 0;
}

