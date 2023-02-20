//
//  main.cpp
//  1057
//
//  Created by 김진호 on 2023/02/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n, kim, lim, round=0;
    cin>>n>>kim>>lim;
    
    while (kim != lim) {
        round++;
        kim = (kim + 1) / 2;
        lim = (lim + 1) / 2;
    }
    cout<<round;
    return 0;
}
/*
 1 2 n 3 k
 1 n k          n= 3->2 , k= 5->3
 n k            n= 2->1 , k= 3->2
 */
