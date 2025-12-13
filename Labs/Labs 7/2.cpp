/*
LAB 2
Да се имплементира рекурзивна функција int mask (int number, int k)
која што во бројот number ќе ги замени сите цифри <= од k со 0, а сите цифри > к со 1.
Пример:
Влез
number = 771256, k = 3

Резултат:
110011 (цифрите 7,5,6 бидејќи се поголеми од k=3 се маскираат во 1, а цифрите 1 и 2 бидејќи се <= k се маскираат во 0)

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int number,k;
    cin >> number >> k;
    cout << mask(number,k);
    return 0;
}