#include <iostream>
using namespace std;

void max_min(int a[], int n,int *min,int *max) {
    *max = a[0];
    *min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *max) {
            *max = a[i];
        }
        if (a[i] < *min) {
            *min = a[i];
        }
    }
}

int main() {
    int n, min, max, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    max_min(a, n, &min, &max);
}