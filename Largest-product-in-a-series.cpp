#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
	{
        int  n,k;
        scanf("%d%d",&n,&k);
        string s;
        cin>>s;
        int a[n];
        for(int i=0;i<n;i++)
		{
			a[i]=s[i]-'0';
		}
		int mpdt=0;
		for(int i=0;i<n-k;i++)
		{
			int pdt=1;
			for(int j=i;j<i+k;j++)
			{
				pdt=pdt*a[j];
			}
			mpdt=max(pdt,mpdt);
		}
		printf("%d\n",mpdt);


	}
}
