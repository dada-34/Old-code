#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
   // unordered_map <key, value> nume;
    unordered_map<int,int> umap;
    umap[1] = 7;
    cout<<umap[1]<<endl;

    umap[1] = 9;
    cout<<umap[1]<<endl;

    cout<<umap[1]++;


    return 0;

}