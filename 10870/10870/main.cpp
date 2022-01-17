#include <iostream>
using namespace std;;

int main(int argc, const char * argv[]) {
    
    int n,a[21];
    a[0]=0;
    a[1]=1;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        a[i+2]=a[i]+a[i+1];
    }
    cout<<a[n];
    return 0;
}
