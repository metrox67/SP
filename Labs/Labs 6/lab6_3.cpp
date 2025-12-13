/*
Задача: Да се напише програма која чита две целобројни матрици со димензија m x n,
а потоа печати колку колони од првата матрица се наоѓаат во втората матрица.
Input:
4 4
1 2 4 6
2 3 4 5
5 1 3 1
1 3 4 4

2 2 2 4
3 2 3 5
5 2 1 3
1 1 3 4
Output:
1
*/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int a[n][n];
    int b[n][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }

    int brojac = 0;

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            int isti_se = 1;
            for (int i = 0; i < m; i++) {
                if (a[i][j] != b[i][k]) {
                    isti_se = 0;
                    break;
                }
            }
            if (isti_se == 1) {
                brojac++;
                break;
            }
        }
    }

    cout << brojac << endl;

}