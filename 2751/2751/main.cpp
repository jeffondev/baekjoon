//
//  main.cpp
//  2751
//
//  Created by 김진호 on 2022/12/18.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;



int main(int argc, const char * argv[]) {
    
    cin.tie(NULL);
     cout.tie(NULL);
     ios_base::sync_with_stdio(false);

    vector<int> a;
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int s;
        cin>>s;
        
        a.push_back(s);
    }
    
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<'\n';
    }
    return 0;
}
