// Задача 6
// Да се напише програма за пресметување и печатење на плоштината и периметарот на круг.
// Радиусот на кругот се чита од стандарден влез (тастатура) како децимален број.
#include <iostream>
using namespace std;

int main() {
    float radius;
    float pi = 3.14;
    cin >> radius;

    float L =2*radius*pi;
    cout <<"Perimetar: " <<L << endl;
    float P =radius*radius*pi;
    cout <<"Ploshtina: " <<P << endl;
}
