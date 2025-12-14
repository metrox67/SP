#include <iostream>
using namespace std;


int NZD(int a, int b) {
    if (a%b==0) {
        return b;
    }
    return NZD(b, a%b);
}

int main() {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int nzd = NZD(a[0], a[1]);
    for (int i = 2; i < n; i++) {
        nzd = NZD(nzd, a[i]);
    }
    cout << nzd;
}
