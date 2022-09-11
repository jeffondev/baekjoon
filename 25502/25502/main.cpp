//
//  main.cpp
//  25502
//
//  Created by 김진호 on 2022/09/11.
//

#include <iostream>
using namespace std;

bool isSameValue(long long N[], int count) {
    for(int i=2; i<=count; i++) {
//        cout << N[i] << "|" << N[i-1] << endl;
        if((N[i] - N[i-1]) != 0)
            return false;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    int n, m; // 수열길이, 연산 갯수
    cin>>n>>m;
    
    long long A[n+2]; // 0,1..N,N+1(0과 N+1은 미사용)
    long long Term[n], Rate[n]; // 차이, 비율
    int termVal, rateVal;
    
    for(int i=1; i<=n; i++) {
        cin >> A[i];
    }
    // 사전계산된 차이와 비율 배열
    for(int i=1; i<n; i++) {
        Term[i] = A[i+1] - A[i];
        Rate[i] = A[i+1] / A[i];
    }
    
    for(int i=0; i<m; i++) {
        int idx; // 인덱스
        long long x; // 변경할 값
        cin >> idx >> x;
        
        // 변경 항목과 연관된 배열의 값만 교체
        A[idx] = x;
        Term[idx-1] = A[idx] - A[idx-1];
        Term[idx]   = A[idx+1] - A[idx];
        Rate[idx-1] = A[idx] / A[idx-1];
        Rate[idx]   = A[idx+1] / A[idx];
        
        if(isSameValue(Rate, n-1)) {
            cout << "*" << endl;
        }
        else if(isSameValue(Term, n-1)){
            cout << "+" << endl;
        }
        else {
            cout << "?" << endl;
        }
        
    }
    
    return 0;
}
//int main(int argc, const char * argv[]) {
//
//    int n, m, j, s, c;
//    long long x;
//    int term, rate;
//    cin>>n>>m;
//
//    long long A[n+1];
//    for(int i=1; i<=n; i++)
//    {
//        cin>>A[i];
//    }
//
//    for(int i=0; i<m; i++)
//    {
//        cin >> j >> x;
//        A[j]=x;
////
////        term = A[n] - A[n-1]; // 차이
////        rate = A[n] / A[n-1]; // 비율x
////        for(int k=n-2; k>=1; k--) {
////
////        }
//
//
//        s = A[n]-A[n-1]; // 차이
//        c=0;
//        if(s!=0)
//        {
//            for(int k=n-1; k>1; k--)
//            {
//                c = (s == (A[k] - A[k-1])) ? 1 : 0;
//                if(c == 0) break;
//            }
//            if(c==1)
//            {
//                cout<<"+"<<endl;
//                continue;
//            }
//
//        }
//        s = A[n] / A[n-1];
//        for(int k=n-1; k>1; k--)
//        {
//            if(s == (A[k]/A[k-1])) c=2;
//            else
//            {
//                c=0;
//                break;
//            }
//        }
//
//        if(c==2)
//        {
//            cout<<"*"<<endl;
//
//        }
//        else if(c==0)
//        {
//            cout<<"?"<<endl;
//        }
//    }
//    return 0;
//}
