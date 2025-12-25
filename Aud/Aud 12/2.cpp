#include <iostream>
#include <cstring>
using namespace std;

int dolzina_na_niza(char a[]) {
    int dolzina;
    for (int i = 0; a[i] != '\0'; i++) {
        dolzina++;
    }
    return dolzina;
}
int dolzina_rekurzivno(char a[]) {
    if (*a=='\0') {
        return 0;
    }
    return 1+dolzina_rekurzivno(a+1);
}

int main() {
    char a[100];
    cin.getline(a,100);
    cout<<dolzina_na_niza(a)<<endl;
    cout<<dolzina_rekurzivno(a)<<endl;
}