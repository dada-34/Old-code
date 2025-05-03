#include<iostream>
using namespace std;
int main()
{
    int n,i,s,k;
    cin>>n;
    s=0;
    k=0;
    int v[n];
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        s += v[i];
    }

    for(i=0;i<n;i++)
    {
        if(v[i] > s/n)
            k++;
    }

    cout<<k;
}