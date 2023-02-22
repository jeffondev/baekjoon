//
//  main.cpp
//  5555
//
//  Created by 김진호 on 2023/02/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
   
    string s;
    int n,sum=0;
    cin>>s>>n;
    
    string ring;
    for(int i=0; i<n; i++) {
        cin>>ring;
        ring +=ring;
        if(ring.find(s) != string::npos) {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}
