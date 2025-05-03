#include<iostream>
using namespace std;
int main()
{
    long long int n,i,p=1,j=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       p=p*j;
       j+=2;
    }
    cout<<p;
}