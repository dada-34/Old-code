#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i;
    char s[101];
    // sa se modifice caracterele mici in Majuscule
    // DaVid e CoOl
    
    //citire
    fgets(s, 100, stdin);

    // stergere caracter enter
    s[strlen(s)-1] ='\0';

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;

    }
    puts(s);

    return 0;

}
// ;''[yfdshwhsf143567]