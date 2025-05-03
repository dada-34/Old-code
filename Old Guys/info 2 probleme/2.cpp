#include<iostream>
using namespace std;
int main()
{
    int n,i=2,ok=1,k=0,j;
    cin>>n;

    if(n==0 || n==1)
    {
        cout<<"Nu este format din numere prime!";
        return 0;
    }
    else
        while(n!=1 && n!=0)
        {
            for(j=2;j*j<=i && ok!=0 ; j++)
            {
                if(i%j==0)
                    ok=0;
            }
            if(ok==1)
            {
                while(n%i==0)
                {
                    n=n/i;
                    k++;
                }

                if(k!=0 && n!=1)
                    cout<<i<<"^"<<k<<" ";
                else
                    if(k!=0 && n==1)
                    {
                        cout<<i<<"^"<<k<<'\n';
                    }
                k=0;
            }
            ok=1;
            i++;
        }

    return 0;

}