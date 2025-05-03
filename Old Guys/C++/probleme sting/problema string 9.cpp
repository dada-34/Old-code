// citesc o prop si 2 cuvinte primul cuvant se inlocuieste cu al doilea cuvant
//  Ana are mere
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[256], a[30], b[30], t[256];
    char *p;
    t[0] = '\0';
    fgets(s, 256, stdin);
    s[strlen(s) - 1] = '\0';
    cin >> a;
    cin >> b;
    int i;
    p = strtok(s, " ");
    while (p != NULL)
    {
        if (strcmp(p, a) == 0)
        {
            strcat(t, b);
        }
        else
        {
            strcat(t, p);
        }

        strcat(t, " ");

        p = strtok(0, " ");
    }
    t[strlen(t) - 1] = '\0';
    for (i = 0; i < strlen(t); i++)
        cout << t[i];
}