#include<stdio.h>
void main()
{
	int n,i,j,a[50],s;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array element");
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i;s=a[i];
		while(j!=0)
		{
			if(a[j]<a[j-1])
			{
				a[j]=a[j-1];
				a[j-1]=s;
				j--;
			}
			else
				break;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
