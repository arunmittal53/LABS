#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("all.txt","r",stdin);
	int n,i,j,k;
	cin>>n;
	int dp[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>dp[i][j];
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cout<<dp[i][j]<<"  ";
			cout<<"\n";
		}
		cout<<"\n\n\n\n";
	}
	return 0;
}
