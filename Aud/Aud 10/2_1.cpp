#include <iostream>
using namespace std;

void ispecati_broevi(int n) {
    if (n == 0) {
        cout<<"0 ";
        return;
    }
    ispecati_broevi(n-1);
    cout<<n<<" ";

}

int main() {
    int n;
    cin >> n;
    ispecati_broevi(n);
}
