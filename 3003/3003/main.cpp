//
//  main.cpp
//  3003
//
//  Created by 김진호 on 2022/08/07.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int pins[6] = { 1, 1, 2, 2, 2, 8},n;
    for(int i=0; i<6; i++)
    {
        cin>>n;
        cout<<pins[i] - n<<' ';
    }
    return 0;
}
