//
//  main.cpp
//  17478
//
//  Created by 김진호 on 2022/07/24.
//

#include <iostream>
#include <string>
using namespace std;

void recursiveMsg2(int n, int times)
{
    string underbar="";
    
    for(int i=0; i<times; i++)
    {
        underbar+="____";
    }
    
    cout<<underbar<<"\"재귀함수가 뭔가요?\""<<endl;
    cout<<underbar<<"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어."<<endl;
    cout<<underbar<<"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지."<<endl;
    cout<<underbar<<"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""<<endl;

    times++;
    if(times == n)
    {
        cout<<underbar<<"____\"재귀함수가 뭔가요?\""<<endl;
        cout<<underbar<<"____\"재귀함수는 자기 자신을 호출하는 함수라네\""<<endl;
        cout<<underbar<<"____라고 답변하였지."<<endl;
    }
    else
    {
        recursiveMsg2(n, times);
    }
    cout<<underbar<<"라고 답변하였지."<<endl;
    
}

void recursiveMsg(int n, int times)
{
    string underbar="";
    
    for(int i=0; i<times; i++)
    {
        underbar+="____";
    }
    
    cout<<underbar<<"\"재귀함수가 뭔가요?\""<<endl;

    if(times == n)
    {
        cout<<underbar<<"\"재귀함수는 자기 자신을 호출하는 함수라네\""<<endl;
    }
    else
    {
        cout<<underbar<<"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어."<<endl;
        cout<<underbar<<"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지."<<endl;
        cout<<underbar<<"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""<<endl;
        times++;
        recursiveMsg(n, times);
    }
    cout<<underbar<<"라고 답변하였지."<<endl;
}


int main(int argc, const char * argv[]) {
    
    int n,t=0;
    cin >> n;
    cout<<"어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다."<<endl;
    recursiveMsg(n, t);
    return 0;
}
