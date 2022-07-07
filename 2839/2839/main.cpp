//
//  main.cpp
//  2839
//
//  Created by 김진호 on 2022/07/07.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, n5=0, n3=0, nn;
    cin>>n;
    
    n5 = n / 5;
    nn = n % 5;

    n3 = nn / 3;
    nn %= 3;
   
    if(n5 >= nn)
    {
        cout << n5 + n3 + nn;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
