//
// Created by metro on 10/28/2025.
//
/*
Да се напише програма во која корисникот внесува два цели броја.Програмата треба да ja најде нивната средна вредност.
Потоа, програмата треба да го зголеми првиот број за вредноста на таа средна вредност,а вториот број да го намали за истата вредност.
На крајот, да се испечати новата разлика меѓу броевите.

For example:
Input: 3 5
Result: Razlikata e: 6
Input: 11 9
Result: Razlikata e: 22
*/
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>> a>>b;

    double sredna_vrednost;
    sredna_vrednost=(a+b)/2.0;

    double prv_broj,vtor_broj;

    prv_broj=a+sredna_vrednost;
    vtor_broj=b-sredna_vrednost;

    cout<<"Razlikata e: "<<prv_broj-vtor_broj;
}