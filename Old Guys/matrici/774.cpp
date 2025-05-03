#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int v[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }

    int ok;
     for(i=0;i<n;i++)
    {   
        ok=1;
       for(j=2;j*j<=v[i][0];j++)
       {
            if( v[i][0] % j == 0)
            {
                ok=0;
                break;
            }
        }
        if(ok==0)
        {
           for(j=0;j<m;j++)
           {
            cout<<v[i][j]<<" ";
           }
           cout<<endl;
        }
    }

      return 0;
}