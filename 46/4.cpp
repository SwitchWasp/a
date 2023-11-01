#include <iostream>
#include <string>

using namespace std;

//kod hex to string po to zeby latwiej podzielic go na czesci char
string kod_hex;
int liczba = 0, potega = 1, cyfra;

int main() {
    cout << "Program ktory zamienia kod hex na normalne liczby\n";
    cout << "Podaj kod hex: ";
    cin >> kod_hex;

    //kod_hex.lenght() daje dlugosc stringa kod_hex czyli ilosc znakow podanyh pzez uzytkownika
    for (int i = kod_hex.length() - 1; i >= 0; i--) {

        //i w for to index znaku w stringu czyli w stringu "E0A8" index 0 to E -> index 1 to 0 -> ...
        //jak da sie stringa i index pzy nim w [index] to wtedy zwraca dane typu char gdzie ten char to znak z indexem podanym
        //ten char jest pzypisywany do c
        char c = kod_hex[i];

        //w tym if char jest zamieniany na int i pzypisany do cyfra
        //char jest zamieniany na index w ASCII gdzie znaki maja pzypisany numer
        //litery A-F maja wartosci od 65 do 70 wiec jesli F ma 70 a A ma 65 to F - A = 5 czyli F to 5
        //w hex litery maja wartosci od 10 do 15 -> F ma 15 czyli jesli do wczesniejszego wyniku doda sie 10 to wyhodzi pzekonvertowana wartosc hex
        //toupper zamienia znak na caps (a->A) zeby index w ASCII sie zgadzal
        //if sprawdza czy char c to litera jesli nie to traktuje jako normalna liczba
        if ('A' <= toupper(c) && toupper(c) <= 'F') {
            //obliczenie wartosci litery
            cyfra = 10 + (toupper(c) - 'A');
        } else {
            //cyfry w ASCII maja wartosci od 48 do 57
            //9 = 57 a 0 = 48
            //57 - 48 = 9
            cyfra = c - '0';
        }

        //pzy kazdym obliczeniu wartosci kolejnego znaku dodaje do wyniku jego wartosc
        //kazdy znak w hex musi byc pomnozony pzez potege 16
        liczba += cyfra * potega;
        potega <<= 4; // praktycznie to samo co mnozenie pzez 16 -> "<<" to pzezuniecie bitowe w kodzie binarnym -> jesli potega = 5 to kod binarny to 101 to gdy potega <<= 4 to potega w kodzie binarnym to 1010000
    }

    cout << "Podany kod hex jest rownowartoscia: " << liczba << "\n";
    
    //cout << "test: " << 'A' - 'B';
    return 0;
}
