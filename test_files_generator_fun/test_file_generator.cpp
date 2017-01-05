#include<bits/stdc++.h>
using namespace std;
int num()
{
	int x=rand();
	x=x%100;
	x+=900;
	return x;
}
int main()
{
	freopen("test34.txt","w",stdout);
	int t;
	t=rand()%10;
	t+=10;
	printf("%d\n",t);
	while(t--)
	{
		int n,m;
		n=num();
		m=n;
		printf("%d\n",n);
		while(n--)
		{
			printf("%d ",num());
		}
		n=m;
		printf("\n");
		while(n--)
		{
			printf("%d ",num());
		}
		n=m;
		printf("\n");
		while(n--)
		{
			printf("%d ",num());
		}
		printf("\n");
	}
	return 0;
}
