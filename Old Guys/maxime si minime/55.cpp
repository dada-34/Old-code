#include<iostream>
using namespace std;
int main()
{
    int n,min=-1;
    cin>>n;

    while(n!=0)
    {
        if(min<0)
            min=n;
        else
            if(min>n)
                min=n;
        
        cin>>n;
    }
    if(min>=0)
        cout<<min;
    else 
        cout<<"NU EXISTA";
}