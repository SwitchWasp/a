#include <iostream>
#include <string>

using namespace std;

int i = 0;
int litery[25];
char znak;

int main() {
    cout << "Program liczacy ilosc liter\n";
    string TEKST = "aaaaabccbb";

    for (i; i < TEKST.size(); i++) {
        if (TEKST[i] != ' ') {
            znak = tolower(TEKST[i]) - 'a';
            litery[znak] = litery[znak] + 1;
        }
    }

    for (i = 0; i < 25; i++) {
        znak = i + 'a';
        cout << znak << ": " << litery[i] << '\n';
    }

    return 0;
}
