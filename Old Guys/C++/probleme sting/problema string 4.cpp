#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i, ok, j;
    char s[101];

    fgets(s, 100, stdin);

    s[strlen(s) - 1] = '\0';

    for (i = 0; i < strlen(s); i++)
    {
        j = 0;
        ok = 0;

        while ((s[i + j] <= '9' && s[i + j] >= '0') || s[i + j] == '.' && i + j <= strlen(s))
        {
            j++;
            if (s[i + j] == '.')
                ok = 1;
        }

        if (ok == 1)
        {
            strcpy(s + (i - 1), s + i + j);
            i = i + j;
        }
    }

    puts(s);
    

    return 0;
    // 4 zecimale PI este 3.1415 si e este 2.7182
}