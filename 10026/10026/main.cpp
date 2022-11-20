//
//  main.cpp
//  10026
//
//  Created by 김진호 on 2022/11/20.
//

#include <iostream>
//#include <string>
using namespace std;

//bool v[100][100]={false, };
//int a[100][100]={0, };
int t;
//int cnt=0;

//void dfs(int x, int y)
//{
////    cout << cnt << " : " << x << ", " << y << endl;
//    int f = a[x][y];
//    int dx[4] = {0, 1, 0, -1};
//    int dy[4] = {-1, 0, 1, 0};
//
//    v[x][y] = true;
//    int nx,ny;
//    for(int i=0; i<4; i++)
//    {
//        nx = x + dx[i];
//        ny = y + dy[i];
//        if(nx < 0 || ny < 0 || nx >= t || ny>= t) continue;;
//        if(a[nx][ny] == f && !v[nx][ny])
//        {
//            dfs(nx, ny);
//        }
//    }
//}

int main(int argc, const char * argv[]) {
   
    cin>>t;
    
    cout << t;
//    fill(&a[0][0], &a[0][0] + 101 * 101, 0);
//    fill(&v[0][0], &v[101][101], 0);
//    memset(a, 0, sizeof(a));
//    memset(v, 0, sizeof(v));
//    for(int k=0; k<t; k++)
//    {
//        string s;
//        cin>>s;
//        for(int i=0; i<s.length(); i++)
//        {
//            if(s[i] == 'R')
//            {
//                a[k][i] = 1;
//            }
//            else if (s[i] == 'G')
//            {
//                a[k][i] = 2;
//            }
//            else
//            {
//                a[k][i] = 3;
//            }
//        }
//    }
//    for(int i=0; i<t; i++)
//    {
//        for(int j=0; j<t; j++)
//        {
//            if (v[i][j] == false) {
//                dfs(i, j);
//                cnt++;
//            }
//        }
//    }
//    cout<<cnt;
    return 0;
}

