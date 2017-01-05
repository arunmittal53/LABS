#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	char data;
	float fre;
	struct node *l,*r;
}node;
struct comp  
{  
   bool operator()(const node* a,const node* b)  
   {  
       return a->fre > b->fre;  
   }  
};
void codes(node *root,string st)
{
	if(root)
	{
		if(root->l==NULL&&root->r==NULL)
		{
			cout<<root->data<<"	"<<st<<"\n";
			return ;
		}
		codes(root->l,st+'0');
		codes(root->r,st+'1');
	}
}
void order(node *root)
{
 	if(root)
 	{
 		cout<<root->fre<<"	";
 		order(root->l);
 		order(root->r);
 	}
}
int main()
{
	freopen("huffman.txt","r",stdin);
	int n,i,b;
	char a;
	cin>>n;
	node *tmp,*fi,*se;
	priority_queue<node*,vector<node*>,comp> qu;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		tmp=(node*)malloc(sizeof(node));
		tmp->data=a;tmp->fre=b;tmp->l=NULL;tmp->r=NULL;
		qu.push(tmp);
	}
	while(qu.size()!=1)
	{
		fi=qu.top();
		qu.pop();
		se=qu.top();
		qu.pop();
		tmp=(node*)malloc(sizeof(node));
		tmp->l=fi;tmp->r=se;tmp->fre=fi->fre+se->fre;
		qu.push(tmp);
	}
	tmp=qu.top();
	string st;
	codes(tmp,st);
	return 0;
}
