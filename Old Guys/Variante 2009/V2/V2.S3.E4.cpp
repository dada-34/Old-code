#include <iostream>

using namespace std;

int f(int a)
{
    int i,ok,ex=0;
    for(i=2;i<=a;i++)
    {
        ok=1;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
                ok=0;
        }
        if(ok==1)
        {
            while(a%i==0)
            {
                ex++;
                a = a / i;
            }
        }
    }
    return ex;
}

int main()
{  
    int a,val;
    cin>>a;
    
    if(a<10)
    {
        val = f(a);
        if(val  == 1)
            cout<<"DA";
        else
            cout<<"NU";
    }
    else
    {
        val = f(a);
        if(val  == 1)
        {
            a = a/10 + a%10*10;
            val = f(a);
            if(val  == 1)
                cout<<"DA";
            else
                cout<<"NU";
        }
        else
            cout<<"NU";
    }
    
    return 0;
}