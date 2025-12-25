#include <iostream>
using namespace std;

int linearno_prebaruvanje(int a[], int n, int brojce) {
    for (int i = 0; i < n; i++) {
        if (a[i] == brojce) {
            return i;
        }
    }
}

int binarno_prebaruvanje(int a[], int n, int brojce) {
    int pocetok = 0;
    int kraj = n-1;
    while (true) {
        int sredina = (pocetok+kraj)/2;
        if (a[sredina] > brojce) {
            kraj = sredina;
        }else if (a[sredina] < brojce) {
            pocetok = sredina;
        }else {
            return sredina;
        }
    }
}

int main() {
    int a[1000000], brojce;
    for (int i = 1; i <=1000000; i++) {
        a[i-1] = i;
    }
    cin>>brojce;
    cout<<linearno_prebaruvanje(a, 1000000, brojce)<<endl;
    cout<<binarno_prebaruvanje(a, 1000000, brojce);
}