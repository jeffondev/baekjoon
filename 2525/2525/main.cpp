//
//  main.cpp
//  2525
//
//  Created by 김진호 on 2022/06/12.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int h,m,t;
    cin>>h>>m>>t;
    
    // m과 t 더하기
    m = m + t;
    
    // m을 h로 계산
    h += (m / 60);
    m = (m % 60);
    
    // h가 24넘으면 계산
    h = h % 24;
    cout << h << ' ' << m;
//    
//    if(m+t>=60)
//    {
//        h+=(m+t)/60;
//        m=(m+t)%60;
//        if(h>=24)
//        {
//            cout<<h-24<<' '<<m;
//        }
//        else
//        {
//            cout<<h<<' '<<m;
//        }
//    }
//    else
//    {
//        cout<<h<<' '<<m+t;
//    }
    return 0;
}
