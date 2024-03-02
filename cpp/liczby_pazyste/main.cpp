#include <iostream>

#include <iostream>

using namespace std;

/* program ktory ma sprawdzic czy liczba wpisana pzez uzytkownika jest pazysta */

int main() {
    int a;
    cout << "Program wybiera wieksza z dwoch liczb calkowitych\n";
    cout << "Podaj pierwsza liczbe calkowita: \n";
    cin >> a;
    if (a%2 != 0) {
        cout << a << " jest liczba niepazysta\n";
    } else {
        cout << "liczba jest pazysta ☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻";
    }
    return 0;
}
