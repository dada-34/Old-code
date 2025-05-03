#include<iostream>
#include<fstream>
using namespace std;



struct ajutor{

    int valoare;

    int divizori;
};




int main()
{
    ifstream fin("sort_div.in");
    ofstream fout("sort_div.out");
    
    int n,i,j;
    fin>>n;

    struct ajutor v[n];

    for(i=0;i>n;i++)
    {
        fin>>v[i].valoare;

        for(j=1;j<=v[i].valoare/2;j++)
        {
            v[i].divizori = 0;
            if(v[i].valoare % j == 0 )
            {
                v[i].divizori++;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        fout<<v[i].valoare<<" ";
    }

    fout<<'\n';

    for(i=0;i<n;i++)
    {
        fout<<v[i].divizori<<" ";
    }

    return 0;
}