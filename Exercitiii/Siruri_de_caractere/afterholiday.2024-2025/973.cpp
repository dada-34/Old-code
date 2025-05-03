#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[256];
    cin.getline(s,255);
    char *p;
    int ok;
    p = strtok(s," ");
    while(p!=NULL){
        ok=1;
        for(int i = 0;i<strlen(p);i++)
        {
            if(p[i] != 'a' && p[i] != 'e' && p[i] != 'i' && p[i] != 'o' && p[i] != 'u')
                ok=0;
        }
        if(ok==1)
            cout<<p<<endl;

        p = strtok(NULL," ");
    }
}