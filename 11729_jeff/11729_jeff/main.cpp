//
//  main.cpp
//  11729_jeff
//
//  Created by 김진호 on 2022/08/07.
//

#include <iostream>
using namespace std;

void hanoi(int f, int t, int c) {
    if(c==1)
    {
        printf("%d %d\n", f, t);
    }
    else
    {
        int b=6-f-t;
        hanoi(f, b, c-1);
        hanoi(f, t, 1);
        hanoi(b, t, c-1);
    }
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin>>n;
    cout<<(1<<n)-1<<'\n';
    hanoi(1, 3, n);
    return 0;
}
