#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"	";
	return ;
}
void fun(int st[],int n,int x)
{
	int a[10]={0},b[n],i;
	for(i=0;i<n;i++)
	{
		a[((st[i])/x)%10]++;
	}
	for(i=1;i<10;i++)
		a[i]+=a[i-1];
	for(i=n-1;i>-1;i--)
	{
		b[a[ (st[i]/x)%10 ] -1 ] = st[i];
        a[ (st[i]/x)%10 ]--;
	}
	for(i=0;i<n;i++)
		st[i]=b[i];
}
int main()
{
	int n,x=0,count,i;
	scanf("%d",&n);
	int st[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&st[i]);
		x=max(x,st[i]);
	}
	while(x!=0)
	{
		count++;
		x/=10;
	}
	x=1;
	while(count--)
	{
			fun(st,n,x);
			x*=10;
	}
	print(st,n);
	return 0;
}
