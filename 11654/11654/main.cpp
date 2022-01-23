//
//  main.cpp
//  11654
//
//  Created by 김진호 on 2022/01/23.
//

#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>
int atoi(
   const char *str
         );
#include <errno.h>
#include <cstdlib>
#include <iterator>
#include <numeric>

int main(void) {
    
    char ch;
    cin>>ch;
    int num = atoi(ch);
    cout << num;
    return 0;
}
