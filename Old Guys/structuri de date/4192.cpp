#include<iostream>
using namespace std;

struct date
{ char CNP[14];
  int anNastere;
};
struct angajat
{ struct date dp;
  int venit;
};   

int main()
{
    struct angajat a[30];
    a[0].dp.anNastere = 2000;
    a[0].venit = 4000;

    cout<<a[0].dp.anNastere<<" "<<a[0].venit;
}