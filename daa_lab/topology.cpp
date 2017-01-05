#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >gh(10000);
stack<int> st;
int visi[100],stk[100];
int iscyc(int vis[],int i)
{
	if(!vis[i])
	{
		vector<int>::iterator it;
		vis[i]=1;
		stk[i]=1;
		it=gh[i].begin();
		while(it!=gh[i].end())
		{
			if( !vis[*it] && iscyc(vis,*it) )
				return 1;
			else if(stk[*it])
				return 1;
			it++;
		}
	}
	stk[i]=0;
	return 0;
}
int dcycle(int n)
{
	int vis[n],i;
	for(i=0;i<n;i++)
		vis[i]=0;
	for(i=0;i<n;i++)
	{
		if(iscyc(vis,i))
			return 1;
	}
	return 0;
}
void topo(int n,int i)
{
	visi[i]=1;
	vector<int>::iterator it;
	it=gh[i].begin();
	while(it!=gh[i].end())
	{
		if(!visi[*it])
		{
			topo(n,*it);
		}
		it++;
	}
	st.push(i);
}
int main()
{
	freopen("topo.txt","r",stdin);
	int n,e,a,b,i,po=0;
	scanf("%d%d",&n,&e);
	vector<int>::iterator it;
	for(i=0;i<e;i++)
	{
		scanf("%d%d",&a,&b);
		gh[a].push_back(b);
	}
	if(dcycle(n))
	{
		cout<<"graph contains cycle\n";
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(!visi[i])
			{
				topo(n,i);
			}
		}
		while(!st.empty())
		{
			cout << st.top() <<"\t";
			st.pop();
		}
	}
	return 0;
}
