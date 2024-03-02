#include <iostream>

using namespace std;

int c;

int pierwsze(int n) {
    int a = n -1;
    while (a > 1) {
        if (n % a == 0) {
            return 0;
        }
        a--;
    }
    cout << n << endl;
    c++;
    return n;
}

int main() {
    int i = 2;
    while (i < 114) {
        if (pierwsze(i));
        i++;
    }
    cout << endl << c;
    return 0;
}
