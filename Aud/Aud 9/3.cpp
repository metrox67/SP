#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i][j] != a[j][i]) {
                cout<<"Ne e simetricna"<<endl;
                return 0;
            }
        }
    }
    cout <<"Simetricna e"<< endl;
    return 0;
}
