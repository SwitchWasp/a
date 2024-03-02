#include <iostream>
#include <string>

using namespace std;

int opcja, dane;
string liczba;

void dekoder(int opcja);
void enkoder(int opcja);

int main() {
    cout << "Wybiez opcje input\n[1] normalne\n[2] binarny\n[3] hex\nopcja: ";
    cin >> opcja;

    if (opcja >= 1 and opcja <= 3) {
        dekoder( opcja);
    }

    cout << "Wybiez opcje output\n[1] normalne\n[2] binarny\n[3] hex\nopcja: ";
    cin >> opcja;

    if (opcja >= 1 and opcja <= 3) {
        enkoder(opcja);
    }
    return 0;
}

void dekoder(int opcja) {
    switch (opcja) {
        case 1: {
            cout << "Podaj liczbe: ";
            cin >> liczba;
            dane = stoi(liczba, nullptr, 10);
            break;
        }
        case 2: {
            cout << "Podaj kod binarny: ";
            cin >> liczba;

            dane = stoi(liczba, nullptr, 2);
            break;
        }
        case 3: {
            cout << "Podaj kod hex: ";
            cin >> liczba;
            dane = stoi(liczba, nullptr, 16);
            break;
        }
    }
}

void enkoder(int opcja) {
    switch (opcja) {
        case 1: {
            cout << "Twoja liczba to: " << dane;
            break;
        }
        case 2: {
            int kod_binarny[32];
            int i = 0;

            while (dane > 0) {
                kod_binarny[i] = dane % 2;
                dane /= 2;
                i++;
            }

            cout << "Twoj kod binarny to: ";

            for (int j = i -1; j >= 0; j--) {
                cout << kod_binarny[j];
            }

            break;
        }
        case 3: {
            cout << "Twoj kod hex to: ";
            cout << hex;
            cout << dane;
            break;
        }
    }
}
