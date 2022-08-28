//
//  main.cpp
//  2869
//
//  Created by 김진호 on 2022/08/28.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int A,B,V;
    cin>>A>>B>>V;
    cout<<(V-B-1) / (A-B) + 1;
    return 0;
}
