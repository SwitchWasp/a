#include <iostream>
#include <string>

using namespace std;

string a,b,d;

string zamiana_bazy(string liczba, int baza_1, int baza_2) {
    int dane = 0;
    string wynik = "";

    dane = stoi(liczba, nullptr, baza_1);

    while (dane > 0) {
        wynik = to_string(dane % baza_2) + wynik;
        dane /= baza_2;
    }

    return wynik;
}

int main() {
    cin >> a;
    cin >> b;
    cin >> d;
    int e;
    e = stoi(d, nullptr, 10);
    a = zamiana_bazy(a, e, 10);
    b = zamiana_bazy(b, e, 10);
    cout << a << endl;
    cout << b << endl;
    int f;
    f = stoi(a, nullptr, 10);
    f = f + stoi(b, nullptr, 10);
    a = to_string(f);
    cout << "Wynik to: " << zamiana_bazy(a, 10, e);
}