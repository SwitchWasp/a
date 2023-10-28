#include <iostream>
#include <string>

using namespace std;

int podana_wartosc, typ_input, typ_output;

//zadeklarowanie funkcji znajdujacyh sie pod main()
void zamiana_output(int typ_podanych_danych, int dane);
void zamiana_input(int typ_podawanych_danych);

int main() {
    cout << "Program zamieniajacy typy danych";

    cout << "\n\n\n\n\n\n\n\nWybiez typ podawanyh danyh:\n[1] normalna liczba\n[2] kod hex\n[3] kod binarny\nopcja: ";
    cin >> typ_input;

    if (typ_input <= 1 && typ_input >= 3) {
        return 0;
    }

    //zapisanie pzekonwertowanyh danyh
    zamiana_input(typ_input);

    cout << "\n\n\n\nWybiez typ otzymanyh danyh:\n[1] normalna liczba\n[2] kod hex\n[3] kod binarny\nopcja: ";
    cin >> typ_output;

    if (typ_output <= 1 && typ_input >= 3) {
        return 0;
    }

    cout << "\n";
    zamiana_output(typ_output, podana_wartosc);

    return 0;
}

//funckcja ktora bieze typ danych i zamienia go na normalna liczbe
void zamiana_input(int typ_podawanych_danych) {

    //wyjasnienie switcha: https://www.w3schools.com/cpp/cpp_switch.asp
    switch (typ_podawanych_danych) {
        case 1: {
            //normalna liczba nie wymaga konwertowania
            cout << "Podaj liczbe: ";
            cin >> podana_wartosc;
            break;
        }

        case 2: {
            //wziecie kodu hex od uzytkownika
            string kod_hex;
            cout << "Podaj kod hex: ";
            cin >> kod_hex;
            //zamiana kodu hex na normalne liczby
            podana_wartosc = stoi(kod_hex, nullptr, 16);
            break;
        }

        case 3: {
            //wziecie kodu binarnego od uzytkownika
            string kod_binarny;
            cout << "Podaj kod binarny: ";
            cin >> kod_binarny;

            //zamiana kodu binarnego na normalne liczby
            podana_wartosc = stoi(kod_binarny, nullptr, 2);
            break;
        }
    }
}

void zamiana_output(int typ_podanych_danych, int dane) {

    //wyjasnienie switcha: https://www.w3schools.com/cpp/cpp_switch.asp
    switch (typ_podanych_danych) {
        case 1: {
            //dane to juz normalne liczby czyli nie tzeba zamiany
            cout << "Output: " << dane;
            break;
        }

        case 2: {
            //cout << hex zamienia typ wypisywania na cmd na hex czyli kazda wartosc bedzie wypisana w kodzie hex
            cout << hex;
            cout << dane;
            break;
        }

        case 3: {
            //kod_binarny to array - "lista" ktora bedzie pzehowywac cyfry kodu binarnego -> 1,0,0,0,1,1,0,1,...
            int kod_binarny[32];
            int i = 0;

            //zamiana liczby na kod binarny
            //jesli dane = 10:
            //dane = 10 / 2 = 5 (reszta=0) -> kod_binarny[i] = dane % 2 = 0; i++;
            //dane = 5 / 2 = 2   (reszta=1) -> kod_binarny[i] = dane % 2 = 1; i++;
            //dane = 2 / 2 = 1   (reszta=0) -> kod_binarny[i] = dane % 2 = 0; i++;
            //dane = 1 / 2 = 0   (reszta=1) -> kod_binarny[i] = dane % 2 = 1; i++;
            //"wynik" = 0101
            while (dane > 0) {
                kod_binarny[i] = dane % 2;
                dane /= 2;
                i++;
            }

            //kazda liczba 1/0 jest zapisana w liscie na pojedynczym miejscu
            //ta petla sprawdza kazde miejsce na liscie
            //petla bieze ilosc miejsc od wartosci i ktora pzy pzypisywaniu dostawala +1 za kazde miejsce
            for (int j = i - 1; j >= 0; j--)
                cout << kod_binarny[j];
            break;
        }
    }
}