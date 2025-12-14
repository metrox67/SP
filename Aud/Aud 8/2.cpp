#include <iostream>
using namespace std;

int main() {
    int a[100];
    int br_a;
    cin>>br_a;
    for (int i=0; i<br_a; i++) {
        cin>>a[i];
    }
    int suma_parni=0, suma_neparni=0, br_parni=0, br_neparni=0;
    for (int i=0; i<br_a; i++) {
        if (a[i]%2==0) {
            suma_parni+=a[i];
            br_parni++;
        }
        else {
            suma_neparni+=a[i];
            br_neparni++;
        }
    }
    cout<<"suma parni: "<<suma_parni<<endl;
    cout<<"Suma neparni: "<<suma_neparni<<endl;
    cout<<"Odnos parni/neparni: "<<(float)br_parni/br_neparni<<endl;
}
