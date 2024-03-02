#include <iostream>

using namespace std;

int a, lb, licznik;

int main() {
    a = 1;
    /*
    while (a < 5) {
        cout << 1;
        for (int i = 0; i <= a; i++) {
            cout << 2;
            if (a % i == 0) {
                cout << 3;
                lb = lb + i;
            }
            i++;
        }
        cout << lb;
        a++;
        lb = 0;
    }
*/

    while (licznik < 5) {
        for (int i = 1; i <= a; i++) {
            if (a % i == 0) {
                lb = lb + i;
            }
        }
        if (lb = a) {
            licznik++;
            cout << a;
        }
        a++;
        cout << lb << "\n";
        lb = 0;
    }
}
