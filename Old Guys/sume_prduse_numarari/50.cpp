#include<iostream>
using namespace std;
int main()
{
    long long int S=0,n,i,j,p;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=1;j<=i;j++)
        {
            p=p*j;
        }
        S=S+p;
    }
    cout<<"Rezultatul este "<<S;
}