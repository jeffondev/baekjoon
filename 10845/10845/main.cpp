//
//  main.cpp
//  10845
//
//  Created by 김진호 on 2022/05/29.
//

#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,num;
    string cmd;
    queue<int> que;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>cmd;
        if(cmd == "push")
        {
            cin>>num;
            que.push(num);
        }
        else if (cmd == "pop")
        {
            if(que.empty())
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<que.front()<<endl;
                que.pop();
            }
        }
        else if(cmd == "size")
        {
            cout<<que.size()<<endl;
        }
        else if (cmd == "empty")
        {
            cout<<(que.empty() ? 1 : 0)<<endl;
        }
        else if(cmd == "front")
        {
            cout<<(que.empty() ? -1 : que.front())<<endl;
        }
        else if (cmd == "back")
        {
            cout<<(que.empty() ? -1 : que.back())<<endl;
        }
    }
    return 0;
}
