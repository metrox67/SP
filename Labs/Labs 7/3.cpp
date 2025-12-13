/*
LAB 3
Да се имплементира рекурзивна функција void printAlphabet (char c, bool backwards)
која ке спроведува печатење на латиничната азбука почнувајќи од буквата c.
Доколку backwards е true во таа ситуација печатењето оди кон почетокот,
а доколку е false, печатењето оди кон крајот.

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    char c;
    bool backwards;
    cin >> c >> backwards;
    printAlphabet(c,backwards);


    return 0;
}