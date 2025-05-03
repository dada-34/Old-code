#include<iostream>
#include<fstream>
using namespace std;



int Div_et_imp(int a[1000][1000],int xp,int yp,int n,int m)
{
    int i;
    int sum=a[xp][yp];
    a[xp][yp]=-1;

// stanga sus
        if(a[xp-1][yp-1] >= 0 && xp-1>=1 && yp-1>=1)
        {
            sum = sum + Div_et_imp(a, xp-1, yp-1, n, m);
            a[xp-1][yp-1] = -1;
        }

// centru sus
        if(a[xp-1][yp] >= 0 && xp-1>=1)
        {
            sum = sum + Div_et_imp(a, xp-1, yp, n, m);
            a[xp-1][yp] = -1;
        }

// dreapta sus 
        if(a[xp-1][yp+1] >= 0 && xp-1>=1 && yp+1<=m)
        {
            sum = sum + Div_et_imp(a, xp+1, yp+1, n, m);
            a[xp-1][yp+1] = -1;
        }

// stanga
        if(a[xp][yp-1] >= 0 && yp-1>=1)
        {
            sum = sum + Div_et_imp(a, xp, yp-1, n, m);
            a[xp][yp-1] = -1;
        }

// dreapta
        if(a[xp][yp+1] >= 0 && yp+1<=m)
        {
            sum = sum + Div_et_imp(a, xp, yp+1, n, m);
            a[xp][yp+1] = -1;
        }

// stanga jos
        if(a[xp+1][yp-1] >= 0 && xp+1<=n && yp-1>=1)
        {
            sum = sum + Div_et_imp(a, xp+1, yp-1, n, m);
            a[xp+1][yp-1] = -1;
        }

// jos centru
        if(a[xp+1][yp] >= 0 && xp+1<=n)
        {
            sum = sum + Div_et_imp(a, xp+1, yp, n, m);
            a[xp+1][yp] = -1;
        }

// dreapta jos
        if(a[xp+1][yp+1] >= 0 && xp+1<=n && yp+1<=m)
        {
            sum = sum + Div_et_imp(a, xp+1, yp+1, n, m);
            a[xp+1][yp+1] = -1;
        }
        return sum;
}



int main()
{
    ifstream fin("poseidon.in");
    ofstream fout("poseidon.out");

    int c,suma;
    fin>>c;
    if(c==1)
    {
        int n,m,suma;
        fin>>n>>m;
        int a[1000][1000];
        int i,j;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                fin>>a[i][j];
            }
        }

        int xp,yp;
        fin>>xp>>yp;

        suma = Div_et_imp(a,xp,yp,n,m);
        fout<<suma<<endl;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                fout<<a[i][j]<<" ";
            }
            fout<<endl;
        }


    }
}