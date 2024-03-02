#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

int main() {
    while(true) {
        float lb1 = 0.0;
        float lb2 = 0.0;
        char wybor;
        string a;
        cout << "Podaj liczbe 1: ";
        cin >> lb1;
        cout << "Podaj liczbe 2: ";
        cin >> lb2;
        cout << "MENU GLOWNE\n------------\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Wyjscie\n\nWybiez: ";
        wybor = getch();
        while (wybor < '1' or wybor > '5') {
            cout<< "MENU GLOWNE\n------------\n1. Dodawanie\n2. Odejmowanie\n3. Mnozenie\n4. Dzielenie\n5. Wyjscie\n\nWybiez: ";
            wybor = getch();
        }
        int wybor2 = wybor - '0';
        switch (wybor2) {
            case 1: {
                cout << "Wynik: " << lb1 + lb2;
                break;
            }
            case 2: {
                cout << "Wynik: " << lb1 - lb2;
                break;
            }
            case 3: {
                cout << "Wynik: " << lb1 * lb2;
                break;
            }
            case 4: {
                if (lb2 == 0) {
                    cout << "NIE DZIELIMY PZEZ 0";
                    break;
                }
                cout << "Wynik: " << lb1 / lb2;
                break;
            }
            case 5: {
                exit(1);
            }
            default: {
                cout << "Nie ma takiej opcji";
            }
        }
        system("cls");
    }
}
