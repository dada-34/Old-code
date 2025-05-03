#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[256];
    fgets(s,255,stdin);
    //cin.getline(s, 255);
    s[strlen(s)-1] = ' ';
    char *p;
    p = strtok(s, " ,.");
    char rez[256];
    rez[0] = '1';
    rez[1] = '\0';
    unsigned int i, ok = 0;
    char copie[256], ogl[256];
    while (p != NULL)
    {
        strcpy(copie, p);
        for (i = 0; i < strlen(copie); i++)
        {
            ogl[i] = copie[strlen(copie) - i - 1];
            ogl[i + 1] = '\0';
        }
        strcpy(copie,p);
        if (strcmp(copie, ogl) == 0)
        {
            if (rez[0] == '1')
            {
                strcpy(rez, copie);
                ok = 1;
            }
            else
                for (i = 0; i < min(strlen(rez), strlen(copie)); i++)
                {
                        if (rez[i] > copie[i])
                        {
                            strcpy(rez, copie);
                            ok = 1;
                            i = strlen(copie);
                        }
                }
        }
        p = strtok(NULL, " ,.");
    }
    
    if (ok == 0)
    {
        cout << "IMPOSIBIL";
    }
    else
        cout << rez;
    return 0;
}