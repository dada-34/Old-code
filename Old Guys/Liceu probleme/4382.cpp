#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0,ok=1;
    cin>>n;
    int v[n];

    for(i=0;i<n;i++)
    {
        cin>>v[i];


        if(v[i] %2==0 && v[i] != 2)
            ok=0;
        
        else
            if(v[i]%3==0 && v[i]!=3)
                ok=0;

        for(j=5;j*j<=v[i] && ok!=0;j++)
        {
            if( v[i]%j==0)
                ok=0;
        }

        if(ok==1)
        {
            v[i]=0;
        }
        ok=1;
    }

    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}