#include<bits/stdc++.h>
//aman kumar jha
using namespace std;
long long pyt(long long n)
{
	long long a,b,c,gpdt=-1,pdt=1;
	for(long long a=1;a<n/3;a++)
	{
		b=(n*n-2*n*a)/(2*n-2*a);
		c=n-a-b;
		if(c*c==(a*a+b*b))
			{
				pdt=a*b*c;
				gpdt=max(pdt,gpdt);
			}
	}
    return gpdt;
}
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
	{
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",pyt(n));

	}
}
