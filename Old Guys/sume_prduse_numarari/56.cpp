#include<iostream>
using namespace std;
int main()
{
    long long int a=10,b,c=0;

    cin>>a;
    cin>>b;
    if(a==0)
        return 0;
    else
    {
        while(b!=0)
        {
           
            if(a%10==b%10)
                c=c+1;
            else    
                a=b;
                cin>>b;
        }
        cout<<c;
    }
    
}