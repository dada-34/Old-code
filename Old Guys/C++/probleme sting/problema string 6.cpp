#include<iostream>
#include<string.h>
using namespace std;

void FNume(char s[], char id[])
{
   int i;
   char e[] = "2022";
   for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')break;

    }
    strcpy(id,s + i);
    strcat(id,e);
}

int main()
{
    char s[50],id[50];
    int i;

    fgets(s,50,stdin);
    s[strlen(s)-1]='\0';

    FNume(s,id);

    cout<<id<<'\n';        

}

//   David Popovici
