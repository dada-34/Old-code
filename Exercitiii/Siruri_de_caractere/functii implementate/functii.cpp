#include <iostream>
using namespace std;
                                    // ('a' 'j' '#' '5 'r' )
int strlen(char s[100])
{
    int size = -1, i = 0;
    while (s[i] != '\0')
    {
        size++;
        i++;
    }
    return size;
}

char* strcpy(char s[100], char t[100])
{
    int i;
    for (i = 0; i < strlen(t); i++)
    {
        s[i] = t[i];
    }
    s[i] = '\0';
    return s;
}

char* strncpy( char s[100], char t[100], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        s[i] = t[i];
    }
    s[i] = '\0';
    return s;
}

char* strcat(char s[100], char t[100])
{
    int i, j;
    int size = strlen(s);
    for (i = strlen(s), j = 0; i < size + strlen(t); i++, j++)
    {
        s[i] = t[j];
    }
    return s;
}

char* strncat(char s[100], char t[100], int n){
    int i, j;
    int size = strlen(s);
    for (i = strlen(s), j = 0; i < size + n; i++, j++)
    {
        s[i] = t[j];
    }
    return s;
}

char *strchr(char s[100], char ch){
    int size1,i;
    size1 = strlen(s);
    char *p;
    if(size1 == 0)
        return NULL;
    for(i=0;i<size1;i++){
        
        if(s[i] == ch){
            p = s+i;
            return p;
        }
    }
    return NULL;
}

int strcmp(char s[], char t[])
{
    int n;
    int i, j;
    for (i = 0; i < strlen(s) && i < strlen(t); i++)
    {
        if(s[i] != t[i])
            return s[i] - t[i];
    }
    
    if(strlen(s) > strlen(t))
        return 1;
    else
        if(strlen(s) < strlen(t))
            return -1;
        else
            return 0;
}

char *strstr(char s[], char t[]){
    int k=0;
    for (int i = 0; i < strlen(s); i++) {
        if (k == strlen(t))
            return s + i - k;

        if (s[i] == t[k])
            k++;
        else
            k = 0;
    }


    return NULL;
}


int main()
{
    char s[100], t[100];

//strlen
    cout<<"Strlen!"<<endl;
    fgets(s, 100, stdin);
    cout<<strlen(s);
    cout<<endl;
    cout<<"\x1b[H\x1b[J"<<flush;

//strcpy
    cout<<"strcpy"<<endl;
    fgets(s, 100, stdin);
    strcpy(t,s);
    cout<<"ASTA ESTE S: "<<s<<endl<<"ASTA ESTE T: "<<t;
    cout<<"\x1b[H\x1b[J"<<flush;

//strncpy
    cout<<"strncpy"<<endl;
    fgets(s, 100, stdin);
    strncpy(t,s,5);
    cout<<t<<endl;
    cout<<"\x1b[H\x1b[J"<<flush;

//strcat
    cout<<"strcat"<<endl;
    fgets(s, 100, stdin);
    fgets(t, 100, stdin);
    strcat(s,t);
    cout<<s;
    cout<<"\x1b[H\x1b[J"<<flush;

// strstr
    cout<<"Strstr!"<<endl;
    fgets(s, 100, stdin);
    char * p = strstr(s ,"inf");
    cout<<p;
    cout<<endl;
    cout<<"\x1b[H\x1b[J"<<flush;

// strncat
    cout<<"strncat"<<endl;
    fgets(s, 100, stdin);
    fgets(t, 100, stdin);
    strncat(s,t,6);
    puts(s);
    cout<<endl;
    cout<<"\x1b[H\x1b[J"<<flush;

// strchr
    cout<<"strchr"<<endl;
    fgets(s, 100, stdin);
    p = strchr(s , 'i');
    cout << p; // info
    cout<<"\x1b[H\x1b[J"<<flush;

// strcmp
    cout<<"strcmp"<<endl;
    fgets(s, 100, stdin);
    fgets(t, 100, stdin);
    cout<<strcmp(s,t)<<endl;
    
}

