//                                              nr de numere din vector care sunt egale cu diferenta dintre maximul si min vectorului



#include<iostream>
using namespace std;
int main()
{
    int n,i,minim,maxim,k=0;// declar variabele   k-contor de numere care sunt egale cu diferenta dintre maxim si minim   
    cin>>n;                                  //   n-marimea vectorului    i- contorul care ma ajuta sa navighez printre elementele vectorului

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
        if(v[i] == maxim-minim)
            k++;
    }

    cout<<k;


}