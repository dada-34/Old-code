#include<iostream>
using namespace std;
int main()
{
    long long int n,p=1;
    cin>>n;
    if(n==0)
    {
        cout<<1;
    }
    else
    { 
        for(int i=1;i<=n;i++)
        {
            p=p*i;
        }
        cout<<p;
    }

    
}