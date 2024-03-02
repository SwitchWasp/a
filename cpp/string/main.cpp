#include <iostream>
#include <string>

using namespace std;

int main() {
    string a = "ala ma ";
    string b = "kota";

    string c = a+b;
    for (int i = 0; c.size() > i; i++) {
        cout << to_string(toupper(c[i]));
    }
    cout << c;
    return 0;
}
