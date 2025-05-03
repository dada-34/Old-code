#include <iostream>
using namespace std;

struct fractie{
    int numarator;
    int numitor;
};

void ireductibil(struct fractie &f) {
    int a , b;
    a = f.numarator;
    b = f.numitor;
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    f.numarator /= a;
    f.numitor /= a;

}

//! TODO : Returneaza suma a doua fractii 
struct fractie sum(struct fractie f1, struct fractie f2) {
        
}

//! TODO : Returneaza diferenta a doua fractii
struct fractie dif(struct fractie f1, struct fractie f2) { 

}

//! TODO : Returneaza produsul a doua fractii
struct fractie produs(struct fractie f1, struct fractie f2) {

}

//! TODO : Returneaza impartirea a doua fractii
struct fractie impartire(struct fractie f1, struct fractie f2) {

}

//! TODO : Returneaza fractia mai mare
struct fractie maxfunct(struct fractie f1, struct fractie f2) {
        
}

int main()
{
    struct fractie f1, f2, rez;
    cin >> f1.numarator >> f1.numitor;
    cin >> f2.numarator >> f2.numitor;

    //! TODO : Se calculeaza suma fractiilor si se afiseaza in format ireductibil

    //! TODO : Se calculeaza diferenta fractiilor si se afiseaza in format ireductibil

    //! TODO : Se calculeaza produsul fractiilor si se afiseaza in format ireductibil

    //! TODO : Se calculeaza impartirea fractiilor si se afiseaza in format ireductibil

    //! TODO : Se afiseaza fractia mai mare S


    cout << f1.numarator << "/" << f1.numitor << '\n' ;
    return 0;

}