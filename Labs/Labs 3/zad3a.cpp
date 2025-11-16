/*
Од стандарден влез се вчитува број Х и цифра К.
Да се испечати на екран колку проценти од сите цифри во бројот X се помали од цифрата К.
Пример, Ако бројот X = 12345, цифрата К=5, тогаш на екран треба да се испечати80% бидејќи 4 од 5 цифри (1,2,3,4) се помали од цифрата К.
Проверката да се реализира во функција.

Input: 12345 5
Result: 80%
*/
#include <iostream>
using namespace std;

int BrojNaCifri(int n) {
    int count = 0;
    int temp = n;
    if (temp == 0) return 1;
    while (temp>0) {
        count++;
        temp = temp/10;
    }
    return count;
}

int PogomeBroj(int n, int p) {
    int count = 0;
    int max = p;
    int temp = n;
    while (temp>0) {
        int cifri = temp%10;
        if (cifri<max) {
            count++;
        }
        temp = temp/10;
    }
    return count;
}

int main() {
    int x,k;
    cin>>x;
    cin>>k;
    double celina = BrojNaCifri(x);
    double max = PogomeBroj(x,k);

    double procent = (max/celina)*100;
    cout<<procent<<"%"<<endl;

}
