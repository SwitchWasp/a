#include <iostream>
#include <string>

using namespace std;

string slowo;

int main() {
    cout << "Podaj slowo: ";
    cin >> slowo;
    string slowo_od_tylu = string(slowo.rbegin(), slowo.rend());
    cout << slowo_od_tylu;
    return 0;
}
