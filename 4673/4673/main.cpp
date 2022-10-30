//
//  main.cpp
//  4673
//
//  Created by 김진호 on 2022/07/17.
//

#include <iostream>
using namespace std;

int calc(int number)
{
    int sum = number;
    
    while (number != 0) {
        sum = sum + number%10;
        number = number / 10;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    
    bool check[10001] = {false, };
    for(int i=1; i<10001; i++)
    {
        int n = calc(i);
        if(n <10001)
        {
            check[n] = true;
        }
    }
    for(int i=1; i<10001; i++)
    {
        if(!check[i])
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
