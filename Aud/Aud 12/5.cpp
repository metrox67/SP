#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char zbor[100];
    cin.getline(zbor,100);
    bool flag = true;
    for (int i = 0; i < strlen(zbor)/2; i++) {
        if (zbor[i] != zbor[strlen(zbor)-1-i]) {
            flag = false;
            break;
        }
    }
    if (flag == true) {
        cout<<"Palindrom"<<endl;
    }else {
        cout<<"Not Palindrom"<<endl;
    }
}