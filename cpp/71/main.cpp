#include <iostream>
#include <string>

using namespace std;

string slowo;
int i;

int main() {
    cout << "Program ktory sprawdzi czy podane slowo sklada sie tylko z malyh liter\n";
    cout << "Podaj slowo: "; cin >> slowo;

    while(i<slowo.length()) {
        if (slowo[i] != tolower(slowo[i])) {
            cout << "NIE";
            return 0;
        }
        i++;
    }
    cout << "TAK";
    return 0;
}
