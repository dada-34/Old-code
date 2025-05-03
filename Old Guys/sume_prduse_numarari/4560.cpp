#include<iostream>
using namespace std;
int main()
{
    int n,s,i,cn;
    cin>>n;
    s=0;
    while(n!=0)
    {   
        i=0;
        cn=n;
            while(cn!=0)
            {
                i=i+1;
                cn=cn/10;
            }
        if(i==3 && n%10==n/100)
            s=s+n;
        cin>>n;
    }
    cout<<s;
    return 0;
}