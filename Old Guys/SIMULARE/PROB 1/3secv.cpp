#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("3secv.in");
    ofstream fout("3secv.out");

    int n,t,j;

    fin>>t;

    for(j=0;j<t;j++)
    {
        fin>>n;
        int a[n],i,kmax;
        kmax=0;

        // citirea vectorului
        for(i=0;i<n;i++)
        {
            fin>>a[i];
        }

        int c1,c2=-1,c3=-1,k=1,l=0;
        
        for(i=1;i<n;i++)
        {   
            c1=a[l];

            if(c1==a[i] || c2==a[i] || c3==a[i])
                k++;
            else
                if(a[i]!=c1 && c2 == -1)
                {
                    c2=a[i];
                    k++;
                }
                else
                    if(a[i] != c1 && a[i] != c2 && c3==-1)
                    {
                        c3=a[i];
                        k++;
                    }
                    else 
                        if(a[i]!=c1 && a[i]!=c2 && a[i]!=c3)
                        {
                            if(kmax<k)
                            {
                                kmax=k;
                            }
                            k=1;
                            if(l+3<n)
                            {
                                i=l+1;
                                l++;
                                c2=-1;
                                c3=-1;
                            }
                        }

            if(i+1==n && l+3<n)
            {
                i=l+1;
                l++;
                if(kmax<k)
                {
                    kmax=k;
                }
                k=0;
                c2=-1;
                c3=-1;
            }
            
        }
        
        fout<<kmax<<endl;
        
    }

    
    return 0;
}