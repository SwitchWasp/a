#include <iostream>

using namespace std;

int bok1,bok2,wysokosc;


int main() {
    cout << "Program obliczajacy pole trapezu prostokotnego\n";
    cout << "Podaj pierwszy bok: ";
    cin >> bok1;

    cout << "Podaj drugi bok: ";
    cin >> bok2;

    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    cout << "Wysokosc trapezu to: " << (bok1 + bok2) * wysokosc/2; //wzor na trapez

    return 0;
}