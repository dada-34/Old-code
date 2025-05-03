#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
#include<ctime>
using namespace std;

void dragonel(int i,char s[30][160],int j)
{
    // FILE *dragonel;
    // dragonel = fopen("dragonel.txt", "r");
    
    // for(i=13;i<28;i++)
    // {
    //     fgets(s[i], 160, dragonel);  
    // }
    // fclose(dragonel);


    ifstream fin("dragonel.txt");
    for(i=13;i<28;i++)
    {
        for(j=0;j<160;j++)
        {
            fin>>s[i][j];
            if(s[i][j]=='*')
                s[i][j]=' ';
        }
        s[i][0]='#';
        s[i][159]='#';
    }



}

int desenarearena(char s[30][160], int i, int j)
{
    for(i=0;i<30;i++)
    {   
        for(j=0;j<160;j++)
        {   
            s[i][j]=' ';

            if(i==29)
                s[i][j]='=';
            if(j%3==0)
                s[0][j]='#';
             
        }
        s[i][0]='#';
        s[i][159]='#';
    }
    return 0;
}


//                                                          tabel puteri

int tabel(char s[30][160], int i, int j)
{
    for(i=0;i<13;i++)
    {   
        for(j=0;j<50;j++)
        {   
            s[i][j]=' ';

            s[12][j]='#';
            s[4][j]='#';
            s[8][j]='#';
            s[0][j]='#';

            // kick ul
                s[2][21] = 'k';
                s[2][22] = 'i';
                s[2][23] = 'c';
                s[2][24] = 'k';
            
            // sheild ul 

                s[6][20] = 's';
                s[6][21] = 'h';
                s[6][22] = 'e';
                s[6][23] = 'i';
                s[6][24] = 'l';
                s[6][25] = 'd';
            
            // kamehameha ul

                s[10][18] = 'k';
                s[10][19] = 'a';
                s[10][20] = 'm';
                s[10][21] = 'e';
                s[10][22] = 'h';
                s[10][23] = 'a';
                s[10][24] = 'm';
                s[10][25] = 'e';
                s[10][26] = 'h';
                s[10][27] = 'a';
             
        }
        s[i][0] = '#';
        s[i][49] = '#';


        s[2][7] = '1';

        s[6][7] = '2';
        
        s[10][7] = '3';
    }
    return 0;

}


//                                                      stergere magica

void darkmagic ()
{
    cout<<"\x1b[H\x1b[J"<<flush;
}





//                                                  afisare

void afisare(char s[30][160], int i, int j)
{
    for(i=0;i<30;i++)
    {
        for(j=0;j<160;j++)
        {
            cout<<s[i][j];
        }
    }
}

//                                          SCUT

void sheild(char s[30][160], int i, int j)
{

    s[27][6] = ')';
    s[27][7] = 'o';
    s[27][8] = '(';
    s[26][6] = '|';
    s[25][7] = '_';
    s[26][8] = '|';
    s[28][6] = '|';
    s[28][7] = '_';
    s[28][8] = '|';

}

















//                                                                        MAIN

int main()
{   
    char s[30][160];

    int i,j,k,c;


    
    
    desenarearena(s,i,j);

    dragonel(i,s,j);



//           CORP

s[26][4]='O';       //caps

s[27][4]='|';       //trunchi

s[27][5]='\\';      //mana dreapta
            
s[27][3]='/';       //mana stanga
            
s[28][3]='/';       //picior stang
            
s[28][5]='\\';      //picior drept

          
            
for(i=0;i<30;i++)
    {
        for(j=0;j<160;j++)
        {
            cout<<s[i][j];
        }
    }


    tabel(s,i,j);

    cout<<'\n';
    cout<<'\n';
    cout<<'\n';

     for(i=0;i<13;i++)
    {   
        for(j=0;j<50;j++)
        {   
            cout<<s[i][j];
             
        }
         cout<<'\n';
    }

    darkmagic();
    
   sheild(s,i,j);
    
    afisare(s,i,j);

 

return 0;
}