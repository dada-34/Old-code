#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream fin("maximpar.in");
   ofstream fout("maximpar.out");

   long long int n,max=-1,nmax=0,x;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        if(x>max && x%2==0)
        {
            max=x;
            nmax=1;
        }
        else
            if(max==x)
                nmax++;
    }
    if(max==-1)
        fout<<-1;
    else
        fout<<max<<" "<<nmax;


    return 0;
}