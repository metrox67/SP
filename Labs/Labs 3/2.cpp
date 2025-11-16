/*
Да се напише програма која ќе ги испечати првите 10 броеви (почнувајќи во опаѓачки редослед)
помали од даден број Х кои ги исполнуваат следниве услови (реализирани во функции):
1. Бројот треба да биде палиндром (да биде ист кога се чита одлево надесно и оддесно налево).
2. Бројот треба да биде делив со сумата на своите цифри.

Input: 1000
Result: 999 888 828 777 666 555 444 414 333 252

*/
#include <iostream>
using namespace std;

bool ePalindrom(int n) {
    int org = n, obraten = 0;
    int temp = n;
    while (temp > 0) {
        int cifra = temp % 10;
        obraten = obraten * 10 + cifra;
        temp = temp / 10;
    }
    return obraten == org;
}
int sumNaCifri(int n) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int cifra = temp % 10;
        sum = sum + cifra;
        temp = temp / 10;
    }
    return sum;
}
bool delivSoSuma(int n) {
    int suma = sumNaCifri(n);
    if (suma == 0) {
        return true;
    }
    return n % suma  == 0;
}


int main() {
    int x;
    cin >> x;
    int brojac = x-1;
    for (int i = 0; i<10 && brojac>0;) {
        if (delivSoSuma(brojac) && ePalindrom(brojac)) {
            cout << brojac << endl;
            i++;
        }
            brojac--;
        }

    }
