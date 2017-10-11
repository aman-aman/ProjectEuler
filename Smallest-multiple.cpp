#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
vector<bool> prime(1000000,true);
vector<int> primes;
void seive()
{
	prime[0]=false;
	prime[1]=false;
	for (int p=2; p*p<=1000000; p++)
    {

        if (prime[p]==true)
        {
            for (int i=p*2;i<=1000000;i+=p)
                prime[i]=false;
        }
    }

	for(int i=0;i<=1000000;i++)
	{
		if(prime[i])
		{
			primes.push_back(i);
		}
	}
}
void lcm(int n)
{
		long long l=1;
		for(int i=0;primes[i]<=n&&i<primes.size();i++)
		{
			long long  pp=primes[i];
			while(pp*primes[i]<=n)
			{
				pp=pp*primes[i];
			}
			l=l*pp;
			l=l%1000000007;
		}
		printf("%lld\n",l);
}
int main()
{
	seive();
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
	lcm(n);
	}
}

