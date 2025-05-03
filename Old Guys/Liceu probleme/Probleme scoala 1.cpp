//                                                         NR1                  

/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i=0,cn,n,cmax,cmin;
    cin>>n;
    cn=n;
    cmax=0;
    cmin=9;
    while(n!=0)
    {
        if(cmin>n%10)cmin=n%10;
        if(cmax<n%10)cmax=n%10;
        n=n/10;
    }

    while(cn!=0)
    {
        if(cn%10==cmin)
            n = cmax * pow(10,i) + n;

        else
            if( cn%10==cmax )
                n = n + cmin * pow(10,i);
            else
                n = n + cn%10 * pow(10,i);

        cn=cn/10;
        i=i+1;

    }
    cout<<n;


return 0;

}
*/









//                                                     NR2


/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0,f=0;

    cin>>n;

    while( n != 0 )
    {   
        if(n%10%2==0)
            f = f + (n % 10 + 1) * pow(10,i);
        else 
            f = f + n % 10 * pow(10,i);
        i = i + 1;
        n = n / 10;
    }

        cout<<f;





    return 0;
}

*/





//                                                 NR 3


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int i=0,j=0,n,n1=0,n2=0;
  cin>>n;

  while( n != 0 )
  {
    if(n%10%2==0)
       {
             n1 = n1 + n%10 * pow(10,i);
            i = i + 1;
       }
    else 
        {
            n2 = n2 + n%10 * pow(10,j);
            j = j + 1;
        }     
    

    n = n / 10;
  }
    cout<<abs(n1-n2);

}


