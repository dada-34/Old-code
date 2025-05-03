#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 ifstream fin("drone.in");
 ofstream fout("drone.out");

    int n,cod,p=1,k=0,q=0;
    fin>>n;

    while(n!=0)
    {
        fin>>cod;
        
        if(cod!=0)
        {
            while(cod != 0)
            {
                q=cod%10;
                p=p*q;
                cod /= 10;
            }
            if(q<7 && p%2==0)
                k++;
        }
        else
            k++;
        n--;
        p=1;
    }

    fout<<k;
}   