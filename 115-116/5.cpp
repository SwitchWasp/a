#include <iostream>

using namespace std;

struct wymierna {
    int licz;
    int mian;
};


int main() {
    wymierna a, b, e;
    //input 2 ulamki
    cout << "Licznik1: "; cin >> a.licz;
    cout << "Mianownik1: "; cin >> a.mian;
    cout << "Licznik2: "; cin >> b.licz;
    cout << "Mianownik2: "; cin >> b.mian;

    //wyrownoje je zeby dalo sie odjac
    int c, d;
    c = a.mian; d = b.mian;
    a.mian *= d;
    b.mian *= c;
    a.licz *= (a.mian / c);
    b.licz *= (b.mian / d);

    //wymierna c to wynik
    e.mian = a.mian;
    e.licz = a.licz - b.licz;

    //nic nie bylo powiedziane o skracaniu
    cout << "Po odejmowaniu: " << e.licz << "/" << e.mian;
    return 0;
}
