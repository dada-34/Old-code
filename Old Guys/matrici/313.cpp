#include<iostream>
using namespace std;
int main()
{
    int n,i,j,;
    cin>>n;
    int v[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        s1 += v[i][i];
    }

    for(i=n-1, j=0;i>=0 && j<n;j++,i--)
    {
        s2 += v[i][j];
    }

    cout<<abs(s1-s2);
    return 0;
}