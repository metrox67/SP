// Задача 10
// Да се напише програма каде од тастатура ќе се внесе цена на производ, број на рати на кои се исплаќа и камата
// (каматата е број изразен во проценти од 0 до 100).
// Програмата треба да го испечати износот на ратата и вкупната сума што ќе се исплати за производот
//
// ПОМОШ: Пресметајте ја целата сума, па потоа ратата.
#include <iostream>
using namespace std;

int main() {
    int cena,br_rati, kamataProcent;
    cin>>cena>>br_rati>>kamataProcent;

    double Kamata = cena * kamataProcent / 100.0;
    double vrednost_na_rata = Kamata / br_rati;
    double vk_suma = cena + Kamata;

    cout << "Rata = " << vrednost_na_rata <<" "<<"Cela suma = "<< vk_suma <<endl;
}
