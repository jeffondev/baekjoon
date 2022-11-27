//
//  main.cpp
//  2606
//
//  Created by 김진호 on 2022/11/27.
//

using namespace std;
#include <iostream>
#include <vector>
#include <queue>

int n,c;
int cnt = 0;
int visit[101];
vector<int> a[101];

void bfs (int s)
{
    queue<int> q;
    q.push(s);
    visit[s] = true;
    
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        
        for(int i=0; i<a[x].size(); i++)
        {
            int y = a[x][i];
            if(!visit[y])
            {
                q.push(y);
                visit[y] = true;
                cnt++;
            }
        }
    }
    cout<<cnt;
}

int main(int argc, const char * argv[]) {

    
    cin>>n>>c;
    
    int x,y;
    for(int i=0; i<c; i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    
    bfs(1);
    return 0;
}
