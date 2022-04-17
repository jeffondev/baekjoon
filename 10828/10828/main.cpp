//
//  main.cpp
//  10828
//
//  Created by 김진호 on 2022/04/17.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n, num, stack[10000] = {0,}, top = -1;
    string cod;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>cod;
        if(cod == "push")
        {
            cin>>num;
            stack[++top] = num;
        }
        else if (cod == "top")
        {
            if(top == -1)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<stack[top]<<endl;
            }
        }
        else if (cod == "size")
        {
            cout<<top+1<<endl;
        }
        else if (cod == "empty")
        {
            if(top == -1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else if(cod == "pop")
        {
            if(top == -1)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<stack[top]<<endl;
                stack[top] = 0;
                top--;
            }
        }
    }
    return 0;
}
