//
//  main.cpp
//  10026
//
//  Created by 김진호 on 2022/11/20.
//

#include <iostream>
#include <string>
using namespace std;

bool v1[100][100]={false, };
bool v2[100][100]={false, };
int a[100][100]={0, };
int t;

void dfs1(int x, int y)
{
//    cout << cnt << " : " << x << ", " << y << endl;
    int f = a[x][y];
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};

    v1[x][y] = true;
    int nx,ny;
    for(int i=0; i<4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >= t || ny>= t) continue;;
        if(a[nx][ny] == f && !v1[nx][ny])
        {
            dfs1(nx, ny);
        }
    }
}

void dfs2(int x, int y)
{
//    cout << cnt << " : " << x << ", " << y << endl;
    int f = a[x][y];
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};

    v2[x][y] = true;
    int nx,ny;
    for(int i=0; i<4; i++)
    {
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >= t || ny>= t) continue;;
        
        if(f == 1 || f == 2) {
            if((a[nx][ny] == 1 || a[nx][ny] == 2 ) && !v2[nx][ny])
            {
                dfs2(nx, ny);
            }
        }
        else {
            if(a[nx][ny] == f && !v2[nx][ny])
            {
                dfs2(nx, ny);
            }
        }
    }
}

int main(int argc, const char * argv[]) {
   
    cin>>t;
    
//    fill(&a[0][0], &a[0][0] + 101 * 101, 0);
//    fill(&v[0][0], &v[101][101], 0);
//    memset(a, 0, sizeof(a));
    for(int k=0; k<t; k++)
    {
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == 'R')
            {
                a[k][i] = 1;
            }
            else if (s[i] == 'G')
            {
                a[k][i] = 2;
            }
            else
            {
                a[k][i] = 3;
            }
        }
    }
    
    int cnt1 = 0;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t; j++)
        {
            if (v1[i][j] == false) {
                dfs1(i, j);
                cnt1++;
            }
        }
    }
    int cnt2=0;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t; j++)
        {
            if (v2[i][j] == false) {
                dfs2(i, j);
                cnt2++;
            }
        }
    }

    cout << cnt1 << ' ' << cnt2;
    return 0;
}

