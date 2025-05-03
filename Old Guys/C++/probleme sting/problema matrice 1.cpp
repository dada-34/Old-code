#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,p=1,pmax=0;
    cin>>m;
    cin>>n;
    int a[m][n];
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];


    for(j=1;j<=n;j++)
        {
            p=1;
            for(i=1;i<=m;i++)
                {
                    p=p*a[i][j];
                }
            if(pmax<p)pmax=p;
        }
    for(j=1;j<=n;j++)
        {
            p=1;
            for(i=1;i<=m;i++)
                {
                    p=p*a[i][j];
                }
            if(pmax==p)cout<<j<<" ";
        }    
    




}
// 2 1 1 0 1 1 1 1 2 2 2 1 1 2 1 1