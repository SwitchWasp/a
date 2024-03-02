#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i=15; i>=0; i--) {
        cout << i << "\n";
        Sleep(1000);
        system("cls");
        if (i == 0) {
            cout << "super";
        }
    }
    return 0;
}









/*#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout << "Program wybiera wieksza z dwoch liczb calkowitych\n";
    cout << "Podaj pierwsza liczbe: \n";
    cin >> a;
    cout << "Podaj druga liczbe: \n";
    cin >> b;
    if (a>b) {
        cout << a << " jest wieksza liczba\n";
    } else if(b>a){
        cout << b << " jest wieksza liczba\n";
    } else {
        cout << "Liczby sa rowne ☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻☻";
    }
    return 0;
}
*/
