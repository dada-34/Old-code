#include<iostream>
using namespace std;
int main()
{
    int n,C=0,i,j,ok=1;

    cin>>n;

    int v[n];

    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=2;j <= v[n-1];j++)
        {
            if( v[i]%j==0 && v[n-1]%j==0)
            {
                ok=0;
                j=v[n-1]+1;
            }
        }
        if(ok==1)
            C++;

        ok=1;

    }

    cout<<C;

}