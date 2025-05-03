#include<iostream>
using namespace std;

int binser(int v[100],int st,int dr,int x)
{
    int mid;
    if(x>v[dr] || x<v[st])
        return -1;
    if(st>dr)
        return -1;
    
    if(st == dr)
        if(v[st] == x)
            return st;
        else 
            return -1;

    mid= (st+dr)/2;
    if(v[dr] == x)
        return dr;

    if(v[st] == x)
        return st;

    if(x <= v[mid])
        dr = mid;
    else
        if(x >= v[mid])
            st = mid;

   return binser(v,st,dr,x);
}


int main()
{
    int n,i,x,k=0;
    cin>>n;
    cin>>x;
    int v[101];
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }


    k = binser(v, 0, n-1, x);

    cout<<k;


}




// 12 13 14 15 16 18 19 -- 7
// 13 