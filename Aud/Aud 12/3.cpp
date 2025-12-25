#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100];
    cin.getline(a,100);
    int pocetok, dolzina;
    cin >> pocetok >> dolzina;
    for (int i = pocetok; i < pocetok + dolzina; i++) {
        cout<<a[i];
    }
}