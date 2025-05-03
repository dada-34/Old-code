#include <iostream>
#include<string.h>

using namespace std;

/*
    TODO: Definiti o structura de date numita "character" care sa 
    aiba urmatoarele caracteristici:
    - "name" numele caracterului exprimat printr-un sir de caractere
    - "hp" (viata) exprimata printr-un nr. intreg
    - "atk" (puterea de atac) exprimata printr-un nr. intreg
    - "hp_regen" (regenerare in timpul luptei) exprimata printr-un bool
        true daca are regenerare a vieti fiecare caracter isi da regen 10 /s
        false daca nu
    - "speed" (viteza atacului) exprimata printr-un nr. real(float)
    - "ultra" (super puterea) exprimata printr-un sir de caractere
        EX: heal, damage increase, invisibility etc.

    ! Folositi typedef
*/
typedef struct Character{
    char nume[20];
    int hp;
    int atk;
    bool hp_regen;
    float speed;
}character;

/* Scrieti o functie "fight" de tip character care primeste ca argument
    2 variabile de tip character si returneaza caracterul invingator
 true daca are regenerare a vieti fiecare caracter isi da regen 10 /s

*/
character fight(character p1, character p2){
    character draw;
    strcpy(draw.nume, "DRAW");

    int maxhp_1,maxhp_2;
    maxhp_1 = p1.hp;
    maxhp_1 = p2.hp;
    float nh=1.00;


    
    float t = min(p1.speed, p2.speed);
    float tmax = max(p1.speed,p2.speed);
    character aux;
    
    if(p1.speed>p2.speed)
    {
        aux = p1;
        p1 = p2;
        p2 = aux;
    }
    float csp1 = p1.speed,csp2 = p2.speed;
    while(p1.hp>0 && p2.hp>0){

            if(p2.hp != maxhp_2 && p2.hp_regen == true && nh >= p1.speed){
                    
                    nh = nh + 1.00;

                    if(p2.hp+10 >maxhp_2)
                        p2.hp = maxhp_2;
                    else
                        p2.hp+=10;
            }
            if(p1.hp != maxhp_1 && p1.hp_regen == true && nh >= p1.speed){
                    
                    nh = nh + 1.00;

                    if(p1.hp+10 >maxhp_1)
                        p1.hp = maxhp_1;
                    else
                        p1.hp+=10;
            }
            p2.hp -= p1.atk;
            if(p1.speed > p2.speed){
                p1.hp -= p2.atk;
                p2.speed += tmax; 
            }
            p1.speed = p1.speed+t;
            
    }
    p1.speed = csp1;
    p2.speed = csp2;
    if(p1.hp==0 && p2.hp==0)
    {
        if(p1.speed>p2.speed)
            return p2;
        else
            if(p2.speed>p1.speed)
                return p1;
            else
                return draw;
    }
    else
        if(p1.hp>0)
            return p1;
        else
            return p2;

}

/* Scrieti o functie turneu care primeste un vector de variabile de tip
    character si intoarce castigatorul turneului
*/
character turneu(character *participants, int n){
    character nada;
    strcpy(nada.nume, "nimic");
    int cnt,i,last=n-1,ok=0;
    if(n%2==1)
        ok=1;
    n-=1;
    while(n>1){
        cnt = 0;
        for(i=0;i<n;i+=2)
        {
            participants[cnt] = fight(participants[i],participants[i+1]);
            participants[cnt+1] = nada;
            cnt++;
        }
        if(ok==1 && n==1)
        {
            participants[0] = fight(participants[0],participants[last]);
            n=0;
        }
        else 
            n = n/2;
    }
    return participants[0];


}

/*
    Org
    Mage
    Elf
    PEKKA
    Boss
*/



int main() {

    character x,y,z,t,boss;

    stpcpy(boss.nume,"Trump");
    boss.atk = 7;
    boss.hp = 50;
    boss.hp_regen = false;
    boss.speed = 10.50; 

    strcpy(x.nume,"Praslea");
    x.atk = 7;
    x.hp = 30;
    x.hp_regen = false;
    x.speed = 25.50;

    strcpy(y.nume,"Mage");
    y.atk = 5;
    y.hp = 10;
    y.hp_regen = true;
    y.speed = 1.00;

    strcpy(z.nume, "Elf");
    z.atk = 4;
    z.hp = 16;
    z.hp_regen = false;
    z.speed = 5.6;

    strcpy(t.nume, "PEKKA");
    t.atk = 7;
    t.hp = 50;
    t.hp_regen = false;
    t.speed = 10.50;


    character winer;

    character participants[6];
    participants[0] = boss;
    participants[1] = y;
    participants[2] = z;
    participants[3] = t;
    participants[4] = x;

    winer = turneu(participants, 5);
    cout<<winer.nume<<endl;
    


    return 0;
}