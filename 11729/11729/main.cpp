//
//  main.cpp
//  11729
//
//  Created by 김진호 on 2022/07/31.
//

#include <iostream>
#include <stack>
using namespace std;

void move(int f, int t, int c){
    if(c == 1) {
        // s[f] > s[t] move
        printf("%d %d\n", f+1, t+1);
    }
    else {
//        move(0, 2, n);
        int slot[3] = {0, };
        slot[f] = 1;
        slot[t] = 1;
        int nt = 0;
        for(int i=0; i<3; i++){
            if(slot[i] == 0) {
                nt = i;
                break;
            }
        }
        move(f, nt, c-1);
        move(f, t, 1);
        move(nt, t, c-1);
    }
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin>>n;
    cout<< (1<<n) -1 <<"\n";
    move(0, 2, n);
    return 0;
}
