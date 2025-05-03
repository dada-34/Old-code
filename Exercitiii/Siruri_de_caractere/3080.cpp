#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[101], t[101], l[101];
    t[0] = '\0';
    l[0] = '\0';
    cin.getline(s,100);
    int i, j = 0, k = 0;
    int ok = 0, var = 1;
    int n = strlen(s);

    int pz = -1;
    int zc = 0;

    for (i = 0; i < n; i++)
    {
        if (s[i] > '0' && s[i] <= '9')
        {
            t[j] = s[i];
            j++;
            t[j] = '\0';
        }
        else if (s[i] == '0')
        {
            ok = 1;
            if (j == 0)
            {
                l[k] = '0';
                pz = k;
                k++;
                l[k] = ' ';
                k++;
                l[k] = '\0';
            }
            else
            {
                t[j] = '0';
                j++;
                t[j] = '\0';
            }
        }
        else if (s[i] != ' ')
        {
            l[k] = s[i];
            k++;
            l[k] = ' ';
            k++;
            l[k] = '\0';
        }
    }
    if (ok == 1 && strlen(t) == 0)
    {
        t[0] = '0';
        t[1] = '\0';
        strcpy(l+pz,l+pz+2);
    }

    if (strlen(t) == 0)
    {
        cout << "NaN";
        return 0;
    }
    if (strlen(l) == 0)
    {
        cout << "CORECT";
        return 0;
    }
    cout << t;
    cout << endl;
    cout << l<<'\n';
    return 0;
}

// 57393
// 0 0 a e e

// my code

// for (i = 0; i < n; i++)
//     {
//         if (s[i] == '0')
//         {
//             zc = 1;
//             pz = i;
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         if (strchr("0123456789", s[i]) && !(j == 0 && s[i] == '0'))
//         {
//             t[j] = s[i];
//             j++;
//             t[j] = '\0';
//         }
//     }
//     for(i = 0;i<n;i++){
//         if ( (s[i] != ' ' && (i != pz || t[0] != '\0')) && strchr("123456789",s[i])==NULL)
//         {
//             if (k > 0)
//             {
//                 l[k] = ' ';
//                 k++;
//             }
//             l[k] = s[i];
//             k++;
//             l[k] = '\0';
//         }
//     }
//     if (zc == 1 && strlen(t) == 0)
//     {
//         t[0] = '0';
//         t[1] = '\0';
//     }
//     if (strlen(t) == 0)
//     {
//         cout << "NaN";
//         return 0;
//     }
//     if (strlen(l) == 0)
//     {
//         cout << "CORECT";
//         return 0;
//     }
//     cout << t;
//     cout << endl;
//     cout << l;
//     return 0;
