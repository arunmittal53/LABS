#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
int dp[1000];
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
void fun(string str,string cu,int count,int index,int ch,char small)
{
	//cout<<"#####   "<<cu<<"\n";
	if(count==0)
	{
		map<string,int>::iterator it;
		it=mp.find(cu);
		if(it!=mp.end())
			mp[cu]++;
		else
			mp[cu]=1;
	}
	else if(index<0)
		return ;
	int x=0;
	for(int i=index;i>=0;i--)
	{
		if(dp[i]==count&&str[i]<small)
			fun(str,str[i]+cu,count-1,i-1,ch,min(str[i],small));
	}
	if(ch==1)
	{
		for(int i=index;i>=0;i--)
		{
			if(dp[i]-1==count&&str[i]<small)
			{
				//cout<<"******   "<<count<<"   ****   "<<str[i]+cu<<"\n";
				fun(str,str[i]+cu,count-1,i-1,1,min(small,str[i]));
			}
		}
	}
}
int main()
{
	freopen("lis.txt","r",stdin);
	int t;
	cin>>t;
	map<string,int>::iterator it;
	while(t--)
	{
		mp.clear();
		string str,c;
		cin>>str;
		int len=lis(str);
		fun(str,c,len-1,str.length(),1,127);
		it=mp.begin();
		while(it!=mp.end())
		{
			for(int i=0;i<it->second;i++)
				cout<<it->first<<"\n";
			it++;
		}
		cout<<"\n\n";
	}
	return 0;
}
