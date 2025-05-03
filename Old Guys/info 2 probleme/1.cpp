#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    r=n%9;
    if(r==0)
        cout<<9;
    else    
        cout<<r;
    
    return 0;
}