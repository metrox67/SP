#include <iostream>
using namespace std;

int main() {
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int rastecka = 1, opagjacka = 1;
    for (int i = 0; i < n-1; i++) {
        if (a[i+1]<=a[i]) {
            rastecka=0;
            break;
        }
    }
    for (int i = 0; i < n-1; i++) {
        if (a[i+1]>=a[i]) {
            opagjacka=0;
            break;
        }
    }
    if (rastecka==1) {
        cout<<"nizata e strogo rastecka"<<endl;
    }else if (opagjacka==1) {
        cout<<"nizata e strogo opagjaka"<<endl;
    }else {
        cout<<"nizata ne e ni strogo rastecka ni opagacka"<<endl;
    }

}
