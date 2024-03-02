#include <iostream>

using namespace std;

bool pierw(int n) {
    int d=5;
    bool pierwsza;
    pierwsza = (n>1);
    if (n>2 and n%2 == 0) {
        pierwsza = false;
    }
    if (n > 3 and n%3 == 0) {
        pierwsza = false;
    }
    while (pierwsza and  (d*d) >=n) {
        if (n%d == 0) {
            pierwsza = false;
        } else {
            d=d+6;
        }
    }
    if (pierwsza) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cout << "n = "; cin >> n;
    bool abc = pierw(n);
    n++;
    while (abc != true) {
        n++;
        abc = pierw(n);
    }
    cout << n;
    return 0;
}