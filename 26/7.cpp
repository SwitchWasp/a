#include <iostream>

using namespace std;

int liczba, podawana_liczba;

int main() {
    cout << "Program wczytujacy 5 liczb podanych pzez uzytkownika i wypisujacy najwieksza z nih";
    cout << "\n";

    //wczytanie pierwszej liczby
    cout << "Podaj 1 liczbe: ";
    cin >> liczba;
    cout << "\n";

    //wczytanie 4 nastepnyh liczb
    for (int i=1; i<=4; i++) {

        //wczytanie liczby tymczasowej
        cout << "Podaj " << i+1 << " liczbe: ";
        cin >> podawana_liczba;
        cout << "\n";

        //porownanie liczb
        if (podawana_liczba > liczba) {
            liczba = podawana_liczba;
        }
    }

    //wypisanie najwiekszej liczby
    cout << "Najwieksza z 5 liczb to: " << liczba;

    return 0;
}