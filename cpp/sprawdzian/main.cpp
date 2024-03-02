

#include <iostream>
#include <string>

using namespace std;

string liczba;

int main() {
    cout << "Program sprawdzajacy czy liczba jest palidromiczna\n";
    cout << "Podaj calkowita liczbe dodatnia: ";
    cin >> liczba;

    int liczba_1 = stoi(liczba, nullptr, 10), i = 0, j = liczba.length();
    cout << liczba_1 << endl;
    cout << liczba << endl;

    char liczba_2[liczba_1];
    string liczba_3 = liczba;

    /*
    while (liczba_1 > 0) {
        liczba_2[i] = liczba_1 % 10;
        liczba_1 /= 10;
    }
*/
    j = j - 1;


    for (int i = 0; i <= liczba.length(); i++) {
        //cout << "liczba3 " << liczba_3[i] << endl;
        //cout << "liczba2 " << liczba_2[i] << endl;
        if (liczba_3[i] != liczba_3[j]) {
            cout << "Liczba nie jest palidromiczna";
            return 0;
        }
        j--;
    }

    cout << "Liczba jest palidromiczna!";

    return 0;
}
