#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int i;

    for(i=0;i<strlen(s);i++)
        switch(s[i])
        {
            case 'a':
                s[i] = '*';
                break;
            
            case 'e':
                s[i] = '#';
                break;
            
            case 'i':
                s[i] = '!';
                break;
        }

    cout<<endl;
    cout<<s;
    cout<<endl;


}