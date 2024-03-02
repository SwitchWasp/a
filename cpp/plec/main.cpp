#include <iostream>
#include <string>

using namespace std;

string imie;

int main() {
    cout << "Program plec\n";
    cout << "Podaj imie: ";
    cin >> imie;
    if (tolower(imie[imie.length() - 1]) == 'a') {
        cout << "jestes dziewczynom";
    } else {
        cout << "jestes hlopakiem";
    }
    return 0;
}
