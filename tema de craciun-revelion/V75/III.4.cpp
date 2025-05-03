#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("date.in");
int main(){
    int cnt=0;
    int pred,mij,suc;
    fin>>pred>>mij;
    while(fin>>suc){
        if(mij<suc && mij<pred)
            cnt++;
        pred = mij;
        mij = suc;
    }
    cout<<cnt;
}