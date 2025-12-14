#include <iostream>
using namespace std;

int main() {
    int a[1000][100];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int nep_koloni=0, par_redici=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j%2!=0) {
                nep_koloni+=a[i][j];
            }
            if (i%2==0) {
                par_redici+=a[i][j];
            }
        }
    }
    cout<<nep_koloni-par_redici<<endl;
}
