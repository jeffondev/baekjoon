//
//  main.cpp
//  1037
//
//  Created by 김진호 on 2023/02/15.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n,a[51]={0,};
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    if(n == 1) {
        cout<<a[0] * a[0];
        return 0;
    }
    
    int max=0,min=10000;
    for(int i=0; i<n; i++) {
        if(a[i]>max) {
            max = a[i];
        }
        if (a[i]<min) {
            min = a[i];
        }
    }
    cout<<max * min;
    return 0;
}
