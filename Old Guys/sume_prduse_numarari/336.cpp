#include<iostream>
using namespace std;
int main()
{
    int s,n,i;
    s=0;
    cin>>n;
    int cn=n;
    for(i=1;i<=cn;i++, n--)
        s=s+n*i;
    cout<<"Rezultatul este "<<s;
    return 0;
}