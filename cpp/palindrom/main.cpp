#include <iostream>
#include <string>

using namespace std;

string slowo;

int main() {
    cout << "Program sprawdzajacy czy slowo jest palidromiczna\n";
    cout << "Podaj calkowita liczbe dodatnia: ";
    getline(cin, slowo);

    int j = slowo.length();
    cout << slowo << endl;

    for (int i = slowo.length(); i > -1; i--) {
        slowo[i] = tolower(slowo[i]);
        cout << slowo[i];
    }

    string slowo_3 = slowo;

    j = j - 1;


    for (int i = 0; i <= slowo.length(); i++) {
        if (slowo_3[i] != slowo_3[j]) {
            cout << "Slowo nie jest palindromiczne";
            return 0;
        }
        j--;
    }

    cout << "Slowo jest palindromiczne!";

    return 0;
}
