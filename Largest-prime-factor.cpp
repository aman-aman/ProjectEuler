#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
long long prime(long long n)
{
	long long temp;
    while (n%2 == 0)
    {
        temp=2;
        n=n/2;
    }
    for (long long i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            temp=i;
            n = n/i;
        }
    }
    if (n>2)
        temp=n;


	return temp;
}
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n,temp;
		scanf("%lld",&n);
		printf("%lld\n",prime(n));
	}
}
