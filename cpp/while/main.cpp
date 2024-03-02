#include <iostream>

using namespace std;

int ilosc_bakteri=1; int godziny=0;

int main() {
    std::cout << "Hello, World!" << std::endl;

    while (ilosc_bakteri<=1000000000) {
        godziny ++;
        ilosc_bakteri = ilosc_bakteri*2;

        cout << ilosc_bakteri;
        cout << "\n";
    }

    cout << "wymagana ilosc godzin by bakteri bylo wiecej niz 1mld to: ";
    cout << godziny;

    return 0;
}
