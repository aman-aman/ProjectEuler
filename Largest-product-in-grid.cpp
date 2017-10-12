#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
long pro(long a,long b,long c,long d)
{
	return (a*b*c*d);
}
int main()
{
	long a[20][20];
	for(long i=0;i<20;i++)
	{
		for(long j=0;j<20;j++)
		{
			scanf("%ld",&a[i][j]);
		}
	}
	long pdt=0;
	for(long i=0;i<20;i++)
	{
		for(long j=0;j<20;j++)
		{
			long p1,p2,p3,p4;
			if(i<17)
			{
				p1=pro(a[i][j],a[i+1][j],a[i+2][j],a[i+3][j]);
				pdt=max(pdt,p1);
			}
			if(j<17)
			{
				p2=pro(a[i][j],a[i][j+1],a[i][j+2],a[i][j+3]);
				pdt=max(pdt,p2);
			}
			if(i<17&&j<17)
			{
				p3=pro(a[i][j],a[i+1][j+1],a[i+2][j+2],a[i+3][j+3]);
				pdt=max(pdt,p3);
			}
			if(i<17&&j>=3)
			{
				p4=pro(a[i][j],a[i+1][j-1],a[i+2][j-2],a[i+3][j-3]);
				pdt=max(pdt,p4);
			}
		}
	}
	printf("%ld\n",pdt);

}
