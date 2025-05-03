#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i;
    char s[]="david dinu";
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='d')s[i]='*';
    }
    cout<<s<<'\n';
}