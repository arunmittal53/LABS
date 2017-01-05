#include<bits/stdc++.h>
using namespace std;
struct node{
	int dest,wei;
	node(int a,int b):dest(a),wei(b){}
	node(){}
};
struct cmp{
	bool operator()(const node &a,const node &b){
		return a.wei > b.wei;
	}
};
int main()
{
	freopen("prim.txt","r",stdin);
	int n,e,i,a,b,c,visi[100]={0},parent[100]={0},dis[100],d,w;
	node tmp;
	//cout<<"hello\n";
	scanf("%d%d",&n,&e);
	dis[0]=0;
	for(i=1;i<n;i++)
		dis[i]=INT_MAX;
	vector<vector<node> >gh(n);
	priority_queue<node,vector<node>,cmp> pq;
	vector<node>::iterator it;
	for(i=0;i<e;i++)
	{
		//cout<<"enter new edge\n";
		scanf("%d%d%d",&a,&b,&c);
		//cout<<"inserting into gh\n";
		gh[a].push_back(node(b,c));
		gh[b].push_back(node(a,c));
	}
	//cout<<"hi\n";
	
	for(i=1;i<n;i++)
		pq.push(node(i,INT_MAX));
		pq.push(node(0,0));
	/*while(!pq.empty())
	{
		tmp=pq.top();
		cout<<tmp.dest<<"	"<<tmp.wei<<"\n";
		pq.pop();
	}*/
	for(i=0;i<n;i++)
	{
		//cout<<pq.size()<<"\n";
		while(!pq.empty())
		{
			tmp=pq.top();
			//cout<<"top element "<<tmp.dest<<"	"<<tmp.wei<<"\n";
			//for(int j=0;j<n;j++)
			//	cout<<visi[j]<<" ";
			//cout<<"\n";
			if(visi[tmp.dest]==0)
				break;
			//cout<<"discard as alresdy visited "<<tmp.dest<<"	"<<tmp.wei<<"\n";
			pq.pop();
		}
		//cout<<pq.size()<<"\n";
		if(!pq.empty())
		{
			d=tmp.dest;
			w=tmp.wei;
			pq.pop();
			cout<<parent[d]<<"	"<<d<<"	"<<w<<"\n";
			it=gh[d].begin();
			visi[d]=1;
			//cout<<"visites are "<<d<<"\n";
			while(it!=gh[d].end())
			{
				//cout<<"checking for insertion "<<it->dest<<"	"<<it->wei<<"\n";
				if((visi[it->dest]==0)&&((dis[it->dest])>(it->wei)))
				{
					//cout<<"inserting "<<it->dest<<"	"<<it->wei<<"\n";
					pq.push(node(it->dest,it->wei));
					dis[it->dest]=it->wei;
					parent[it->dest]=d;
				}
				it++;
			}
			//pq.pop();
		}
	}
	return 0;
}
