#include<iostream>
using namespace std;
int main()
{
    long long int n,s,i;
    cin>>n;
    s=0;
    for(i=1;i*i<=n;i++)
    {
        s=s+i*i;
    }

    cout<<"Rezultatul este "<<s;
}