#include <iostream>

using namespace std;
int liczba,zera,i = 0;
int kod_binarny[32]; //array zawierajacy 32 bitowy kod binarny (32 miejsca czyli 2^32 czyli 32 bity)

int main() {
    cout << "Program wypisujacy liczbe zer w reprezentacji binarnej liczby podanej pzez uzytkownika\n";
    cout << "Podaj liczbe: ";
    cin >> liczba;

    //while i for ponizej to lekko pzeksztalcony modul zamieniajacy liczbe na liczbe binarna
    //wyjasnienie w kodzie do zadania "1-4" -> funkcja "zamiana_output" -> "case 3"
    while (liczba > 0) {
        if (liczba % 2 == 0) {
            zera++;
        };
        liczba /= 2;
    }

    cout << "\nLiczba zer w reprezentacji binarnej wynosi: " << zera;
}