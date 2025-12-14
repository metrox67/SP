#include <iostream>
using namespace std;

int broj_8ci(int k) {
    if (k == 0) {
        return 0;
    }
    if (k % 10 == 8 && (k/10)%10 == 8) {
        return 2 + broj_8ci(k/10);
    }
    if (k % 10 == 8) {
        return 1 + broj_8ci(k / 10);
    }
    return 0 + broj_8ci(k / 10);
}

int main() {
    int n;
    cin >> n;
    cout << broj_8ci(n);
}
