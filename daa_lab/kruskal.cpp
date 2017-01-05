#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int a,b,dis;
}node;
struct comp  
{  
   bool operator()(const node* a,const node* b)  
   {  
       return a->dis > b->dis;  
   }  
};
int find(int parent[],int lo)
{
	while(parent[lo]!=lo)
	{
		lo=parent[lo];
	}
	return lo;
}
int main()
{
	freopen("kruskal.txt","r",stdin);
//	freopen("kruskal - Copy.txt","a",stdout);
	int t;
	cin>>t;
	while(t--){
		int n,i,x,qw,y,z,cnt=0;
		cin>>n>>qw;
		int arr[n],parent[n],size[n];
		for(i=0;i<n;i++){
			parent[i]=i;size[i]=1;
		}
		for(i=0;i<n;i++)
			arr[i]=0;
		node *tmp;
		/*list<node*> lst;
		list<node*>::iterator it;*/
		priority_queue<node*,vector<node*>,comp> qu;
		for(i=0;i<qw;i++)
		{
			cin>>x>>y>>z;
			tmp=(node*)malloc(sizeof(node));
			tmp->a=x;tmp->b=y;tmp->dis=z;
			qu.push(tmp);
		}
		while(!qu.empty())
		{
			tmp=qu.top();
			int p1,p2;
			p1=find(parent,tmp->a);
			p2=find(parent,tmp->b);
			if(p1!=p2)
			{
				if(size[p1]==size[p2])
				{
					parent[p1]=p2;size[p2]+=1;
				}
				else if(size[p1]>size[p2])
				{
					parent[p2]=p1;
				}
				else
				{
					parent[p1]=p2;
				}
				cout<<tmp->a<<"	"<<tmp->b<<"	"<<tmp->dis<<"\n";
			}
			qu.pop();
		}
		cout<<"\n\n";
	}
	return 0;
}
