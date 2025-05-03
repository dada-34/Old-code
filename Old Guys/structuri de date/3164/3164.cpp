#include<iostream>
#include<fstream>
using namespace std;

typedef struct Catalog{
    int cod;
    int medie;
    int absente;
} catalog;
    
    
    
int main()
{
    ifstream fin ("qclasa.in");
    ofstream fout("qclasa.out");

    int n,i,nrelevmed_10=0,ma=0,j;
    fin>>n;



    catalog v[n];

    int abs1=0,abs2=0;

    int max1[n], max2[n];

    for(i=0;i<n;i++)
    {
        fin>>v[i].cod;
        fin>>v[i].medie;
        fin>>v[i].absente;

        if(v[i].medie == 10)
        {
            nrelevmed_10++;
        }

        ma += v[i].medie;

       
            if(v[i].absente>abs1)
            {
                abs2=abs1;
                abs1=v[i].absente;

            }
            else
                if(v[i].absente>abs2 && v[i].absente != abs1)
                {
                    abs2=v[i].absente;
                }
    }

    fout<<nrelevmed_10<<'\n';
    fout<<ma/n<<'\n';


    if(n==1)
    {
        fout<<v[0].cod<<" "<<v[0].medie<<" "<<v[0].absente;
    }
    else
    {
        nrelevmed_10=0;
        ma=0;
        for(i=0;i<n;i++)
        {
            if(v[i].absente == abs1)
            {
                max1[nrelevmed_10] = v[i].cod;
                nrelevmed_10++;
            }
            if(v[i].absente == abs2)
            {
                max2[ma] = v[i].cod;
                ma++;
            }
        }

        int aux;

        for(i=0;i<nrelevmed_10;i++)
            for(j=0;j<nrelevmed_10;j++)
            {
                if(max1[i] < max1[j])
                {
                    aux=max1[i];
                    max1[i]=max1[j];
                    max1[j]=aux;
                }
            }

        for(i=0;i<ma;i++)
            for(j=0;j<ma;j++)
            {
                if(max2[i] < max2[j])
                {
                    aux = max2[i];
                    max2[i] = max2[j];
                    max2[j] = aux;
                }
            }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(v[i].cod < v[j].cod)
                {
                    aux=v[i].cod;
                    v[i].cod = v[j].cod;
                    v[j].cod = aux;
                    
                    aux=v[i].medie;
                    v[i].medie = v[j].medie;
                    v[j].medie = aux;
                    
                    aux=v[i].absente;
                    v[i].absente = v[j].absente;
                    v[j].absente = aux;
                }
            }
        }
            j=0;
            for(i=0;i<n;i++)
            {   
                if(j==2)
                    break;
                if(v[i].cod == max1[j])
                {
                    fout<<v[i].cod<<" "<<v[i].medie<<" "<<v[i].absente<<endl;
                    j++;
                }
            }
            j=0;
            for(i=0;i<n;i++)
            {
                if(j==2)
                    break;
                if(v[i].cod == max2[j])
                {
                    fout<<v[i].cod<<" "<<v[i].medie<<" "<<v[i].absente<<endl;
                    j++;
                }

            }
    }
    return 0;
}