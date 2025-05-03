#include<iostream>
using namespace std;
int main()
{
    int n,i,C=0;
    cin>>n;

    float v[n];
    
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(i=0;i<n;i++)
    {
        if(v[0] > v[n-1])
        {    if(v[i] > v[0] || v[i] < v[n-1])
                C++;
        }
          
        else
            if(v[i] < v[0] || v[i] > v[n-1])
                C++;
    }

    cout<<C;






}