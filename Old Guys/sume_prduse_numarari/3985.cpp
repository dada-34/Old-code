#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0,x;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x<100 && x>9)
            s=s+x;
    }
    cout<<s;
}