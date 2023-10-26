#include <iostream>

using namespace std;

int liczba = 0;

//mie wiem oco hodzilo z nie wiecej prob niz pierwiastek z liczby

int main() {
    cout << "Program wypisujacy dzielniki liczby\n Podaj liczbe: ";
    cin >> liczba;

    //petla powtazajaca sie {liczba} razy
    for (int i=1; i<=liczba; i++) {

        //proba dzielenia pzez i
        //jesli wyjdzie liczba bez reszty to i to jeden z dzielnikow
        if (liczba % i == 0) {
            cout << i << "\n";
        }
    }

    return 0;
}