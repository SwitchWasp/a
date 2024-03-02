#include <iostream>

using namespace std;

int i = 2, c;

void pazysta(int n) {
    while (n > 1) {
        for (i = 2; i <= n; i++) {
            if (n%i == 0) {
                n /= i;
                cout << i << endl;
                c++;
                break;
            }
        }
    }
    cout << "ilosc czynnikow pierwszych: " << c;
}

int main() {
    int b;
    cout << "Program wypisujacy czynniki pierwsze liczby\nPodaj liczbe: "; cin >> b;
    pazysta(b);
    return 0;
}
