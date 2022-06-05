//
//  main.cpp
//  10799
//
//  Created by 김진호 on 2022/06/05.
//

#include <iostream>
#include <string>
using namespace std;

int calc (string s)
{
    int n=0,c=0,sum=0;
    for(int i=0; i<s.length(); i++)
    {
        if(i == s.length()-1)
        {
            sum += c;
        }
        else if(s[i] == '(')
        {
            c++;
            n++;
        }
        else if(s[i] == ')')
        {
            n--;
        }
        else
        {
            sum += c;
            c=n;
        }
    }

    return sum;
}
int main(int argc, const char * argv[]) {
    
    string s,st;
    cin>>s;
    int n=0,sum=0;
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(')
        {
            n++;
            if(s[i+1] == ')')
            {
                st+= '*';
            }
            else
            {
                st+='(';
            }
        }
        else
        {
              
            if(s[i-1] == '(')
            {
                n--;
                
            }
            else
            {
                st+=')';
                n--;
            }
            
        }
        if(n == 0)
        {
            sum += calc(st);
            st="";
        }
    }
    cout<<sum;
    return 0;
}
