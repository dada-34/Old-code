#include<iostream>
using namespace std;
typedef struct dap{
    int marime;
    float presiune;
}roata;

typedef struct nup{
    char name[20];
    roata v[4];

    typedef struct si{
        int kilom;
        bool ABS;
        bool AC;
        int nr_vit;

    }dotari;

}masina;

int main()
{
    masina lambo;
    cin>>lambo.name;
    for(int i = 0; i < 4; i++)
    {
        cin>>lambo.v[i].marime;
        cin>>lambo.v[i].presiune;
    }
    cout<<lambo.name<<endl;

    for(int i = 0; i < 4; i++)
    {   
        cout<<"Roata "<<i+1<<" : ";
        cout<<lambo.v[i].marime<<" ";
        cout<<lambo.v[i].presiune<<endl;
    }
}
