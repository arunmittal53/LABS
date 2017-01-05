#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node* newnode(int data)
{
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
node* insert(node *root,int data)
{
	if(root == NULL)
	{
		node *temp = newnode(data);
		return temp;
	}
	if(root->data > data)
	{
		root->left = insert(root->left,data); 
	}
	else
	{
		root->right = insert(root->right,data);
	}
	return root;
}
void print(node *root)
{
	if(root != NULL)
	{
		print(root->left);
		cout<<root->data<<" ";
		print(root->right);
	}
}
node* foo(node *root)
{
	while(root->left)
	{
		root = root->left;
	}
	return root;
}
node* remove(node *root,int data)
{
	if(root == NULL)
		return NULL;
	if(root->data == data)
	{
		if(root->left == NULL)
			return root->right;
		if(root->right == NULL)
			return root->left;
		node *temp = foo(root->right);
		int t = temp->data;
		temp->data = root->data;
		root->data = t;
		root->right = remove(root->right,temp->data);
	}
	else if(root->data > data)
	{
		root->left = remove(root->left,data);
	}
	else
	{
		root->right = remove(root->right,data);
	}
	return root;
}
int main()
{
	int x;
	node *root;
	root = NULL;
	while(1)
	{
		cout<<"0 to break, 1 to insert, 2 to remove\n";
		cin>>x;
		if(x == 0)
			break;
		if(x == 1)
		{
			int data;
			cout<<"enter data\n";
			cin>>data;
			root = insert(root,data);
		}
		else if(x == 2)
		{
			int data;
			cout<<"enter data\n";
			cin>>data;
			root = remove(root,data);
		}
		else
		{
			cout<<"Invalid Choice\n";
		}
		cout<<"****************************************************\n";
		print(root);
		cout<<"\n****************************************************\n";
	}
}
