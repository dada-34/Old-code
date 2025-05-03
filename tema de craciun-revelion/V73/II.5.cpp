#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[256];
    fgets(s,255,stdin);
    int size = strlen(s);
    int n=0,cnt=0;
    char *pch;
    pch = strtok(s," ");
    while(pch != NULL){
        n++;
        if(pch[0]=='a' || pch[0]=='e' || pch[0]=='i' || pch[0] == 'o' || pch[0]=='u')
            cnt++;
        pch = strtok(NULL, " ");
    }
    cout<<n<<" "<<cnt;
}