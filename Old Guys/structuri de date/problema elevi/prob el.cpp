#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

struct elev{

    char nume[30];
    char prenume[30];
    int clasa;
    int note_materii[3];

};

void sortare_nume(struct elev scoala[100],int n)
{
    int i,j,k,ok,size;
    struct elev aux;
    
    for(i=0;i<n;i++)
    {   
        for(j=i+1;j<n;j++)
        {   
            ok=0;

            if(strcmp(scoala[i].nume,scoala[j].nume)>=0)
                size = strlen(scoala[i].nume);
            else  
                size = strlen( scoala[j].nume);


            for (k=0;k < size ;k++)
            {
                if(scoala[i].nume[k] < scoala[j].nume[k])
                {
                    aux = scoala[i];
                    scoala[i] = scoala[j];
                    scoala[j] = aux;
                    ok=0;
                }
            }
            if(ok==1)
            {
                for (k=0;k < size ;k++)
            {
                if(scoala[i].prenume[k] < scoala[j].prenume[k])
                {
                    aux = scoala[i];
                    scoala[i] = scoala[j];
                    scoala[j] = aux;
                    ok=0;
                }
            }
            }
            
        }
    }
}

int main()
{
    ifstream fin("probel.in");
    ofstream fout("probel.out");

    struct elev scoala[100];
    int n,i,j;

    fin>>n;

    for(i=0;i<n;i++)
    {
        fin>>scoala[i].nume;
        fin>>scoala[i].prenume;
        fin>>scoala[i].clasa;
        for(j=0;j<3;j++)
        {
            fin>>scoala[i].note_materii[j];
        }
    }

    for(i=0;i<n;i++)
    {
        sortare_nume(scoala,n);
    }

    for(i=0;i<n;i++)
    {
        fout<<scoala[i].nume<<'\n';
        fout<<scoala[i].prenume<<'\n';
        fout<<scoala[i].clasa<<'\n';
        fout<<scoala[i].note_materii[0]<<" ";
        fout<<scoala[i].note_materii[1]<<" ";
        fout<<scoala[i].note_materii[2]<<'\n'<<'\n';


    }

    
    return 0;
}