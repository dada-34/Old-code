#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream  fin("sumagauss2.in");
    ofstream fout("sumagauss2.out");

    long long int S,n,m;
    fin>>S;
    n=S;
    while(n!=0)
    {
        m=n-1;
        while(m>=0)
        {
                if( (n*(n+1)/2) - (m*(m+1)/2) == S )
                fout<<n<<" "<<m<<endl;
                
                m--;
        }
        n--;
    }

}