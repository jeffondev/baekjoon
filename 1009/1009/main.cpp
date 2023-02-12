//
//  main.cpp
//  1009
//
//  Created by 김진호 on 2023/02/12.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int t,a,b;
    
    cin>>t;
    for(int i=0; i<t; i++) {
        cin>>a>>b;
        long long data=1;
        for(int j=0; j<b; j++) {
            data = (data * a) % 10;
        }
        if(data == 0)
        {
            data = 10;
        }
        cout<<data<<endl;
    }
    return 0;
}
