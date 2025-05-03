#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x<100 && x>9)
            s=s+1;
    }
    cout<<s;
}