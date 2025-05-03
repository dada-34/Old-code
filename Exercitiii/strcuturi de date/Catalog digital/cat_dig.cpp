#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
ifstream fin("clasa.txt");

typedef struct f3{
    char denumire[20];
    int nr_note;
    int  vec_note[30];
    int absente;
}materie;

typedef struct f2{
    char nume[15];
    char prenume[15];
    float medie_finala;
    int nr_mat;
    materie vec_mater[5];
}elev;

typedef struct f1{
    int grade;
    char litera_clasa;
    int nr_el;
    elev vec_elevi[30];
}clasa;



int medie_materie(materie m1){

    int i,a;
    float ma = 0;
    for (i = 0; i < m1.nr_note; i++){
        ma += m1.vec_note[i];
    }
    ma /= m1.nr_note;

    for (i = 0; i <= 10; i++)
    {
        if(i >= ma)
        {
            a = i-1;
            i = 10;
        }
    }   
    ma = (ma - a) *10;
    for (i = 0; i < 5; i++)
    {
        if(i >= ma)
            return a;
    }
    return a+1;

}

float medie_finala(elev e1){
    float mg = 0;
    int i;
    for (i = 0; i < e1.nr_mat; i++){
        mg += medie_materie(e1.vec_mater[i]);
    }
    mg /= e1.nr_mat;

    return mg;
}

void adauga_elev(clasa &cls, elev e1){
    cls.nr_el++;
    cls.vec_elevi[cls.nr_el-1] = e1;
}

void construieste_clasa(clasa &nou){
    fin>>nou.grade;
    fin>>nou.litera_clasa;
    fin>>nou.nr_el;
    //fgets(s, 100, stdin);
    for (int i = 0; i < nou.nr_el; i++){
        fin>>nou.vec_elevi[i].nume;
        fin>>nou.vec_elevi[i].prenume;
        fin>>nou.vec_elevi[i].nr_mat;
        for (int j = 0; j < nou.vec_elevi[i].nr_mat; j++){
           fin>>nou.vec_elevi[i].vec_mater[j].denumire;
            fin>>nou.vec_elevi[i].vec_mater[j].absente;
            fin>>nou.vec_elevi[i].vec_mater[j].nr_note;
            for (int  k = 0; k < nou.vec_elevi[i].vec_mater[j].nr_note; k++){
                fin>>nou.vec_elevi[i].vec_mater[j].vec_note[k];
            }
        }
    }


}

void sortare_elevi(clasa cls_ord){
    elev aux;
    int sizemax=0;
    for (int i = 0; i < cls_ord.nr_el; i++){
        for (int j = i+1; j < cls_ord.nr_el; j++)
        {
            if(cls_ord.vec_elevi[i].medie_finala < cls_ord.vec_elevi[j].medie_finala){
                aux = cls_ord.vec_elevi[i];
                cls_ord.vec_elevi[i] = cls_ord.vec_elevi[j];
                cls_ord.vec_elevi[j] = aux;
                
            }
            if(sizemax < cls_ord.vec_elevi[i].nr_mat)
                sizemax = cls_ord.vec_elevi[i].nr_mat;

        }
        
    }
    char s[17];
    int i,j,k;
    for ( i = 0; i < 17; i++)
    {
        s[i] = ' ';
        if(i == 15)
            s[i] = '|';
    }
    
    cout<<"Nume";
    for (i = 0; i < 13; i++)
    {
        if(i == 11)
            cout<<'|';
        else
            cout<<' ';
    }

    cout<<"Prenume";
    for (i = 0; i < 10; i++)
    {
        if(i == 8)
            cout<<'|';
        else
            cout<<' ';
    }

    for (i = 0; i < sizemax; i++)
    {
        cout<<"Media_"<<i+1;
         for (j = 0; j < 10; j++)
        {
            if(j == 8)
                cout<<'|';
            else
                cout<<' ';
        }
    }

    cout<<"Media_finala"<<'\n';

    for (i = 0 ; i < cls_ord.nr_el; i++){
        
        // Nume
        cout<<cls_ord.vec_elevi[i].nume;
        for (j = 0; j < 17 - strlen(cls_ord.vec_elevi[i].nume); j++){
            if(j == 17 - strlen(cls_ord.vec_elevi[i].nume) - 2)
                cout<<'|';
            else
                cout<<' ';
        }

        
       //Prenume 
        cout<<cls_ord.vec_elevi[i].prenume;
        for (j = 0; j < 17 - strlen(cls_ord.vec_elevi[i].prenume); j++){
            if(j == 17 - strlen(cls_ord.vec_elevi[i].prenume) - 2)
                cout<<'|';
            else
                cout<<' ';
        }

        //Medii Materii
        for (j = 0; j < sizemax; j++){
            if(medie_materie(cls_ord.vec_elevi[i].vec_mater[j]) < 10){
                cout<< medie_materie(cls_ord.vec_elevi[i].vec_mater[j]);
                for (k = 0; k < 16; k++)
                {
                    if(k == 14)
                        cout<<'|';
                    else
                        cout<<' ';
                }
            }
            else{
                cout<< medie_materie(cls_ord.vec_elevi[i].vec_mater[j]);
                for (k = 0; k < 15; k++)
                {
                    if(k == 13)
                        cout<<'|';
                    else
                        cout<<' ';
                }
            }
        }

        //Medie finala
        cout<<medie_finala(cls_ord.vec_elevi[i]) << '\n';
    }
}

int main(){

    elev das;
    das.nr_mat = 3;

    materie mate,rom, bio;
    int size = 2;
    mate.nr_note = size;
    rom.nr_note = size;
    bio.nr_note = size;
    mate.vec_note[0] = 9;
    mate.vec_note[1] = 10;

    rom.vec_note[0] = 8;
    rom.vec_note[1] = 7;

    bio.vec_note[0] = 9;
    bio.vec_note[1] = 10;

    das.vec_mater[0] = mate;
    das.vec_mater[1] = rom;
    das.vec_mater[2] = bio;

    cout<<medie_materie(mate);
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<medie_finala(das)<<endl;
    cout<<endl;


    elev matei,david,andrei;
    strcpy(matei.nume,"radu");
    strcpy(matei.prenume,"matei");

    strcpy(david.nume,"dinu");
    strcpy(david.prenume,"david");
    
    strcpy(andrei.nume,"mircea");
    strcpy(andrei.prenume,"andrei");

    clasa a_12_B;
    a_12_B.litera_clasa = 'B';
    a_12_B.grade = 12;
    a_12_B.nr_el=2;
    a_12_B.vec_elevi[0] = andrei;
    a_12_B.vec_elevi[1] = david;

      for (int i = 0; i < a_12_B.nr_el; i++){
        cout<<i+1<<". "<< a_12_B.vec_elevi[i].nume <<" "<<a_12_B.vec_elevi[i].prenume<<'\n';
    }
    cout<<endl;

    adauga_elev(a_12_B, matei);
    for (int i = 0; i < a_12_B.nr_el; i++){
        cout<<i+1<<". "<< a_12_B.vec_elevi[i].nume <<" "<<a_12_B.vec_elevi[i].prenume<<'\n';
    }
    cout<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\n';
    cout<<'\n';


    clasa k1;
    construieste_clasa(k1);

    sortare_elevi(k1);
    
    return 0;
}   