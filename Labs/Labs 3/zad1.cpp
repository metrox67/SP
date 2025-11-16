/*
Од тастатура се вчитуваат броеви m, n и р. Да се најдат првите 10 броеви поголеми од m кои ја содржат цифрата n р-пати.

Решението да се имплементира со помош на функција countOccurence(int number, int digit)
која прима два аргументи, број и цифра, а како резултат враќа колку пати цифрата digit се јавува во бројот number

Input: 100 3 2
Result: 133
        233
        303
        313
        323
        330
        331
        332
        334
        335
*/
#include <iostream>
using namespace std;

int countOccurence(int number, int digit) {
    int count = 0;
    while (number > 0) {
        int last_digit = number % 10;
        if (last_digit == digit) {
            count++;
        }
        number = number / 10;
    }
    return count;
}

int main() {
    int m, n, p, br = 0;
    cin >> m >> n >> p;

    while (true) {
        m++;
        if (countOccurence(m,n)==p) {
            cout<<m<<endl;
            br++;
        }
        if (br==10) {
            break;
        }
    }

}