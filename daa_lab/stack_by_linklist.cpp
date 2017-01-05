#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int data;
	struct node *link;
}node;
node* push(node *top,int data)
{
	node *temp=(node*)malloc(sizeof(node));
	temp->data=data;
	temp->link=top;
	return temp;
}
node* pop(node *top)
{
	node *temp;
	if(top==NULL)
	{
		cout<<"\tSTACK IS EMPTY\n";
		return NULL;
	}
	temp=top->link;
	free(top);
	return temp;
}
void print_top(node *top)
{
	if(top==NULL)
	{
		cout<<"\tSTACK IS EMPTY\n";
		return ;
	}
	cout<<"\t"<<top->data<<"\n";
}
void print_all(node *top)
{
	node *tmp;
	tmp=top;
	while(tmp)
	{
		cout<<"\t"<<tmp->data;
		tmp=tmp->link;
	}
	cout<<"\n";
}
int main()
{
	int n;
	node *top;
	top=NULL;
	while(1)
	{
		int data;
		cout<<"0 to stop program\n1 for push\n2 for pop\n3 for print top element\n4 to print all stack element\t";
		cin>>n;
		if(n==0)
			break;
		else if(n==1)
		{
			cout<<"enter data to be inserted\t";
			cin>>data;
			top=push(top,data);
		}
		else if(n==2)
		{
			top=pop(top);
		}
		else if(n==3)
		{
			print_top(top);
		}
		else if(n==4)
		{
			print_all(top);
		}
	}
	return 0;
}
