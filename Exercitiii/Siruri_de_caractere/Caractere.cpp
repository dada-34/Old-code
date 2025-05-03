#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100],t[100];
    fgets(s,100,stdin);
    fgets(t,100,stdin);
    
    char * p = strstr(s , "inf");
    cout << p; // info











    return 0;


}