#include <iostream>

using namespace std;

int liczba,cyfra,najmniejsza_liczba = 9;

int main() {
    cout << "Program pzyjmujacy liczbe i wypisujacy jej najwiesza cyfre\n Podaj liczbe: ";
    cin >> liczba;

    //dzielenie liczby na czesci
    while (liczba > 0) {

        //reszta z dzielenia liczby pzez 10 czyli zawsze ostatnia liczba -> xyz % 10 = z
        int cyfra = liczba % 10;

        //jesli cyfra jest mniejsza od najmniejszej liczby to najmniejsza liczba = cyfra
        if (cyfra < najmniejsza_liczba) {
            najmniejsza_liczba = cyfra;
        }

        //usuniecie ostatniej liczby z konca podanej -> xyz -> xy -> x
        liczba /= 10;
    }

    //wypisanie najmniejszej cyfry
    cout << "Najmniejsza cyfra to: " << najmniejsza_liczba;
    return 0;
}