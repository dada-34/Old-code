#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("putere.in");
    ofstream fout("putere.out");

    long long int m,n,s=1,i,p;

    fin>>m>>n;

    for(i=0;i<n%10;i++)
    {
        s=s*(m%10);
    }
    fout<<s<<'\n';
    m=m/10;
    n=n/10;
    while(m!=0)
    {
        p=1;
        for(i=0;i<n%10;i++)
        {
            p = p*(m%10);
        }
        s += p;
        m=m/10;
        n=n/10;
    }
    fout<<s;
    return 0;
}