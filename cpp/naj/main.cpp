#include <iostream>

using namespace std;

int tymczasowa1, tymczasowa2, wynik;
int liczba1;

int main() {
    std::cout << "Hello, World!" << std::endl;

    liczba1 = 0;
    std::cout << "Podaj twoja liczbe: ";
    cin >> liczba1;

    /*
    std::cout << std::endl;
    cout << liczba1 %10;
    std::cout << std::endl;
    cout << liczba1 /10%10;
    std::cout << std::endl;
    cout << liczba1 /100% 10;
    std::cout << std::endl;
    cout << liczba1 /1000% 10;
    std::cout << std::endl;
     */

    tymczasowa1 = 0;
    tymczasowa2 = 0;
    int liczba_powtozen;
    liczba_powtozen = liczba1 * 10;
    cout << "liczba powtozen : ";
    cout << liczba_powtozen<<endl;
    cout << "if liczba powtozen < 10: ";
    cout << (liczba_powtozen < 10)<<endl;
    int a;

    while (liczba_powtozen > 10) {
        liczba_powtozen = liczba_powtozen / 10;
        cout<<"liczba powtozen: ";
        cout << liczba_powtozen << endl;
        a++;
        cout << "zmienna a: " << a <<endl;
    }

    //cout << liczba_powtozen;


    for (int i=1; a; 1) {
        tymczasowa1 = liczba1 / i % 10;
        cout << "liczba " << i << ": " << tymczasowa1 << endl;
        if (tymczasowa1 > tymczasowa2) {
            tymczasowa2 = tymczasowa1;
        };
        cout << "najwieksza liczba: " << tymczasowa2 << endl;
        i = i*10;
    };

    cout << "\nNajwieksza liczba to: ";
    cout << tymczasowa2;


    return 0;
}
