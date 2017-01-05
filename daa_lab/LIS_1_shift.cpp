#include<bits/stdc++.h>
using namespace std;
int dp[100000];
int lis(string str)
{
	int n=str.length();
	int x,i,j;
	for(i=0;i<n;i++)
		dp[i]=1;
	for(i=1;i<n;i++)
	{
		x=0;
		for(j=0;j<i;j++)
		{
			if(str[j]<str[i]&&dp[i]<dp[j]+1)
				dp[i]=dp[j]+1;
		}
		dp[i]=max(dp[i],x);
	}
	x=dp[0];
	for(i=1;i<n;i++)
		x=max(dp[i],x);
	return x;
}
int fun(string str,int count,int index,char small)
{
	if(count==0)
	{
		return 1;
	}
	else if(index<0)
		return 0;
	int x=0;
	for(int i=index;i>=0;i--)
	{
		if(dp[i]==count&&str[i]<small)
			x+=fun(str,count-1,i-1,min(str[i],small));
		if(dp[i]-1==count&&str[i]<small)
			x+=fun(str,count-1,i-1,min(str[i],small));
	}
	return x;
}
int main()
{
	freopen("lis.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int len=lis(str);
		cout<<fun(str,len-1,str.length(),127)<<"\n";
	}
	return 0;
}
