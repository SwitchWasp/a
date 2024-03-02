#include <iostream>

using namespace std;

int dlugosc, i, y;

int main() {
    cout << "Program rysujacy 2 kwadraty\n";
    cout << "Podaj ilosc gwiazdek: ";
    cin >> dlugosc;
    cout << endl;
    for (i=1; i<=dlugosc; i++) {
        for (y=1; y<=dlugosc; y++) {
            cout << "*";
            cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
    for (i=2; i<=dlugosc; i++) {
        cout << "*   ";
    }
    cout << endl;
    for (i=2; i<=dlugosc; i++) { cout << "*";
        for (y=1; y<=dlugosc; y++) {
            cout << " ";
        }
        cout << "*"; cout << endl;
    }
    for (i=1; i<=dlugosc; i++) {
        cout << "*   ";
    }
    return 0;
}
