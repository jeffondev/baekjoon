//
//  main.cpp
//  2164
//
//  Created by 김진호 on 2023/02/24.
//

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {

    queue<int> que;
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++) {
        que.push(i);
    }
    
    int i=1;
    while (true) {
        if(que.size() == 1) {
            cout<<que.front();
            return 0;;
        }
        else if(i % 2 != 0) {
            que.pop();
        }
        else {
            int num = que.front();
            que.pop();
            que.push(num);
        }
        i++;
    }
    return 0;
}
