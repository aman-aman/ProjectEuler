#include<bits/stdc++.h>
using namespace std;
/*Aman kumar jha*/
#define ll long long

vector<bool> prime(1000001,true);
bool circularprime(ll number)
{
	ll rem;
	ll check;
	ll size=floor(log10(number))+1;
	check=number;
	do
	{
		rem=check%10;
		check=rem*pow(10,size-1)+check/10;
		if(!prime[check])
			return false;
	}while(number!=check);
	return true;
}
void seive()
{
	prime[0]=prime[1]=false;
	for(ll i=2;i*i<=1000000;i++)
	{
		if(prime[i]==true)
		{
			for(ll j=i*2;j<=1000000;j=j+i)
				prime[j]=false;
		}
	}

}

int main()
{
    seive();
    ll n;
    scanf("%lld",&n);
    ll s=0;
    for(ll i=2;i<n;i++)
	{
		if(prime[i]&&circularprime(i))
			{
				s=s+i;
				//cout<<i<<" ";
			}
	}
	printf("%lld\n",s);

}
