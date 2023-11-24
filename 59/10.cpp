#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string input;
    cout << "Podaj numer w zbalansowanej bazie 3: ";
    cin >> input;

    int wynik = 0;

    /*
     * ta petla leci pzez kazdy znak w input
     * w zbalansowanej bazie 3 -> + to 1 -> 0 to 0 -> a - to -1
     * if zamienia znaki (+ 0 -) na odpowiedniki (-1, 0, 1)
     * pozniej i ma po koleji wszystkie indexy po to zeby je odejmowac od konca
     * bo w tym systemie potegi leca od konca
     * pozniej zamieniony +/-/0 jest mnozone pzez potege i dodawane do wyniku
     */
    for (int i = 0; i < input.length(); i++) {
        char znak = input[i];
        int cyfra;
        if (znak == '+') {
            cyfra = 1;
        } else if (znak == '-') {
            cyfra = -1;
        } else {
            cyfra = 0;
        }
        wynik += cyfra * pow(3, input.length() - i - 1);
    }

    cout << "Reprezentacja w bazie 10: " << wynik;

    return 0;
}