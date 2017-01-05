#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int min(int x,int y)
{
	return x>y?y:x;
}
int fun(int s,int dp[],int n,int p)
{
	if(p==0)
		return arr[s][0];
	int ans,var,i=0;
	ans=1000;
	while(i<n)
	{
		if(dp[i]==1)
		{
			var=i;
			dp[i]=0;
			ans=min(ans,arr[s][var]+fun(var,dp,n,p-1));
			dp[i]=1;
		}
		i++;
	}
	return ans;
}
int main()
{
	freopen("a.txt","r",stdin);
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>arr[i][j];
	int dp[n];
	for(i=1;i<n;i++)
	{
		dp[i]=1;
	}
	dp[0]=0;
	cout<<fun(0,dp,n,n-1);
	return 0;
}
