#include<iostream>
using namespace std;
int main()
{
    int n,i,j,key;
    cin>>n;
    int v[n];
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(i=0;i<n;i++)
    {
        key=v[i];
        j = i-1;
        while(key<v[j] && j>=0)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}