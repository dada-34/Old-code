# Test

Un liceu vrea sa implementeze un catalog digital pentru fiecare clasa. Se doreste o mai buna monitorizare a mediilor si absentelor elevilor. Eficienta si beneficiile catalogului digital vor fi testate pentru inceput in cadrul unei singure clase.

Stiind ca o clasa are drept caracteristici:
- un numar intreg(clasa 9,10,11,12)
- o liteara asociata(majuscula A,B,C sau D)
- un numar n de elevi
- un vector de n elemente de tip elev

Elementele de tip elev au urmatoarele cracteristici:
- nume de maxim 15 de litere
- prenume de maxim 15 de litere
- media finala de tip real
- un nr m de materii
- un vector de m materii

Materiile au drept caracteristici:
- Denumire de maxim 20 de litere
- nr de note
- notele sub forma de numere intregi
- numar de absente

### Cerinte
1) Construiti structura de date a materiilor si sa se implementeze o functie "medie_materie" care primeste ca argument o materie si returneaza media finala la materia respectiva.

2) Construiti structura de date elev si scrieti functia "medie_finala" care primeste ca argument un elev si intoarce valoarea mediei generale

3) Construiti structura de date a clasei si scrieti o functie "adauga_elev" care primeste ca argument o clasa si un elev si adauga elevul in clasa 

4) Scrieti functia "construieste_clasa" care citeste informatiile clasei, elevilor si mediilor dintr-un fisier "class.txt" cu date de forma:
###
    Nr_Clasa Litera_Clasa
    nr_elevi
    Nume1 Prenume1 nr_materii
    Materie nr_absente nr_note
    nota1 nota2 ...


4) Scrieti o functie "sorteaza_elevi" care primeste ca argument o clasa si sorteaza descrescator elevii acesteia dupa media finala si afiseaza datele acestora sub forma:
###
      Nume  | Prenume | Medie1 | Medie_2 | ... | Medie_finala

    Popescu |  Gigel  |    8   |    9    | ... |  9.38

Bonus: Pastrati pozitia " | " constanta, indiferent de continutul tabelului
