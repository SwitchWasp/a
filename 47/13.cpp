#include <iostream>
#include <string>

using namespace std;
string slowo;

int main() {
    cout << "Program sprawdzajacy czy w slowie podanym pzez uzytkownika wystepuja 2 takie same litery pzy sobie\n";
    cout << "Podaj slowo: ";
    cin >> slowo;

    //petla do wyciagania kolejnych liter z podanego slowa
    //slowo[5] to 6 litera w slowie bo indexy leca od 0
    for(int i = 0; i <= slowo.length(); i++) {

        //ten if sprawdza czy nie ma bledu typu buffer overflow - gdyby byl to program by wywalal po wpisaniu slowa + byla by dosc powazna podatnosc
        if (i+2 < slowo.length()) {

            //sprawdza czy pzy sobie sa 2 takie same litery
            //slowo = 1234
            //if (2 == 1 or 2 == 3)
            if (slowo[i+1] == slowo[i] or slowo[i+1] == slowo[i+2]) {
                cout << "TAK";
                return 0;
            }
            //else zapobiega buffer overflow
            //gdyby else nie bylo to program probowal by sprawdzic litery ktore nie zostaly podane
            //slowo = 1234
            //w ostatnim kroku pzed wywaleniem program by hcial porownac:
            //if (4 == 3 or 4 == ?) na ? konczy sie slowo i nic nie ma - "dla tego program wywala"
        } else {
            break;
        }
    }

    //jesli pzy sprawdzaniu nie znalazl 2 takih samyh liter pzy sobie to znaczy ze nie ma i mozna napisac "NIE"
    cout << "NIE";
    return 0;
}