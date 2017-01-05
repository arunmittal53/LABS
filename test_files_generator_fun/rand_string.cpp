#include<bits/stdc++.h>
using namespace std;
void num()
{
	int n=rand()%15;
	n+=10;
	string str;
	while(n--)
	{
		int x=rand()%26;
		x+=97;
		str+=x;
	}
	cout<<str<<" ";
}
int main()
{
	freopen("char.txt","w",stdout);
	int t;
	t=rand()%10;
	t+=10;
	printf("%d\n",t);
	while(t--)
	{
		int n,m;
		n=rand()%100;
		n+=900;
		m=n;
		printf("%d\n",n);
		while(n--)
		{
			num();
		}
		n=m;
		printf("\n");
		while(n--)
		{
			num();
		}
		n=m;
		printf("\n");
		while(n--)
		{
			num();
		}
		printf("\n");
	}
	return 0;
}
