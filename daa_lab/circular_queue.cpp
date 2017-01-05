#include<bits/stdc++.h>
using namespace std;
int arr_for_queue[10];
int front=-1;
int rear=-1;
void insert(int data)
{
	if(front==-1&&rear==-1)
	{
		arr_for_queue[++rear]=data;
		front++;
		return ;
	}
	if((rear+1)%10==front)
	{
		cout<<"arr_for_queue is full\t";
		return ;
	}
	arr_for_queue[++rear]=data;
}
void delet()
{
	if(rear==-1)
	{
		cout<<"arr_for_queue is empty\n";
		return ;
	}
	if(rear==front)
	{
		rear=-1;
		front=-1;
		return ;
	}
	front=(front+1)%10;
}
void print_front()
{
	if(rear==-1)
	{
		cout<<"arr_for_queue is empty\n";
		return ;
	}
	cout<<arr_for_queue[front]<<"\tis on index\t"<<front"\n";
}
void print_all()
{
	if(rear==-1)
	{
		cout<<"arr_for_queue is empty\n";
		return ;	
	}
	for(int i=front;i<=rear;i++)
		cout<<arr_for_queue[i]<<"is on index"<<i<<"\n";
}
int main()
{
	int n;
	while(1)
	{
		int data;
		cout<<"0 to stop program\n1 for insert\n2 for delete\n3 for print front element\n4 to print all element\t";
		cin>>n;
		if(n==0)
			break;
		else if(n==1)
		{
			cout<<"enter data to be inserted\t";
			cin>>data;
			insert(data);
		}
		else if(n==2)
		{
			delet();
		}
		else if(n==3)
		{
			print_front();
		}
		else if(n==4)
		{
			print_all();
		}
	}
	return 0;
}
