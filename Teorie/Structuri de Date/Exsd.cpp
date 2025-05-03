#include<iostream>
using namespace std;

struct produs {
  int greutate;
  double pret;
} ;

int main()
{
    produs mar;
    mar.greutate = 20;
    mar.pret = 15.99;
    cout<<mar.greutate<<" "<<mar.pret;
    return 0;
}