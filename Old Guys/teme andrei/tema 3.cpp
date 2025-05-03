#include<iostream>
using namespace std;
int main()
{
    int n,maxim;
    cin>>maxim;
    while(n!=0)
    {
        cin>>n;
        if(n>maxim)
            maxim=n;
    }
    cout<<maxim;
    return 0;
}