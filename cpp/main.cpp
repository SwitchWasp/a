#include <iostream>

using namespace std;

int liczba, dzielnik;

int main() {
    cout << "Program wypisujacy dzielniki wczytanej liczby dodatniej\n";
    cout << "Podaj liczbe dodatnia calkowita: ";
    cin >> liczba;

    dzielnik = 1;

    while (dzielnik*dzielnik <= liczba) {
        if(liczba % dzielnik == 0) {
            if (dzielnik*dzielnik < liczba) {
                cout << dzielnik << "\n" << liczba/dzielnik << " ";
            } else {
                cout << dzielnik << " ";
            }
        }
        dzielnik++;
    }
    return 0;
}
