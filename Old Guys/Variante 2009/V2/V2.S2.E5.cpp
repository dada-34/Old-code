#include <iostream>
#include<string.h>
using namespace std;

int main()
{  
    char s[20],c;
    int i,size,j;

    cin>>s;
    size = strlen(s);
    
    for(i=0;i<size;i++)
    {
        if(s[i] >= 97 && s[i]<=122)
        {   
            for(j = i;j<size-1;j++)
            {
                s[j] = s[j+1];
            }
            size--;
            i--;
        }
    }
    
    if(size == 0)
    {
        cout<<"CUVANT VID";
    }
    else
        for(i=0;i<size;i++)
            cout<<s[i];
            
    
    return 0;
}