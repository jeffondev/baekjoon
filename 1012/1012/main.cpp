//
//  main.cpp
//  1012
//
//  Created by 김진호 on 2022/11/06.
//

#include <iostream>
using namespace std;

bool a[50][50]={false, },v[50][50]={false, };
int m,n;
int cnt=0;

void dfs(int x, int y)
{
//    cout << cnt << " : " << x << ", " << y << endl;
    
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};
    
    v[x][y] = true;
    int nx,ny;
    for(int i=0; i<4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >= m || ny>= n) continue;;
        if(a[nx][ny] == true && !v[nx][ny])
        {
            dfs(nx, ny);
        }
    }
}

int main(int argc, const char * argv[]) {

    int t,c;
   
    cin>>t;
    for(int k=0; k<t; k++)
    {
        fill(&a[0][0], &a[0][0] + 51 * 51, 0);
        fill(&v[0][0], &v[0][0] + 51 * 51, 0);
        cin>>m>>n>>c;
        cnt=0;
        for(int i=0; i<c; i++)
        {
            int x,y;
            cin>>x>>y;
            a[x][y] = true;
        }
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(a[i][j] == true && v[i][j] == false)
                {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
