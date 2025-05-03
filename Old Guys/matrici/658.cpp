#include<iostream>
using namespace std;
int main()
{
int n,m,i,j,x;
int s=0;

cin>>n;
cin>>m;

int a[n][m];
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}

for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
      s=s+a[i][j];
    }
    cout<<s<<" ";
    s=0;
}

return 0;
}