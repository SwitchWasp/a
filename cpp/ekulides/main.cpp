#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a =64, b=120;
    while(a!=b) {
        if (a>b) {
            a = a-b;
        } else {
            b = b-a;
        }
    }
    cout << a;
    return 0;
}
