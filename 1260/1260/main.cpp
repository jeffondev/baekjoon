//
//  main.cpp
//  1260
//
//  Created by 김진호 on 2022/12/11.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> a[1001];
bool visited[1001]={false,};

void dfs(int x) {
    if(visited[x]) {
        return;
    }
    
    cout<<x<<' ';
    visited[x] = true;
    for(int i=0; i<a[x].size(); i++) {
        if(visited[a[x][i]] == false)
        {
            dfs(a[x][i]);
        }
    }
}

void bfs(int x) {
    queue<int> q;
    q.push(x);
    visited[x] = true;

    while(!q.empty()) {
        int s = q.front();
        cout<<s<<' ';
        q.pop();
        
        for(int i=0; i<a[s].size(); i++) {
            int y = a[s][i];
            if(visited[y] == false)
            {
                q.push(a[s][i]);
                visited[y] = true;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int n,c,start;
    cin>>n>>c>>start;
    
    int x,y;
    for(int i=0; i<c; i++) {
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    
    for(int i=1; i<n+1; i++) {
        sort(a[i].begin(), a[i].end());
    }
    
    dfs(start);
    fill_n(visited, 1001, false);
    cout<<endl;
    bfs(start);
    return 0;
}
