// calcul distantei dintre toate nodurile


#include<iostream>
#include<fstream>
using namespace std;

int mat_ad[101][101], visited[101],mat_dist[101][101];

void DIJK(int node, int n){
    int i;
    for(i = 1; i <= n; i++){
        if(visited[i] == 0 && mat_ad[node][i] != 0){
            if(mat_dist[node][i] + mat_ad[node][i] < mat_dist[node][i] || mat_dist[node][i] == -1)
                mat_dist[node][i] = mat_dist[node][i] + mat_ad[node][i];
                mat_dist[i][node] = mat_dist[node][i];
        }
    }
    visited[node] = 1;

    int min=-1,minp = 0;
     
    for(i=1;i<=n;i++){
        if(mat_dist[node][i] != -1 && visited[i] == 0){
            if(min == -1 || min > mat_dist[node][i]){
                min = mat_dist[node][i];
                minp = i;
            }
        }
    }

    if(minp != 0){
        DIJK(minp, n);
    }
}

int main(){
    int n,m=0;
    ifstream fin("graf.in");

    fin>>n;


    int i,j,val,node;           // mat de adiacenta
    while(fin>>i>>j>>val){
        mat_ad[i][j] = val;
        mat_ad[j][i] = val;
        m++;
    }

    // initiere dist -1;

    for(i=1; i<=n; i++){
        for(j=1;j<=n;j++){
            if(i==j)
                mat_dist[i][j] = 0;
            else
                mat_dist[i][j] = -1;
        }
    }





    for(node = 1; node <= n; node++){
        DIJK(node,n);
        for(i=1;i<=n;i++)
            visited[i] = 0;
    }


    for(i=1; i<=n;i++){
        cout<<"De la nodul: "<<i<<endl;
        for(j=1;j<=n; j++){
            cout<<mat_dist[i][j]<<" ";
        }
        cout<<endl;
    }
    
}