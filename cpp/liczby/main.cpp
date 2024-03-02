#include <iostream>

using namespace std;

int main() {
    int n = 5;
    int a = n -1;
    while (a > 1) {
        if (n % a == 0) {
            cout << "NIE";
            return 0;
        }
        a--;
    }
    cout << "TAK";
    return 0;
}
