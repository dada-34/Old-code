#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

// #define A 0
// #define D 1

int main(){
    ifstream fin("adfgx.in");
    ofstream fout("adfgx.out");


    //cerinta

    int c;
    fin>>c;

if(c==1)
{       

// matrice
    char v[5];
    v[0] = 'A';
    v[1] = 'D';
    v[2] = 'F';
    v[3] = 'G';
    v[4] = 'X';

    char s[5][5];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            fin>>s[i][j];
        }
    }


// cheie
    
    char key[100];
    fin>>key; 


// mesaj
    char mes[100000];
    fin>>mes;

// mat cod (engine caput)
    int k=0,l,p;
    char a[2+strlen(mes)*2/strlen(key)][strlen(key)];
    int n = 2+strlen(mes)*2/strlen(key);
    int m = strlen(key);

    char p1=0,p2=0;
    int cnt=0;



    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==0){
                a[i][j] = key[j];
            }
            else{
                if(p1==0 && p2 == 0 && k < strlen(mes))
                    for(l=0;l<5;l++){
                        for(p=0;p<5;p++){
                            if(s[l][p] == mes[k]){
                                k++;
                                p1 = v[l];
                                p2 = v[p];
                                cnt+=2;
                                l=5;
                                p=5;
                            }
                        }
                    }
                else{
                    if(p1 !=0){
                        a[i][j] = p1;
                        if(j+1 >= m && i+1 < n)
                            a[i+1][0] = '\0';
                        else
                            a[i][j+1] = '\0';
                    }
                    else
                }
                
                
            }
        }
    }

    k=0;
// sortare si afisare (good)

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            fout<<a[i][j]<<" ";
        }
        fout<<endl;
    }
    fout<<endl<<endl;

    char aux[n];
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            if(a[0][i] > a[0][j]){
            
                for(k=0;k<n;k++){
                    aux[k] = a[k][j];
                }
                for(k=0;k<n;k++){
                    a[k][j]= a[k][i];
                }
                for(k=0;k<n;k++){
                    a[k][i] = aux[k];
                }
            }

        }
    }

    
    for(j=0;j<m;j++){
        for(i=1;i<n;i++){
            if(a[i][j] != ' '){
                fout<<a[i][j];
            }
        }
        fout<<" ";
    }
}


else{
    // matrice
    char v[5];
    v[0] = 'A';
    v[1] = 'D';
    v[2] = 'F';
    v[3] = 'G';
    v[4] = 'X';

    char s[5][5];
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            fin>>s[i][j];
        }
    }


    // cheie
    
    char key[100];
    fin>>key; 


    // mesaj

    char cuv[100];
    int cnt = 0;

    char mes[100000];
    while(fin>>cuv){
        strcat(mes,cuv);
        strcat(mes," ");
        if(strlen(cuv) > cnt)
            cnt = strlen(cuv);
    }

    
    // matrice
    char a[cnt+1][strlen(key)];
    int n = cnt+1;
    int m = strlen(key);
    for(j=0;j<m;j++){
        a[0][j] = key[j];
    }
    char *p = strtok(mes, " ");

    for(j=0;j<m;j++){
        strcpy(cuv,p);
        for(i=1;i<n;i++){
            if(cuv[i-1] != 0)
                a[i][j] = cuv[i-1];
            else
                a[i][j] = ' ';
        }
        p = strtok(NULL," ");
    }

// sortare
    char aux[100];
    char cop;
    int k,l;
    for(i=0;i<m;i++){
        for(j=i+1;j<m;j++){
            if(a[0][i] > a[0][j]){
                cop = a[0][i];
                a[0][i] = a[0][j];
                a[0][j] = cop;
            }
        }
    }

    for(k=0;k<strlen(key);k++){
        for(j=0;j<m;j++){
            if(key[k] == a[0][j]){
                for(l=0;l<n;l++){
                    aux[l] = a[l][j];
                    a[l][j] = a[l][k];
                    a[l][k] = aux[l];
                    
                }
            }
        }
    }
    
    char coin[50000];
    l=0;
    int p1=-1,p2=-1;
    for(i=1;i<n;i++){
        for(j=0;j<m;j++){

            if(a[i][j] != ' '){

                    if(p1==-1)
                    {
                        for(k=0;k<5;k++){
                            if(v[k] == a[i][j])
                                p1=k;
                        }
                    }
                    
                    else if(p2==-1){
                        for(k=0;k<5;k++){
                            if(v[k] == a[i][j])
                                p2 = k;
                        }
                    }

                        if(p1!=-1 && p2 != -1){
                        coin[l] = s[p1][p2];
                        l++;
                        coin[l] = '\0';
                        p1=-1;
                        p2=-1;
                    }
            }


        }
        }
    
    fout<<coin;
    
}



return 0;

}