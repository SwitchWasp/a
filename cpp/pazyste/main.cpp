#include <iostream>
#include <cmath>

using namespace std;

int liczba;

int main() {
    cout << "Program liczacy pierwiastek z podanej liczby\n";
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Twoja liczba: ";
    int pierwiastek = sqrt(liczba);
    cout << pierwiastek;
    return 0;
}