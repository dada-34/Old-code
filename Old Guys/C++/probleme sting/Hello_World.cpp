/*
#include<iostream>
using namespace std;
int main()
{
    int ca,cb,a,b,S,P;
    cin>>a>>b;
    ca=a;
    cb=b;
    P=a*b;
    while(a!=b)
    {
        if(a>b)a=a-b;
        else b=b-a;
    }
    S=P/a;
    S=S/ca+S/cb-2;
cout<<S;


}
   

#include<iostream>
using namespace std;
int x;

int main()
{
int n,m,i,j;
int s=0;

cin>>n;
cin>>m;

int a[n][m];
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}

for(i=0;i<n;i++)
{
    
    for(j=0;j<m;j++)
    {
      s=s+a[i][j];
    }
    for(j=1;j<m;j++)
    {
        if(s-a[i][j-1]>s-a[i][j])x=s-a[i+1][j+1];
    }
    cout<<x<<" ";
    s=0;
}

}


#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    cin>>n>>m;
    int a[n][m];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            if(i<j)a[i][j]=i;
            else a[i][j]=j;
        }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



}
//valori pt matrice:  4 5 

*/







