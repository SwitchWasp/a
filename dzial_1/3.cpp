#include <iostream>

using namespace std;

int a,b;

//rownanie -> ax + b = 0
//uzytkownik podaje a i b
//nalezalo uzyc wlasnosci funkcji liniowej

int main() {
    cout << "Program obliczajacy rownanie liniowe ax+b = 0\n";

    cout << "Podaj calkowita liczbe a: ";
    cin >> a;

    cout << "Podaj calkowita liczbe b: ";
    cin >> b;


    //jesli a = 0 i b = 0 to funkcja ma nieskonczenie wiele rozwiazan
    //jesli a nie jest rowne 0 to funkcja ma 1 rozwiazanie
    //jesli a = 0 i b nie jest rowne zero to funkcja nie ma rozwiazan
    if (a == 0 and b == 0) {
        cout << "Funkcja z podanymi a i b ma nieskonczenie wiele rozwiazan";

    } else if (a != 0) {
        cout << "Funkcja ma conajmniej 1 rozwiazanie";

    } else if (a == 0 and b != 0) {
        cout << "Rownanie jest sprzeczne";

    }

    return 0;
}