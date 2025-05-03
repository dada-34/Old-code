#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("nrapprime.in");
    ofstream fout("nrapprime.out");

    int n,i,j,c=0,ok=1;
    fin>>n;
    long long int v[n];

    for(i=0;i<n;i++)
    {
        fin>>v[i];
        
        
        if(v[i] %2==0 && v[i] != 2)
            ok=0;
        
        else
            if(v[i]%3==0 && v[i]!=3)
                ok=0;

        for(j=5;j*j<=v[i] && ok!=0;j++)
        {
            if( v[i]%j==0)
                ok=0;
        }

        if(ok==1)
            c++;
        ok=1;
    }

    fout<<c;
}