#include <iostream>

using namespace std;

//######
//ten kod nie byl optymalizowany
//######

//customowa funkcja pow dajaca dokladnie taki sam efekt jak funckja pow z biblioteki cmath
//unsigned int to po prostu modul z int czyli jesli potega by byla -3 to unsigned int potega = 3
int pow(int baza, unsigned int potega) {
    //podstatowy wynik
    int wynik_p = 1;

    //petla potegujaca
    //odpala tyle razy do ktorej potegi hce sie podniesc liczbe
    for (unsigned int i = 0; i < potega; ++i) {
        wynik_p *= baza;
    }
    return wynik_p;
}
int liczba1, liczba2, wynik = 0, dziesiatki, jednosci, iteracja1 = 0, iteracja2 = 0, liczba_orginal_2, liczba_orginal_1, ilosc_wynikow, liczba_obliczen;

int main() {
    cout << "Algorytm pisemnego mnozenia\n Podaj pierwsza: ";
    cin >> liczba1;
    cout << "Podaj druga liczbe: ";
    cin >> liczba2;
    liczba_orginal_2 = liczba2; //kopia liczby 1 zeby zapisac ja do podsumowania na koncu
    liczba_orginal_1 = liczba1; //kopia liczby 2 do zapisania ile wynikow mnozenia bedzie
    
    int kopia_liczba1 = liczba1;
    while (kopia_liczba1 > 0) {
    	ilosc_wynikow++;
    	kopia_liczba1 /= 10;
    }
    
    int wyniki[ilosc_wynikow];

    //moduly wypisujace cyfry z liczby (skopiowane z wczesniejszyh zadan)
    while (liczba1 > 0) {
        //wyciagniecie pierwszej cyfry -> zapisanie w pamieci i na konsoli
        //pierwsza cyfra z pierwszej podanej liczby
        int cyfra1 = liczba1 % 10;
        cout << "\n" << "cyfra1: " << cyfra1;

        //drugi modul
        while (liczba2 > 0) {

            //wypisanie iteracji na konsoli
            //iteracja zapisuje ile zer powinno byc dodane do mnozenia mniejszyh liczb -> 120 * 12 = 12 * 12 * 10
            cout << "\n" << "iteracja: " << iteracja1;

            //wyciagniecie drugiej cyfry -> zapisanie w pamieci i na konsoli
            //pierwsza cyfra z pierwszej liczby
            int cyfra2 = liczba2 % 10;
            cout << "\n" << "cyfra2: " << cyfra2;

            //obliczenie jednosci i dziesiatek zeby znac reszte z mnozenia do dodania -> zapisanie obu w pamieci i w konsoli
            //jednosci to reszta z dzielenia liczby xy pzez 10 czyli -> 58 % 10 = 8
            jednosci = ((cyfra2 * cyfra1) % 10) * pow(10, iteracja1);
            cout << "\n" << "jednosci: " << jednosci;

            //dziesiatki to wynik dzielenia liczby xy pzez 10 czyli -> 58 /10 = 5
            //dziesiatki sa mnozone pzez jedna wiecej potege 10 niz jednosci -> iteracja + 1
            dziesiatki = ((cyfra2 * cyfra1) / 10) * pow(10, (iteracja1 + 1));
            cout << "\n" << "dziesiatki: " << dziesiatki;

            //zapisanie tymczasowego wyniku w pamieci i na konsoli
            wynik = wynik + jednosci + dziesiatki;
            cout << "\n" << "wynik tymczasowy: " << wynik;

            //pzygotowanie liczby2 i iteracji1 na nastepna iteracje petli
            liczba2 /= 10;
            iteracja1++;
        }

        //zresetowanie liczby2 zeby pzez nia od nowa pomnozyc czesc pierwszej liczby
        liczba2 = liczba_orginal_2;

        //pzygotowanie liczby1 na nastepna iteracje petli
        liczba1 /= 10;

        //dodanie do iteracji2 -> pzy kazdym mnozeniu nastepnej liczby dziesiatki sie zwiekszaja
        iteracja2++;

        //zresetowanie iteracji1
        iteracja1 = iteracja2;
        wyniki[liczba_obliczen] = wynik;
        liczba_obliczen++;
        wynik = 0;
    }

    //ostateczny zapis wyniku
    cout << "\n\nWynik mnozenia " << liczba_orginal_1 << " pzez " << liczba_orginal_2 << " wynosi " << wynik << "\n";
    
    cout << "\n\nZapis obliczen:\n";
    
    cout << " " << liczba_orginal_1 << "\n";
    cout << "*" << liczba2 << "\n";
    cout << "------------------------\n";
    //petla wypisujaca kazdy wynik mnozenia
    // 12 * 12
    // wyniki[0] = 2 * 2 = 4
    for (int i = 0; i < liczba_obliczen; i++) {
    	cout << "+ " << wyniki[i] << "\n";
    	wynik = wyniki[i] + wynik;
    }
    cout << "= " << wynik;

    return 0;
}