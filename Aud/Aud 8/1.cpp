#include <iostream>
using namespace std;

int main() {
    int a[100], b[100];
    int br_a, br_b;
    cin>>br_a>>br_b;;//5 7
    for (int i = 0; i<br_a; i++) {
        cin>>a[i];
    }
    for (int i = 0; i<br_b; i++) {
        cin>>b[i];
    }
    if (br_a != br_b) {
        cout<<"Nizite ne se isti"<<endl;
    }
    else {
        int flag = 1;
        for (int i = 0; i<br_a; i++) {
            if(a[i]!=b[i]) {
                flag = 0;
                break;
            }
        }
        if (flag==1) {
            cout<<"Nizite se isti"<<endl;
        }
        else {
            cout<<"Nizite ne se isti"<<endl;
        }
    }
}
