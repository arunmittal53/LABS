#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of variables\n";
    cin>>n;
    int a[100][5],i,j,k,x,y;
    for(i=0;i<n;i++)
    {
            printf("enter minimum and maximum value of %d variable\t",i+1);
            scanf("%d%d",&x,&y);
            a[i][0]=x; a[i][1]=x+1; a[i][2]=(x+y)/2; a[i][3]=y-1; a[i][4]=y;
    }
    int l=0;
    printf("Sr.No.\t");
    for(i=0;i<n;i++)
        printf("variable%d\t",i+1);
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0||j!=2)
            {
                l++;
                cout<<" "<<l<<".\t";
                for(k=0;k<n;k++)
                {
                    if(i==k)
                        printf("%5d\t\t",a[k][j]);
                    else
                        printf("%5d\t\t",a[k][2]);
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}
