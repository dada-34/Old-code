#include<iostream>
using namespace std;
int main()
{
     int n,i,x,y,ok=1,j;
    cin>>n;
    cin>>x>>y;
    for(i=3;i<=n;i++)
    {   
        if(x>y)
            for(j=2;j<=x/2;j++)
            {
                if(x%j==0 && y%j==0)
                {
                    ok=0;
                    j=x;
                }
            }
        else
            for(j=2;j<=y/2;j++)
            {
                if(x%j==0 && y%j==0)
                {
                    ok=0;
                    j=y;
                }
            }


        if(i%2==1)
            cin>>x;
        else 
            cin>>y;

    }
    if(ok==0)
         cout<<"nu exista perechi";
    else 
       cout<<"exista o pereche cel putin";
}