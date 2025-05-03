#include<iostream>
using namespace std;
int main()
{
    int n,maxim1=0,maxim2=0;
    cin>>maxim1;
    while(n!=0)
    {
        cin>>n;
        if(n>maxim1)
        {
            maxim2=maxim1;
            maxim1=n;
        }
        else
            if(n>maxim2)
                maxim2=n;
    }
    cout<<maxim1*maxim2;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
}