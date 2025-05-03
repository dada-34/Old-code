#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[21],cop[21];
    cin>>s;
    int i, size = strlen(s);
    int ok = 0,k=0;
    for(i=0;i<size;i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            ok=1;
            cop[k] = s[i];
            k++;
        }
    }
    if(ok==0)
        cout<<"CUVANT VID";
    else
        cout<<cop;
}
