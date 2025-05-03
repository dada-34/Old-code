#include<iostream>
using namespace std;

void citvec(int &n, int *v)
{
    int i;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
}


int main()
{
    int n,i;
    cin>>n;
    int v[n];
    citvec(n,v);
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<'\n'<<n;

    return 0;
}
