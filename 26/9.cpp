#include <iostream>

using namespace std;

int liczba,cyfra,liczba_teraz = 10;

int main() {
    cout << "Program sprawdzajacy czy ciag cyfr calkowityh jest rasnacy\n Podaj liczbe: ";
    cin >> liczba;

    //dzielenie liczby na czesci
    while (liczba > 0) {

        //reszta z dzielenia liczby pzez 10 czyli zawsze ostatnia liczba -> xyz % 10 = z
        int cyfra = liczba % 10;

        //sprawdzenie czy liczba "wzrosla" - jesli nie to petla jest wylaczona
        if (cyfra >= liczba_teraz) {
            cout << "NIE";
            return 0;
        }

        //zapisanie cyfry do porownania w nastepnej iteracji petli
        liczba_teraz = cyfra;

        //usuniecie ostatniej liczby z konca podanej -> xyz -> xy -> x
        liczba /= 10;
    }

    //wypisanie najmniejszej cyfry
    cout << "TAK";
    return 0;
}