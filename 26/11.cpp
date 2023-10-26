#include <iostream>

using namespace std;

int liczba,cyfra,liczba_teraz = 0;

int main() {
    cout << "Program sprawdzajacy czy ciag cyfr calkowityh jest pazysty\n Podaj liczbe: ";
    cin >> liczba;

    //dzielenie liczby na czesci
    while (liczba > 0) {

        //reszta z dzielenia liczby pzez 10 czyli zawsze ostatnia liczba -> xyz % 10 = z
        int cyfra = liczba % 10;

        //sprawdzenie czy reszta z dzielenia pzez 2 = 0 jesli tak to liczba jest pazysta jesli nie to program sie wylacza
        if (cyfra % 2 != 0) {
            cout << "NIE";
            return 0;
        }

        //usuniecie ostatniej liczby z konca podanej -> xyz -> xy -> x
        liczba /= 10;
    }

    //wypisanie najmniejszej cyfry
    cout << "TAK";
    return 0;
}