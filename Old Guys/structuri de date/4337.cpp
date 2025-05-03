#include<iostream>
using namespace std;

void sortare(long long int a[100000], int i, int n)
{
    if(i>n)
        return;
    
    for(int j=i+1;j<=n;j++)
        if(a[i]>a[j])
        {
            int aux = a[i];
            a[i] = a[j];
            a[j] = aux;
        }

    sortare(a[],n,i+1);
}


int main()
{
    int n,i;
    cin>>n;

    int a[100000],b[100000];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    i=0;
    sortare(a[100000],i,n);
    for(i=0;i<n;i++)
    {
        a[i];
    }



    return 0;
}