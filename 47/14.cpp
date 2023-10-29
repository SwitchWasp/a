#include <iostream>

using namespace std;
int a,b,c;

int main() {
    cout << "Program sprawdzajacy czy podane boki moga stwozyc trojkat\n";
    cout << "Podaj pierwszy bok: ";
    cin >> a;

    cout << "Podaj drugi bok: ";
    cin >> b;

    cout << "Podaj tzeci bok: ";
    cin >> c;

    //warunek trojkata - jesli a + b < c albo a + c < b albo b + c < a to nie da sie zrobic trojkata
    if (a + b < c or a + c < b or b + c < a) {
        cout << "Z podanych bokow nie da sie zrobic trojkata";
    } else {
        cout << "Z podanych bokow da sie zrobic trojkat";
    }

    return 0;
}