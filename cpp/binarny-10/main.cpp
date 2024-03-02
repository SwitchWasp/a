#include <iostream>
#include <string>

using namespace std;

int main () {
    int d, p, cyfra;
    string s;
    cout << "podaj podstawe systemu: "; cin >> p;
    cout << "podaj liczbe dziesietna: "; cin >> d;
    while (d>0) {
        cyfra = d%p;
        if (cyfra < 10) s = char('0' + cyfra) + s;
        else s = char('A' -10+cyfra) +s;
        d=d/p;
    }
    cout << "Liczba w systemie o podstawie " << p << " " << s;
}