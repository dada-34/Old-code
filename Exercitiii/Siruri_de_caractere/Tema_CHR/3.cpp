#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char s[251],c1,c2;
    cin.getline(s,250);
    int n = strlen(s);
    cin>>c1>>c2;
    int i;

    cout<<endl;
    for(i=0;i<n;i++){
        if(s[i]==c1){
            s[i]=c2;
        }
        else
            if(s[i]==c2){
                s[i]=c1;
            }
    }
    puts(s);
    
    return 0;
}