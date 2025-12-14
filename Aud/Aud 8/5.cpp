#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int posleden = a[n-1];
    for (int i = n-1; i > 0; i--) {
        a[i] = a[i-1];
    }
}
