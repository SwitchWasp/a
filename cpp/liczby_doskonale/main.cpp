#include <iostream>

using namespace std;

int d, p, j;

int abc(int n) {
    d = 0;
    for (j = n - 1; j > 0; j--) {
        if (n%j == 0) {
            d = d + j;
        }
    }
    return d;
}

int main() {
    int a = 0;
    for (int i = 2; a < 4; i++) {
        p = abc(i);
        if (abc(i) == i) {
            a++;
            cout << p << endl;
        }
    }
    return 0;
}
