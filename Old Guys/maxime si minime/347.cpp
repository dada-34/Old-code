#include<iostream>
using namespace std;
int main()
{
    int n,i,x,q,p;
    cin>>n;
    cin>>p;
    q=p;
    
    // q - maxim
    // p - minim


    for(i=1;i<n;i++)
    {
        cin>>x;
        if(x>q)
            q=x;
        if(x<p)
            p=x;
    }
    cout<<q+p;
    
    
    return 0;
}