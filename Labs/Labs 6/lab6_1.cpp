/*
Задача: Од стандарден влез да се прочита квадратна матрица со број на редици и колони N.
Прво се вчитува бројот N а потоа и N*N елементите на матрицата.
Ваша задача е да ја пронајдете колоната со максимална сума на елементите и таа сума да ја додадете на секој елемент на таа колона.
На крај испечатете ја трансформираната матрица.
Доколку има 2 колони со иста максимална сума, да се чува таа што е прва најдена.
Input:
3
1 2 3
4 5 6
7 8 9

Output:
1 2 21
4 5 24
7 8 27
*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];

    int maxCol = 0;
    int maxSum = 0;

    for (int i = 0; i < N; i++)
        maxSum += a[i][0];

    for (int j = 1; j < N; j++) {
        int sum = 0;
        for (int i = 0; i < N; i++)
            sum += a[i][j];

        if (sum > maxSum) {
            maxSum = sum;
            maxCol = j;
        }
    }

    for (int i = 0; i < N; i++)
        a[i][maxCol] += maxSum;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

}
