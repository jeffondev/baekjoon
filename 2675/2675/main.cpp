//
//  main.cpp
//  2675
//
//  Created by 김진호 on 2022/02/09.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n,num;
    string a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>num>>a;
        for(int j=0; j<a.length(); j++)
        {
            for(int k=0; k<num; k++)
            {
                cout<<a[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
