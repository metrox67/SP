#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char lozinka[100];
    cin.getline(lozinka,100);
    int bukvi = 0,brojki = 0, znaci = 0;
    for (int i = 0; i < strlen(lozinka); i++) {
        if (isalpha(lozinka[i])) {
            bukvi++;
        }
        else if (isdigit(lozinka[i])) {
            brojki++;
        }else {
            znaci++;
        }

    }
    if (bukvi>0 && brojki>0 && znaci>0) {
        cout << "Lozinka" << endl;
    }else {
        cout << "Ne e lozinka" << endl;
    }

}