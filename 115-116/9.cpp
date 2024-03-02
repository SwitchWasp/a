#include <iostream>

using namespace std;

struct wymierna {
    int licz;
    int mian;
};;

int main() {
    wymierna a, b, e;
    //input 2 ulamki
    cout << "Licznik1: "; cin >> a.licz;
    cout << "Mianownik1: "; cin >> a.mian;
    cout << "Licznik2: "; cin >> b.licz;
    cout << "Mianownik2: "; cin >> b.mian;

    //dzielenie to mnozenie pzez odwrotnosc drugiego ulamka czy cos w tym stylu
    int c, d;
    a.mian *= b.licz;
    a.licz *= b.mian;

    cout << "Wynik dzielenia: " << a.licz << "/" << a.mian;
    
    return 0;
}