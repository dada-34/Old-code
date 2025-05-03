#include<iostream>
using namespace std;
int s2;

int sum1(int a,int b)
{
    return a+b;
}

void sum2(int a,int b)
{
    s2=b+a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<sum1(a,b)<<'\n';
    cout<<s2<<'\n';
    sum2(a,b);
    cout<<s2<<'\n';
    return 0;
}