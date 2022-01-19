//
//  main.cpp
//  2309
//
//  Created by 김진호 on 2022/01/18.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int a[9],n,t;
    for(int i=0;i<9;i++)
    {
        cin>>a[i];
        t+=a[i];
    }
    
    for(int i=0; i<8; i++)
    {
        for(int j=1; j<9; j++)
        {
            if(t-a[i]-a[j] == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    if (k != i || k != j);
                    {
                        cout << a[k] << endl;
                    }
                }
            }
        }
    }
    return 0;
}
