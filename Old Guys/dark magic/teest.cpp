#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j;
    char s[10][10];
    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
        {   
            
            s[i][j]='#';
        }
            
    
    for(i=0;i<10;i++)
   {    {
            for(j=0;j<10;j++)
            cout<<s[i][j];
        }
        cout<<endl;
   }
    
        cout<<"\x1b[H\x1b[J"<<flush;
    
}
