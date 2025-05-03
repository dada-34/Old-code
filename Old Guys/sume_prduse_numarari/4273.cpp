#include<iostream>
using namespace std;
int main()
{
    long long int n,j,k=1;
    cin>>n;
    long long int P=1,i=0;
    while(i!=n)
    {   

        for(j=1;j*j<=k;j++)
        {
            if(j*j==k)
                {
                    P=P*k;
                    i++;
                }
        }
        k++;
    }
    cout<<P;
}   