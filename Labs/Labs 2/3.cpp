/*
Да се напише код којшто ќе и помогне на една продавница во пресметките на попустите на одредени артикли.
Попустите се означуваат со различна буква и тоа

А == 20%
B == 50%
C == 70%
D == 0% nema popust

Од стандарден влез најпрвин се чита број на артикли кои сака купувачот да ги купи,
а потоа како парови се внесуваат цената и видот на попуст за секој од посакуваните артикли.

Да се испечати колку ќе биде сумата што купувачот ќе треба да ја плати вклучувајќи го попустот за секој од артиклите соодветно.
Исто така во нов ред да се испечати и колку изнесува попустот на купувачот во денари односно колку денари заштедил.

Input:
4
180 B
340 C
250 D
540 A

Result:
874
436
*/
#include <iostream>
using namespace std;

int main() {
    int broj;
    char kategorija;
    double cena;
    double suma=0;
    double suma_popust=0;

    cin>>broj;

    for (int i=0; i<broj; i++) {
        cin>>cena;
        cin>>kategorija;
        double cena_so_popust=0;

        if (kategorija=='A') {
            cena_so_popust = cena*0.8;
        }
        else if(kategorija == 'B'){
            cena_so_popust = cena * 0.5;
        }
        else if (kategorija == 'C') {
            cena_so_popust = cena* 0.3;
        }
        else {
            cena_so_popust = cena * 1;
        }
        suma += cena_so_popust;
        suma_popust +=(cena-cena_so_popust);
    }
    cout<<suma<<endl;
    cout<<suma_popust;

}



