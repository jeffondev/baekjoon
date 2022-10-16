//
//  main.cpp
//  9184
//
//  Created by 김진호 on 2022/10/16.
//

#include <iostream>
using namespace std;

int cache[51][51][51];

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)  return 1;

    int& ret = cache[a][b][c];
    if(ret != -1) return ret;
    
    if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);

    if (a < b && b < c) return ret = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);

    return ret = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
}

int main(int argc, const char * argv[]) {
    
//    memset(cache, -1, sizeof(cache));
    fill(&cache[0][0][0], &cache[0][0][0] + sizeof(cache) / sizeof(int), -1);
    int a, b, c, s;
    while (true) {
        cin>>a>>b>>c;
        if(a == b && b == c && c == -1)
        {
            break;
        }
        s = w(a, b, c);
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<s<<'\n';
    }
    return 0;
}
