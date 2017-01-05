#include<stdio.h>
void merge(int*,int,int,int);
void mergesort(int*,int,int);
int main()
{
	int a[100000],i,n;
	printf("enter no of entries\t");
	scanf("%d",&n);
	printf("enter entries\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void merge(int a[100000],int left,int mid,int right)
{
	int i,j,k,t[100000];
	i=left;j=mid+1;k=left;
	while((i<=mid)&&(j<=right))
	{
		if(a[i]<=a[j])
		{
			t[k]=a[i];
			k++;i++;
		}
		else
		{
			t[k]=a[j];
			k++;j++;
		}
	}
	if(i>mid)
	{
		while(j<=right)
		{
			t[k]=a[j];
			k++;j++;
		}
	}
	if(j>right)
	{
		while(i<=mid)
		{
			t[k]=a[i];
			k++;i++;
		}
	}
	for(i=left;i<=right;i++)
	{
		a[i]=t[i];
	}
}
void mergesort(int a[100000],int left,int right)
{
	if(left<right)
	{
		int mid=(left+right)/2;
		mergesort(a,left,mid);
		mergesort(a,mid+1,right);
		merge(a,left,mid,right);
	}
	else
	return;
}
