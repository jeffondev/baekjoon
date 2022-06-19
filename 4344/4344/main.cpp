#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int c, n, avg, over_num=0;
    double result;
    int a[1000] = { 0 };
    cin >> c;
    for(int i=0; i<c; i++)
    {
        avg = 0;
        over_num = 0;
        
        cin>>n;
        for(int j=0; j<n; j++)
        {
            cin >> a[j];
            avg += a[j];
        }
        avg = avg / n;
        
        for(int j=0; j<n; j++)
        {
            if(a[j]>avg)
            {
                over_num++;
            }
        }
        
        result = (double)over_num / n * 100;
        cout << fixed;
        cout.precision(3);
        cout<<result<<"%"<<endl;
    }
    
}
