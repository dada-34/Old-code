#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ifstream fin("extrapare.in");
    ofstream fout("extrapare.out");

    long long int N,K;
    fin>>N;
    fin>>K;

    if(K==0)
    {
        int i,j,ok=1,size;
        char s[1000001];
        for(i=0;i<N;i++)
        {
            fin>>s;
            size=strlen(s);
            for(j=0;j<size && ok!=0;j++)
            {
                if(j%2==1 && s[size-1-j]=='1')
                {
                    ok=0;           
                }
            }
            
            if(i==N-1)
                if(ok==0)
                    fout<<-1;
                else    
                    fout<<s;
            else
                if(ok==0)
                    fout<<-1<<'\n';
                else    
                    fout<<s<<'\n';

            ok=1;
        }      
    }
    else
    {
        int i,j,size;
        for(i=0;i<N;i++)
        {
            fin>>s;
            size = strlen(s);
            for(j=size-1;j>=0;j++)
            {
             if(j%2==1 && s[j]=='1')
                x=j;   
            }
        }
    }


    return 0;
}