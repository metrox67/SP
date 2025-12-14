#include <iostream>
using namespace std;

int main() {
    int a[100][100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int max=a[0][0], min=a[0][0];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j]>max) {
                max=a[i][j];
            }else if(a[i][j]<min) {
                min=a[i][j];
            }
        }
    }

}
