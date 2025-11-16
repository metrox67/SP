/*
Од стандарден влез се вчитува даден број n, а потоа се вчитуваат n трицифрени броеви.
Ваша задача е да го најдете најголемиот број чиј збир на неговите цифри треба да е парен број.

Input: 4 999 122 900 170
Result: 170
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    int max=0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int broevi;
        cin >> broevi;
        int vkupno=0;
        int temp = broevi;

            while (temp>0) {
            vkupno += temp%10;
            temp/=10;
            }

        if (vkupno % 2 == 0) {
            if (broevi > max) {
                max = broevi;
            }
        }
    }
    cout << max << endl;

}