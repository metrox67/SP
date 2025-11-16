/*
Од стандарден влез се вчитуваат позитивни цели броеви се додека не се внесе нешто што не е број.
За секој внесен број се печати неговата најголема цифра, а потоа на крај се печати просекот од сите најголеми цифри на внесените броеви.

Input: 123 789 .
Result: 3 9 6
*/
#include <iostream>
using namespace std;

int najgolemaCifra(int n) {
    int max = 0;
    int temp = n;
    while (temp > 0) {
        int cifra = temp % 10;
        if (cifra > max) {
            max = cifra;
        }
        temp /= 10;
    }
    return max;
}

int main() {
    int broj;
    int brojac = 0;
    double vkupno = 0;
    while(cin>>broj) {
        int big = najgolemaCifra(broj);
        cout<<big<<endl;
        vkupno += big;
        brojac++;

    }
    cout<< vkupno / brojac <<endl;
}
