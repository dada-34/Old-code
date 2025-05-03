#include<iostream>
using namespace std;

void maxvec(int &n, int *v, int &maxim)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(v[i] > maxim)
            maxim = v[i];
    }
    cout<<maxim;

}


int main()
{
    int n,i,maxim;
    cin>>n;
    int v[n];
    cin>>v[0];
    maxim = v[0];
    for(i=1;i<n;i++)
    {
        cin>>v[i];
    }

    maxvec(n,v,maxim);
    


    return 0;
}