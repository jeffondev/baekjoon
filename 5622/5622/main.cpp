//
//  main.cpp
//  5622
//
//  Created by 김진호 on 2022/02/13.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string s;
    int cnt=0,nums[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        cnt += nums[(s[i] - 'A')]+1;
    }
    cout<<cnt;
    return 0;
}
