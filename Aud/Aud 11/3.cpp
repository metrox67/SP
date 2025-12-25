#include <iostream>
using namespace std;

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < n-1-i; j++) {
            if (a[j] > a[j+1]) {
                flag = false;
                int tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp;
            }
        }
        if (flag == true) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}