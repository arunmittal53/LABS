#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int wt,p;
	float den;
}node;
bool fun(node a,node b)
{
	return a.den>b.den;
}
int main()
{
	//freopen("fractional_knapsack.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,cost,i;
		float ans=0;
		cin>>cost;
		cin>>n;
		node x[n];
		for(i=0;i<n;i++)
		{
			cin>>x[i].wt>>x[i].p;
			x[i].den=float(x[i].p)/x[i].wt;
		}
		sort(x,x+n,fun);
	/*	for(i=0;i<n;i++)
			cout<<x[i].den<<"	"<<x[i].p<<"	"<<x[i].wt<<"\n";*/
		i=0;
		while(cost>0&&i<n)
		{
			if(cost>=x[i].wt)
			{
				cost-=x[i].wt;
				ans+=x[i].p;
				i++;
			}
			else
			{
				ans+=(cost*x[i].den);
				cost=0;
				break;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}

