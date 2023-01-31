#include <iostream>
using namespace std;

bool isPrime(int x) {
    int j;
    if(x == 1) return false;
    for(j=2; j<x; j++){
        if(x % j == 0) return false;
    }
    return true;
}

int main(int argc, const char * argv[]) {

    int n,a,cnt=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(isPrime(a))
            cnt++;
    }
    cout<<cnt;
    return 0;
}
