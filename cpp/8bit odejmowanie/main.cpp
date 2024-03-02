#include <iostream>
#include <string>

using namespace std;

string PrzeciwnaU2(string s){
    int i;
    for (i = 0; i<8; i ++) {
        if (s[i] == '0') {
            s[i] = '1';
        } else {
            s[i] = '0';
        }
        s += '0';
        i = 8;
    }
    while (s[i] == '1') {
        s[i] = '0';
        i--;
    }
    s[i] = '1';
    return s.substr(1,8);
}

string DodajU2(string a, string b) {
    string d, e;
    for (int i = 8; i>0; i--) {
        d[i-1] = a[i];
    }
    for (int i = 8; i>0; i--) {
        e[i-1] = b[i];
    }
    int l, j;
    l = stoi(d, nullptr, 2);
    j = stoi(e, nullptr, 2);
    if (a[0] == '1') {
        l = l*-1;
    }
    if (b[0] == '1') {
        j = j*-1;
    }

    l = l* -1;
    cout << "j = " << j;
    cout << "\n" << "l = " << l;

    return to_string(j+l);
}

int main() {
    string a,b,c;
    char limit;
    cout << "Limitowac program na 8 bit? Program moze nie zadzialac. (y/N): "; cin >> limit;

    if (limit == 'y' or limit == 'N') {
    } else {
        while (true) {
            cout << "\n\n\n\n\n\n\n";
            cout << "Zla opcja, sproboj ponownie:\n";
            cout << "Limitowac program na 8 bit? (y/N): "; cin >> limit;
            if (limit == 'y' or limit == 'N') {
                break;
            }
        }
    }

    cout << "Podaj pierwsza 8 bitwa liczbe w systemie U2: "; cin >> a;
    if (limit == 'y') {
        if (a.length() > 8) {
            cout << "Pzekroczono 8 bitow\n";
            return 0;
        }
    }
    cout << "\nPodaj druga 8 bitwa liczbe w systemie U2: "; cin >> b;
    if (limit == 'y') {
        if (b.length() > 8) {
            cout << "Pzekroczono 8 bitow\n";
            return 0;
        }
    }
    while (a.size()<8) a += '0';
    while (b.size()<8) b += '0';
    b = PrzeciwnaU2(b);
    c = DodajU2(a,b);
    cout << "\n" << "Roznica = " << c;
    return 0;
}

