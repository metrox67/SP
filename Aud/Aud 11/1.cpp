#include <iostream>
using namespace std;

void zamena(int *k, int *m) {
    int tmp = *k;
    *k = *m;
    *m = tmp;
}

int main() {
    int a = 5, b = 10;
    cout<<"a"<<":"<<a<<" "<<"b"<<":"<<b<<endl;
    zamena(&a, &b);
    cout<<"a"<<":"<<a<<" "<<"b"<<":"<<b<<endl;
}
