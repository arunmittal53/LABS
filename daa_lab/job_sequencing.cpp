#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	char data;
	int dead,pro;
}node;
struct cmp  
{  
   bool operator()(const node* a,const node* b)  
   {  
       return a->pro < b->pro;  
   }  
};
bool fun(node a,node b)
{
	return a.dead > b.dead;
}
int main()
{
	//freopen("job_sequencing.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,ma=0;
		cin>>n;
		node st[n];
		for(i=0;i<n;i++)
		{
			cin>>st[i].data>>st[i].dead>>st[i].pro;
			ma=max(ma,st[i].dead);
		}
		sort(st,st+n,fun);
	/*	for(i=0;i<n;i++)
			cout<<st[i].data<<"	"<<st[i].dead<<"	"<<st[i].pro<<"\n";*/
		priority_queue<node*,vector<node*>,cmp> stt;
		int index=0;
		node *tmp;
		for(i=ma;i>0;i--)
		{
			while(st[index].dead==i)
			{
				tmp=(node*)malloc(sizeof(node));
				tmp->data=st[index].data; tmp->dead=st[index].dead; tmp->pro=st[index].pro;
				stt.push(tmp);
				index++;
			}
			if(!stt.empty()) { tmp=stt.top();	stt.pop();  cout<<tmp->data<<"	"<<tmp->pro<<"\n";}
			tmp=NULL;
		}
		cout<<"\n\n";
	}
	return 0;
}
