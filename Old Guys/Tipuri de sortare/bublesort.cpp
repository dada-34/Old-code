#include<iostream>
using namespace std;
int main()
{
    int v[100],i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]>v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for(i=0;i<n;i++)
     cout<<v[i]<<" ";

     return 0;
}