//
//  main.cpp
//  24416
//
//  Created by 김진호 on 2022/10/02.
//

#include <iostream>
using namespace std;
int c1=1,c2=0;
int fib(int n) {

    if (n == 1 || n == 2){
        return 1;
    }
    c1++;
    return (fib(n - 1) + fib(n - 2));
}
int fibonacci(int n) {
    c2++;
    int f[n];
    f[1] = f[2] = 1;
    for(int i=3; i<n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main(int argc, const char * argv[]) {
        
    int n;
    cin>>n;
    fib(n);
    fibonacci(n);
    cout<<c1<<' '<<n-2;
    return 0;
}
