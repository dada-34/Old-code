#include<iostream>
using namespace std;
int main()
{
    long long int S,n,i,a,b,c,nr=10234573;
    S=0;
    cin>>n;
    a=n;
    b=n+1;
    c=2*n+1;

    if(a%2==0)
        a=a/2;
    else   
        b=b/2;

    if(a%3==0)
        a=a/3;
    else   
        if(b%3==0)
            b=b/3;
        else
            c=c/3;


    S=a%nr*b%nr*c%nr;

    cout<<S;
}