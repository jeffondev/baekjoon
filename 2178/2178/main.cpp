//
//  main.cpp
//  2178
//
//  Created by 김진호 on 2022/11/13.
//

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n,m,b[101][101]={0,};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x,y));
    
    while (!q.empty()) {
        // 좌표 가져오기
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        
        // 좌표 값 가져오기
        int foot = b[cx][cy];
        
        if(cx == m-1 && cy == n-1)
        {
            cout<<foot;
            break;
        }
        // 갈 곳 찾기
        int nx,ny;
        for(int i=0; i<4; i++)
        {
            nx = cx + dx[i];
            ny = cy + dy[i];
            if(nx < 0 || ny < 0 || nx >= m || ny>= n || b[nx][ny] != -1) continue;
            // 큐에 넣기
            q.push(make_pair(nx, ny));
            // 다음 좌표 값 증가 설정
            b[nx][ny] = foot + 1;
        }
    }
}

int main(int argc, const char * argv[]) {
    string a;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        for(int j=0; j<m; j++)
        {
            int num1 = a[j] - '0';
            b[j][i] = num1 * -1;
        }
    }
    b[0][0] = 1;
    bfs(0,0);
    return 0;
}
