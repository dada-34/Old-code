#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,ok=0;
    char s[101];
     
    fgets(s,100,stdin);

    s[strlen(s)-1]='\0';

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='1' && s[i]<='9')ok=1;
    }
    
    if(ok==1)
        cout<<"Corect";
    else    
        cout<<"Incorect";

    return 0;
}