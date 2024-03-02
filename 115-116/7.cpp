#include <iostream>

using namespace std;

int main() {
    int a, b, d = 0;
    cout << "Podaj pierwszy bok prostakata: ";
    cin >> a;
    cout << "Podaj drugi bok prostakata: ";
    cin >> b;

    //odejmowanie najwiekszego kwadrata
    //najlepiej widac na kartce
    //mniejszy bok odejmuje sie od wiekszego az nie zostanie nic
    while (a > 0 and b > 0) {
        if (a < b) {
            b = b - a;
        } else {
            a = a - b;
        }
        d++;
    }

    cout << "W tym prostakacie zmiesci sie: " << d << " kwadratow";
    return 0;
}