#include <iostream>

using namespace std;

int liczba1,liczba2,liczba3;

//zamiast bloku kodu ze swap() mozna uzyc samych if/else
void sortowanie();

int main() {

    cout << "Program wczytujacy 3 liczby calkowite i wypisujacy je w kolejnosci od najmniejszej do najwiekszej\n";
    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    cout << "Podaj tzecia liczbe: ";
    cin >> liczba3;

    //sawp() podmienia wartosci
    //liczba1 = 5 i liczba2 = 3
    //jesli swap(liczba1, liczba2) to liczba1 = 3 i liczba2 = 5
    //tu liczby sa sortowane
    if(liczba1 > liczba2) swap(liczba1, liczba2);
    if(liczba1 > liczba3) swap(liczba1, liczba3);
    if(liczba2 > liczba3) swap(liczba2, liczba3);

    cout << "\nLiczby w kolejnosci od najmniejszej do najwiekszej:\n" << liczba1 << " " << liczba2 << " " << liczba3;

    return 0;
}

void sortowanie() {
    if(liczba1 > liczba2) {
        if(liczba2 > liczba3){
            int tymczasowa_liczba = liczba1;
            liczba1 = liczba3;
            liczba3 = liczba2;
            liczba2 = tymczasowa_liczba;
        } else {
            if(liczba1 > liczba3){
                int tymczasowa_liczba = liczba1;
                liczba1 = liczba3;
                liczba3 = tymczasowa_liczba;
            }
        }
    } else {
        if(liczba1 > liczba3){
            int tymczasowa_liczba = liczba1;
            liczba1 = liczba3;
            liczba3 = tymczasowa_liczba;
        } else {
            if(liczba2 > liczba3){
                int tymczasowa_liczba = liczba2;
                liczba2 = liczba3;
                liczba3 = tymczasowa_liczba;
            }
        }
    }
}