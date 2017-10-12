#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
vector<bool> prime(1000001,true);
vector<long> primes;
void seive()
{
	prime[0]=false;
	prime[1]=false;
	for(long p=2;p*p<=1000000;p++)
	{
		if(prime[p]==true)
		{
            for(long i=p*2;i<=1000000;i=i+p)
			{
				prime[i]=false;
			}
		}
	}
	for(long i=2;i<=1000000;i++)
	{
		if(prime[i])
		{
			primes.push_back(i);
		}
	}


}
long primesum(long n)
{
	long s=0;
	for(long i=0;i<primes.size()&&primes[i]<=n;i++)
	{
		//cout<<primes[i]<<" ";
		s=s+primes[i];
	}
	return s;
}
int main()
{
	seive();
    int t;
    scanf("%d",&t);
    while(t--)
	{
        long n;
        scanf("%ld",&n);
        printf("%ld\n",primesum(n));
	}
}
