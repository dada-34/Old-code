
# Problema Bine platit
https://infoas.ro/problema/bine-platit

### Cerință
Se dau n persoane despre care se cunoaște numele și salariul (care poate fi anual sau lunar). Să se afișeze pe ecran numele persoanei cu salariul cel mai mare. În cazul în care există mai multe persoane cu salariul cel mai mare, să se afișeze numele primei persoane în ordinea citirii.

### Date de intrare
Programul citește de la tastatură, de pe prima linie, numărul natural n, iar de pe următoarele n linii, câte o structură nume salariu x, unde nume este numele persoanei, format strict din litere mici ale alfabetului englez, salariu este un număr natural ce reprezintă salariul persoanei, iar x este fie lunar, fie anual. Dacă x este lunar, atunci salariul persoanei este de salariu lei pe lună, pe când dacă este anual, salariul persoanei este de salariu lei pe an.

### Date de ieșire
Programul afișează pe ecran numele persoanei cu salariul cel mai mare. În cazul în care există mai multe persoane cu salariul cel mai mare, se cere afișarea numelui primei persoane în ordinea citirii.

### Restricții și precizări
1 ≤ n ≤ 100
Fiecare persoană are un nume diferit
Pentru fiecare persoană în parte, 1 ≤ salariu ≤ 100.000
Pentru fiecare persoană în parte, 1 ≤ lungimea numelui ≤ 100

### Exemplu
    3
    dan 2500 lunar
    mihaela 48000 anual   == output ==>  mihaela
    alin 4000 lunar

Cele n = 3 persoane au salariile 2500 * 12 = 30.000 lei / an, 48.000 lei / an, respectiv 4000 * 12 = 48.000 lei / an. Dintre acestea, mihaela și alin au cele mai mari salarii (de 48.000 lei / an). Se afișează mihaela, deoarece ea apare înaintea lui alin în ordinea citirii.


# Problema Ordonare puncte spatiu
https://infoas.ro/problema/ordonare-puncte-spatiu

### Cerință
Se dau n puncte în plan, caracterizate prin poziția lor (x; y; z). Să se ordoneze punctele descrescător după x, la egalitate, descrescător după y, iar din nou la egalitate, descrescător după z.

### Date de intrare
Programul citește de la tastatură, de pe prima linie, numărul natural n, iar de pe următoarele n linii, câte trei valori naturale separate printr-un spațiu, reprezentând pozițiile x, y și z ale punctelor.

### Date de ieșire
Programul afișează pe ecran punctele ordonate conform cerinței. Fiecare punct va fi afișat pe câte un rând separat, afișându-se pozițiile x, y și z despărțite prin câte un spațiu.

### Restricții și precizări
1 ≤ n ≤ 100
Pentru fiecare punct în parte, 1 ≤ x, y, z ≤ 1000

### Exemplu
    INPUT
    3\n
    1 10 1
    2 5 4
    2 5 5

    OUTPUT
    2 5 5
    2 5 4
    1 10 1

Punctele se ordonează descrescător după x, iar la egalitate (punctele (2, 5, 5) și (2, 5, 4)), descrescător după y și z. Astfel, ordinea punctelor este cea afișată.


# Problema Cine e mai aproape
https://infoas.ro/problema/cine-e-mai-aproape


### Cerință
Adriana, Bucur și Cosmin au descoperit o funcție nouă pe telefoanele lor, care le zice poziția geografică exactă în care se află ei. Această poziție este descrisă prin două numere reale, similar cu latitudinea și longitudinea. Știind coordonatele celor trei, să se determine care băiat este mai aproape de Adriana.

### Date de intrare
Programul citește de la tastatură șase numere reale, câte două pe linie. Primele două valori reprezintă poziția Adrianei, următoarele două valori reprezintă poziția lui Bucur și următoarele două valori reprezintă poziția lui Cosmin. Valorile pe aceeași linie sunt separate printr-un caracter spațiu.

### Date de ieșire
Programul afișează pe ecran mesajul Bucur, dacă Bucur este mai aproape de Adriana decât Cosmin, respectiv Cosmin în caz contrar.

### Restricții și precizări
-100 ≤ cele șase numere citite ≤ 100
Se garantează că un băiat este mai aproape de Adriana față de celălalt
Numerele citite sunt reale și au maximum 1 zecimală

### Exemplu
    INPUT
    10 9.5
    4.7 9
    15.3 15

    OUTPUT
    Bucur

Distanța dintre Adriana și Bucur este de aproximativ 5.323…. Distanța dintre Adriana și Cosmin este de aproximativ 7.433…. Astfel, Bucur este mai aproape de Adriana decât Cosmin. Pozițiile celor trei se pot vedea în figura de mai jos: