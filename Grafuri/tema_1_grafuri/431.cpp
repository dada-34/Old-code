#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("graf_complet.in");
ofstream fout("graf_complet.out");
int main(){
    int n,m;
    fin>>m;
    int a[101][101];
    int i,j,ok;

    while(m!=0){
        fin>>n;
        ok = 1;
        for(i = 1; i <= n; i++){

            for(j = 1; j<=n; j++){
                fin>>a[i][j];
                if(a[i][j] == 0 && i!=j){
                    ok=0;
                }
            }
        }

        if(ok==1){
            fout<<"DA"<<'\n';
        }
        else{
            fout<<"NU"<<'\n';
        }
        
        
        m-=1;
    }
}