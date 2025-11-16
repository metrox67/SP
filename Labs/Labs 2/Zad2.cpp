//
// Created by metro on 11/8/2025.
//
/*
Да се напише програма што ќе ја испечати сумата на квадратите на сите парни броеви во интервалот [A,B). А и B се внесуваат од тастатура.

Input: 1 5
Result: The sum is: 20

*/

#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin>>A>>B;
    int suma=0;

    for (int i=A;i < B;i++)
        if (i % 2 == 0) {
            suma += i*i;
        }
    cout<<"The sum is: "<<suma;
    return 0;
}