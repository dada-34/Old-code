#include<iostream>
using namespace std;
int main()
{
    long long int n,i,p,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=1;j<=i;j++)
            p=p*j;
        
        cout<<p<<" ";
    }
}