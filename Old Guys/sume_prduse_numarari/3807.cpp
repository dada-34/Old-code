#include<iostream>
using namespace std;
int main()
{
    long long int n,x,s;
    cin>>n;
    while(n!=0)
    {
        cin>>x;
        s=0;
        s=x*(x+1)/2;
        s=s*(x+2)/3;

        cout<<s<<" ";

        n--;
    }
    
}