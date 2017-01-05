#include<bits/stdc++.h>
using namespace std;
struct node{
	int dest,wei;
	node(int a,int b):dest(a),wei(b){}
	node(){}
};
struct edge{
	int dest,wei,srt;
	edge(int a,int b,int c):srt(a),dest(b),wei(c){}
	edge(){}
};
int main()
{
	freopen("prim.txt","r",stdin);
	int n,e,i,a,b,c,visi[100]={0},dis[100],d,w;
	node tmp;
	//cout<<"hello\n";
	scanf("%d%d",&n,&e);
	dis[0]=0;
	for(i=1;i<n;i++)
		dis[i]=10000;
	vector<vector<node> >gh(n);
	vector<node>::iterator nit;
	vector<edge> ed;
	vector<edge>::iterator eit;
	for(i=0;i<e;i++)
	{
		//cout<<"enter new edge\n";
		scanf("%d%d%d",&a,&b,&c);
		//cout<<"inserting into gh\n";
		gh[a].push_back(node(b,c));
		gh[b].push_back(node(a,c));
		ed.push_back(edge(a,b,c));
		ed.push_back(edge(b,a,c));
	}
	while(1)
	{
		eit=ed.begin();
		int ch=0;
		while(eit!=ed.end())
		{
			cout<<"checking for "<<eit->srt<<"	"<<eit->dest<<" "<<eit->wei<<"\n";
			if((dis[eit->srt]+eit->wei)<dis[eit->dest])
			{
				cout<<"updating  "<<eit->srt<<"	"<<eit->dest<<" "<<eit->wei<<"\n";
				dis[eit->dest]=dis[eit->srt]+eit->wei;
				ch=1;
			}
			eit++;
		}
		cout<<"\n\n";
		if(ch==0)
			break;
	}
	for(i=0;i<n;i++)
		cout<<i<<"	"<<dis[i]<<"\n";
	return 0;
}
