#include <iostream>
#include <cmath>

using namespace std;

int liczba1, liczba2, wynik = 0, dziesiatki, jednosci, iteracja1 = 0, iteracja2 = 0, liczba_orginal_2, liczba_orginal_1;

int main() {
    cout << "Algorytm pisemnego mnozenia\n Podaj pierwsza: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
    liczba_orginal_1 = liczba1;
    liczba_orginal_2 = liczba2;

    //moduly wypisujace cyfry z liczby (skopiowane z wczesniejszyh zadan)
    while (liczba1 > 0) {
        //wyciagniecie pierwszej cyfry -> zapisanie w pamieci i na konsoli
        //pierwsza cyfra z pierwszej podanej liczby
        int cyfra1 = liczba1 % 10;
        cout << "\n" << "cyfra1: " << cyfra1;

        //drugi modul
        while (liczba2 > 0) {

            //wypisanie iteracji na konsoli
            //iteracja zapisuje ile zer powinno byc dodane do mnozenia mniejszyh liczb -> 120 * 12 = 12 * 12 * 10
            cout << "\n" << "iteracja: " << iteracja1;

            //wyciagniecie drugiej cyfry -> zapisanie w pamieci i na konsoli
            //pierwsza cyfra z pierwszej liczby
            int cyfra2 = liczba2 % 10;
            cout << "\n" << "cyfra2: " << cyfra2;

            //obliczenie jednosci i dziesiatek zeby znac reszte z mnozenia do dodania -> zapisanie obu w pamieci i w konsoli
            //jednosci to reszta z dzielenia liczby xy pzez 10 czyli -> 58 % 10 = 8
            jednosci = ((cyfra2 * cyfra1) % 10) * pow(10, iteracja1);
            cout << "\n" << "jednosci: " << jednosci;

            //dziesiatki to wynik dzielenia liczby xy pzez 10 czyli -> 58 /10 = 5
            //dziesiatki sa mnozone pzez jedna wiecej potege 10 niz jednosci -> iteracja + 1
            dziesiatki = ((cyfra2 * cyfra1) / 10) * pow(10, (iteracja1 + 1));
            cout << "\n" << "dziesiatki: " << dziesiatki;

            //zapisanie tymczasowego wyniku w pamieci i na konsoli
            wynik = wynik + jednosci + dziesiatki;
            cout << "\n" << "wynik tymczasowy: " << wynik;

            //pzygotowanie liczby2 i iteracji1 na nastepna iteracje petli
            liczba2 /= 10;
            iteracja1++;
        }

        //zresetowanie liczby2 zeby pzez nia od nowa pomnozyc czesc pierwszej liczby
        liczba2 = liczba_orginal_2;

        //pzygotowanie liczby1 na nastepna iteracje petli
        liczba1 /= 10;

        //dodanie do iteracji2 -> pzy kazdym mnozeniu nastepnej liczby dziesiatki sie zwiekszaja
        iteracja2++;

        //zresetowanie iteracji1
        iteracja1 = iteracja2;
    }

    //ostateczny zapis wyniku
    cout << "\n\nWynik mnozenia " << liczba_orginal_1 << " pzez " << liczba_orginal_2 << " wynosi " << wynik << "\n";

    return 0;
}