#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bfs.in");
int a[101][101],visited[101],q[101],iq;

void BFS(int nod_leave,int n){
    int node;
    for(node = 1; node <= n; node++){
        if(a[nod_leave][node] == 1 && visited[node] == 0){
            q[iq] = node;
            iq++;
            visited[node] = 1;
            cout<<node<<" ";
        }
    }
    for(int i = 0; i < iq-1; i++){
        q[i] = q[i+1];
    }
    iq--;
    for(int i=0; i<iq; i++)
        BFS(q[0],n);
}

int main(){
    int n,m;
    int i,j,cnt;
    fin>>n>>m;
    for(cnt=0;cnt<m;cnt++){
        fin>>i>>j;
        a[i][j] = 1;
        a[j][i] = 1;
    }
    q[iq] = 1;
    iq++;
    int p_p;
    cin>>p_p;
    visited[p_p] = 1;
    cout<< p_p<<" ";
    BFS(p_p,n);



}