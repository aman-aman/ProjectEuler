#include<bits/stdc++.h>
//aman kumar jha
using namespace std;
long long sum(long long n)
{
	n= n*(n+1);
	return n/2;
}
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
        long long n;
        scanf("%lld",&n);
        long long res=0;
        n--;
        res=3*sum(n/3)+5*sum(n/5)-15*sum(n/15);
        printf("%lld\n",res);

	}
}
