//
//  main.cpp
//  2884
//
//  Created by 김진호 on 2022/01/16.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   
    int h,m;
    cin >> h >> m;
    if(m >= 45)
    {
        cout << h << " " << m-45;
    }
    else if(h != 0)
    {
        cout << h-1 << " " << m+15;
    }
    else
    {
        cout << "23" << " " << m+15;
    }
    return 0;
}
