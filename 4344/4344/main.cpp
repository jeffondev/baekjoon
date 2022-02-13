//
//  main.cpp
//  4344
//
//  Created by 김진호 on 2022/02/08.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int c, n;
    double ave, over_ave=0;
    cin >> c;
    for(int i=0; i<=c; i++)
    {
        ave = 0;
        over_ave = 0;
        cin>>n;
        int a[n];
        for(int j=0; j<n; j++)
        {
            cin >> a[j];
            ave += a[j];
        }
        ave = ave / n;
        for(int j=0; j<n; j++)
        {
            if(a[j]>ave)
            {
                over_ave+=1;
            }
        }
        over_ave = over_ave / n * 100;
        cout << fixed;
        cout.precision(3);
        cout<<over_ave<<"%"<<endl;
    }
    return 0;
}
            //5
            //5 50 50 70 80 100
            //7 100 95 90 80 70 60 50       77.8571
            //3 70 90 80
            //3 70 90 81
            //9 100 99 98 97 96 95 94 93 91



