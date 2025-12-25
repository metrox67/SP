#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char zbor[100];
    int j = 0;
    cin.getline(zbor,100);
    for(int i=0;i<strlen(zbor);i++) {
        if (isalpha(zbor[i])){
            if (islower(zbor[i])) {
                zbor[j++] = toupper(zbor[i]);
            }else {
                zbor[j++] = tolower(zbor[i]);
            }
        }
    }
    zbor[j] = '\0';
    cout << zbor;
}