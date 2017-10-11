#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
vector<bool> prime(1000001,true);
vector<long> primes(1000001);
void seive()
{
	prime[0]=false;
	prime[1]=false;
	for (long p=2; p*p<=1000001; p++)
    {
        if (prime[p]==true)
        {
            for (long i=p*2;i<=1000001;i+=p)
                prime[i]=false;
        }
    }


	long k=0;
	for(long i=0;i<=1000001;i++)
	{
		if(prime[i]==true)
		{
			primes[k++]=(i);
		}
	}
}
int main()
{
	seive();
    long t;
    scanf("%ld",&t);
    while(t--)
	{
        long n;
        scanf("%ld",&n);
        n--;
        printf("%ld\n",primes[n]);
	}

}
