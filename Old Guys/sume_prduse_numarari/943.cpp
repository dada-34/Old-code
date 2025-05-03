#include<iostream>
using namespace std;
int main()
{
    long long int n,i,s=0;
    cin>>n;
    if(n/10!=0)
    {
        s=s+3*(n/10);
        n=n%10;
    }

        for(i=1;i<=n;i++)
        {
            s=s+(i*i*i*i)%10;
        }


    

    cout<<s%10;
}