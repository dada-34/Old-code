#include<iostream>
using namespace std;
int main()
{
    int n,i,x,m;
    cin>>n;
    cin>>m;
    for(i=1;i<n;i++)
    {
        cin>>x;
        if(x<m)
            m=x;
    }
    cout<<m;
    return 0;
}
