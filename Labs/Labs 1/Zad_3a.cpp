/*
Да се напише програма која што за вчитан датум како влезна променлива ( DD MM GGGG)
ќе испечати на  излез порака 1 или 0 во зависност од тоа дали внесениот датум е правилен или не.

Напомена: За проверка на валидноста на датумот разгледајте ги следниве потточки:

за датумот 29.02. да се внимава дали станува збор за престапна година
(престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100)
дали месецот е број помеѓу 1 и 12
дали денот одговара со бројот на денови во тој месец

Input: 1 6 1992
Result: 1
Input: 30 2 2004
Result:0
 */
#include <iostream>
using namespace std;
int main() {
    int den, mesec, godina, br_denovi;
    bool prestapna;
    cin >> den >> mesec >> godina;

    if (godina%400 ==0 || (godina%4==0 && godina%100!=0)) {
        prestapna=true;
    }else {
        prestapna=false;
    }

    if (mesec == 1 || mesec == 3 || mesec == 5 || mesec == 7 || mesec == 8 || mesec == 10 || mesec == 12) {
        br_denovi = 31;
    }else if (mesec == 4 || mesec == 6 || mesec == 9 || mesec == 11) {
        br_denovi = 30;
    }else if (mesec == 2) {
        if (prestapna) {
            br_denovi = 29;
        }else {
            br_denovi = 28;
        }
    }
    if (mesec < 1 || mesec > 12) {
        cout<<"0";
    }
    if (den < 1 || den > br_denovi) {
        cout<<"0";
    }else {
        cout<<"1";
    }

}