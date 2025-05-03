#include<iostream>
#include<math.h>
using namespace std;

typedef struct cord{
    float x;
    float y;
}coordonate;

int main(){
    coordonate Adriana, Bucur, Cosmin;
    cin >> Adriana.x>> Adriana.y;
    cin >> Bucur.x>> Bucur.y;
    cin >> Cosmin.x>> Cosmin.y;
    float d1, d2;
    d1 = sqrt (pow (Bucur.x - Adriana.x, 2) + pow (Bucur.y - Adriana.y, 2));
    d2 = sqrt (pow (Adriana.x - Cosmin.x, 2) + pow (Adriana.y - Cosmin.y, 2));
    if (d1 < d2)
        cout<<"Bucur";
    else
        cout<<"Cosmin";

    return 0;
}