#include<iostream>
using namespace std;

struct fractie{
    int numarator;
    int numitor;
};

int cmmmc(int a,int b)
{  int p=a*b;
    while(b!=a)
    {
        if(b>=a)
            b-=a;
        else 
            a-=b;
    }
    return p/a;
    
}

void ired(struct fractie &f)
{
    int a,b;
    a = f.numarator;
    b = f.numitor;
    while(b!=a)
    {
        if(b>=a)
            b-=a;
        else 
            a-=b;
    }

    f.numarator /= a;
    f.numitor /= a;
}

struct fractie sum(struct fractie f1, struct fractie f2) {
        ired(f1);
        ired(f2);
        struct fractie suma;
        int copie = f1.numitor;
        f1.numitor  = cmmmc(f1.numitor,f2.numitor);
        f1.numarator = f1.numarator *(f1.numitor/copie);
        copie = f2.numitor;
        f2.numitor = f1.numitor;
        f2.numarator = f2.numarator * (f2.numitor/copie);
        suma.numarator = f1.numarator + f2.numarator;
        suma.numitor = f1.numitor;
        return suma;

}

struct fractie dif(struct fractie f1, struct fractie f2) { 
        ired(f1);
        ired(f2);
        struct fractie dif;
        int copie = f1.numitor;
        f1.numitor  = cmmmc(f1.numitor,f2.numitor);
        f1.numarator = f1.numarator *(f1.numitor/copie);
        copie = f2.numitor;
        f2.numitor = f1.numitor;
        f2.numarator = f2.numarator * (f2.numitor/copie);

        dif.numarator = f1.numarator - f2.numarator;
        dif.numitor = f1.numitor;
        
        return dif;
}

struct fractie produs(struct fractie f1, struct fractie f2) {
    struct fractie prod;
    prod.numarator = f1.numarator *f2.numarator;
    prod.numitor = f1.numitor * f2.numitor;
    ired(prod);
    return prod;
}

struct fractie impartire(struct fractie f1, struct fractie f2) {
    struct fractie imp;
    imp.numarator = f1.numarator * f2.numitor;
    imp.numitor = f1.numitor * f2.numarator;
    ired(imp);
    return imp;
}

struct fractie maxfunct(struct fractie f1, struct fractie f2) {
        struct fractie copf1;
        copf1.numarator = f1.numarator;
        copf1.numitor = f1.numitor;

        struct fractie copf2;
        copf2.numarator = f2.numarator;
        copf2.numitor = f2.numitor;

        int copie = f1.numitor;
        f1.numitor  = cmmmc(f1.numitor,f2.numitor);
        f1.numarator = f1.numarator *(f1.numitor/copie);
        copie = f2.numitor;
        f2.numitor = f1.numitor;
        f2.numarator = f2.numarator * (f2.numitor/copie);
        if(f1.numarator>f2.numarator)
        {
            return copf1;
        }
        else
        {
            return copf2;
        }
}

int main()
{
    struct fractie f1, f2, rez;
    cin >> f1.numarator >> f1.numitor;
    cin >> f2.numarator >> f2.numitor;
    struct fractie sumfr,diffr,prdfr,impfr,maxfr;
    
    sumfr = sum(f1,f2);
    cout<<"Aceasta este suma: "<<sumfr.numarator<<"/"<<sumfr.numitor;
    cout<<endl;
    cout<<endl;

    diffr = dif(f1,f2);
    cout<<"Aceasta este diferenta: "<<diffr.numarator<<"/"<<diffr.numitor;
    cout<<endl;
    cout<<endl;

    prdfr = produs(f1,f2);
    cout<<"Acesta este produsul: "<<prdfr.numarator<<"/"<<prdfr.numitor;
    cout<<endl;
    cout<<endl;

    impfr = impartire(f1,f2);
    cout<<"Aceast este impartirea: "<<impfr.numarator<<"/"<<impfr.numitor;
    cout<<endl;
    cout<<endl;

    maxfr = maxfunct(f1,f2);
    cout<<"Aceasta etse fractia mai mare: "<<maxfr.numarator<<"/"<<maxfr.numitor<<'\n';

    return 0;
}