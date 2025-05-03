#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[21],clona[21],aux[21];
    fgets(s,21,stdin);
    s[strlen(s)-1]='\0';
    if(strstr(s,"aeiou")!=NULL)
        return 0;
    
    int i;
    strcpy(aux,s);
    
    for(i=0;i<5;i++){
        strcpy(clona,s);
        for(int j=0;j<strlen(s);j++){

            if(i==0){
                if(s[j] == 'a'){
                    strcpy(clona+j,s+j+1);
                    strcpy(s,clona);
                    j--;
                }
            }
            else if(i==1){
                if(s[j] == 'e'){
                    strcpy(clona+j,s+j+1);
                    strcpy(s,clona);
                    j--;
                }
            }
            else if(i==2){
                if(s[j] == 'i'){
                    strcpy(clona+j,s+j+1);
                    strcpy(s,clona);
                    j--;
                }
            }
            else if(i==3){
                if(s[j] == 'o'){
                    strcpy(clona+j,s+j+1);
                    strcpy(s,clona);
                    j--;
                }
            }
            else if(i==4){
                if(s[j] == 'u'){
                    strcpy(clona+j,s+j+1);
                    strcpy(s,clona);
                    j--;
                }
            }
        }
        strcpy(s,aux);
        if(strcmp(s,clona)!=0)
            cout<<clona<<endl;
        
    }
}


// informatica