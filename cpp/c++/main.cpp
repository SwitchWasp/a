#include <iostream>
#include <string>
using namespace std;

bool liczba(string lba) {
    try {
        stoi(lba);
        //cout << "Numer super!\n";
        return true;
    } catch (std::invalid_argument) {
        cout << "To co podales to nie numer - sproboj ponownie~\n";
        return false;
    }
}

// funkcjasprawdzajoca numer jak nie to petla //// output = liczba

int numer(string wiadomosc) {
    while (true) {
        string x;
        cout << wiadomosc;
        cin >> x;
        bool prawda = liczba(x);
        if (prawda) {
            return stoi(x);
        } else {
            break;
        }
    }
}


int main() {
    while(true) {
        bool petla = true;
        while(petla) {
            int opcja = numer("\n\n\n\n\n\n\n\n\n\n\n### OPCJE KALKULATORA ###\nWpisz numer opcji:\n[1] Dodawanie\n[2] Odejmowanie\n[3] Mnozenie\n[4] Dzielenie\n[0] Wyjscie\nOpcja: ");
            if (opcja == 1 or opcja == 2 or opcja == 3 or opcja == 4 or opcja == 0) {
                if (opcja == 0) {
                    cout << "Wyjscie";
                    return 0;
                }
                int lb1, lb2;
                lb1 = numer("Podaj pierwsza liczbe: ");
                lb2 = numer("Podaj druga liczbe: ");
                switch (opcja) {
                    case 1:
                        cout << "Twoj wynik to: " << lb1 + lb2;
                        break;
                    case 2:
                        cout << "Twoj wynik to: " << lb1 - lb2;
                        break;
                    case 3:
                        cout << "Twoj wynik to: " << lb1 * lb2;
                        break;
                    case 4:
                        cout << "Twoj wynik to: " << lb1 / lb2;
                        break;
                }
                cout << "\nCzy chcesz kontunuowac? [T/n]: ";
                string wyjscie;
                cin >> wyjscie;
                if (wyjscie == "T") {
                    continue;
                } else {
                    cout << "Wyjscie";
                    return 0;
                }
            } else {
                cout << "zla opcja\n";
            }
        }
    }
}