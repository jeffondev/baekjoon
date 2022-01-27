//
//  main.cpp
//  15552
//
//  Created by 김진호 on 2022/01/27.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {


    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int A, B;
        cin >> A >> B;
        cout << A + B << '\n';
    }
    return 0;

}
