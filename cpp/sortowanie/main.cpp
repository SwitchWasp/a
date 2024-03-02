#include <iostream>

using namespace std;

// Program podajacy najwieksza liczbe z 5 wzietyh od uzytkownika

int liczba_podawana, najwieksza_liczba;

int liczba_prob = 0;

int main() {

    cout << "Podaj liczbe: ";
    cin >> liczba_podawana;

    while (liczba_prob<=3) {
        cout << "Podaj liczbe: ";
        cin >> liczba_podawana;

        if (najwieksza_liczba < liczba_podawana) {
            najwieksza_liczba = liczba_podawana;
        }

        liczba_prob ++;
    }
    
    cout << "Najwieksza liczba to: ";
    cout << najwieksza_liczba;

    return 0;
}
