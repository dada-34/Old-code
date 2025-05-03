#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    /* deschidere fisiere */
    ifstream fin("nrapprime.in");
    ofstream fout("nrapprime.out");

    int n, a, d, c=0, ok;

    fin >> n;
    /* Parcurgerea sirului de numere */
    while (fin >> a) {
        ok = 1;
        d = 2;
        /* verificare divizori */
        while(d*d <= a) {
            if (a % d == 0) {
                ok = 0;
                break;
            }
            d++;
        }
        /* Verificare a - Prim
         * 0 si 1 nu sunt Prime
         */
        if (ok == 1 && a != 1)
            c++;
    }

    fout<<c;
    return 0;
}