#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream fin("numere16.in");
   ofstream fout("numere16.out");

   int n,q;
   fin>>n;
    q=n;
   int i=0;
   while(q!=0)
   {
    i++;
    q=q/10;
   }
    q=i;

    int v[q];
    for(i=0;i<q;i++)
    {
        v[i] = 
    }


    return 0;
}   