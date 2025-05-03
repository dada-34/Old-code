## 1. Ce se va afișa în urma executării secvenței de mai jos:
    char s[10]="primavara";
    int i;
    for(i=1;i<=3;i++)
    strcpy(s+1,s+2);
    cout<<s;

## 2. Ce se va afișa în urma executării secvenței de mai jos:
    char x[]="Mama", y[]="Macara";
    if(strcmp(x,y) > 0)
        cout<< x;
    else
        if(strcmp(x,y)==0)
            cout << "Incorect";
        else
            cout << y;

## 3. Ce se va afișa la finalul executării următoarei secvențe de instrucțiuni?
    char x[]="albacazapada",*p;
    x[0]=x[0]-32;
    p=strchr(x,'a');
    cout<< x[0] << p[0] << x[strlen(x)-1];

## 4. Ce se va afișa pe ecran în urma execuției acestui program?
    #include <iostream>
    #include <cstring>
    using namespace std;
    int main()
    {
        char s[10], x;
        int i;
        strcpy(s, "clasa");
        for(i=0; i<strlen(s)-1; i++)
        {
            if(s[i]>s[i+1])
            {
                x=s[i];
                s[i]=s[i+1];
                s[i+1]=x;
            }
            cout<<s<<" ";
        }
    }


## 5. Se citeşte un şir de caractere de la tastatura. Să se contorizeze vocalele, spaţiile şi consoanele.

## 6. Se citeşte un text de cel mult 255 caractere. Înlocuiţi toate vocalele din text cu ‘*’.
    Exemplu: “abedi” se obține șirul “*b*d*”.

## 7. Se citeşte un şir de caractere de la tastatura (o frază). Se cere să se afişeze numărul cuvintelor, cel mai lung şi cel mai scurt cuvânt

## 8. Se citeşte un şir de caractere de la tastatura (o frază). Să se verifice dacă o frază este de tip palindrom
    Ex: Au o nava noua.
        Ele fac cafele.
        Icre, pui, ciuperci.

## 9. Scrieți programul C++ care citește de la tastatură un șir s de cel mult 30 de litere și o literă c ; programul determină dublarea fiecărei apariții a literei c în s și scrie noul șir obținut în fișierul text BAC.TXT. De exemplu, dacă se citește șirul "alfabetar" și caracterul "a" atunci fișierul BAC.TXT va conține șirul: "aalfaabetaar".