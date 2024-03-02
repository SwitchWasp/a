#include <iostream>

using namespace std;

int c;

void pierwsze(int n) {
    int a = n -1;
    while (a > 1) {
        if (n % a == 0) {
            return;
        }
        a--;
    }
    cout << n << endl;
    c++;
}

int main() {
    int i = 2;
    while (i < 114) {
        pierwsze(i);
        i++;
    }
    cout << endl << c;
    return 0;
}
