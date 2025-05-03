#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n,i,j,ok;
    cin>>n;

    int a[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    ok=1; // presupun ca e adiacenta

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j] != 0 && a[i][j] != 1){
                ok = 0;
            }

            if(i==j && a[i][j] != 0){
                ok = 0;
            
            // iesire din for 
                j = n;
                i = n;
            }


            if(a[i][j] != a[j][i]){
                ok = 0;
            
            // iesire din for 
                j = n;
                i = n;
            }
        }
    }


    cout<<ok;
}
