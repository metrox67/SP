//
// Created by metro on 11/8/2025.
//
/*
Од стандарден влез се вчитува бројот x.
На екран да се испечатат сите трицифрени броеви (секој број во нов ред) кои се деливи со x.

input:55
Result:110 165 220 275 330 385 440 495 550 605 660 715 770 825 880 935 990

*/
#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    for (int i = 100; i<999; i++) {
        if (i%x==0) {
            cout << i << endl;
        }
    }
}