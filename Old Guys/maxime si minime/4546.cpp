#include<iostream>
using namespace std;
int main()
{
   long long int x,m,y=1;
   cin>>x;
   m=x;
   if(x!=0)
    {
        while(x!=0)
        {   
            if(m<=x)
            {
                y=m;
                m=x;
            }
             cin>>x;
        }
        if(y==m)
            cout<<"NU EXISTA";
        else
            cout<<m*y;
    }
    else
        cout<<"NU EXISTA";
    return 0;
}

// 5 6 2 6 0
// 1 0