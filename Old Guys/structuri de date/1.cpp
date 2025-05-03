#include<iostream>
#include<string.h>
using namespace std;

struct persoana {

    char nume[30];
    char prenume[30];
    int varsta;


};

int main()
{
    struct persoana x;

    strcpy(x.nume,"Dinu");

    cout<<x.nume;



    return 0;
}