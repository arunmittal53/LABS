#include<stdio.h>
main()
{
	int n,i,j,a[60],s,t;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter array element");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		s=i;
		for(j=i+1;j<n;j++)
		{
			if(a[s]>a[j])
			{
				s=j;	
			}
		}
		if(i!=s)
		{
			t=a[i];
			a[i]=a[s];
			a[s]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
