// //
// // Created by metro on 11/8/2025.
// //
// /*
//     Вторара ама со While Каде нема ограничување за 5цифрен број
//
// */
// #include <iostream>
// using namespace std;
//
// int main() {
//     int broj;
//     int ParniPozicii=0;
//     int NeParniPozicii=0;
//     cin>>broj;
//     int pozicii=0;
//     while(broj>0) {
//         int cifra = broj%10;
//         if (pozicii%2==0) {
//             ParniPozicii += cifra;
//         }else {
//             NeParniPozicii += cifra;
//         }
//         broj=broj/10;
//         pozicii++;
//     }
//     cout<<"Sumata na cifrite na parnite pozicii e "<< ParniPozicii<< endl;
//     cout<<"Sumata na cifrite na neparnite pozicii e "<<NeParniPozicii<<endl;
// }
#include <iostream>
using namespace std;
int main() {
    int broj;
    cin >> broj;
    int posledna_cifra=broj%10;

    int cifra=0;
    int privremena = broj;
    while (privremena > 0) {
        privremena/10;
        int cifra;  

    }

}