/*
Да се напише програма која за петцифрен број, внесен од стандарден влез, ќе го "искастри".
Еден број е искастрен ако неговата најлева и најдесна цифра се избришани.
На излез да се испечатат искастрениот број и во нов ред збирот на цифрите кои се кастрат.

Појаснување: бројот 54321 искастрен е 432. Цифрите кои се кастрат се 5 и 1.
*/
#include <iostream>
using namespace std;

int main() {
    int broj, iskastren, prva_cifra, posledna_cifra;
    cin >> broj;

    iskastren = (broj /10)%1000;

    posledna_cifra = broj % 10;
    prva_cifra = (broj/10000) % 10;

    cout << iskastren<<endl;
    cout << prva_cifra+posledna_cifra;
}
