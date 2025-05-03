#include<iostream>
using namespace std;

int bindr(int v[100], int x,int st, int dr)
{
    int mij;
    if(st>dr)
        return -1;

    mij = (st+dr)/2;

    if(st == dr)
    {
        return dr;
    }
    
    if(x>=v[mij] && st != mij)
    {
        st = mij;
    }
    else
        if(x<=v[mij])
            dr = mij;
    
    return bindr(v,x,st,dr);
    
}

int binst(int v[100], int x, int st, int dr)
{
    int mij;
    if(st>dr)
        return -1;

    mij = (st+dr)/2;

    if(st == dr)
    {
        return st;
    }
    if(st == dr-1)
    {
        if(v[st] == x)
            return st;
        else
            return dr;
    }

    if(v[dr] >= x  && dr!=mij)
    {
        dr = mij;
    }
    else
        if(v[st] <= x)
        {
            st = mij;
        }
    return binst(v,x,st,dr);
}


int main()
{
    int n,i,x,dreapta,stanga;
    cin>>n;
    int v[100];
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cin>>x;

    dreapta = bindr(v, x, 0, n-1);

    stanga = binst(v, x, 0, n-1);

    cout<<dreapta-stanga+1;
}

    // 7
    // 13 15 15 15 15 15 17
    // 15

    