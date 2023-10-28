#include <iostream>
#include <string>

using namespace std;

int zamiana(string kod) {
    //potega 2 zwieksza sie z kazdym nastepnym 0/1 w kodzie binarnym
    int wynik = 0, potega = 1;

    //petla dzielaca kod binarny na pojedyncze cyfry z wlasnym indexem
    //kod leci od tylu bo kod binarny tez czyta sie od prawej do levej
    //w 10010 zaczyna od 0 czyli od konca
    //kod.lenght() daje ile string ma znakow
    for (int i = kod.length() - 1; i >= 0; i--) {

        //jesli wyciagniety numer = 1 to tzeba dodac potege 2 do wyniku
        if (kod[i] == '1') {
            wynik += potega;
        }

        //po kazdym numeze w kodzie binarnym n sie zwieksza w 2^n
        //nie tzeba potegowac zadnej innej liczby niz 2 wiec rownie dobze
        //mozna po prostu pzy kazdym numeze zrobic potega = potega * 2
        //i dodac potege jako wynik potegowania 2
        potega *= 2;
    }
    return wynik;
}

int main() {

    cout << "Program zamieniajacy kod binarny na normalny numer\n";

    //kod jest stringiem zeby bylo go latwiej podzielic sposobem ktorego nie bylo we wczesniejszym dziale czyli byl "niedostepny"
    //sposob znajduje sie w funkcji zamiana()
    string kod;
    cout << "Podaj kod binarny: ";
    cin >> kod;

    //wywolanie funkcji zamiana i podanie kodu od uzytkownika
    int wynik = zamiana(kod);
    cout << "Podany kod binarny jest rownowartoscia: " << wynik << endl;
    return 0;
}
