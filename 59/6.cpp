#include <iostream>
#include <string>

using namespace std;

string liczba;
int liczba8;
int main() {
    cout << "Podaj liczbe w bazie 8: ";
    cin >> liczba;

    //stoi zamienia liczbe w systemie 8 na liczbe w systemie 10
    liczba8 = stoi(liczba, nullptr, 8);

    cout << "Odpowiednik podanej liczby w kodzie hex to: ";

    //cout hex robi ze terminal wyswietla tylko wartosci w hex
    //czyli liczba automatycznie jest zamieniona na hex
    cout << hex;
    cout << liczba8;

    return 0;
}