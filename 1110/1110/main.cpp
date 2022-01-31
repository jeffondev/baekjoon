//
//  main.cpp
//  1110
//
//  Created by 김진호 on 2022/01/31.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int N, tmp, cnt=0;
    cin >> N;
    
    tmp = N;
    while (true)
    {
        string str = to_string(tmp);
        if(tmp < 10)
        {
            str = '0' + str;
        }
        int num1 = str[0] - '0';
        int num2 = str[1] - '0';
        int num3 = num1 + num2;
        
        string str1 = to_string(num3);
        int num4 = str1[str1.length()-1] - '0';
        
        tmp = num2 * 10 + num4;
        cnt++;
        if(tmp == N)
        {
            break;
        }
    }
    cout << cnt;
    return 0;
}
//26부터 시작한다. 2+6 = 8이다. 새로운 수는 68이다. 6+8 = 14이다. 새로운 수는 84이다. 8+4 = 12이다. 새로운 수는 42이다. 4+2 = 6이다. 새로운 수는 26이다.
