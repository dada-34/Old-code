#include<iostream>
using namespace std;
int main()
{
    long long int S,n,i,p=1,j;
    S=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p=1;
       for(j=1;j<=i;j++)
       {
            p=p*i;
       }
       S=S+p;
    }
    cout<<"Rezultatul este "<<S;
}