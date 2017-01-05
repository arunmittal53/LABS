#include<bits/stdc++.h>
using namespace std;
int smallest(int dist[],int visit[],int n)
{
	int min=INT_MAX;
	int index=0;
	for(int i=0;i<n;i++)
	{
		if(!visit[i]&&min>dist[i])
		{
			min=dist[i];index=i;
		}
	}
	return index;
}
int main()
{
	//freopen("prim.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,i,start;
		cin>>n>>start;
		int gh[n][n],dist[n],j,min,ver,visit[n],parent[n];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>gh[i][j];
		for(i=0;i<n;i++){
			dist[i]=INT_MAX;visit[i]=0;
		}
		dist[start]=0;
		ver=n-1;
		parent[start]=-1;
		while(ver--)
		{
			min=smallest(dist,visit,n);
			for(i=0;i<n;i++)
			{
				if(gh[min][i]&&visit[i]==0)
				{
					if(dist[i]>gh[min][i])
					{
						dist[i]=gh[min][i];parent[i]=min;
					}
				}
			}
			visit[min]=1;
		}
		for(i=0;i<n;i++)
		{
			if(i!=start)
				cout<<parent[i]<<"	"<<i<<"	  "<<gh[parent[i]][i]<<"\n";
		}
		printf("\n\n");
	}
	return 0;
}
