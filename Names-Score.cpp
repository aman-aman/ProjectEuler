#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
	int t,n=0;
	scanf("%d",&t);
	vector<pair<string,int> > mp;
	string s;
	while(t--)
	{
		cin>>s;
		n=0;
		for(int i=0;i<s.length();i++)
		{
			n=n+((int)s[i]-64);
		}
		mp.push_back(make_pair(s,n));
	}
	sort(mp.begin(),mp.end());
	int q;
	scanf("%d",&q);
	vector<pair<string,int> >::iterator it;
	while(q--)
	{
		cin>>s;
		int temp=0,c=1;
		it=mp.begin();
        while(s!=it->first)
		{
			it++;
			c++;
		}
		temp=it->second;
		printf("%d\n",temp*c);
	}
}
