#include<iostream>
using namespace std;
int main()
{
   int x,m;
   cin>>x;
   m=x;
   if(x!=0)
    {
        while(x!=0)
        {
           
            if(x>m)
                m=x;
             cin>>x;
        }
        cout<<m;
    }
    else
        cout<<"NU EXISTA";
    return 0;
}