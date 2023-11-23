#include <iostream>
#include <string>

using namespace std;

//Funkcja zamieniajaca bazy
string zamiana_bazy(string liczba, int baza_1, int baza_2) {
    int dane = 0;
    string wynik = "";

    dane = stoi(liczba, nullptr, baza_1);

    /*
     * mozna tez uzyc tej petli zamiast funkcji stoi
    for (char c : liczba) {
        dane = dane * baza_1 + (c - '0');
    }
     */

    //modol zamiany z dziesietnego na baza_2
    //dziala tak samo jak modul zamiany z dziesietnego na binarny
    while (dane > 0) {
        //to_string zamienia wszelkie typy liczbowe (np int) na string czyli
        //pozniej mozna dodac do stringa wynik
        wynik = to_string(dane % baza_2) + wynik;
        dane /= baza_2;
    }

    return wynik;
}

int main() {
    string liczba;
    cout << "Podaj liczbe w bazie 9: ";
    cin >> liczba;

    //W teori powinno dzialac na kazdy system od 2 (binarnego) do 10
    string wynik = zamiana_bazy(liczba, 9, 3);

    cout << "Odpowiednik podanej liczby w bazie 3 to: " << wynik;

    return 0;
}