 /*                                     PROBLEMA 3
 #include <iostream>
 #include  <fstream>
 #include  <cmath>

 using namespace std;

 int main ()
 {
    ifstream fin("BAC.TXT");
    
    int i,n,x,s,k=0;
    fin>>n;
    s=0;
    for(i=0;i<n;i++)
    {
        fin>>x;
        if(sqrt(x)==int(sqrt(x)))
            {
                if(k==0)
                {
                    cout<<x;
                    k=1;
                }
                else cout<<"+"<<x;
                s=s+x;
            }
        
    }
    cout<<"="<<s;



 }

 */


#include <iostream>

using namespace std;

void sub(int m,int n,int a[100])
{
    

}

int main()
{
    int m,n,i,j;
    cin>>n;
    cin>>m;
    int a[100],b[100];
    for(i=0;i<n;i++)
        cin>>a[i];  

    for(i=0;i<m;i++)
        cin>>b[i];
    j=0;
    i=0;
     
     
    sub(m,n-); 

     

}

/* 
5 3
2 4 8 10 14 
3 5 11
*/