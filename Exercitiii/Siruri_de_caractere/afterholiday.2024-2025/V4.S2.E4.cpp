#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[100];
    int size,i=0;
    fgets(s,99,stdin);
    size = strlen(s);
    while(i<size){
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = 'W';
        i++;
    }
    for(i=0;i<size;i++)
        cout<<s[i];
    return 0;
}