#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i,n,s=0;
    cin>>n;
    cin>>a>>b>>c;

    for(i=2;i<n;i++)
    {
        if(b>a && b>c)
            s=s+b;
        a=b;
        b=c;
        if(i<n-1)
            cin>>c;
    }
    cout<<s;
}