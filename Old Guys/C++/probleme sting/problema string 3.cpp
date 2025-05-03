#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[101];
    // sa se stearga caracterele a
    fgets(s, 100, stdin);
    s[strlen(s)-1]='\0';
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='r' && s[i+1]=='e')
        {
            strcpy(s + i, s + i + 2);
            i--;
        }
        
    }
    puts(s);
    return 0;

}