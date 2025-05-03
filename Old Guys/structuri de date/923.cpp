#include<iostream>

using namespace std;

struct fractie{

    int numit,numar;
};

void simp(struct fractie *f)
{
    int i;
    for(i=2;i<=f->numit;i++)
    {
        if(f->numit%i==0 && f->numar%i==0)
        {
            f->numit /= i;
            f->numar /= i;
        }
    }
}

int main()
{
    struct fractie f1,f2;

    cin>>f1.numar;
    cin>>f1.numit;
    cin>>f2.numar;
    cin>>f2.numit;

    simp(&f1);
    simp(&f2);

    if(f1.numar*f2.numit >= f2.numar*f1.numit)
        cout<<f1.numar<<" "<<f1.numit;
    else
        cout<<f2.numar<<" "<<f2.numit;

    return 0;
}