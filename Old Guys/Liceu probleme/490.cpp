#include<iostream>
using namespace std;
int main()
{
    int n,i,minim,maxim,ok=0;   
    cin>>n;

    int v[n];

    cin>>v[0];
    minim = v[0];
    maxim = v[0];
    for(i=1;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>maxim)
            maxim = v[i];
        if(v[i]<minim)
            minim = v[i];
    }

    for(i=0;i<n;i++)
    {
        if((v[i] == minim || v[i] == maxim) && ok == 0)
         {
            ok=1;
            cout<<v[i]<<" ";
            i++;
         }
        if(ok==1)
            cout<<v[i]<<" ";
        
        if(v[i] == maxim || v[i] == minim)
            ok = 0;
    }
    
}