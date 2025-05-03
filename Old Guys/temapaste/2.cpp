#include<iostream>
using namespace std;

void afisvec(int &n, int *v)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}


int main()
{
    int n,i;
    cin>>n;
    int v[n];
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }

    afisvec( n,v);
    


    return 0;
}