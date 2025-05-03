#include<iostream>
using namespace std;
int main()
{   
    int a,b,n1=0,n2=0,p=1;
    
        cin>>a;
        cin>>b;
        
        if(a%2==0)
        {   while(a>0)
            {
                if(a%10%2==0 || a%10==0){
                    n1=n1+a%10*p;
                    p=p*10;
                }

                a=a/10;
            }
            p=1;
        }

        else 
        {
            while(a>0)
            {
                if(a%10%2==1 || a%10==0){
                    n1=n1+a%10*p;
                    p=p*10;
                }
                a=a/10;
            }

            p=1;
        }

         if(b%2==0)
            while(b!=0)
        {
            if(b%10%2==0 || b%10==0){
                n2=n2+a%10*p;
                p=p*10;
            }

            b=b/10;
        }


        else 
            while(b!=0)
        {
            if(b%10%2==1 || b%10==0){
                n2=n2+b%10*p;
                p=p*10;
            }
            b=b/10;
        }
        
        cout<<max(n1,n2);







}