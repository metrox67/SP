#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100],znak;
    int brojac = 0;
    cin.getline(a,100);
    cin>>znak;

    for(int i=0;i<strlen(a);i++) {
        if(a[i]==znak) {
            brojac++;
        }
    }
    cout<<brojac<<endl;
}