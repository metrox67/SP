#include <iostream>
using namespace std;

int main() {
    int a[100];
    int broj;
    while (cin >> broj) {
        a[broj]++;
    }
    for (int i = 0; i < 10; i++) {
        cout<<i<<" "<<a[i]<<endl;
    }
}
