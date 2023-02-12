//
//  main.cpp
//  1557
//
//  Created by 김진호 on 2023/01/31.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

bool isPrime(int x){
    for(int i=2; i<x; i++){
        if(x % i == 0) return false;
    }
    
    return true;
}

int getCount(int x){
    
    int c=0;
    for(int i=0; i<v.size(); i++){
        c += x / v[i];
    }
    return c;
}


int main(int argc, const char * argv[]) {
    
    for(int i=2; i<10000; i++){
        if(isPrime(i)){
            v.push_back(i*i);
        }
    }
    
    
    
    int n;
    cin>>n;
    
    cout<<getCount(n);
    return 0;
}
