#include <iostream>

using namespace std;

struct wymierna {
    int licz;
    int mian;
};

//niewiem poco cala funkcje edytowac??????????????
//co edytowalem? wywalilem caly kod i zostwilem tylko to co jest "potzebne"
int main() {
    wymierna a;
    cout << "Licznik: "; cin >> a.licz;
    cout << "Mianownik: "; cin >> a.mian;
    cout << "Czesc calkowita: " << a.licz/a.mian;
    return 0;
}
