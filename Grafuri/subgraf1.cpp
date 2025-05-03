#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("subgraf1.in");
ofstream fout("subgraf1.out");
int main(){
    cout<<"Hello";
    int n,m=0;
    fin>>n;
    int i,j;
    int a[100][2],v[n];
    while(fin>>i>>j){
        fin>>i>>j;
        a[m][0] = i;
        a[m][1] = j;
        m++;
    }
    for(i=0;i<m;i++){
        cout<<a[i][0]<<" "<<a[i][1]<<endl;
    }
}