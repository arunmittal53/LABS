#include "struc.h"

#ifndef INSERT_H
#define INSERT_H


node* insert_at_beg(node *head,int data)
{
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = head;
	return temp;
}
node* insert_at_k(node *head,int k,int data)
{
	if(k == 1)
	{
		return insert_at_beg(head, data);
	}
	node *temp;
	temp = head;
	while(k!=2 && temp !=NULL)
	{
		k--;
		temp = temp->next;
	}
	if(k == 2)
	{
		node *local = (node*)malloc(sizeof(node));
		local->data = data;
		local->next = temp->next;
		temp->next = local;
		return head;
	}
	else
	{
		//cout<<"Invalid position\n";
		return head;
	}
}
node* delete_at_beg(node *head)
{
	node *temp;
	if(head != NULL)
	{
		temp = head->next;
		free(head);
		return temp;
	}
	else
	{
		//cout<<"Empty list\n";
		return NULL;
	}
}
node* delete_at_k(node *head,int k)
{
	node *temp;
	node *local;
	if(k==1)
	{
		return delete_at_beg(head);
	}
	temp = head;
	while(temp != NULL && k !=2)
	{
		k--;
		temp = temp->next;
	}
	if(k == 2)
	{
		local = temp->next;
		temp->next = temp->next->next;
		free(local);
		return head;
	}
	else
	{
	//	cout<<"Invalid position\n";
		return head;
	}
}
void print(node *head)
{
//	cout<<"***************************\n";
	node *temp;
	temp = head;
	while(temp != NULL)
	{
	//	cout<<temp->data<<" ";
		temp = temp->next;
	}
	//cout<<"\n***************************\n";
}

#endif
