#include <iostream>
using namespace std;

int zbir_na_cifri(int k) {
    if (k<10) {
        return k;
    }
    return k%10 + zbir_na_cifri(k/10);
}

int main() {
    int n;
    cin >> n;
    cout<<zbir_na_cifri(n);
}
