//
// Created by metro on 11/8/2025.
//
/*
Да се напише програма која за петцифрен број внесен од стандарден влез
ќе ја пресмета сумата на цифритена парните и непарните позиции соодветно.

Напомена: Последната цифра во бројот се наоѓа на 0-та позиција.
Појаснување: За бројот 54321 цифрата на 0-та позиција е 1, додека цифрата на 4-та позиција е 5.

Input: 54321
Output: Sumata na cifrite na parnite pozicii e 9
        Sumata na cifrite na neparnite pozicii e 6

*/
#include <iostream>
using namespace std;

int main() {
        int broj;
        int ParniPozicii=0;
        int NeParniPozicii=0;
        cin>>broj;

        for(int i=0;i<5;i++) {
        int cifra = broj%10;
                if (i%2==0) {
                ParniPozicii += cifra;
                }else {
                        NeParniPozicii += cifra;
                }
                broj=broj/10;
        }
        cout<<"Sumata na cifrite na parnite pozicii e "<< ParniPozicii<< endl;
        cout<<"Sumata na cifrite na neparnite pozicii e "<<NeParniPozicii<<endl;
}

