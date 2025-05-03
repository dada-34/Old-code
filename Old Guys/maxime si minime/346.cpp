#include<iostream>
using namespace std;
int main()
{
    long long int n,max,nmax,x;
    cin>>n;
    cin>>max;
    nmax=1;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        if(x>max)
        {
            max=x;
            nmax=1;
        }
        else
            if(max==x)
                nmax++;
    }
    cout<<max<<" "<<nmax;

    return 0;
}