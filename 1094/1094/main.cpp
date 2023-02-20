//
//  main.cpp
//  1094
//
//  Created by 김진호 on 2023/02/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int x, stick=64, cnt=0;
    cin>>x;
    while (x > 0) {
        if(x >= stick) {
            x -= stick;
            cnt++;
        }
        stick /= 2;
    }
    cout<<cnt;
    return 0;
}
