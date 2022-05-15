//
//  main.cpp
//  1874
//
//  Created by 김진호 on 2022/05/15.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    stack<int> stk;
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int num=0,i=1;
    string PM;
    while(true)
    {
        if(stk.empty() || stk.top() != a[num])
        {
            if(!stk.empty() && stk.top() > a[num])
            {
                cout<<"NO";
                return 0;
            }
            stk.push(i);
            PM += "+\n";
            i++;
        }
        if(stk.top() == a[num])
        {
            stk.pop();
            PM += "-\n";
            num++;
        }
        if(i>n)
        {
            while (!stk.empty())
            {
                if(stk.top() == a[num])
                {
                    num++;
                }
                
                PM += "-\n";
                stk.pop();
            }
            if(num != n) {
                cout << "NO";
                return 0;
            }
            break;
        }

    }
    
    cout << PM;
    return 0;
}
