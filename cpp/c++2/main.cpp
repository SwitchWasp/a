#include <iostream>
#include <string>
using namespace std;

bool liczba(string liczba) {
    try {
         stoi(liczba);
         cout << "Numer super!\n";
         return true;
    } catch (std::invalid_argument) {
        cout << "nie numer\n";
        return false;
    }
}
/*
int main() {
    std::cout << "Hello, World!" << std::endl;
    try {
        string wartosc;
        cin >> wartosc;
        cout << wartosc + "\n";
        int wartosc2;
        wartosc2 << stoi(wartosc);
    } catch (std::invalid_argument) {
        cout << "nie numer";
    }

    return 0;
}
*/

int main() {
    cout << "start\n=: ";
    string dane;
    cin >> dane;
    cout << liczba(dane);
}