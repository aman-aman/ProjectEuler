#include<bits/stdc++.h>
//aman kumar jha
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		long long f=0,s=2,sum=0;
		while(s<=n)
		{
			long long temp=s;
			sum=sum+s;
			s=s*4+f;
			f=temp;
		}
		printf("%lld\n",sum);
	}
}
