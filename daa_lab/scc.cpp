#include<bits/stdc++.h>
using namespace std;
stack<int> st;
vector<vector<int> >gh(1);
vector<vector<int> >tr(1);

void fillstack(int i,int visi[])
{
	visi[i]=1;
	vector<int>::iterator it;
	for(it=gh[i].begin();it!=gh[i].end();it++)
	{
		if(!visi[*it])
		{
			fillstack(*it,visi);
		}
	}
	st.push(i);
}
void dfs(int visi[],int i)
{
	visi[i]=1;
	cout<<i<<"	";
	vector<int>::iterator it;
	for(it=tr[i].begin();it!=tr[i].end();it++)
	{
		if(!visi[*it])
		{
			dfs(visi,*it);
		}
	}
}
void printscc(int visi[])
{
	while(!st.empty())
	{
		int x=st.top();
		if(!visi[x])
		{
			dfs(visi,x);
			cout<<"\n";
		}
		st.pop();
	}
}
int main()
{
	int n,e,i,a,b;
	cin>>n>>e;
	gh.resize(n);
	tr.resize(n);
	for(i=0;i<e;i++)
	{
		cin>>a>>b;
		gh[a].push_back(b);
		tr[b].push_back(a);
	}
	int visi[n];
	for(i=0;i<n;i++)
		visi[i]=0;
	for(i=0;i<n;i++)
	{
		if(!visi[i])
		{
			fillstack(i,visi);
		}
	}
	for(i=0;i<n;i++)
		visi[i]=0;
	printscc(visi);
	return 0;
}
