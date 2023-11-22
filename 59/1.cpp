#include <iostream>

using namespace std;

int liczba, cyfry;

int main() {
    cout << "Program wypisujacy liczbe cyfr w reprezentacji binarnej liczby podanej pzez uzytkownika\n";
    cout << "Podaj calkowita liczbe dodatnia: ";
    cin >> liczba;

    while (liczba > 0) {
        //tutaj jest uzyta metoda dzielenia pzez 2 zeby zamienic liczbe na kod binarny
        //w tym pzypadku jest potzebna tylko liczba cyfr czyli
        //ile razy udalo sie podzielic pzez 2
        liczba /= 2;

        //cyfry zapisuje ile razy udalo sie podzielic
        cyfry++;
    }

    //zapis wyniku
    cout << "Ilosc cyfr w reprezentacji binarnej wynosi: " << cyfry;

    return 0;
}