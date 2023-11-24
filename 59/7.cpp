#include <iostream>

using namespace std;

int liczba;
int main() {
    cout << "Podaj liczbe cyfr potzebnyh do zapisania liczby binarnej: ";
    cin >> liczba;

    //jesli liczba to 5 to znaczy ze binarna liczba moze byc np 10101
    //w czworkowym uzywa sie 2 znakow binarnyh zeby zapisac 1 cyfre -> w osemkowym 3 znakow -> w szesnastkowym 4
    //czyli 01 -> 101 -> 0101
    //jesli liczbe da sie podzielic pzez liczbe potzebnyh znakow binarnyh to znaczy ze mozna ja zapisac w tyle znakow (wynik z dzielenia)
    //jesli nie to znaczy ze potzebny jest jeszcze 1 znak do zapisania tej liczby
    //np hex:
    //5 / 4 = 1 i reszta 1 czyli != 0
    //cyli 1 (wynik dzielenia) miejsce + 1 miejsce zeby zmiescic reszte
    if (liczba % 2 == 0) {
        cout << "Czworkowy: " << liczba/2;
    } else {
        cout << "Czworkowy: " << liczba/2 + 1;
    }
    if (liczba % 3 == 0) {
        cout << "\nOsemkowy: " << liczba/3;
    } else {
        cout << "\nCzworkowy: " << liczba/3 + 1;
    }
    if (liczba % 4 == 0) {
        cout << "\nSzesnastkowy: " << liczba/4;
    } else {
        cout << "\nSzesnastkowy: " << liczba/4 + 1;
    }

    return 0;
}