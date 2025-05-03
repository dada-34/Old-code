#include<iostream>
using namespace std;
int main()
{
      long long int n,j,k=1;
    cin>>n;
    long long int P=1,i=0;
    while(i!=n)
    {   

        if(k%2==0)
        {
            i++;
            P=P*k;
        }
        k++;
    }
    cout<<P;
}