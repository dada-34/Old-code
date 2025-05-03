#include<iostream>
using namespace std;
int main()
{
    int n,i,j,p;
    cin>>n;

    int v[n];

    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n;i++)
    {
        int min = v[i];

        for(j=i+1;j<n;j++)
        {
            if(v[j]<min)
            {
                min = v[j];
                p=j;
            }
        }
        if(min <v[i])
        {
            swap(v[i],v[p]);
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}