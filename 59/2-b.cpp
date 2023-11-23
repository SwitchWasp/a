#include <iostream>
#include <string>

using namespace std;

int cyfra, dane;
string wynik;

int main() {
    cout << "Program zamieniajacy liczbe w systemie czworkowym na liczbe w systemie dwojkowym\n";
    cout << "Podaj liczbe: "; cin >> dane;

    while (dane > 0) {
        //modul wyciagajacy po koleji cyfry od poczatku
        cyfra = dane % 10;

        //switch sprawdza jaka jest wyciagnieta cyfra i dodaje jej odpowiednik w kodzie binarnym do wyniku
        // 3 w kodzie binarnym to 11 ...
        //tzeba dopisywac do wyniku z pzodu dla tego uzyta jest funkcja .insert
        //nalezy do niej wpisac index miejsca i string
        //.insert(0, "") wpisuje na samym poczatku
        switch (cyfra) {
            case 0: {
                wynik.insert(0, "00");
                break;
            }
            case 1: {
                wynik.insert(0, "01");
                break;
            }
            case 2: {
                wynik.insert(0, "10");
                break;
            }
            case 3: {
                wynik.insert(0, "11");
                break;
            }
        }
        dane /= 10;
    }

    cout << "Podana liczba w kodzie binarnym to: " << wynik;
    return 0;
}