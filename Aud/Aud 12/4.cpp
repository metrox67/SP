#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char gl_niza[100], podniza[100];
    cin.getline(gl_niza,100);
    cin.getline(podniza,100);
    for (int i = 0; i<=strlen(gl_niza) - strlen(podniza); i++) {
        if (gl_niza[i] == podniza[0]) {
            int flag = 1;
            for (int j = 1; j <= strlen(podniza); j++) {
                if (gl_niza[i+j] != podniza[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                cout << "Podniza" <<endl;
                return 0;
            }
        }
    }
}