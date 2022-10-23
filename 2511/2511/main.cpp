    //
    //  main.cpp
    //  2511
    //
    //  Created by 김진호 on 2022/10/23.
    //

    #include <iostream>
    using namespace std;
    int main(int argc, const char * argv[]) {
        
        int A[10], B[10];
        for(int i=0; i<10; i++)
        {
            cin >> A[i];
        }
        for(int i=0; i<10; i++)
        {
            cin >> B[i];
        }
        
        int winA=0, winB=0, last=2;
        
        for(int i=0; i<10; i++)
        {
            if(A[i] > B[i])
            {
                winA += 3;
                last = 0;
            }
            else if(A[i] <B [i])
            {
                winB += 3;
                last = 1;
            }
            else
            {
                winA++;
                winB++;
            }
        }
        cout << winA << ' ' << winB << endl;
        if(winA == winB)
        {
            if(last == 0)
            {
                cout << 'A';
            }
            else if(last == 1)
            {
                cout << 'B';
            }
            else
            {
                cout<<'D';
            }
        }
        else
        {
            if(winA > winB)
            {
                cout << 'A';
            }
            else
            {
                cout << 'B';
            }
        }
        return 0;
    }
