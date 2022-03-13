#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if(n == 1) return true;
    if(n == 2) return true;
    
    if(n % 2 == 0) return false;
    
    int sqrtn = int(sqrt(n)); // cmath 필요
    for(int div = 3; div <= sqrtn; div += 2)
    {
        if(n % div == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    int lenth;
    cin >> lenth;
    
    for(int i = 0; i < lenth; i++)
    {
        int num, idx=0, prime1=0, prime2=0;
        cin >> num;
        
        // 차가 가장 적은것 출력
        int primes[num],distance = num;
        
        // 반복문으로 입력받은 숫자보다 작은 소수를 배열에 담는다
        for(int i=1; i<num; i++)
        {
            if(isPrime(i))
            {
                primes[idx] = i;
                idx++;
            }
        }
        
        //첫번째부터 끝까지 소수를 더해 합이되는수 저장
        for(int i=0; i<idx; i++)
        {
            for(int j=i; j<idx; j++)
            {
                if(primes[i] + primes[j] == num)
                {
                    if(distance > primes[j] - primes[i])
                    {
                        distance = primes[j] - primes[i];
                        prime1 = primes[i];
                        prime2 = primes[j];
                    }
                }
            }
        }
        cout << prime1 << " " << prime2 << endl;

    }
    return 0;
}
