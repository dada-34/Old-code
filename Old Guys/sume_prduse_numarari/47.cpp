#include<iostream>
using namespace std;
int main()
{
    long long int n,s,i;
    s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=s+(i*i);
    }
    cout<<"Rezultatul este "<<s;
}