#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("skip.in");
    ofstream fout("skip.out");

    char s[100],cuv[100];
    int i,n,c,j,l;

    fin>>c;

    if(c==1)
    {
        while(fin>>cuv)
        {
            n = strlen(cuv);
            if(n<=3)
                fout<<cuv<<" ";
            else
            {
                for(l=0;l<n/2;l++)
                {
                    s[l]=
                }
               
                
                fout<<s<<" ";
            }
        }
       
        
        
    
    }   
}