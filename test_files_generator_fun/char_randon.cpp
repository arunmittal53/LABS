#include<bits/stdc++.h>
using namespace std;
int num()
{
	int x=rand()%26;
	x+=97;
	return x;
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
			printf("%c ",num());
		}
		n=m;
		printf("\n");
		while(n--)
		{
			printf("%c ",num());
		}
		n=m;
		printf("\n");
		while(n--)
		{
			printf("%c ",num());
		}
		printf("\n");
	}
	return 0;
}
