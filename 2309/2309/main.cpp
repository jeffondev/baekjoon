//
//  main.cpp
//  2309
//
//  Created by 김진호 on 2022/01/18.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int a[9],cinA[7],t=0;
    for(int i=0;i<9;i++)
    {
        cin>>a[i];
        t+=a[i];
    }
    int h=0;
    for(int i=0; i<8; i++)
    {
        for(int j=i+1; j<9; j++)
        {
            if(t-a[i]-a[j] == 100)
            {
                for (int k = 0; k < 9; k++)
                {
                    
                    if (k != i && k != j)
                    {
                        cinA[h] = a[k];
                        h++;
                    }
                }
                sort(cinA, cinA+7);
                for(int i=0; i<7; i++)
                {
                    cout << cinA[i] << endl;
                }
                return 0;;
            }
        }
    }
    return 0;
}
