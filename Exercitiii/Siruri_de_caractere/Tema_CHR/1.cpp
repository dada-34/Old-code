// 1 

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s1[101], s2[101], a[101];
    int i, j;
    fgets(s1, 101, stdin);
    fgets(s2, 101, stdin);
    s1[strlen(s1)-1] = '\0';
    s2[strlen(s2)-1] = '\0';
    int size1, size2,k=0;
    size1 = strlen(s1);
    size2 = strlen(s2);
    a[0] = '\0';

    for(i=size1-1,j=size2-1; i>=0 && j>=0; i--,j--)
    {
        if(s1[i] != s2[j]){
            j = -1;
        }
        else{
            k++;
        }
    }

    if(k == 0){
        cout<<"NU EXISTA";
        
    }
    else{
        strcpy(a, s1+size1-k);
        cout<<a;
    }
}

/*
marina
elena
*/