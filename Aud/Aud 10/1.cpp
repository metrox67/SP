#include <iostream>
#include <cmath>
using namespace std;

int suma_pr_br(int i) {
    if (i == 1) {
        return 1;
    }
    return i + suma_pr_br(i - 1);
}

int faktorijel(int i) {
    if (i == 1) {
        return 1;
    }
    return i * faktorijel(i - 1);
}

int main() {
    int n;
    cin >> n;
    int rez = 0;
    for (int i = 1; i < n; i++) {
        int suma = suma_pr_br(i);
        rez += faktorijel(suma);
    }
    cout << rez;
}
