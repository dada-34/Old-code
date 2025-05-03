#include<iostream>
using namespace std;
int main()
{
    long long int n,x,i,s1=0,s2=0;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(i<=n/2)
            s1=s1+x;
        else
            s2=s2+x;
    }

    cout<<s1*s2;
}