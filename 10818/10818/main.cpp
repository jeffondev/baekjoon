//
//  main.cpp
//  10818
//
//  Created by 김진호 on 2022/01/12.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n,max= -1000001,min=1000001,num;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        if(num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
    }
    cout<<min<<" "<<max;
    return 0;
}
