#include <iostream>

using namespace std;

int NWD(int a, int b) {
    while(b!=0){
        int pom=b;
        b=a%b;
        a=pom;
    }
    return a;
}

int main() {
    //??????????

    int a = 120, b = 80, c, d;
    c = NWD(a, b);
    d = NWD(a%b, b);
    cout << c << endl << d;
    return 0;
}
