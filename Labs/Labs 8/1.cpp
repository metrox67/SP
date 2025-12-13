/*
1. Да се напише функција void sort(int x, int y, int z) која ќе сортира
три броеви во опаѓачки редослед, така што x ќе го содржи најголемиот број, а z најмалиот број.
Main функцијата не смее да се менува.

Пример:
Влез:
1 2 3
Излез:
3 2 1
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    sort(&a, &b, &c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}