#include <iostream>
#include <string>

using namespace std;

int dane;

int main(){
    cout << "Program zamieniajacy podana liczbe hex na liczbe w systemie binarnym\n";
    string hex;
    cout << "Podaj liczbe: ";
    cin >> hex;

    //funkcja stoi zamienia wartosc hex ktora jest stringiem z kodem hex
    //na liczbe w systemie dziesietnym
    //hex to wartosc -> nullptr na razie "po prostu jest" -> 16 to baza z ktorej ma zamienic
    //jesli hex mialo by w sobie stringa w systemie 8 to zamiast 16 tzeba by bylo wpisac 8
    dane = stoi(hex, nullptr, 16);

    cout << "Reprezentacja binarna: ";

    //modul zamieniajacy liczbe na liczbe binarna
    while (dane>0) {
        cout << dane%2;
        dane/=2;
    }
    return 0;
}