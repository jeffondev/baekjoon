//
//  main.cpp
//  2941
//
//  Created by 김진호 on 2022/02/20.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string w,cr[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    cin>>w;
    for(int i=0; i<8; i++)
    {
        int pos=0;
        while (w.find(cr[i], pos) != string::npos)
        {
            w = w.replace(w.find(cr[i], pos), cr[i].length(), " ");
        }
    }
    cout<<w.length();
    return 0;
}


