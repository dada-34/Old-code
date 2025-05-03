#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int A[n+1][m+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {   
            if(j<i)
                A[i][j] = j;
            else 
                A[i][j] = i;
        }
    }
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}