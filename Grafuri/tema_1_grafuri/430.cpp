#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("izolate.in");
ofstream fout("izolate.out");

int a[100][100];

int main(){
    
    int n,i,j;
    fin>>n;
    //mat de adiacenta

    while(fin>>i>>j){
        a[i][j] = 1;
        a[j][i] = 1;
    }

    int m=0,v[100];// nr vf izolate & vector de vf iz
    int ok; // verficator


    for(i=1;i<=n;i++){
        ok = 1;
        for(j=1;j<=n;j++){
            if(a[i][j] == 1){
                ok = 0;
            }
        }
        if(ok==1){
            v[m] = i;
            m++;
        }
    }
    fout<<m<<" ";
    for(i = 0 ;i<m;i++)
        fout<<v[i]<<" ";
}