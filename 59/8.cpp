#include <iostream>
#include <string>

using namespace std;

string liczba, wynik = "";
int dane = 0;

int main() {
    cout << "Podaj liczbe binarna: ";
    cin >> liczba;

    int liczba10 = stoi(liczba, nullptr, 2);


    //dokladnie to samo co w zamianie z dziesietnego na binarny
    //wyjasnienie funkcji w 59/5.cpp
    dane = liczba10;
    while (dane > 0) {
        //to_string zamienia wszelkie typy liczbowe (np int) na string czyli
        //pozniej mozna dodac do stringa wynik
        wynik = to_string(dane % 4) + wynik;
        dane /= 4;
    }

    cout << "Czworkowy: " << wynik;

    //cout oct robi ze na terminalu liczby wyswietlaja sie tylko
    //w systmie 8 czyli nie potzebna jest konversja
    cout << "\nOsemkowy: ";
    cout << oct;
    cout << liczba10;


    //cout hex robi ze na terminalu liczby wyswietlaja sie tylko
    //w systmie 16 czyli nie potzebna jest konversja
    cout << "\nSzesnastkowy: ";
    cout << hex;
    cout << liczba10;

    return 0;
}