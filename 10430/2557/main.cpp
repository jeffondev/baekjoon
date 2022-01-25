//
//  main.cpp
//  2557
//
//  Created by 김진호 on 2022/01/25.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int A,B,C;
    cin>>A>>B>>C;
    cout<<(A+B)%C<<endl<<((A%C) + (B%C))%C<<endl<<(A*B)%C<<endl<<((A%C) * (B%C))%C;
    return 0;
}






