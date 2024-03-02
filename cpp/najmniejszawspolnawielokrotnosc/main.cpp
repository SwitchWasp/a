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

int NWW(int a, int b) {
    int c, d;
    c = a;
    d = b;
    while (true) {
        if (c == d) {
            break;
        }
        if (c < d) {
            c+=a;
        } else {
            d+=b;
        }
        cout << "c: "<<c << endl;
        cout << "d: "<<d << endl;
    }
    return d;
}

int main() {
    int a, b, e;
    cout << "a = "; cin>>a;
    cout << "b = "; cin>>b;
    e = NWW(a, b);
    if (e == (a*b)/NWD(a,b) ) {
        cout << "Potwierdzono poprawna wartosc!\n";
    }
    cout << "Najwiekszy wspolny dzielnik " <<a<<" i "<<b<<" to: "<<e;
    return 0;
}
