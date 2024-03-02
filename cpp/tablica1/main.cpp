#include <iostream>
#include <string>

using namespace std;

float input[5], a;
int i = 0;
bool b = true;

int main() {
    cout << "Program biaracy 5 ocen\n";

    cout << "Podaj " << i+1 <<" ocene: ";
    cin >> a;

    while(i < 5) {

        while(b) {
            if (a > 6 or a < 1) {
                cout << "Podaj " << i+1 << " ocene: ";
                cin >> a;
            } else {
                input[i] = a;
                break;
            }
        }
        a = 0;
        i++;
    }
    i = 0;
    cout << "Twoje oceny to: ";
    while(i < 5) {
        cout << input[i] << ", ";
        i++;
    }

    i = 0;
    float wynik = 0;
    while(i < 5) {
        wynik = wynik + input[i];
        i++;
    }

    cout << "\nTwoja srednia to: ";
    cout << wynik / 5;
    return 0;
}
