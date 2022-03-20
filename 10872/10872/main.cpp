#include <iostream>
using namespace std;

int recursiveMul(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;
    return n * recursiveMul(n-1);
}

int main(int argc, const char * argv[]) {
    int num;
    cin>>num;
    cout<<recursiveMul(num);
    
    return 0;
}
