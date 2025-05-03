#include<iostream>
using namespace std;

int prim(int &n)
{
    int i,j,ok=1;

    for(i=2;i*i<=n;i++)
    {
        if(n % i == 0)
        ok=0;
    }
}





int main()
{
    int n,i,k;
    cin>>n;

    k = prim(n);
    cout<<k;

    return 0;
}