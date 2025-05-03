#include<iostream>
#include<fstream>
using namespace std;

ifstream fin( "cubprim.in");
ofstream fout(" cubprim.out");

struct afis{

    int val;
    int index;
    int rad;
};


int main()
{
    int n,i,j,k,prim,nr=0;
    
    fin>>n;

    struct afis x;

    for(i=0;i<n;i++)
    {
        fin>>x.val;

        for(j=2;j*j*j<=x.val;j++)
        {
            prim=1;
            for(k=2;k*k<=j;k++)
            {
                if(j%k==0)
                    prim=0;
            }
            if(prim==1 && x.val == j * j *j)
            {
                 nr++;
            }
        }


    }

    fout<<nr;




}