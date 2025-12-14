#include <iostream>
#include <cmath>
using namespace std;

void ispecati_broevi(int n) {
    if (n == 0) {
        cout<<"0";
        return;
    }
    cout<<n<<" ";
    ispecati_broevi(n-1);
}

int main() {
    int n;
    cin >> n;
    ispecati_broevi(n);
}
