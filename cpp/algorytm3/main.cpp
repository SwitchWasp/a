#include <iostream>

using namespace std;

int main() {
    int n, d=2;
    cout << "n = "; cin >> n;
    cout << n<< " = ";
    while (d*d<=n) {
        if (n%d==0) {
            cout << d<< " * ";
            n = n/d;
        }
        else d++;
    }
    return 0;
}
