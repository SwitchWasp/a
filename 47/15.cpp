#include <iostream>
#include <string>

using namespace std;
string slowo;

int main() {
    cout << "Program sprawdzajacy czy w slowie sa 2 takie same litery\n";
    cout << "Podaj slowo: ";
    cin >> slowo;

    //petla na wyciaganie pierwszej litery
    for (int i = 0; i < slowo.length(); i++) {
        //petla na wyciaganie drugiej litery
        for (int j = 0; j < slowo.length(); j++) {
            //jesli nie porownoje tej samej litery (na tym samym miejscu w wyrazie)
            if (i != j) {
                //jesli litery sa takie same (na innyh miejscah w wyrazie) to konczy porownywanie i pisze "TAK"
                if (slowo[i] == slowo[j]) {
                    cout << "TAK";
                    return 0;
                }
            }
        }
    }

    //jesli porownywanie nie znalazlo 2 takih samyh liter to mozna napisac ze zadnej nie bylo - "NIE"
    cout << "NIE";
    return 0;
}