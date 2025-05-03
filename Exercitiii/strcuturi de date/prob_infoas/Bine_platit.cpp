#include<iostream>
#include<string.h>
using namespace std;

typedef struct oameni{
    char name[100];
    int salariu;
    char la[6];
}people;





int main()
{
    int n;
    cin>>n;
    people v[n];
    int i,bogat=-1,pbog=0;
    for(i=0;i<n;i++)
    {
        cout<<"Numele dmuneavoastra: "<<endl;
        cin>>v[i].name;
        cout<<"Ce salariu aveti?"<<endl;
        cin>>v[i].salariu;
        cout<<"Anual sau Lunar?"<<endl;
        cin>>v[i].la;

        cout<<"\x1b[H\x1b[J"<<flush;
        if(!strcmp(v[i].la,"Lunar") && bogat<v[i].salariu*12)
        {
            bogat = v[i].salariu*12;
            pbog = i;
        }
        else
            if(bogat<v[i].salariu)
            {
                bogat = v[i].salariu;
                pbog = i;
            }
    }
    cout<<endl;
    cout<<"Cel mai bine platit este: "<<v[pbog].name<<endl;
    //cout<<v[pbog].name;

}