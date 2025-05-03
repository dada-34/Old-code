#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,size,c=0;
    char s[255], v[] = "aeiou";
    fgets(s,254,stdin);
    s[strlen(s)-1]='\0';

    size= strlen(s);

    for(i=1;i<size-1;i++)
    {
        if(s[i+1]!=' ' && s[i-1]!=' ')
        if(strchr(v, s[i]) != NULL && strchr(v,s[i-1])==NULL && strchr(v,s[i+1])==NULL)
        {
            c=c+1;
            i=i+1;
        }
    }

    cout<<c<<endl;

    return 0;
}