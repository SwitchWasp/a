#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string TylkoLitery(string s = "") {
    int i=0;
    while (i<s.size()) {
        if (toupper(s[i])>='A' and toupper(s[i])<='Z') {
            i++;
        } else {
            s.erase(i,1);
        }
    }
    return s;
}

int main() {
    string zdanie, wyraz;
    int i=0, j;
    bool palindrom = true;
    cout << "Podaj zdanie: "; getline(cin, zdanie);
    wyraz = TylkoLitery(zdanie);
    j = wyraz.size()-1;
    while (palindrom and i<j) {
        if (toupper(wyraz[i]) == toupper(wyraz[j])) {
            i++; j--;
        } else palindrom = false;
        if (palindrom) cout << "TAK";
        else cout << "NIE";
        return 0;
    }
}