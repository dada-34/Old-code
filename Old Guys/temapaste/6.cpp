#include<iostream>
using namespace std;

void xin(int *v, int &n, int &p,int &x)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        if(i==p)
        {
           for(j=n+1;j>i;j--)
            {
                v[j]=v[j-1];
            }
            v[i] = x;
            n++;
        }
    }
}







int main()
{
    int n,x,p;
    cin>>n;
    cin>>x;
    cin>>p;

    int i, v[100];
    for(i=0;i<n;i++)
        cin>>v[i];
    


    xin( v,n,p,x);

    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}

