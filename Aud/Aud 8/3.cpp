#include <iostream>
using namespace std;

int main() {
    int a[100], b[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        cin>>b[i];
    }
    int skalaren_proizvod=0;
    for (int i = 0; i < n; i++) {
        skalaren_proizvod+=a[i]*b[i];
    }
    cout<<skalaren_proizvod<<endl;
}
