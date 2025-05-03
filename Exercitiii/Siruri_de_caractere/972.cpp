#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[256];
    cin.get(s, 256);
    int n = strlen(s);
    int i, cnt = 0;
    for (i = 0; i < n; i++)
    {
        if ((strchr("aeiou", s[i]) != NULL) && strchr("aeiou", s[i - 1]) == NULL && s[i-1] != ' ' && strchr("aeiou", s[i + 1]) == NULL && s[i+1] !=' ')
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}