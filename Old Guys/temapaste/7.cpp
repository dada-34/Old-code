#include<iostream>
using namespace std;

void buble(int *v, int &n)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int aux;
            if(v[i]>v[j])
            {
                aux  = v[i];
                v[i] = v[j];
                v[j] =  aux;
            }
        }
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

    buble(v,n);

    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}