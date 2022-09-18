//
//  main.cpp
//  2775
//
//  Created by 김진호 on 2022/09/18.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int floor[15][15]={0,},t;
    cin>>t;
    
    for(int i=1; i<15; i++)
    {
        floor[0][i]= i;
    }
    
    for(int i=1; i<15; i++)
    {
        for(int j=1; j<15; j++)
        {
            int sum = 0;
            for(int k=1; k<=j; k++)
            {
                sum += floor[i-1][k];
            }
            floor[i][j] = sum;
        }
    }
    int a,b;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        cout << floor[a][b] << endl;
    }
    return 0;
}
