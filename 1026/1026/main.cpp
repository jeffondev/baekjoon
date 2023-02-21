//
//  main.cpp
//  1026
//
//  Created by 김진호 on 2023/02/21.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {

    int n,a[51],b[51];
    cin>>n;
    
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }
    
    sort(a, a + n);
    sort(b, b + n, greater<>());
    int sum=0;
    for(int i=0; i<n; i++) {
        sum += (a[i] * b[i]);
    }
    cout<<sum;
    return 0;
}
