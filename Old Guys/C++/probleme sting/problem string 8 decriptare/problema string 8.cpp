#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


int main()
{ 
    ifstream fin("scytale.in.txt");
    ofstream fout("scytale.out.txt");
    int m,n,c,j,i,q=0;
    char s[100],x;
    fin>>c;
    i=0;
    while(i!=-1)
    {   
        fin>>x;
        if(x!=' ')s[i]=x;
        else i=-1;
    }

    fin>>m;
    n=strlen(s);
    char a[m][n];

    for(i=0;i<m;i++)
    {
        j=0;
        if(i%3==1){
            a[i][j]='.';
            j=j+1;
        }
        if(i%3==2){
            a[i][j]='.';
            a[i][j+1]='.';
            j=j+2;
            }
        while(j<n)
            {   
                a[i][j]=s[q];
                a[i][j+1]='.';
                a[i][j+2]='.';
                j=j+3;
                q++;
            }
        

    }

    j=0;
    while(j<n)
    {   
        if(j+1==n)break;
        for(i=0;i<m;i++)
        {
            fout<<a[i][j];
            j+=1;

        }


    }


   
    







}