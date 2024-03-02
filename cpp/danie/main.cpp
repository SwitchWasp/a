#include <iostream>
#include <string>

using namespace std;

string zdanie, wyraz;
int i;

bool palindrom(string wyraz) {
    int i = 0, j = wyraz.size()-1;
    bool p = true;
    while (p && i<j) {
        if (toupper(wyraz[i]) == toupper(wyraz[j])) {
            i++; j--;
        } else {
            p = false;
        }
    }
    return p;
}
int main() {
    cout << "Podaj zdanie: ";
    getline(cin, zdanie);

    zdanie = zdanie + ' ';
    while (zdanie.size()>0) {
        i = zdanie.find(' ');
        if (i>0) {
            wyraz = zdanie.substr(0,i);
            if (palindrom(wyraz)) {
                cout << wyraz << endl;

            }
        }
        zdanie.erase(0,i+1);
    }
    return 0;
}