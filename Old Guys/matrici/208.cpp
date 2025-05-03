#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,k=1;
    cin>>n>>m;
    int v[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            v[i][j] = k*k;
            k+=2;
        }
    }

     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}