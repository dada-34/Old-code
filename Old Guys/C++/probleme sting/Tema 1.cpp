/*                                                             problema 1

#include <iostream>
#include<fstream>
 using namespace std;
 int main()
 {
   ifstream fin ("NR1.txt");
   ifstream fi("NR2.txt");
   ofstream kout("NR2.txt");

int x,k,a[200],i,j;

fin>>k;
if(k%5==0)
{
    a[0]=k;
    j=1;
}
else j=0;
for(i=1;i<100;i++)
{
    fin>>x;
    if(x!=k && x%5==0)
    {
        a[j]=x;
        j+=1;
    }
    else if(x==k)break;
    k=x;
}

fi>>k;

cout<<k;

    if(k%5==0)
{
    a[j]=k;
    j+=1;
}
   
   for(i=1;i<100;i++)
    {
        fi>>x;
        if(x!=k && x%5==0)
        {
            a[j]=x;
            j+=1;
        }
        else if(x==k)break;

        k=x;

    }   
    for(i=0;i<j;i++)
    cout<<a[i]<<" ";



   
 }
//3 5 7 8 9 10 12 20 24(nr2)
//1 2 3 4 7 20 60(nr 1)
*/
#include <iostream>

using namespace std;

int main()
 {
    int n,i,x,j,k,aux;
    cin>>n;
    j=0;
    k=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>x;
        while(x>=10)
        {
            if(x%10!=x/10%10)break;

            else if(k==0)
            {
                a[j]=x;
                j+=1;
                k=k+1;
            }
            x=x/10;
             
        }
        k=0;

    }
    
    for(i=0;i<j;i++)
    {
        for(k=0;k<j;k++)
        {
            if(a[i]<a[k])
            {
                aux=a[i];
                a[i]=a[k];
                a[k]=aux;
            }
        }
    }
    for(i=0;i<j;i++)
    cout<<a[i]<<" ";



 }
