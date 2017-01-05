#include<bits/stdc++.h>
using namespace std;
struct node{
	int dest,wei;
	node(int a,int b):dest(a),wei(b){}
	node(){}
};
struct edge{
	int dest,wei,src;
	edge(int c,int a,int b):src(c),dest(a),wei(b){}
	edge(){}
};
struct cmp{
	bool operator()(const node &a,const node &b){
		return a.wei > b.wei;
	}
};
void dijkstra(vector<vector<node> >gh,int n,int st,int dis[])
{
	int i,d,w,visi[n];
	vector<node>::iterator it;
	for(i=0;i<n;i++)
	{
		visi[i]=0;	dis[i]=1000;
	}
	node tmp;
	priority_queue<node,vector<node>,cmp> pq;
	for(i=1;i<n;i++)
		pq.push(node(i,INT_MAX));
	int arr[n];
	pq.push(node(st,0));
	for(i=0;i<n;i++)
	{
		while(!pq.empty())
		{
			tmp=pq.top();
			if(visi[tmp.dest]==0)
				break;
			pq.pop();
		}
		if(!pq.empty())
		{
			d=tmp.dest;
			w=tmp.wei;
			pq.pop();
			arr[d]=w;
			it=gh[d].begin();
			visi[d]=1;
			while(it!=gh[d].end())
			{
				if((visi[it->dest]==0)&&((dis[it->dest])>(w + it->wei)))
				{
					pq.push(node(it->dest,w + it->wei));
					dis[it->dest]=w + it->wei;
				}
				it++;
			}
		}
	}
	return;
}
void bellman(vector<vector<node> >gh,int n,int dist[])
{
	vector<node>::iterator it;
	int i;
	vector<edge> ed;
	vector<edge>::iterator ei;
	for(i=0;i<=n;i++)
	{
		it=gh[i].begin();
		while(it!=gh[i].end())
		{
			ed.push_back(edge(i,it->dest,it->wei));
			it++;
		}
	}
	/*ei=ed.begin();
	while(ei!=ed.end())
	{
		cout<<ei->src<<"	"<< ei->dest <<"	"<< ei->wei<<"\n";
		ei++;
	}*/
	for(i=0;i<n;i++)
	{
		ei=ed.begin();
		while(ei!=ed.end())
		{
			if(dist[ei->dest]>dist[ei->src]+ei->wei)
				dist[ei->dest]=dist[ei->src]+ei->wei;
			ei++;
		}
	}
	return ;
}
void johnsons(vector<vector<node> >gh,int n)
{
	int dist[n],i;
	for(i=0;i<=n;i++)
		dist[i]=0;
	vector<vector<node> >work(n);
	vector<node>::iterator it;
	bellman(gh,n,dist);
	for(i=0;i<n;i++)
	{
		it=gh[i].begin();
		while(it!=gh[i].end())
		{
			work[i].push_back(node(it->dest,it->wei+dist[i]-dist[it->dest]));
			it++;
		}
	}
	/*for(i=0;i<n;i++)
	{
		cout<<i<<"\n";
		it=work[i].begin();
		while(it!=work[i].end())
		{
			cout<<it->dest<<"	"<<it->wei<<"\n";
			it++;
		}
		cout<<"\n\n";
	}*/
	int mat[n][n];
	int arr[n],j;
	for(i=0;i<n;i++)
	{
		dijkstra(work,n,i,arr);
		for(j=0;j<n;j++)
			mat[i][j]=arr[j]+dist[j]-dist[i];
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				cout<<"0\t";
			else if(abs(mat[i][j])>=9995)
				cout<<"INF\t";
			else
				cout<<mat[i][j]<<"	";
		}
		cout<<"\n";
	}
}
int main()
{
	freopen("john1.txt","r",stdin);
	int i,e,a,b,c,n;
	cin>>n;
	vector<vector<node> >gh(n+1);
	cin>>e;
	for(i=0;i<e;i++)
	{
		cin>>a>>b>>c;
		gh[a].push_back(node(b,c));
	}
	for(i=0;i<n;i++)
		gh[n].push_back(node(i,0));
	johnsons(gh,n);
	return 0;
}
