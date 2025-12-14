#include <iostream>
using namespace std;

// Zadacava ne e kompletna

bool dali_prost(int k, int m) {
    if (k<4) {
        return 1;
    }
    if (k%2 == 0) {
        return 0;
    }
    if (k%m==0) {
        return 0;
    }
    if (m>k/2) {
        return 1;
    }
    return dali_prost(k, m+2);
}

int sleden_p_prost(int k) {
    if (dali_prost(k)) {
        return k;
    }
    return sleden_p_prost(sleden_p_prost(k+1));
}

int main() {
    int n;
    cin >> n;
    sleden_p_prost(n);
    cout<<sleden_p_prost(n+1)-n<<endl;
}
