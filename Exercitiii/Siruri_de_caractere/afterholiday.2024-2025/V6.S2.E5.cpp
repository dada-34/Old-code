#include<iostream>
#include<string.h>
using namespace std;
int main(){
        char s[256];
        int i,size;
        fgets(s,255,stdin);
        size = strlen(s);
        for(i=0;i<size;i++){
            if((s[i-1] == ' ' || i == 0) && (s[i] >='a' && s[i]<='z'))
                s[i] = s[i] - 32;
        }
        for(i=0;i<size;i++){
            cout<<s[i];
        }
}