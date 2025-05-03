#include<iostream>
using namespace std;
int main()
{
    long long int n,k,s=0;
    cin>>n>>k;
    s += (n/k) * (k*(k-1)/2)  + (n%k)*(n%k+1)/2;
    cout<<s;
}