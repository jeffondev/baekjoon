//
//  main.cpp
//  15596
//
//  Created by 김진호 on 2022/04/03.
//

#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a)
{
    long long s=0;
    for(int i=0; i<a.size(); i++)
    {
        s += a[i];
    }
    return s;
}

int main(int argc, const char * argv[]) {
    vector<int> v;
    v.assign(5,2);
    
    cout<<sum(v);
    return 0;
}
