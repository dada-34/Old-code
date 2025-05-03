#include<iostream>
using namespace std;

void elx(int &n,int *v, int x)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(v[i]==x)
        {
            for(j=i;j<n-1;j++)
                v[j]=v[j+1];
            i=i-1;
            n--;
        }
    }
}

int main()
{
   int n,x;
   cin>>n;
   cin>>x;
   int v[100];
   int i;
   for(i=0;i<n;i++)
   {
        cin>>v[i];
   }
   elx(n, v, x);

   for(i=0;i<n;i++)
   {
    cout<<v[i]<<" ";
   }
}