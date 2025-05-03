#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("cifra4.in");
    ofstream fout("cifra4.out");

    int c,s,t;

    fin>>t;

    if(t==1)
    {   
        int n;
        fin>>c;
        fin>>n;
        int i=0,ci,ok,k=0;

        i = 0;
        while(n!=0)
        {
            ci=i;
            while(ci!=0 && ci%10!=c)
            {
                ci /= 10;
            }
            if(ci==0)
            {
                n--;
            }
            i++;
        }
        fout<<i;

    }
    


}