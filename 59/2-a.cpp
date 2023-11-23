#include <iostream>
#include <string>

using namespace std;

//lekko zmieniony kod piotrka (zeby byl lepiej czytelny)
int liczba_4, liczba_10=0, potega=1;
string wynik;

int main() {
    cout << "Program zamieniajacy liczbe w systemie czworkowym na liczbe w systemie dwojkowym\n";
    cout << "Podaj liczbe: ";
    cin >> liczba_4;

    //petla zamieniajaca system czworkowy na dziesietny
    //petla pzeskakuje pzez kazda cyfre w podanej liczbie
    do {
        //wyciagane sa cyfry z podanej liczby i mnozone pzez potege 4
        liczba_10 += (liczba_4%10) * potega;
        liczba_4/=10;

        //czym dalszy numer w systemie czworkowym tym wieksza potega 4
        potega*=4;
    } while (liczba_4 != 0); //jesli skonczyly sie cyfry to liczba_4 = 0 czyli petla pzestaje dzialac

    do {
        //modul zamiany systemu dziesiatkowego na binarny
        //tutaj uzyty byl kod ascii zeby wyciagnac z liczba_10 1 albo 0
        wynik = char(liczba_10%2+48)+wynik;
        liczba_10/=2;
    } while (liczba_10!=0);

    cout << wynik;
    return 0;
}