#include<iostream>
using namespace std;

int sum(int v[5],int st,int dr)
{
    if(st==dr)
    {
        return v[st];
    }
    else
    {
        int mij = (st+dr)/2;
        return sum(v,st,mij) + sum(v,mij+1,dr);
    }
}



int main()
{
    int st=0,dr=5;
    int v[]={1,2,3,4,5,6};
    cout<<sum(v,0,5);
    cout<<'\n';
    return 0;
}