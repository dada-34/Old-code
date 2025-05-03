#include<iostream>
using namespace std;
int main()
{
    int s,n;
    s=0;
    cin>>n;
    while(n!=0)
    {   
        if(n%2==0)
            s=s-n*(n+1);
        else
            s=s + n*(n+1);
        n--;
    }
    cout<<"Rezultatul este "<<s;
    return 0;
}