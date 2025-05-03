#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("numere14.in");
    ofstream fout("numere14.out");
    
    long long int n,i,x,p,k,s=0;    

    fin>>n;

    for(i=0;i<n;i++)
    {
        fin>>x;
        p=1;
        k=0;
    if(x>9)
        {
            while(x/p/p!=0)
            {
                p=p*10;
            }

            if(x/(p/10)%10%2 == 1)
                s += x/(p/10)%10;
        }
    else
        if(x%2==1)
            s += x;

    }
    fout<<s;
}