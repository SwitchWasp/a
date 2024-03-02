#include <iostream>
#include <string>

using namespace std;

int cyfra;
string wynikb, wynikhex, wynik4;

int main() {
    string dane;
    cout << "Podaj liczbe: "; cin >> dane;

    cyfra = stoi(dane, nullptr, 10);

    cout << "binarny: " << dane << endl;
    cout << "dziesietny:  " << cyfra << endl;
    cout << "hex: ";
    cout << hex;
    cout << cyfra;
    return 0;
}
