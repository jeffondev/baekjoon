//
//  main.cpp
//  10773
//
//  Created by 김진호 on 2022/04/17.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int k, num, stack[100000] = {0,}, top = -1, cnt = 0;
    cin>>k;
    for(int i=0; i<k; i++)
    {
        cin>>num;
        if(num == 0)
        {
            stack[top] = 0;
            top--;
        }
        else
        {
            stack[++top] = num;
        }
    }
    for(int i=0; i<k; i++)
    {
        cnt += stack[i];
    }
    cout<<cnt;
    return 0;
}
