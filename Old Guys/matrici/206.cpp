#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int a[n+1][m+1];
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j] = min(i,j);
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}