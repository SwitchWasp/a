#include <iostream>
#include <string>

using namespace std;

int main() {
    string a,b;
    cin >> a;
    cin >> b;
    int c;
    c = stoi(a, nullptr, 2);
    c = stoi(b, nullptr, 2) + c;
    while (c > 0) {
        if (c % 2 == 0) {
            cout << 1;
        } else {
            cout << 0;
        }
        c /= 2;
    }
    return 0;
}