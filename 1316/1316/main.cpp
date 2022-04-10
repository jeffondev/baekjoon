//
//  main.cpp
//  1316
//
//  Created by 김진호 on 2022/04/10.
//

#include <iostream>
#include <string>
using namespace std;

bool IsGroupWord(string word) {
    // 중복제거
    string s="";
    for(int i=1; i<word.length(); i++) {
        if(word[i] != word[i-1]) {
            s += word[i-1];
        }
        if(i == word.length()-1)
        {
            s += word[i];
        }
    }
    // 반복을 확인
    int arr[28] = {0,};
    for(int i=0; i<s.length(); i++)
    {
        if(arr[s[i]-'a'] == 1) {
            return false;
        }
        else {
            arr[s[i]-'a'] = 1;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    
    int num, sum=0;
    string word;
    cin>>num;
    for(int i = 0; i<num; i++)
    {
        cin>>word;
        if(IsGroupWord(word) == true) {
            sum++;
        }
    }
    
    cout<<sum;
    return 0;
}
