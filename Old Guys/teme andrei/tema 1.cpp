#include<iostream>
using namespace std;
int main()
{
    int i,n, maxim, minim,x;
    cin>>n;
    cin>>maxim;
    minim=maxim;
    for(i=1;i<n;i++)
    {
        cin>>x;
        if(x>maxim)maxim=x;
        if(x<minim)minim=x;
    }
    cout<<minim+maxim;
}