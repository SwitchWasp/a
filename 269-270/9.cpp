#include <iostream>
using namespace std;

const int N = 15;
const int NOMINALY[] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int ilosc[] = {3, 2, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0};

void wr(int k, int r[]) {
    for (int i = 0; i < N; i++) {
        r[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        if (k == 0) { 
            break;
        }
        if (ilosc[i] != 0) {
            int c = min(ilosc[i], k / NOMINALY[i]);
            r[i] = c;
            k -= c * NOMINALY[i];
        }
    }
}

int main() {
    int k, r[N];
    cout << "Podaj kwote w groszach: ";
    cin >> k;
    wr(k, r);

    for (int i = 0; i < N; i++) {
        if (r[i] > 0) {
            cout << NOMINALY[i] << ": " << r[i] << endl;
        }
    }

    return 0;
}
