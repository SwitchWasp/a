#include <iostream>
#include <string>

using namespace std;

string imie;
int wiek;

int main() {
    cout << "Program witajacy uzytkownika\n";
    cout << "Podaj swoje imie: ";
    cin >> imie;

    cout << "Podaj swoj wiek: ";
    cin >> wiek;

    if (wiek >= 18) {
        cout << "Dzien dobry " << imie;

    } else {
        cout << "Czesc " << imie;
    }

    return 0;
}