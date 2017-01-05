#include<bits/stdc++.h>
using namespace std;
double num()
{
	double x=(double)rand()/((double(RAND_MAX)))*100;
	return x;
}
int main()
{
	freopen("float.txt","w",stdout);
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
			printf("%lf ",num());
		}
		n=m;
		printf("\n");
		while(n--)
		{
			printf("%lf ",num());
		}
		n=m;
		printf("\n");
		while(n--)
		{
			printf("%lf ",num());
		}
		printf("\n");
	}
	return 0;
}
