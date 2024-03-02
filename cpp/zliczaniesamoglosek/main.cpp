#include <iostream>
#include <string>

using namespace std;

string slowo;

int main() {
    cout << "Program sprawdzajacy czy w slowie sa 2 takie same litery pzy sobie\n";

    cout << "Podaj slowo: ";
    cin >> slowo;

    for (int i = 0; i <= slowo.length(); i++)
        if (i + 1 <= slowo.length()) {
            if (slowo[i] == slowo[i + 1]) {
                cout << "TAK";
                return 0;
            }
        }


    cout << "NIE";
    return 0;
}
