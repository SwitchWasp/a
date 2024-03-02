#include <iostream>

using namespace std;

int NWD(int a, int b) {
    while(b!=0){
        int pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}

int main() {
    int n;
    cout << "Ile liczb hcesz wpisac: ";
    cin >> n;

    int wynik;
    cout << "Podaj pierwszy numer: ";
    //niema innej wartosci wienc wynik to narazie pierwsza podana liczba
    cin >> wynik;

    for(int i = 1; i < n; i++) {
        int liczba;
        cout << "Podaj nastepna liczbe: ";
        cin >> liczba;
        wynik = NWD(wynik, liczba);

        if(wynik == 1) {
           break;
        }
    }

    cout << "Najwiekszy wspolny dzielnik podanyh liczb to: " << wynik;

    return 0;
}