#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
     if(n%2==1)
        for(i=n-n/2;i<=n+n/2;i++)
        {
            cout<<i<<" ";
        }
     else 
        cout<<"NU ESTE NOROCOS";
   return 0;
}