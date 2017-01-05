#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int ter;
	struct node *link[26];
};
node* newnode()
{
	node *tmp=(node*)malloc(sizeof(node));
	tmp->ter=0;
	for(int i=0;i<26;i++)
		tmp->link[i]=NULL;
	return tmp;
}
void initilize(node **x)
{
	*x=newnode();
}
void insert(node **root,string x)
{
	if(x.length()==0)
	{
		(*root)->ter=1;
	}
	else
	{
		int a=x[0]-'a';
		string q;
		for(int i=1;i<x.length();i++)
			q+=x[i];
		if((*root)->link[a]==NULL)
		{
			(*root)->link[a]=newnode();
			
		}
		insert(&((*root)->link[a]),q);
	}
}
void exists(node *root,string st)
{
	if(st.length()==0)
		cout<<"yes\n";
	else
	{
		int a=st[0]-'a';
		if(root->link[a])
		{
			string q;
			for(int i=1;i<st.length();i++)
				q+=st[i];
			exists(root->link[a],q);
		}
		else
		{
			cout<<"no\n";
		}
	}
}
int main()
{
	node *root;
	initilize(&root);
	int n,i;
	string str;
	cout<<"enter n\n";
	//cout<<"before n\n";
	cin>>n;
	//cout<<"after n\n";
	for(i=0;i<n;i++)
	{
		cout<<"enter string \n";
		cin>>str;
		//printf("before %d string\n",i+1);
		insert(&root,str);
	//	printf("after %d string\n",i+1);
	}
	cout<<"enter no of string to be searched\n";
	cin>>n;
	cout<<"enter strings to be searched\n";
	for(i=0;i<n;i++)
	{
		cin>>str;
		exists(root,str);
	}
	return 0;
}
