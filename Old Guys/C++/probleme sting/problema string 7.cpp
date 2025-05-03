#include<iostream>
#include<string.h>
using namespace std;

void Trim(char s[])
{
    int i,size=strlen(s),j=0;

    for(i=0;i<size;i++)
    {
        if(s[i]==' ')
            j=j+1;
        else 
                {
                    strcpy(s + (i-j), s + i);
                    j=0;
                    break;
                }

    }
    for(i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]== ' ')
            j=j+1;
        else   
        {   
            s[strlen(s)-j]='\0';
            break;
        }

    }
}




int main()
{   
    int i;
    char s[101];
    fgets(s,100,stdin);


    s[strlen(s)-1]='\0';
      
    Trim(s);
    for(i=0;i < strlen(s);i++)
        cout<<s[i];
}