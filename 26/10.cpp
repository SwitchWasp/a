#include <iostream>

using namespace std;

int liczba,cyfra,liczba_teraz = 0;

//cyfry sa zapisywane odwrotnie do podanej dla tego tzeba napisac if odwrotnie

//ruznica 1/2 miedzy zad 9 a 10 to w 10 liczby "rosna" wiec tzeba zaczac od liczba_teraz = 0   linia 5
//ruznica 2/2 miedzy zad 9 a 10 to ze w zad 9 rosna dla tego >= a w 10 <=

int main() {
    cout << "Program sprawdzajacy czy ciag cyfr calkowityh jest malejacy\n Podaj liczbe: ";
    cin >> liczba;

    //dzielenie liczby na czesci
    while (liczba > 0) {

        //reszta z dzielenia liczby pzez 10 czyli zawsze ostatnia liczba -> xyz % 10 = z
        int cyfra = liczba % 10;

        //sprawdzenie czy liczba "zmalala" - jesli nie to petla jest wylaczona
        if (cyfra <= liczba_teraz) {
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