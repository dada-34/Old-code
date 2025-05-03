#include <iostream>

using namespace std;

int sub(int* v,int &n,int &a)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(v[i] == a)
            c++;
    }
    return c;
}

int main()
{
    int v[100],n,a,r;
    cin>>n>>a;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    r = sub(v,n,a);
    
    if(r == 0)
        cout<<"DA";
    else
        cout<<"NU";
    
    

    return 0;
}