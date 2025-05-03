#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("txt.in");
ofstream fout("txt.out");
int a[101][101],v[101],the_way[101],index_way=0;

void af(int vec[],int ol){
    int p;
    for(p=0;p<ol;p++){
        cout<<vec[p]<<" ";
    }
    cout<<endl<<endl;
}

int search(int n,int m,int nod_plecare, int nod_dest){
    int node;
    for(node = 1; node <= n; node++){
        if(node != nod_plecare)
            if(a[node][nod_plecare] == 1){

                if(node != nod_dest && v[node] != 1){
                    v[node] = 1;
                    index_way += 1;
                    the_way[index_way] = node;
                    af(the_way,index_way);
                    if(search(n,m,node,nod_dest) == 0){
                        index_way--;
                    }
                    else
                        return 1;
                    
                }
                else 
                    if(v[node] != 1 && node == nod_dest){
                        index_way += 1; 
                        the_way[index_way] = node;
                        af(the_way,index_way);
                        return 1;
                    }
            }
        
        }
        return 0;
}




int main(){
    int m,n;
    fin>>n>>m;

    int i,j,k;
    for(k=0;k<m;k++){
        fin>>i>>j;
        a[i][j] = 1;
        a[j][i] = 1;
    }
    
    int nod_plecare,nod_dest;
    fin>>nod_plecare>>nod_dest;
    v[nod_plecare] = 1;
    the_way[0] = nod_plecare;
    

    if(search(n,m,nod_plecare,nod_dest) == 1){
        fout<<"Connected: ";
        for(i=0;i<=index_way;i++){
            if(i+1 == index_way + 1)
                fout<<the_way[i];
            else
                fout<<the_way[i]<<"-";
        }
    }
    else
        fout<<"Not Connected";

}
