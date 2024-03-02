#include <iostream>
#include <string>

using namespace std;

string login = "login";
string haslo = "haslo";
string podany_login;
string podane_haslo ;

int main() {
    cout << "#### Ekran loginu ####"<<endl;

    cout << "Podaj login: ";
    cin >> podany_login;
    cout << "\n";

    cout << "Podaj haslo: ";
    cin >> podane_haslo;
    cout << "\n";

    if (podane_haslo != haslo or podany_login != login) {
        cout << "Zle haslo lub login";
    }
    else {
        cout << "Zalogowano!";
    }

    return 0;
}
