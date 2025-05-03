#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[21];
    int n,i;
    char c,d;
    cin>>s;
    cin>>c>>d;
    n = strlen(s);
    for(i=0;i<n;i++){
        if(s[i] == c)
            s[i] = d;
    }
    cout<<s;
}