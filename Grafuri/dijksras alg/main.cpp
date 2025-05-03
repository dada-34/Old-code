#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("file.in");
int visited[101];
int mat_ad[101][101];
int dist[101];

void alg(int Home,int nnodes){
    int i;
    for(i=1; i<=nnodes; i++){
        if(visited[i] == 0 && mat_ad[Home][i] != 0){
            if(dist[Home]+ mat_ad[Home][i] < dist[i] || dist[i] == -1)
                dist[i] = dist[Home]+ mat_ad[Home][i];
        }
    }
    visited[Home] = 1;
    int min=-1,minp = 0;
     
    for(i=1;i<=nnodes;i++){
        if(dist[i] != -1 && visited[i] == 0){
            if(min == -1 || min > dist[i]){
                min = dist[i];
                minp = i;
            }
        }
    }

    if(minp != 0){
        alg(minp, nnodes);
    }
}



int main(){
    int Home; // nodul mama
    int nnodes, m; // nr nodeuri & nr legaturi
    fin>>nnodes>>m;

    cout<<"De unde plecati?"<<endl;
    cout<<"Nodul: ";
    cin>>Home;
    




    int i,j, val; // coord

    while(m!=0){        // mat de adiacenta
        fin>>i>>j>>val;
        mat_ad[i][j] = val;
        mat_ad[j][i] = val;
        m--;
    }


    
    for(i=1; i <= nnodes; i++){
       dist[i] = -1;
    }
    dist[Home] = 0;

    
    alg(Home,nnodes);

    
    for(i = 1; i <= nnodes; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    for(i = 1; i <= nnodes; i++){
        cout<<dist[i]<<" ";
    }

}