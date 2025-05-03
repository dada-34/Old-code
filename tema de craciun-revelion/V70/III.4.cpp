#include<iostream>
#include<fstream>
#include<unordered_map>
using namespace std;
int main(){
    ifstream fin("bac.txt");
    int n,maxnr=0,nr=0;
    unordered_map<int,int> umap;
    fin>>n;
    int v[n],i;
    for(i=0;i<n;i++)
    {
        fin>>v[i];
        umap[v[i]]++;
    }
    
    for(i=0;i<n;i++)
    {
        if(umap[v[i]] > maxnr){
            maxnr = umap[v[i]];
            nr = v[i];
        }
    }

    cout<<nr<<" "<<maxnr;
}