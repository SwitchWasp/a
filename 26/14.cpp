#include <iostream>

using namespace std;

int liczba, odwrocona_liczba = 0, cyfra;

int main() {
    cout << "Program sprawdzajacy czy liczba jest palidromiczna (czytana w obie strony tak samo)\n Podaj liczbe: ";
    cin >> liczba;

    //zapisanie orginalnej liczby na pozniej do porownania z odwrocona liczba
    int zapis = liczba;

    //petla do odwrocenia liczby orginalnej z xyz na zyx
    while (liczba != 0) {

        //bieze ostatnia cyfre z liczby
        cyfra = liczba % 10;

        //mnozy liczbe tymczasowa pzez 10 az skoncza sie cyfry
        odwrocona_liczba = (odwrocona_liczba * 10) + cyfra;

        //pzygotowuje nastepna cyfre do wyciagniecia
        liczba /= 10;
    }

    /* #### dzialanie funckji
     * liczba = 165
     * cyfra = reszta z 165 / 10 czyli 165 % 10 = 5 ; odwrocona liczba = 0 * 10 + 5 = 5 ; liczba = 165 / 10 = 16 ; liczba to int czyli nie moze miec nic po pzecinku czyli automatycznie 0.5 z 16.5 znika i zostaje 16
     * cyfra = 6 ; odwrocona liczba = 5*10 + 6 = 56 ; liczba 16 / 10 = 6
     * cyfra = 1 ; odwrocona liczba = 56 * 10 + 1 = 651 ; liczba = 0
     */

    //porownanie obu liczb - odwroconej i orginalnej
    if (zapis == odwrocona_liczba) {
        cout << zapis << " jest palidromiczna";
    } else {
        cout << zapis << " nie jest palidromiczna";
    }

    return 0;
}