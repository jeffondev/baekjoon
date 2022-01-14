//
//  main.cpp
//  2460
//
//  Created by 김진호 on 2022/01/13.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int d,u,t=0,max=0;
    for(int i=0; i<10; i++)
    {
        cin >> d >> u;
        t += -d + u;
        if(t>max)
        {
            max=t;
        }
    }
    cout << max;
    return 0;
}
