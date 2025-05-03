#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("plimbare.in");
    ofstream fout("plimbare.out");

    long long int n,i,cx,x,invers,k=0;
    fin>>n;

    for(i=0;i<n;i++)
    {
        fin>>x;
        cx=x;
        invers=0;
        while(cx!=0)
        {
            invers = invers * 10 + cx%10;
            cx /= 10;
        }

        if(invers==x)
        {
            k++;
        }

    }
    fout<<k;

    return 0;

}