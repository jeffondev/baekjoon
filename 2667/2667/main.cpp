//
//  main.cpp
//  2667
//
//  Created by 김진호 on 2022/12/04.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool visited[25][25] = {false}, a[25][25];
int n, sum = 0;

void dfs (int x, int y) {
    
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};
    
    sum++;
    visited[x][y] = true;
    int nx,ny;
    for(int i=0; i<4; i++) {
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx > 24 || ny > 24) continue;
        if(a[nx][ny] && !visited[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main(int argc, const char * argv[]) {
    vector<int> v;
    string num;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>num;
        for(int j=0; j<n; j++) {
            a[i][j] = num[j] == '1';
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(a[i][j] == 1 && !visited[i][j]) {
                sum=0;
                dfs(i, j);
                v.push_back(sum);
            }
        }
    }
    
    sort(v.begin(), v.end());
    
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<endl;
    }

    return 0;
}
