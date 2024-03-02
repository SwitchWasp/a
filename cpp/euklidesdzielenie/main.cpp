#include <iostream>

using namespace std;

int main() {
    int a=64, b=120;

    while (a * b != 0) {
        if (a > b) {
            a = a % b;
        } else
            b = b % a;

    }
    cout << a+b;
    return 0;
}
