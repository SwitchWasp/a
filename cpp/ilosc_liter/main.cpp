#include <iostream>
#include <string>

using namespace std;
int ilosc;
string slowo;
char litera;

int main() {
    cout << "Podaj slowo: ";
    cin >> slowo;
    cout << endl << "Podaj litere: ";
    cin >> litera;
    for (char i : slowo) {
        if (i == litera) {
            ilosc++;
        }
    }
    cout << "Ilosc podanej litery w podanym slowie wynosi: " << ilosc;
    return 0;
}
