#include<iostream>
using namespace std;

void minvec(int &n, int *v, int &minim)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(v[i] < minim)
            minim = v[i];
    }
    cout<<minim;

}


int main()
{
    int n,i,minim;
    cin>>n;
    int v[n];
    cin>>v[0];
    minim = v[0];
    for(i=1;i<n;i++)
    {
        cin>>v[i];
    }

    minvec(n,v,minim);
    


    return 0;
}