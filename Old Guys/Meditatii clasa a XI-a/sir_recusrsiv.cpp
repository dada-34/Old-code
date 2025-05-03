#include<iostream>
using namespace std;

int sub(int n)
{
    int max=0;
    int v[n+1],i;
    for(i=0;i<=n;i++)
    {
        if(i<=5)
            v[i] = i;
        else
            v[i] = 2*v[i-1];
        if(max<v[i] && v[i]<=n)
        {
            max = v[i];
        }
    }

    return max;


}


int main()
{
   int n,max;
   cin>>n;
   max  = sub(n);
   cout<<max;
    
}