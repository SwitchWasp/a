#include <iostream>

using namespace std;

//***************
//napisal szymon
//***************

int main() {
    int rok, miesiac, dzien;
    int roku = 2023, miesiacu, liczba, liczba2;

    cout << "Podaj rok urodzenia" << endl;

    cin >> rok;

    cout << "Podaj miesiac urodzenia" << endl;

    cin >> miesiac;

    cout << "Podaj dzien urodzenia" << endl;

    cin >> dzien;


    if (dzien > 31) {

        cout << "Taka data nie istnieje";

        return 0;
    }

    if (miesiac > 12) {

        cout << "Taka data nie istnieje";

        return 0;

    }

    miesiacu = (roku - rok) * 12;

    if (miesiac + miesiacu < 216)

        cout << "Nie jestes pelnoletni ";

    else

        cout << "Jestes pelnoletni";

    liczba2 = miesiac + miesiacu;

    while (liczba2 < 144) {

        liczba2++;

        liczba++;

    }

    cout << "bedziesz pelnoletni za: " << liczba << " miesiecy";

    return 0;
}