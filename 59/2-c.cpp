#include <chrono>
#include <iostream>
#include <string>

using namespace std;
//kod czysto experymentalny
//ma wykonac zadanie 2 w jak najszybszym czasie (liczy sie tylko zamienianie na baze 2 z bazy 4
//bo to jedyna czesc ktora da sie zoptymalizowac)
string b4_na_b2[4] = {"00", "01", "10", "11"};

string Zamiana_baza4_na_baza2(const string& baza4) {
    string baza2;
    baza2.reserve(baza4.size() * 2);
    for (char cyfra : baza4) {
        baza2 += b4_na_b2[cyfra - '0'];
    }
    return baza2;
}

int main() {
    string baza4;
    cout << "Podaj liczbe: ";
    cin >> baza4;
    for (int i = 0; i < 21; i++) {
        auto start = chrono::high_resolution_clock::now();
        string baza2 = Zamiana_baza4_na_baza2(baza4);
        auto koniec = chrono::high_resolution_clock::now();
        auto czas = chrono::czas<double, milli>(koniec - start).count();
        cout << czas << " ms" << endl;
    }

    return 0;
}