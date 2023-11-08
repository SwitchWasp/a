#include <iostream>

using namespace std;

int a, licznik = 1;

int main() {
    cout << "Program obliczajacy sume kolejnych liczb o\n";

    //uzytkownik podaje dlugosc ciagu
    cout << "Podaj calkowita liczbe wieksza od 0: ";
    cin >> a;

    //warunek jesli liczba jest mniejsza od 1 to program sie wylacza (return 0)
    if (a <= 0) {
        cout << "Podana liczba a jest mniejsza od 1";
        return 0;
    }

    cout << "Ciag liczb: ";

    //wypisanie liczb od 1 do liczby podanej
    //licznik zwieksza sie pzy kazdym wlaczeniu petli
    //jesli licznik jest wiekszy od liczby podanej to znaczy ze dotarl do konca ciagu
    while (licznik <= a) {
        cout << licznik << ", ";
        licznik++;
    }

    return 0;
}
