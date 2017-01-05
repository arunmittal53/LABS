#include<bits/stdc++.h>

#include "structure.h"
using namespace std;

void print1(node *head)
{
	cout<<"***************************\n";
	node *temp;
	temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n***************************\n";
}
int main()
{
	#ifndef HE
	cout<<"hello\n";
	#endif 
	int ch;
	int data,pos;
	node *head;
	head = NULL;
	while(1)
	{
		cout<<"0 to exit, 1 to insert beg,2 at k\n3 to delete at beg, 4 to delete at k\n";
		cin>>ch;
		if(ch == 0)
			return 0;
		if(ch == 1)
		{
			cout<<"enter data to be inserted\n";
			cin>>data;
			head = insert_at_beg(head, data);
		}
		else if(ch == 2)
		{
			cout<<"enter data and position to be inserted\n";
			cin>>data>>pos;
			head = insert_at_k(head, pos, data);
		}
		else if(ch == 3)
		{
			head = delete_at_beg(head);
		}
		else if(ch == 4)
		{
			cout<<"enter position to be deleted\n";
			cin>>pos;
			head = delete_at_k(head, pos);
		}
		print1(head);
	}
}
