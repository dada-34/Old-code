#include<iostream>
using namespace std;


int pali(int &n)
{
    int mn=0,cn;
    cn = n;
    while(cn!=0)
    {
        mn = mn*10 + cn%10;
        cn = cn/10;
    }

    if(n == mn)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int n,ok;
    cin>>n;

    ok = pali(n);

    cout<<ok;

    return 0;
}